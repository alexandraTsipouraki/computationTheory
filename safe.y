%{
#include <stdio.h>
#include <string.h>
#include "cgen.h"
#include "thetalib.h"

extern int yylex(void);   /*Prologue*/
extern int line_num;


%}

%union   /*Bison declarations*/
{

char* str;

}

%define parse.error verbose 


%token <str> TK_IDENTIFIERS
%token <str> TK_INTCONST 
%token <str> TK_FPCONST 
%token <str> TK_BOOLCONST 
%token <str> TK_CONSTSTRINGS 
%token <str> TK_DEF
%token <str> TK_ENDDEF
%token <str> TK_RET
%token <str> TK_ARROW
%token <str> TK_SMALLER
%token <str> TK_BIGGER
%token <str> TK_POWER
%token <str> TK_EQ
%token <str> TK_NEQ
%token <str> TK_SIGNOP
%token <str> TK_AND
%token <str> TK_OR
%token <str> TK_NOT
%token <str> TK_ASSIGNOP
%token <str> TK_CONST
%token <str> TK_CONTINUE
%token <str> TK_BREAK
%token <str> TK_IF
%token <str> TK_ENDIF
%token <str> TK_FOR
%token <str> TK_ENDFOR
%token <str> TK_WHILE
%token <str> TK_ENDWHILE
%token <str> TK_ELSE
%token <str> TK_IN
%token <str> TK_COMP
%token <str> TK_ENDCOMP



%type <str> prog_body
%type <str> function_head
%type <str> function_end
%type <str> func_args
%type <str> function_ret
%type <str> data_types
%type <str> exp
%type <str> variables
%type <str> constants
%type <str> comp_vars
%type <str> break_statement
%type <str> continue_statement
%type <str> iff
%type <str> if_expr
%type <str> for_statement
%type <str> sss_for
%type <str> while_statement
%type <str> funccall_statement
%type <str> func_expr
%type <str> statements
%type <str> function
%type <str> function_body
%type <str> commands
%type <str> array
%type <str> comps
%type <str> hasht_vars

/*start shows the first symbol*/
%start input

//priorities - read from the bottom up 

%right TK_ASSIGNOP
%right '='
%left TK_OR
%left TK_AND
%right TK_NOT
%left TK_EQ TK_NEQ
%left '<' '>' TK_SMALLER TK_BIGGER 
%right TK_SIGNOP
%left '*''/''%'
%right TK_POWER
%left '['']''('')''.'


%%

/*Grammar rules*/

input:
    %empty
|   input prog_body
{
    if (yyerror_count == 0){
        puts(c_prologue);
        printf("%s\n", $2);
    }

};

prog_body:
function
|comps
|commands';' {
    $$=template("%s ",$1);
}


data_types:
TK_INTCONST { $$ = template("int"); }
| TK_BOOLCONST { $$ = template("int"); }
| TK_CONSTSTRINGS { $$ = template("char*"); }
| TK_FPCONST {$$ = template("double"); }



/* -------------------------------------------variables------------------------------------------------ */

array:
TK_IDENTIFIERS '['']'{
    $$=template("%s[]",$1);
}
| TK_IDENTIFIERS'[' TK_INTCONST']'{
    $$=template("%s[%s]",$1,$3);
}
| TK_IDENTIFIERS'[' TK_IDENTIFIERS']'{
    $$=template("%s[%s]",$1,$3);
}

comp_vars:
TK_IDENTIFIERS { 
    $$=template("%s",$1);
}
|array { 
    $$=template("%s",$1);
}
| comp_vars ',' comp_vars{
    $$ = template("%s, %s", $1, $3);
}



variables:
comp_vars ':' data_types {
  $$ = template("%s %s ", $3, $1);
}

hasht_vars:
'#'comp_vars ':' data_types {
  $$ = template("%s %s ", $4, $2);
}
/* ---------------------------------constants--------------------- */


