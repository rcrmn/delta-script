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
KWB			[ \t\n\r\(:]

END_STMT	[ \t\n\r;]

%%



({ENDL}(({WS}|[[:cntrl:]])*))+			{ return '\n'; }

{WS}+									{ }

	 /* ===================================
	  * ===================================
	  *
	  * ======== Special Characters
	  *
	  * ===================================
	  * =================================== */
":"									|
"."									|
";"									|
","									|
"("									|
")"									|
"{"									|
"}"									|
"["									|
"]"										{ return yytext[0]; }



	 /* ===================================
	  * ===================================
	  *
	  * ======== Operators
	  *
	  * ===================================
	  * =================================== */
"|"									|
"&"									|
"^"									|
"*"									|
"+"									|
"-"									|
"/"									|
"%"									|
"!"									|
"="									|
"<"									|
">"										{ return yytext[0]; }



"<="									{ return LTE; }

">="									{ return GTE; }

"=="									{ return EQ; }

"!="									{ return NEQ; }

"++"									{ return INC; }

"--"									{ return DEC; }

"+="									{ return ADD; }

"-="									{ return SUB; }

"*="									{ return MUL; }

"/="									{ return DIV; }

"&&"									{ return AND; }

"||"									{ return OR; }

"^^"									{ return XOR; }



	 /* ===================================
	  * ===================================
	  *
	  * ======== Keywords
	  *
	  * ===================================
	  * =================================== */

"fun"/{KWB}								{ return FUN; }

"var"/{WS}								{ return VAR; }

"proto"/{KWB}							{ return PROTOTYPE; }


"if"/{KWB}								{ return IF; }
"elif"/{KWB}							{ return ELIF; }
"else"/{KWB}							{ return ELSE; }

"while"/{KWB}							{ return WHILE; }

"for"/{KWB}								{ return FOR; }
"in"/{KWB}								{ return IN; }

"break"/{END_STMT}						{ return BREAK; }
"continue"/{END_STMT}					{ return CONTINUE; }


"end"/{END_STMT}						{ return END; }


"return"/{KWB}							{ return RETURN; }




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


"0"("f"?)/{WB}						{ 
											yylval->number = (number_t) atof(yytext); 
											return NUMBER; 
										}
[1-9]([0-9]*)("f"?)/{WB}			{ 
											yylval->number = (number_t) atof(yytext); 
											return NUMBER; 
										}
[0-9]+"."([0-9]+)("f"?)/{WB}		{ 
											yylval->number = (number_t) atof(yytext); 
											return NUMBER; 
										}
										/*
[0-9]+"."("f"?)/{WB}				{ 
											yylval->number = (number_t) atof(yytext); 
											return NUMBER; 
										} */



			/* Hexadecimal notation */
"0x"([a-fA-F0-9]+)/{WB}			{
											unsigned long int ii;
											ii = strtoul(yytext, NULL, 16);
											yylval->number = (number_t) ii;
											return NUMBER;
										}

		  	/* Binary notation */
"0b"((0|1)+)/{WB}								{
											unsigned long int ii;
											ii = strtoul(yytext+2, NULL, 2);
											yylval->number = (number_t) ii;
											return NUMBER;
										}


			/* Octal notation */
"0o"([0-7]+)/{WB}						{
											unsigned long int ii;
											ii = strtoul(yytext+2, NULL, 8);
											yylval->number = (number_t) ii;
											return NUMBER;
										}
"0"([0-7]+)/{WB}						{
											unsigned long int ii;
											ii = strtoul(yytext, NULL, 8);
											yylval->number = (number_t) ii;
											return NUMBER;
										}



		 /* ===============================
		  * Strings
		  * =============================== */
	
"\""									{ 
											yyextra->addString(); 
											BEGIN ( STRING_CNST ); 
										}

<STRING_CNST>{
	

	\"									{ 
											yylval->str = yyextra->appendToString(NULL);

											BEGIN ( INITIAL ); 
											return STRING; 
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

":"([a-zA-Z_][a-zA-Z0-9_]*)/{WB}		{
											yylval->str = yyextra->addString(yytext+1);

											return SYMBOL; 
										}


":'"									{ 
											yyextra->addString(); 
											BEGIN ( SYMBOL_STRING_CNST ); 
										}

<SYMBOL_STRING_CNST>{

	[[:cntrl:]]							{ /* Skip all new-line or control characters */ }

	\'									{ 
											yylval->str = yyextra->appendToString(NULL);

											BEGIN ( INITIAL ); 
											return SYMBOL; 
										}


	\\\'								{ 
											yyextra->appendToString(yytext); 
										}



	[^'[:cntrl:]]						{
											yyextra->appendToString(yytext);  
										}
}



		 /* ===============================
		  * Booleans
		  * =============================== */

"true"/{WB}								{ yylval->boolean = true; return BOOLEAN; }

"false"/{WB}							{ yylval->boolean = false; return BOOLEAN; }





	 /* ===================================
	  * ===================================
	  *
	  * ======== Names
	  *
	  * ===================================
	  * =================================== */


		 /* ===============================
		  * Variables and Functions
		  * =============================== */

[a-zA-Z_$@][a-zA-Z_$@0-9]*"!"/([^=])		{
												yylval->name = yyextra->addString(yytext);
												return NAME;
											}

[a-zA-Z_$@][a-zA-Z_$@0-9]*("?"|"!?")?/{WB}  {
												yylval->name = yyextra->addString(yytext);
												return NAME;
											}


		 /* ===============================
		  * Constants  TODO
		  * =============================== */





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


			/* Illegal block comment start and end sequences */
("/"+)"//{"								{ /* do nothing */ }
("/"+)"/}"								{ /* do nothing */ }

"//{"									{ 
											yy_push_state(BLOCK_COMMENT, yyscanner); 
										}

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

"//"									{ BEGIN ( COMMENT ); }
<COMMENT>{
	{ENDL}								{ BEGIN ( INITIAL ); }
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
											return LEXER_ERR; 
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



