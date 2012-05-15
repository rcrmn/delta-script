/* Delta Programming Language scanner

compile with:
	flex delta.flex
	g++ lex.yy.c -lfl

*/

%{

#include <stdio.h>
int num_lines=0;
int block_comment_depth=0;


#include "lexer.h"

%}

%x COMMENT
%x BLOCK_COMMENT
%x STRING_CNST

%%



\n										{ ++num_lines; }



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

"//{"									{ ++block_comment_depth; BEGIN(BLOCK_COMMENT); }
<BLOCK_COMMENT>{
	\n									{ ++num_lines; }
	.										/* Discard character */
	
	(\n)"//{"							{ ++num_lines; ++block_comment_depth; }
	([^/\n])"//{"						{ ++block_comment_depth; }
	
	(\n)"//}"							{
											++num_lines;
											if((--block_comment_depth)==0)
												BEGIN(INITIAL);
										}
	([^/\n])"//}"							{	
											if((--block_comment_depth)==0)
												BEGIN(INITIAL);
										}
}


%%

int lexer(FILE * input)
{
	yyin = input;
	printf("\n%d\n", yylex());
	printf("%d lines.\n", num_lines+1);
	return 0;
}

