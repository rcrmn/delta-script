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


/* Operator Precedence and associativity */
%right '='

%left  '+' '-'

%left  '*' '/'


%%

start:			expression start
	 |			/* empty */
	 ;


expression:		const_val /* TODO: this one doesn't belong here. For testing purposes only. */
	|			assign_expr
	|			fun_call

	|			var_def
	|			fun_def
	|			proto_def
	|			if_stmt
	|			for_stmt
	|			while_stmt
	;

		/* Assignment expression. Like a = 3 or b += 1 */
assign_expr:	slot assign_oper value
	;


		/* Slot of an object. Either variable or function. */
slot:			NAME  /* TODO: Save the name used */
	|			NAME '.' NAME
	|			const_val '.' NAME
	;


		/* Assignment operator */
		/* TODO: Save the kind of operator used */
assign_oper:	'=' 
	|			ADD
	|			SUB
	|			MUL
	|			DIV
	;


		/* Something that can be a parameter of a function call */
inner_value:	slot
	|			const_val
	|			par_fun_call
	|			operation
	|			'(' value ')'
	;


		/* An expression that has a value */
value:			fun_call
	|			inner_value
	;


		/* Operators */
operation:		inner_value '+' inner_value
		 /* TODO: add the rest */
	;


fun_call:		slot param_list
	|			par_fun_call
	;


par_fun_call:	slot '(' param_list ')'
	;


param_list:		/* empty */
	|			inner_value
	;



const_val:		NUMBER  /* TODO: save the values */
						{ cout << $1 << endl; }
	|			STRING
						{ cout << $1 << endl; }
	|			BOOLEAN
						{ cout << $1 << endl; }
	|			SYMBOL
						{ cout << $1 << endl; }
	;


var_def:		/* TODO */
	;

fun_def:		/* TODO */
	;

proto_def:		/* TODO */
	;

if_stmt:		/* TODO */
	;

while_stmt:		/* TODO */
	;

for_stmt:		/* TODO */
	;


lambda_fun:		/* TODO*/
	;



array_def:		/* TODO */
	;

range_def:		/* TODO */
	;

map_def:		/* TODO */
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


