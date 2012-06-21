/*
 *
 *
 */

%{
	/* Empty */
%}

%define api.pure
%name-prefix "Parser_"
%locations
%defines            /* Generates header file */
%error-verbose

%parse-param { Parser_Context* context }
%lex-param { void* scanner }

%union
{
   float number;
   char* string;
   char* name;
   char* symbol;
   bool boolean;
}




%{

#include "parser.h"

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
%token <string>   STRING
%token <name>     NAME
%token <symbol>   SYMBOL
%token <boolean>  BOOLEAN

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




%%

start:
	 NUMBER
			{ context->result = $1; }


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


