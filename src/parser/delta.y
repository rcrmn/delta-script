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

%debug

%define api.pure
%name-prefix "Parser_"
%locations
%defines            /* Generates header file */
%error-verbose

%glr-parser

%parse-param { Parser_Context* context }
%lex-param { void* scanner }

%initial-action
{
	yydebug = 0;
};

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

%right '!' UMINUS

%nonassoc LTE GTE EQ NEQ '>' '<'

%left  '.'




%type <node> expression
%type <node> delimited_expression
%type <node> block_expression
%type <node> assign_expr


%type <node> slot
%type <node> sub_slot
%type <node> const_slot
%type <node> inner_value
%type <node> value
%type <node> operation
%type <node> comparison
%type <node> direct_value
%type <node> inner_val_or_comp


%type <node> fun_call
%type <node> par_fun_call
%type <node> param_list


%type <node> const_val
%type <node> data_struct

%type <node> var_def

%type <node> fun_def
%type <node> lambda_fun
%type <node> fun_def_plist

%type <node> proto_def


%type <node> if_stmt
%type <node> elif_blocks
%type <node> else_block

%type <node> while_stmt
%type <node> for_stmt

%type <node> for_in_vars

%type <node> bool_expr
%type <node> stmt_block


%type <node> array_def
%type <node> array_values
%type <node> range_def
%type <node> map_def
%type <node> map_values


%%

	/*****************************************
	*****************  TODO ******************
	******************************************
	**
	*  continue
	*  break
	*  return
	*  ...
	*
	*  One line function definitions like = fun ( x ) : print x end
	*  +-> One line programs. Avoid having to have new line at last line.
	******************************************/


white_start:	'\n' white_start
	|			start
;

start:			delimited_expression 
										{ context->ast->addExpression($1); }
					start
	|			/* empty */
;

delimited_expression: 
				expression ';'	
										{ $$ = $1; }
	|			expression '\n'
										{ $$ = $1; }
	|			delimited_expression ';'	
										{ $$ = $1; }
	|			delimited_expression '\n'
										{ $$ = $1; }
	|			block_expression
										{ $$ = $1; }
;


block_expression:
				if_stmt
										{ $$ = $1; }
	|			for_stmt
										{ $$ = $1; }
	|			while_stmt				
										{ $$ = $1; }
	|			fun_def
										{ $$ = $1; }
			/*
	|			proto_def
			*/
;


expression:		/*const_val  TODO: this one doesn't belong here. For testing purposes only. 
	|		*/	var_def
										{ $$ = $1; }
	|			assign_expr
										{ $$ = $1; }
	|			fun_call
										{ $$ = $1; }
;


		/* Assignment expression. Like a = 3 or b += 1 */
assign_expr:	slot nl '=' nl value
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::Assign, $5);
										}
	|			slot nl ADD nl value
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::AssignAdd, $5);
										}
	|			slot nl SUB nl value 
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::AssignSubs, $5);
										}
	|			slot nl MUL nl value
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::AssignMult, $5);
										}
	|			slot nl DIV nl value
										{
											$$ = new AstNodeOperator($1, AstNodeOperator::AssignDiv, $5);
										}
;


		/* Slot of an object. Either variable or function. */
slot:			sub_slot
										{ $$ = $1; }
	|			const_slot
										{ $$ = $1; }
;

sub_slot:		NAME
										{ $$ = new AstNodeSlot($1); }
	|			NAME nl '.' sub_slot
										{ $$ = new AstNodeSlot($1, $4); }
;

const_slot:		const_val nl '.' sub_slot
										{ $$ = new AstNodeConstSlot($1, $4); }
;


		/* Operators */
operation:		inner_value nl '+' nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::Add, $5); }
	|			inner_value nl '-' nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::Subs, $5); }
	|			inner_value nl '*' nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::Mult, $5); }
	|			inner_value nl '/' nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::Div, $5); }
	|			inner_val_or_comp nl OR  nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::Or, $5); }
	|			inner_val_or_comp nl AND nl direct_value
						     	       	{ $$ = new AstNodeOperator($1, AstNodeOperator::And, $5); }
	|			inner_val_or_comp nl XOR nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::Xor, $5); }
	|			'!' nl direct_value
										{ $$ = new AstNodeOperator($3, AstNodeOperator::Not, 0); }
;


comparison:		direct_value nl EQ nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompEq, $5); }
	|			direct_value nl GTE nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompGte, $5); }
	|			direct_value nl LTE nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompLte, $5); }
	|			direct_value nl '<' nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompLt, $5); }
	|			direct_value nl '>' nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompGt, $5); }
	|			direct_value nl NEQ nl direct_value
										{ $$ = new AstNodeOperator($1, AstNodeOperator::CompNeq, $5); }
