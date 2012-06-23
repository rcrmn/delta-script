/*
 *
 *
 */

%{
	/* Empty */

%}


	/* Code included in the generated header file before the union definition */
%code requires {
	
	/* This include is to get the type for 
	 * number constants defined in the config file
	 */
#include "deltaConfig.h"
using namespace delta;

}

%define api.pure
%name-prefix "Parser_"
%locations
%defines            /* Generates header file */
%error-verbose

%parse-param { Parser_Context* context }
%lex-param { void* scanner }

%union
{
   number_t		number;
   char*		str;
   char*		name;
   char*		symbol;
   char*		long_operator;
   bool			boolean;
}




%{

#include "parserContext.h"

using namespace delta::parser;

#include <iostream>
#include <sstream>

using namespace std;


	/* Lexer declaration */
int Parser_lex(YYSTYPE* lvalp, YYLTYPE* llocp, void* scanner);

	/* Error handler */
void Parser_error(YYLTYPE* locp, Parser_Context* context, const char* err);


	/* This is to tell bison what to use for the parameter scanner when calling yylex */
#define scanner context->m_scanner

%}

  /* CONSTANTS */
%token <number>   NUMBER
%token <str>	  STRING
%token <name>     NAME
%token <symbol>   SYMBOL
%token <boolean>  BOOLEAN

%token WS

  /* KEYWORDS */
%token FUN
%token VAR
%token PROTOTYPE

%token IF
%token ELIF
%token ELSE
%token WHILE
%token FOR
%token IN
%token BREAK
%token CONTINUE
%token RETURN
%token END


  /* MULTI-CHARACTER OPERATOR */
%token GTE  /* >= */
%token LTE  /* <= */
%token EQ   /* == */
%token NEQ  /* != */

%token INC  /* ++ */
%token DEC  /* -- */

%token ADD  /* += */
%token SUB  /* -= */
%token MUL  /* *= */
%token DIV  /* /= */

%token AND  /* && */
%token OR   /* || */
%token XOR  /* ^^ */


  /* LEXER ERROR */
%token LEXER_ERR



%%

start:	NUMBER
						{ cout << $1 << endl; }
	 ;


%%

/* =====================
 *
 * Error handler
 *
 * ===================== */
void Parser_error(YYLTYPE* locp, Parser_Context* context, const char* err)
{
   cout << locp->first_line << ":" << err << endl;
}


