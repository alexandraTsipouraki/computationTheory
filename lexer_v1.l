%{
 	#include <assert.h>
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
  
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
 	int lineNum = 1; //initialization of line Numbers

%}

ID  [a-zA-Z_][0-9a-zA-Z_]*
KEYWORDS ("integer"|"for"|"break"|"def"|"endcomp"|"scalar"|"const"|"in"|"continue"|"enddef"|"str"|"if"|"endfor"|"not"|"main"|"boolean"|"else"|"while"|"and"|"return"|"endif"|"endwhile"|"or"|"comp")

INTEGER [0-9]+
FLOAT {INTEGER}[\.]{INTEGER}([eE]?[+|-]?{INTEGER})
BOOLEAN ("True"|"False")
ESCAPE  ("\""|"\\"|"\r"|"\t"|"\n")
COMMON  ("-"|"+"|"*"|"/"|":"|"_"|"$"|"$"|"!"|"#"|"@"|"~"|"^"|"("|")"|",")
STRING  ("\"")([a-zA-Z0-9]|" "|{ESCAPE}{COMMON})*("\"")
NUM_OP[+|-|*|/|%|**]
REL_OP [==|!=|<|<=|>|>=]
LOG_OP "and"|"or"|"not"
SIGN_OP [+|-]
ASSIGN_OP ("="|"+="|"-="|"*="|"/="|"%=")
DELIMITERS [\;(),\[\]:\.]

%x comment

%%
{ID}         {return TK_IDENTIFIERS;}
{KEYWORDS}   {return TK_KEYWORDS;}
"def"        {return TK_DEF;}
"("          {return '(';}
{INTEGER}    {return TK_INTCONST;}
{FLOAT}      {return TK_FPCONST;}
{BOOLEAN}    {return TK_BOOLCONST;}
{STRING}     {return TK_CONSTSTRINGS;}
{NUM_OP}     {return TK_OP;}
{REL_OP}     {return TK_OP;}
{LOG_OP}     {return TK_OP;}
{SIGN_OP}    {return TK_OP;}
{ASSIGN_OP}  {return TK_OP;}
{DELIMITERS} {return TK_DELIM;}
[ \r\t]+     {return TK_SPACE;}


"/*"   		 {BEGIN(comment);  return TK_COMM;}
<comment>\n    ++lineNum;
<comment>"*"+"/"        { BEGIN(INITIAL); }
\n          ++lineNum;
<<EOF>>      return EOF;
.            { printf("Line %d: Error %s\n", lineNum, yytext); }

%%
int main() {
    int token;
    while((token=yylex())!=EOF){
        printf("Line %d Token id %d: %s \n", lineNum, token, yytext);
    }
    return EOF;
}