;


		/* Something that can be a parameter of a function call */
inner_value:	slot					{ $$ = $1; } 
	|			'(' value ')'	
										{ $$ = $2; } 
	|			const_val				{ $$ = $1; } 
	|			par_fun_call	
										{ $$ = $1; } 
	|			operation				{ $$ = $1; }
	|			data_struct				{ $$ = $1; }
	|			'-' inner_value   %prec UMINUS
										{ $$ = new AstNodeOperator($2, AstNodeOperator::Negative, 0); }
;


		/* An expression that has a value */
direct_value:	inner_value		%dprec 1
										{ $$ = $1; }
	|			fun_call		%dprec 2			/* When finding a ')' suppose it belongs to a function call (where there is only one parameter) */	
										{ $$ = $1; }
	|			'-' direct_value		  %prec UMINUS %dprec 3
										{ $$ = new AstNodeOperator($2, AstNodeOperator::Negative, 0); }

;



value:			direct_value
										{ $$ = $1; }
	|			comparison
										{ $$ = $1; } 
;

inner_val_or_comp:	inner_value
										{ $$ = $1; }
	|				comparison
										{ $$ = $1; }
;


fun_call:		slot				%dprec 1
										{
											AstNodeFunCall* f = new AstNodeFunCall($1);
											$$ = f;
										}
	|			slot param_list		%dprec 3	
										{ 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($2);
											f->setSlot($1);
											$$ = f;
										} 
	|			par_fun_call		%dprec 2	
										{ $$ = $1; }
;



par_fun_call:	slot '(' ')'
										{
											AstNodeFunCall* f = new AstNodeFunCall($1);
											$$ = f;
										}
	
	|			slot '(' nl param_list ')'		
										{
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($4);
											f->setSlot($1);
											$$ = f;
										} 

;