constants:
TK_CONST TK_IDENTIFIERS '=' TK_INTCONST':' data_types {
    $$ = template("const %s %s = %s ",$6,$2,$4);
}
|TK_CONST TK_IDENTIFIERS '=' TK_SIGNOP TK_INTCONST':' data_types {
    $$ = template("const %s %s = %s%s ",$7,$2,$4,$5);
}
|TK_CONST TK_IDENTIFIERS '=' TK_BOOLCONST':' data_types {
    $$ = template("const %s %s = %s ",$6,$2,$4);
}
| TK_CONST TK_IDENTIFIERS '=' TK_CONSTSTRINGS':' data_types {
    $$ = template("const %s %s = %s ",$6,$2,$4);
}
|TK_CONST TK_IDENTIFIERS '=' TK_FPCONST':' data_types {
    $$ = template("const %s %s = %s ",$6,$2,$4);
}
|TK_CONST TK_IDENTIFIERS '=' TK_SIGNOP TK_FPCONST':' data_types {
    $$ = template("const %s %s = %s%s ",$7,$2,$4,$5);
}


/* ----------------------------------functions------------------------------- */

func_args:
TK_IDENTIFIERS ':'  data_types{
    $$=template("%s  %s", $3,$1);
}
|TK_IDENTIFIERS '['']'':'  data_types{
    $$=template("%s %s[]",$5,$1);
}
| TK_IDENTIFIERS'[' TK_INTCONST']'':'  data_types{
    $$=template(" %s %s[%s]",$6,$1,$3);
}
| func_args ','  func_args{
    $$ = template("%s, %s", $1, $3);
}


function_head: 
TK_DEF  TK_IDENTIFIERS '(' ')' ':'{  //for voids and no args
    $$=template("void %s(){",$2);
}
| TK_DEF  TK_IDENTIFIERS '(' func_args ')' ':'{  //for voids with args
    $$=template("void %s(%s){",$2, $4);
}
|TK_DEF  TK_IDENTIFIERS '(' ')'  TK_ARROW data_types':'{  //for ret type!=void  and no args
    $$=template("%s %s(){",$6,$2);
}
|TK_DEF  TK_IDENTIFIERS '(' func_args ')'  TK_ARROW  data_types':'{  //for ret type!=void  and  args
    $$=template("%s %s(%s){",$7,$2,$4);
}
|TK_DEF  TK_IDENTIFIERS '(' ')'  TK_ARROW TK_IDENTIFIERS':'{  //for ret type!=void  and no args
    $$=template("%s %s(){",$6,$2);
}
|TK_DEF  TK_IDENTIFIERS '(' func_args ')'  TK_ARROW  TK_IDENTIFIERS':'{  //for ret type!=void  and  args
    $$=template("%s %s(%s){",$7,$2,$4);
} 



function_ret:
TK_RET {
    $$=template("return");
}
| TK_RET exp  {
    $$=template("return %s",$2);
}


function_end:
TK_ENDDEF ';'{
    $$=template("}");
}


function_body:
variables{
    $$=template("%s;\n",$1);
}
|constants{
    $$=template("%s;\n",$1);
}
|statements{
    $$=template("%s;\n",$1);
}
|exp{
    $$=template("%s;\n",$1);
}

commands:
function_body {
     $$=template("%s",$1);
}
|
commands ';' function_body{
    $$ = template ("%s %s",$1,$3);
}


function:
function_head commands ';' function_end{
    $$=template("%s\n %s\n %s\n",$1,$2,$4);

}
|function_head function_end{
    $$=template("%s\n %s\n ",$1,$2);

}



/* -------------------------------comps----------------------------- */

/* comp comp_name: 
# variables
functions
endcomp; */

comps:
TK_COMP TK_IDENTIFIERS ':''#' hasht_vars function TK_ENDCOMP{
   // $$=template("typedef struct %s { \n %s ");
   $$=template("ok");
}


/* ---------------------------------expressions---------------------------- */

