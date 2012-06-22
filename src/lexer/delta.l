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

#include "deltaConfig.h"

#include "parserContext.h"
#include "parser.yy.hpp"

#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>


using namespace delta;
using namespace delta::parser;
using namespace std;

#define YY_EXTRA_TYPE Parser_Context*

	/* To set line numbers, we set yyloc->first_line to yylineno each time a token is recognised: */
#define YY_USER_ACTION yylloc->first_line = yylineno;


#define YY_INPUT(buf,result,max_size)   \
{                                       \
   char c;                              \
   (*yyextra->m_is) >> c;               \
   if(yyextra->m_is->eof())             \
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
%x SYMBOL_STRING_CNST


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



{ENDL}									{ return '\n'; }

{WS}									{ return ' '; }

	 /* ===================================
	  * ===================================
	  *
	  * ======== Special Characters
	  *
	  * ===================================
	  * =================================== */
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



	 /* ===================================
	  * ===================================
	  *
	  * ======== Operators
	  *
	  * ===================================
	  * =================================== */
"|"
"&"
"^"
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



	 /* ===================================
	  * ===================================
	  *
	  * ======== Keywords
	  *
	  * ===================================
	  * =================================== */

"fun"									{ return FUN; }

"var"									{ return VAR; }

"proto"									{ return PROTOTYPE; }


"if"									{ return(IF); }
"elif"									{ return(ELIF); }
"else"									{ return(ELSE); }

"while"									{ return(WHILE); }

"for"									{ return(FOR); }
"in"									{ return(IN); }

"break"									{ return(BREAK); }
"continue"								{ return(CONTINUE); }


"end"									{ return(END); }


"return"								{ return RETURN; }




		/*
		 *	Symbol names
		 */




	 /* ===================================
	  * ===================================
	  *
	  * ======== Constant Literals
	  *
	  * ===================================
	  * =================================== */

		 /* ===============================
		  * Numbers
		  * =============================== */


"0"										|
[1-9][0-9]*"f"?							|
[0-9]*"."[0-9]+"f"?						|
[0-9]+"."("f"?)							{ 
											yylval->number = (number_t) atof(yytext); 
											return(NUMBER); 
										}


			/* Hexadecimal notation */
"0x"([a-fA-F0-9]+)						{
											unsigned long int ii;
											ii = strtoul(yytext, NULL, 16);
											yylval->number = (number_t) ii;
											return NUMBER;
										}

		  	/* Binary notation */
"0b"(0|1)+								{
											unsigned long int ii;
											ii = strtoul(yytext+2, NULL, 2);
											yylval->number = (number_t) ii;
											return NUMBER;
										}


			/* Octal notation */
"0o"[0-7]+								{
											unsigned long int ii;
											ii = strtoul(yytext+2, NULL, 8);
											yylval->number = (number_t) ii;
											return NUMBER;
										}
"0"[0-7]+								{
											unsigned long int ii;
											ii = strtoul(yytext, NULL, 8);
											yylval->number = (number_t) ii;
											return NUMBER;
										}



		 /* ===============================
		  * Strings
		  * =============================== */
		/*
"\""									{
											bool escaped = false;
											bool ended = false;
											char c[2];
											c[1] = 0;

											yylval->str = yyextra->addString();

											while(!ended)
											{
												c[0] = yyinput(yyextra->m_scanner);
												cout << c << endl;
												if(c[0] == '"' && !escaped)
												{
													ended = true;
												}
												else
												{
													if(c[0] == '\\' && ! escaped)
													{
														escaped = true;
													}
													else if(c[0] == '\\')
													{
														escaped = false;
													}
													else
													{
														escaped = false;
													}
													yylval->str = yyextra->appendToString(c);
												}
											}
											return STRING;
										}
		*/
	
"\""									{ yyextra->addString(); BEGIN(STRING_CNST); }

<STRING_CNST>{
	

	\"									{ 
											yylval->str = yyextra->appendToString(NULL);

											BEGIN(INITIAL); 
											return(STRING); 
										}

	\\\"								{ 
											yyextra->appendToString(yytext); 
										}



	[^"]								{
											yyextra->appendToString(yytext);  
										}

}


		 /* ===============================
		  * Symbols
		  * =============================== */

":"([a-zA-Z_][a-zA-Z0-9_]*)				{ /* TODO copiar retornar valor */ }

":'"									{ BEGIN(SYMBOL_STRING_CNST); }

<SYMBOL_STRING_CNST>{

}



		 /* ===============================
		  * Booleans
		  * =============================== */

"true"									{ yylval->boolean = true; return BOOLEAN; }

"false"									{ yylval->boolean = false; return BOOLEAN; }





	 /* ===================================
	  * ===================================
	  *
	  * ======== Comments
	  *
	  * ===================================
	  * =================================== */


		 /* ===============================
		  * Block Comments
		  * =============================== */

"//{"									{ 
											yy_push_state(BLOCK_COMMENT, yyscanner); 
										}

			/* Illegal block comment start and end sequences */
("/"+)"//{"								/* Do nothing */
("/"+)"/}"								/* Do nothing */


<BLOCK_COMMENT>{
	{ENDL}								{ /* Let flex handle new lines */ }
	
	(\n)"//{"						|
	([^/\n])"//{"						{ 
											yy_push_state(BLOCK_COMMENT, yyscanner); 
										}
	
	(\n)"//}"						|
	([^/\n])"//}"						{
											yy_pop_state(yyscanner);
										}

	.										/* Discard character */
}



		 /* ===============================
		  * Single Line Comments
		  * =============================== */

"//"									{ BEGIN(COMMENT); }
<COMMENT>{
	{ENDL}								{ BEGIN(INITIAL); }
	.										/* Discard line */
}





	 /* ===================================
	  * ===================================
	  *
	  * ======== Other Input
	  *
	  * ===================================
	  * =================================== */


		 /* ===============================
		  * Unknown value
		  * =============================== */

.										{ 
											// TODO: save error string
											return(LEXER_ERR); 
										}


		 /* ===============================
		  * End Of Input
		  * =============================== */

<<EOF>>									{ return 0; }

%%


/*
 * Implementation of the scanner initialization functions for the context class
 */

/* protected */
void Parser_Context::init_scanner  (void)
{
	yylex_init(&m_scanner);
	yyset_extra(this, m_scanner);
}

/* protected */
void Parser_Context::destroy_scanner  (void)
{
	yylex_destroy(m_scanner);
}



