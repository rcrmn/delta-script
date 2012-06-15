/* Delta Programming Language scanner

compile with:
	flex delta.flex
	g++ lex.yy.c -lfl

*/

%option stack


%{

#include <stdio.h>
int num_lines=0;
int block_comment_depth=0;


#include "lexer.h"

%}

%x COMMENT
%x BLOCK_COMMENT
%x STRING_CNST


WB			[ \n\r\t\(\)=\-\+\*\"\'\{\}\[\]\|\.\/<>&%:;,]
INLWB		[ \t\(\)=\-\+\*\"\'\{\}\[\]\|\.\/<>&%:;,]
WS			[ \t]
ENDL		(\n|\r|\r\n)
KWB			[ \t\(]

%%



{ENDL}									{ ++num_lines; }



		/*
		 *	Symbols
		 */
":"										{ return(COLON); }
"."
";"
","
"("
")"
"{"
"}"
"["
"]"



			/*
			 *	Operators
			 */
"*"
"+"
"-"
"/"
"%"
"!"
"="
"<"
">"
"<="
">="
"=="
"!="
"++"
"--"
"+="
"-="
"*="
"/="
"&&"
"||"
"^^"
"|"
"&"
"^"



		/*
		 *	Keywords
		 */

"if"/{KWB}								{ return(IF); }
"elif"/{KWB}							{ return(ELIF); }
("else")/(:|{WS})						{ return(ELSE); }

"while"/{KWB}							{ return(WHILE); }

"for"/{KWB}								{ return(FOR); }
"in"/({WS}|{ENDL})						{ return(IN); }

"break"/({WS}|{ENDL}|;)					{ return(BREAK); }
"continue"/({WS}|{ENDL}|;)				{ return(CONTINUE); }


("end")/(;|{WS}|{ENDL})					{ return(END); }

"new"/({WS}|{ENDL})						{ return(NEW); }




		/*
		 *	Symbolic names
		 */




		/*
		 *	Constant literals
		 */




		/*
		 * Single line comments
		 */

"//"									{ BEGIN(COMMENT); }
<COMMENT>{
	.*										/* Discard line */
	\n									{ ++num_lines; BEGIN(INITIAL); }
}




		/*
		 * Block Comments
		 */

"//{"									{ yy_push_state(BLOCK_COMMENT); }
<BLOCK_COMMENT>{
	\n									{ ++num_lines; }
	.										/* Discard character */
	
	(\n)"//{"							{ 
											++num_lines; 
											yy_push_state(BLOCK_COMMENT);
										}
	([^/\n])"//{"						{ yy_push_state(BLOCK_COMMENT); }
	
	(\n)"//}"							{
											++num_lines;
											yy_pop_state();
										}
	([^/\n])"//}"						{
											yy_pop_state();
										}
}



.										{ 
											// TODO: save error string
											return(ERROR); 
										}

%%

int lexer(FILE * input)
{
	int r;
	yyin = input;
	while((r=yylex())!=0)
	{
		printf("\n%d\n", r);
	}
	printf("%d lines.\n", num_lines+1);
	return 0;
}

