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

namespace delta {
	namespace parser {
		class AstNode;
	}
}

}

%define api.pure
%name-prefix "Parser_"
%locations
%defines            /* Generates header file */
%error-verbose

%glr-parser

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
   delta::parser::AstNode*		node;
}




%{

#include <iostream>
#include <sstream>

using namespace std;


#include "parserContext.h"
#include "parser/abstractSyntaxTree.h"

using namespace delta::parser;


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

%left  '+' '-' OR XOR

%left  '*' '/' AND

%left  '.'


%type <node> expression
%type <node> assign_expr
%type <node> slot
%type <node> inner_value
%type <node> value
%type <node> operation
%type <node> fun_call
%type <node> par_fun_call
%type <node> param_list
%type <node> const_val
%type <node> var_def
%type <node> fun_def
%type <node> proto_def
%type <node> if_stmt
%type <node> while_stmt
%type <node> for_stmt
%type <node> lambda_fun
%type <node> array_def
%type <node> range_def
%type <node> map_def


%%

start:			expression 
										{ context->ast->addExpression($1); }
					start
	|			/* empty */
;


expression:		/*const_val  TODO: this one doesn't belong here. For testing purposes only. 
	|		*/	var_def
										{ $$ = $1; }
	|			assign_expr
										{ $$ = $1; }
	|			fun_call
										{ $$ = $1; }
			/*
	|			fun_def
	|			proto_def
	|			if_stmt
	|			for_stmt
	|			while_stmt
			*/
;

		/* Assignment expression. Like a = 3 or b += 1 */
assign_expr:	slot '=' value
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::Assign, $3);
										}
	|			slot ADD value  /* TODO */
	|			slot SUB value
	|			slot MUL value
	|			slot DIV value
;


		/* Slot of an object. Either variable or function. */
slot:			NAME
										{ $$ = new AstNodeSlot($1); }
	|			NAME '.' slot
										{ $$ = new AstNodeSlot($1, $3); }
	|			const_val '.' slot
										{ $$ = new AstNodeConstSlot($1, $3); }
;

		/* Operators */
operation:		inner_value '+' value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Add, $3); }
	|			inner_value '-' value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Subs, $3); }
	|			inner_value '*' value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Mult, $3); }
	|			inner_value '/' value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Div, $3); }
	|			inner_value OR  value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Or, $3); }
	|			inner_value AND value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::And, $3); }
	|			inner_value XOR value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Xor, $3); }
;


		/* Something that can be a parameter of a function call */
inner_value:	slot					{ $$ = $1; } 
	|			'(' value ')'	
										{ $$ = $2; } 
	|			const_val				{ $$ = $1; } 
	|			par_fun_call	
										{ $$ = $1; } 
	|			operation				{ $$ = $1; }
;


		/* An expression that has a value */
value:			inner_value		%dprec 1
										{ $$ = $1; }
	|			fun_call		%dprec 2		
										{ $$ = $1; }
;



fun_call:		slot param_list				
										{ 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($2);
											f->setSlot($1);
											$$ = f;
										} 
;



par_fun_call:	slot '(' param_list ')'		
										{
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($3);
											f->setSlot($1);
											$$ = f;
										} 

;



param_list:		inner_value ',' param_list
										{ 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($3);
											f->addParam($1);
											$$ = f;
										}
	|			inner_value		
										{ 
											AstNodeFunCall* f = new AstNodeFunCall();
											f->addParam($1);
											$$ = f;
										}
;



const_val:		NUMBER  /* TODO: save the values */
										{ $$ = new AstNodeNumber($1); }
	|			STRING                                                
										{ $$ = new AstNodeString($1); }
	|			BOOLEAN                                               
										{ $$ = new AstNodeBoolean($1); }
	|			SYMBOL                                                
										{ $$ = new AstNodeSymbol($1); }
;


var_def:		VAR NAME				{
											$$ = new AstNodeSlotDecl($2);
										}
	|			VAR NAME '=' value		{
											$$ = new AstNodeSlotDecl($2, $4);
										}
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


lambda_fun:		/* TODO */
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


