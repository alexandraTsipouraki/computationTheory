%{
 	#include <assert.h>
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include "myanalyzer.tab.h"
    #include "cgen.h"
/*
 	#define TK_IDENTIFIERS 0   
 	#define TK_KEYWORDS 1
 	#define TK_INTCONST 2
 	#define TK_FPCONST 3
 	#define TK_BOOLCONST 4
 	#define TK_CONSTSTRINGS 5
 	#define TK_OP 6
 	#define TK_DELIM 7
 	#define TK_SPACE 8
 	#define TK_COMM 9
	
*/
 	int line_num = 1; //initialization of line Numbers

%}

ID  [a-zA-Z][0-9a-zA-Z_]*
INTEGER [0-9]+
FLOAT {INTEGER}[\.]{INTEGER}([eE]?[+|-]?{INTEGER})
BOOLEAN ("True"|"False")
STRING [\"]([\\n\\t\\r\\\"\.\, a-zA-Z0-9\-+*/:_%!#@&~^()]+)[\"]
SIGN_OP [+|-]
ASSIGN_OP ("+="|"-+"|"*="|"/="|"%=")


%x comment

%%
{SIGN_OP}    {yylval.str=strdup(yytext); return TK_SIGNOP;}
{ASSIGN_OP}  {return TK_ASSIGNOP;}
"def"        {return TK_DEF;}
"enddef"     {return TK_ENDDEF;}
"integer"    {return TK_INTCONST;}
"scalar" 	 {return TK_FPCONST;}
"boolean"    {return TK_BOOLCONST;}
"str"        {return TK_CONSTSTRINGS;}
"break"      {return TK_BREAK;}
"continue"   {return TK_CONTINUE;}
"if"         {return TK_IF;}
"else"       {return TK_ELSE;}
"endif"      {return TK_ENDIF;}
"for"        {return TK_FOR;}
"endfor"     {return TK_ENDFOR;}
"in"         {return TK_IN;}
"while"      {return TK_WHILE;}
"endwhile"   {return TK_ENDWHILE;}
"comp"       {return TK_COMP;}
"endcomp"    {return TK_ENDCOMP;}
"#"          {return '#';}
"="          {return '=';}
"("          {return '(';}
")"          {return ')';}
"->"         {return TK_ARROW;}
":"          {return ':';}
";"          {return ';';}
","			 {return ',';}
"."			 {return '.';}
"**"		 {return TK_POWER;}
"["	 	     {return '[';}
"]"	 	     {return ']';}
"*"		 	 {return '*';}
"/"		 	 {return '/';}
"%"		 	 {return '%';}
"<"		 	 {return '<';}
">"		 	 {return '>';}
"<="		 {return TK_SMALLER;}
"=>"		 {return TK_BIGGER;}
"=="		 {return TK_EQ;}
"!="		 {return TK_NEQ;}
"return"     {return TK_RET;}
"and"        {return TK_AND;}
"or"         {return TK_OR;}
"not"        {return TK_NOT;}
"const"      {return TK_CONST;}
{INTEGER}    { yylval.str=strdup(yytext); return TK_INTCONST;}
{FLOAT}      {yylval.str=strdup(yytext); return TK_FPCONST;}
{BOOLEAN}    {yylval.str=strdup(yytext); return TK_BOOLCONST;}
{STRING}     {yylval.str=strdup(yytext); return TK_CONSTSTRINGS;}
[ \r\t]+     /* do nothing if you see space */
{ID}         {yylval.str=strdup(yytext); return TK_IDENTIFIERS;}



"--"   		 {BEGIN(comment);}
<comment>.
<comment>\n   { ++line_num;  BEGIN(INITIAL); }

\n          ++line_num;
<<EOF>>      return EOF;
.            { printf("Line %d: Error %s\n", line_num, yytext); }

%%
/* int main() {
    int token;
    while((token=yylex())!=EOF){
        printf("Line %d Token id %d: %s \n", lineNum, token, yytext);
    }
    return EOF;
} */