param_list:		inner_value nl ',' nl param_list
										{ 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>($5);
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



const_val:		NUMBER 
										{ $$ = new AstNodeNumber($1); }
	|			STRING                                                
										{ $$ = new AstNodeString($1); }
	|			BOOLEAN                                               
										{ $$ = new AstNodeBoolean($1); }
	|			SYMBOL                                                
										{ $$ = new AstNodeSymbol($1); }
;



data_struct:	lambda_fun
										{ $$ = $1; }
	|			range_def
										{ $$ = $1; }
	|			array_def
										{ $$ = $1; }
	|			map_def
										{ $$ = $1; } 

;



var_def:		VAR NAME				{
											$$ = new AstNodeSlotDecl($2);
										}
	|			VAR NAME nl '=' nl value		
										{
											$$ = new AstNodeSlotDecl($2, $6);
										}
;


fun_def:		FUN NAME nl '(' nl fun_def_plist nl ')' ':' nl stmt_block END
										{ 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>($6);
											f->setName($2);
											f->setCodeBlock($11);
											$$ = f;
										}
	|			FUN NAME nl fun_def_plist ':' nl stmt_block END
										{ 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>($4);
											f->setName($2);
											f->setCodeBlock($7);
											$$ = f;
										}
;


lambda_fun:		FUN '(' nl fun_def_plist nl ')' ':' nl stmt_block END
										{ 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>($4);
											f->setCodeBlock($9);
											$$ = f;
										}
	|			FUN fun_def_plist ':' nl stmt_block END
										{ 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>($2);
											f->setCodeBlock($5);
											$$ = f;
										}
;


fun_def_plist:	/* empty */
										{ 
											AstNodeFunctionBlock* f = new AstNodeFunctionBlock();
											$$ = f;
										}
	|			NAME
										{ 
											AstNodeFunctionBlock* f = new AstNodeFunctionBlock();
											f->addParam($1);
											$$ = f;
										}
	|			NAME nl ',' nl fun_def_plist
										{ 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>($5);
											f->addParam($1);
											$$ = f;
										}
;


proto_def:		/* TODO */
	;


if_stmt:		IF nl bool_expr ':' nl stmt_block END
										{ 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr($3);
											b->setIfBlock($6);
											b->setElifBlock(0);
											b->setElseBlock(0);
											$$ = b;
										}
	|			IF nl bool_expr ':' nl stmt_block elif_blocks END
										{ 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr($3);
											b->setIfBlock($6);
											b->setElifBlock($7);
											b->setElseBlock(0);
											$$ = b;
										}
	|			IF nl bool_expr ':' nl stmt_block else_block END
										{ 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr($3);
											b->setIfBlock($6);
											b->setElifBlock(0);
											b->setElseBlock($7);
											$$ = b;
										}
	|			IF nl bool_expr ':' nl stmt_block elif_blocks else_block END
										{ 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr($3);
											b->setIfBlock($6);
											b->setElifBlock($7);
											b->setElseBlock($8);
											$$ = b;
										}
;

elif_blocks:	ELIF nl bool_expr ':' nl stmt_block
										{
											AstNodeIfBlock* current = new AstNodeIfBlock();

											current->setBoolExpr($3);
											current->setIfBlock($6);
											$$ = current;
										}
	|			ELIF nl bool_expr ':' nl stmt_block elif_blocks
										{
											AstNodeIfBlock* current = new AstNodeIfBlock();

											current->setBoolExpr($3);
											current->setIfBlock($6);
											current->setElifBlock($7);
											$$ = current;
										}
;

else_block:		ELSE ':' nl stmt_block
										{ $$ = $4; }
;



while_stmt:		WHILE nl bool_expr ':' nl stmt_block END
										{ 
											AstNodeWhileBlock* block = new AstNodeWhileBlock();
											block->setBoolExpr($3);
											block->setBlock($6);
											$$ = block;
										}
;



for_stmt:		FOR nl for_in_vars nl IN nl value ':' nl stmt_block END
										{ 
											AstNodeForBlock* b = dynamic_cast<AstNodeForBlock*>($3);
											b->setIterator($7);
											b->setBlock($10);
											$$ = b;
										}
;

for_in_vars:	slot
										{ 
											AstNodeForBlock* b = new AstNodeForBlock();
											b->addInVar($1);
											$$ = b;
										}
	|			slot nl ',' nl for_in_vars
										{
											AstNodeForBlock* b = dynamic_cast<AstNodeForBlock*>($5);
											b->addInVar($1);
											$$ = b;
										}
;


bool_expr:		value
										{ $$ = $1; }
;

stmt_block:		/* empty */
										{ $$ = new AstNodeBlock(); }
	|			delimited_expression stmt_block
										{ 
											AstNodeBlock* b = dynamic_cast<AstNodeBlock*>($2); 
											b->addExpression($1);
											$$ = b;
										}
;



array_def:		'[' nl array_values nl ']'
										{ $$ = $3; } 
;

array_values:	/* empty */ 
										{
											AstNodeArray* a = new AstNodeArray();
											$$ = a;
										}
	|			inner_value nl optional_comma
										{
											AstNodeArray* a = new AstNodeArray();
											a->addValue($1);
											$$ = a;
										}
	|			inner_value nl ',' nl array_values
										{
											AstNodeArray* a = dynamic_cast<AstNodeArray*>($5);
											a->addValue($1);
											$$ = a;
										}
;



			/* TODO: differentiate between ... and .. in the range */

range_def:		'[' inner_value '.' '.' inner_value ']'
										{
											AstNodeRange* r = new AstNodeRange($2, $5);
											$$ = r;
										}
	|			'[' inner_value '.' '.' '.' inner_value ']'
										{
											AstNodeRange* r = new AstNodeRange($2, $6);
											$$ = r;
										}
	|			'[' inner_value '.' '.' inner_value '.' '.' inner_value ']'
										{
											AstNodeRange* r = new AstNodeRange($2, $8, $5);
											$$ = r;
										}
	|			'[' inner_value '.' '.' inner_value '.' '.' '.' inner_value ']'
										{
											AstNodeRange* r = new AstNodeRange($2, $9, $5);
											$$ = r;
										}
;



map_def:		'{' nl map_values '}'						%dprec 2
										{ $$ = $3; } 
	|			'{' nl map_values '\n' nl '}'				%dprec 1
										{ $$ = $3; } 

;

map_values:		/* empty */											%dprec 3
										{ 
											AstNodeMap* m = new AstNodeMap();
											$$ = m;
										}
	|			inner_value nl ':' nl value							%dprec 1
										{ 
											AstNodeMap* m = new AstNodeMap();
											m->addValue($1, $5);
											$$ = m;
										}
	|			inner_value nl ':' nl value nl ',' nl map_values	%dprec 2
										{ 
											AstNodeMap* m = dynamic_cast<AstNodeMap*>($9);
											m->addValue($1, $5);
											$$ = m;
										}
;


nl:				/* empty */				%dprec 1
	|			'\n' nl					%dprec 2
;


optional_comma:		/* empty */			%dprec 2
	|				','					%dprec 1
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


