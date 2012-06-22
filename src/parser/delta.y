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


%token <number>   NUMBER
%token <str>   STRING
%token <name>     NAME
%token <symbol>   SYMBOL
%token <boolean>  BOOLEAN

%token WS

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

%token LEXER_ERR


%type <number> exp

%%

start:	NUMBER
					{ context->result = $1; }
	|	exp
					{ context->result = $1; }
	|	STRING
					{ cout << " >>" << $1 << endl; }
	;

exp:   NUMBER IN NUMBER
			{ $$ = $1 + $3; }
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


