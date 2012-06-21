/* Delta Programming Language scanner

compile with:
	flex delta.flex
	g++ lex.yy.c 

*/

%option stack
%option noyywrap

%option bison-bridge
%option bison-locations

%option prefix="Parser_"

%option reentrant

%option yylineno

%{

/*#include <stdio.h>
//int num_lines=0;
//int block_comment_depth=0;*/

#include "parser.h"
#include "parser.yy.hpp"

#include <iostream>
#include <sstream>

using namespace delta::parser;
using namespace std;

#define YY_EXTRA_TYPE Parser_Context*

	/* To set line numbers, we set yyloc->first_line to yylineno each time a token is recognised: */
#define YY_USER_ACTION yylloc->first_line = yylineno;


#define YY_INPUT(buf,result,max_size)   \
{                                       \
   char c;                              \
   (*yyextra->m_is) >> c;                 \
   if(yyextra->m_is->eof())               \
      result = YY_NULL;                 \
   else {                               \
      buf[0] = c;                       \
      result = 1;                       \
   }                                    \
}


%}

%x COMMENT
%x BLOCK_COMMENT
%x STRING_CNST


	/* Word Boundary */
WB			[ \n\r\t\(\)=\-\+\*\"\'\{\}\[\]\|\.\/<>&%:;,]
	/* Inline Word Boundary (No new line) */
INLWB		[ \t\(\)=\-\+\*\"\'\{\}\[\]\|\.\/<>&%:;,]
	/* Word Separator */
WS			[ \t]
	/* End Line */
ENDL		(\n|\r|\r\n)
	/* KeyWord Boundary */
KWB			[ \t\(]

%%



{ENDL}									{  }



		/*
		 *	Symbols
		 */
":"
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
	\n									{ BEGIN(INITIAL); }
}




		/*
		 * Block Comments
		 */

"//{"									{ yy_push_state(BLOCK_COMMENT, yyscanner); }
<BLOCK_COMMENT>{
	\n									{  }
	.										/* Discard character */
	
	(\n)"//{"							{ 
											yy_push_state(BLOCK_COMMENT, yyscanner);
										}
	([^/\n])"//{"						{ yy_push_state(BLOCK_COMMENT, yyscanner); }
	
	(\n)"//}"							{
											yy_pop_state(yyscanner);
										}
	([^/\n])"//}"						{
											yy_pop_state(yyscanner);
										}
}



.										{ 
											// TODO: save error string
											return(LEXER_ERR); 
										}

%%


void Parser_Context::init_scanner  (void)
{
	yylex_init(&m_scanner);
	yyset_extra(this, m_scanner);
}

void Parser_Context::destroy_scanner  (void)
{
	yylex_destroy(m_scanner);
}