exp:
TK_FPCONST{
    $$=template(" %s ", $1);
}
|TK_IDENTIFIERS { 
    $$=template("%s",$1);
}
|TK_INTCONST{
    $$=template(" %s ", $1);
}
| TK_SIGNOP exp {
     $$=template("%s %s ", $1,$2);
}
|exp '=' exp{
    $$=template(" %s = %s", $1,$3);
}
|exp '*' exp{
    $$=template(" %s * %s", $1,$3);
}
|exp '/' exp{
    $$=template(" %s / %s", $1,$3);
}
|exp '%' exp{
    $$=template(" %s % %s", $1,$3);
}
|exp TK_ASSIGNOP exp{
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_OR exp  {
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_AND exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_NOT exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_NEQ exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_EQ exp{
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp '<' exp{
    $$=template(" %s < %s ",$1,$3);
}
|exp '>' exp{
    $$=template(" %s > %s ",$1,$3);
}
|exp TK_SMALLER exp{
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_BIGGER exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
|exp TK_SIGNOP exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
| exp TK_POWER exp {
    $$=template(" %s %s %s", $1,$2,$3);
}
| exp '.' exp {
     $$=template(" %s . %s ",$1,$3);
}
|'(' exp ')'{
     $$=template(" (%s) ",$2);
}
|'[' exp ']'{
     $$=template(" [%s] ",$2);
}
|exp'(' exp ')'{
     $$=template(" %s(%s) ",$1,$3);
}
|TK_CONSTSTRINGS{
    $$=template("%s",$1);
}
|TK_BOOLCONST{
    $$=template("%s",$1);
}
|array{
    $$=template("%s",$1);
}
|funccall_statement{
     $$=template("%s",$1);
}


func_expr:
func_expr ',' exp{
    $$=template(" %s,%s ",$1,$3);
}
|exp{
    $$=template("%s",$1);
}

/* ---------------------------------------------------statements------------------------------------- */

statements:
iff{
       $$=template("%s",$1);
}
|for_statement{
       $$=template("%s",$1);
}
|while_statement{
       $$=template("%s",$1);
}
|break_statement{
       $$=template("%s",$1);
}
|continue_statement{
       $$=template("%s",$1);
}
|function_ret{
     $$=template("%s",$1);
}


/* -------------------------- break, continue ------------------- */
/* Semicolons will be inserted in the final  statement rule! */


break_statement:
TK_BREAK{
    $$=template("%s",$1);
}

continue_statement:
TK_CONTINUE {
   $$=template("%s",$1);
}
/* ----------------------------if statement----------------------------- */
/* 
if (expr): 
stmts1;
else:
stmts2;
endif;


 */
if_expr:
TK_IF '(' exp ')'':' {
    $$=template("if (%s){\n",$3);
}



iff:
if_expr  commands ';'TK_ELSE ':' commands';' TK_ENDIF  {
$$=template("%s  %s }\nelse\n{ %s \n} ", $1,$4,$6);
}
| if_expr commands ';'TK_ENDIF {
$$=template("%s  %s }",$1,$2);
}
/* |if_expr  TK_ELSE ':' statements TK_ENDIF {
    $$=template("%s else \n{ %s } ",$1,$5);
} */
/* |if_expr  statements TK_ELSE ':' TK_ENDIF {
$$=template("%s { %s} else\n {}",$1,$3);
} */
/* |if_expr  TK_ENDIF {
$$=template("%s ",$1);
}
 */
/* ---------------------------for statement---------------------- */


/* 
for intvar in [start:stop:step]:
stmts;
endfor;
 */

sss_for:
TK_INTCONST{
$$=template( "%s" ,$1);
}
|TK_IDENTIFIERS{
$$=template( "%s" ,$1);
}
|sss_for TK_SIGNOP sss_for{
$$=template( "%s %s %s" ,$1,$2,$3);
}


for_statement:
TK_FOR TK_IDENTIFIERS TK_IN  '[' sss_for ':' sss_for ':' TK_INTCONST ']' ':' commands';' TK_ENDFOR{
    $$=template("for (int %s=%s ; %s < %s; %s=%s+%s){\n %s \n}",$2,$5,$2,$7,$2,$2,$9,$12);
}
| TK_FOR TK_IDENTIFIERS TK_IN  '[' sss_for ':' sss_for ']'':'commands';'TK_ENDFOR{
    $$=template("for (int %s=%s ; %s < %s; %s++){\n %s \n}",$2,$5,$2,$7,$2,$10);
}


/* -----------------------------------------------------while statement---------------------------------- */
while_statement:
TK_WHILE '(' exp ')'':' commands ';'TK_ENDWHILE {
    $$=template("while ( %s ){\n %s\n}",$3,$6);
}

/* ----------------------------------funccall statement------------------------------ */


funccall_statement:
TK_IDENTIFIERS '('func_expr')'{
    $$=template( "%s(%s)" ,$1,$3);
}
|TK_IDENTIFIERS '('')'{
    $$=template( "%s()" ,$1);
}
 



%%
int main(){   /*Epilogue*/
/* #ifdef YYDEBUG
yydebug = 1;
#endif  */
if ( yyparse() == 0 )
    printf("//Accepted!\n");
else
    printf("//Rejected!\n");
          }
