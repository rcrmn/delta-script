/* A Bison parser, made by GNU Bison 2.5.  */

/* Skeleton implementation for Bison GLR parsers in C
   
      Copyright (C) 2002-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1


/* Substitute the variable and function names.  */
#define yyparse Parser_parse
#define yylex   Parser_lex
#define yyerror Parser_error
#define yylval  Parser_lval
#define yychar  Parser_char
#define yydebug Parser_debug
#define yynerrs Parser_nerrs
#define yylloc  Parser_lloc

/* Copy the first part of user declarations.  */

/* Line 172 of glr.c  */
#line 6 "parser/delta.y"

	/* Empty */



/* Line 172 of glr.c  */
#line 72 "parser.yy.cpp"



#include "parser.yy.hpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

/* Line 243 of glr.c  */
#line 64 "parser/delta.y"


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



/* Line 243 of glr.c  */
#line 134 "parser.yy.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) \
      || (defined __STRICT_ANSI__ && __STRICT_ANSI__))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#define YYOPTIONAL_LOC(Name) Name

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   769

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  288
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 12
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,     2,     2,     2,
      48,    49,    41,    39,    50,    40,    45,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    47,
      37,    38,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    13,    14,    17,    20,
      23,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      48,    54,    60,    66,    72,    74,    76,    78,    83,    88,
      94,   100,   106,   112,   118,   124,   130,   136,   142,   148,
     150,   154,   156,   158,   160,   163,   165,   167,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   192,   196,
     198,   204,   210,   212,   218,   224,   226,   232,   238,   240,
     243,   245,   249,   255,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   282,   289,   302,   311,   322,   329,
     330,   332,   338,   346,   355,   364,   374,   381,   389,   394,
     402,   414,   416,   422,   424,   425,   428,   434,   435,   439,
     445,   452,   460,   470,   481,   486,   493,   494,   500,   510,
     511,   514,   515
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const signed char yyrhs[] =
{
      57,     0,    -1,    46,    57,    -1,    58,    -1,    -1,    60,
      59,    58,    -1,    -1,    62,    47,    -1,    62,    46,    -1,
      60,    47,    -1,    60,    46,    -1,    61,    -1,    86,    -1,
      90,    -1,    89,    -1,    83,    -1,    82,    -1,    63,    -1,
      77,    -1,    64,    99,    38,    99,    71,    -1,    64,    99,
      28,    99,    71,    -1,    64,    99,    29,    99,    71,    -1,
      64,    99,    30,    99,    71,    -1,    64,    99,    31,    99,
      71,    -1,    65,    -1,    66,    -1,     5,    -1,     5,    99,
      45,    65,    -1,    80,    99,    45,    65,    -1,    70,    99,
      39,    99,    70,    -1,    70,    99,    40,    99,    70,    -1,
      70,    99,    41,    99,    70,    -1,    70,    99,    42,    99,
      70,    -1,    70,    99,    24,    99,    70,    -1,    70,    99,
      22,    99,    70,    -1,    70,    99,    23,    99,    70,    -1,
      70,    99,    37,    99,    70,    -1,    70,    99,    36,    99,
      70,    -1,    70,    99,    25,    99,    70,    -1,    64,    -1,
      48,    71,    49,    -1,    80,    -1,    78,    -1,    81,    -1,
      40,    69,    -1,    69,    -1,    77,    -1,    40,    70,    -1,
      67,    -1,    70,    -1,    72,    -1,    73,    -1,    70,    -1,
      68,    -1,    74,    -1,    75,    -1,    76,    -1,    43,    99,
      70,    -1,    48,    73,    49,    -1,    72,    -1,    74,    99,
      33,    99,    72,    -1,    73,    99,    33,    99,    72,    -1,
      72,    -1,    75,    99,    34,    99,    72,    -1,    73,    99,
      34,    99,    72,    -1,    72,    -1,    74,    99,    32,    99,
      72,    -1,    74,    99,    32,    99,    72,    -1,    72,    -1,
      64,    79,    -1,    78,    -1,    64,    48,    49,    -1,    64,
      48,    99,    79,    49,    -1,    69,    99,    50,    99,    79,
      -1,    69,    -1,     3,    -1,     4,    -1,     7,    -1,     6,
      -1,    84,    -1,    96,    -1,    94,    -1,    97,    -1,    10,
       5,    -1,    10,     5,    99,    38,    99,    71,    -1,     9,
       5,    99,    48,    99,    85,    99,    49,    51,    99,    93,
      21,    -1,     9,     5,    99,    85,    51,    99,    93,    21,
      -1,     9,    48,    99,    85,    99,    49,    51,    99,    93,
      21,    -1,     9,    85,    51,    99,    93,    21,    -1,    -1,
       5,    -1,     5,    99,    50,    99,    85,    -1,    12,    99,
      92,    51,    99,    93,    21,    -1,    12,    99,    92,    51,
      99,    93,    87,    21,    -1,    12,    99,    92,    51,    99,
      93,    88,    21,    -1,    12,    99,    92,    51,    99,    93,
      87,    88,    21,    -1,    13,    99,    92,    51,    99,    93,
      -1,    13,    99,    92,    51,    99,    93,    87,    -1,    14,
      51,    99,    93,    -1,    15,    99,    92,    51,    99,    93,
      21,    -1,    16,    99,    91,    99,    17,    99,    71,    51,
      99,    93,    21,    -1,    64,    -1,    64,    99,    50,    99,
      91,    -1,    71,    -1,    -1,    60,    93,    -1,    52,    99,
      95,    99,    53,    -1,    -1,    69,    99,   100,    -1,    69,
      99,    50,    99,    95,    -1,    52,    69,    45,    45,    69,
      53,    -1,    52,    69,    45,    45,    45,    69,    53,    -1,
      52,    69,    45,    45,    69,    45,    45,    69,    53,    -1,
      52,    69,    45,    45,    69,    45,    45,    45,    69,    53,
      -1,    54,    99,    98,    55,    -1,    54,    99,    98,    46,
      99,    55,    -1,    -1,    69,    99,    51,    99,    71,    -1,
      69,    99,    51,    99,    71,    99,    50,    99,    98,    -1,
      -1,    46,    99,    -1,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   232,   232,   233,   237,   236,   239,   243,   245,   247,
     249,   251,   257,   259,   261,   263,   272,   274,   276,   282,
     286,   290,   294,   298,   306,   308,   312,   314,   318,   324,
     326,   328,   330,   335,   337,   339,   341,   343,   345,   351,
     355,   357,   358,   360,   361,   367,   369,   371,   373,   380,
     382,   384,   389,   391,   397,   399,   401,   403,   405,   407,
     412,   414,   416,   420,   422,   424,   428,   430,   432,   438,
     444,   450,   456,   467,   473,   483,   485,   487,   489,   495,
     497,   499,   501,   508,   511,   518,   525,   535,   541,   551,
     555,   561,   574,   583,   592,   601,   612,   620,   631,   637,
     648,   657,   663,   672,   677,   678,   688,   693,   697,   703,
     715,   720,   725,   730,   739,   741,   746,   751,   757,   766,
     767,   771,   772
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "NAME", "SYMBOL",
  "BOOLEAN", "WS", "FUN", "VAR", "PROTOTYPE", "IF", "ELIF", "ELSE",
  "WHILE", "FOR", "IN", "BREAK", "CONTINUE", "RETURN", "END", "GTE", "LTE",
  "EQ", "NEQ", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", "AND", "OR",
  "XOR", "LEXER_ERR", "'>'", "'<'", "'='", "'+'", "'-'", "'*'", "'/'",
  "'!'", "UMINUS", "'.'", "'\\n'", "';'", "'('", "')'", "','", "':'",
  "'['", "']'", "'{'", "'}'", "$accept", "white_start", "start", "$@1",
  "delimited_expression", "block_expression", "expression", "assign_expr",
  "slot", "sub_slot", "const_slot", "operation", "comparison",
  "inner_value", "direct_value", "value", "inner_val_or_comp", "bool_oper",
  "or_oper", "xor_oper", "and_oper", "fun_call", "par_fun_call",
  "param_list", "const_val", "data_struct", "var_def", "fun_def",
  "lambda_fun", "fun_def_plist", "if_stmt", "elif_blocks", "else_block",
  "while_stmt", "for_stmt", "for_in_vars", "bool_expr", "stmt_block",
  "array_def", "array_values", "range_def", "map_def", "map_values", "nl",
  "optional_comma", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    56,    57,    57,    59,    58,    58,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    86,    86,    87,    87,    88,    89,
      90,    91,    91,    92,    93,    93,    94,    95,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    98,    99,
      99,   100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     0,     3,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     5,     5,     5,     1,     1,     1,     4,     4,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     1,
       3,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       5,     5,     1,     5,     5,     1,     5,     5,     1,     2,
       1,     3,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     6,    12,     8,    10,     6,     0,
       1,     5,     7,     8,     8,     9,     6,     7,     4,     7,
      11,     1,     5,     1,     0,     2,     5,     0,     3,     5,
       6,     7,     9,    10,     4,     6,     0,     5,     9,     0,
       2,     0,     1
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       2,     1,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     0,     1,
       2,     3,     1,     0,     4,     3,     2,     1,     1,     5,
       2,     1,     3,     2,     1,     3,     2,     1,     3,     2,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     1,     3,     1,     2,     1,
       2,     2,     1
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned char yydefact[] =
{
       6,    75,    76,    26,    78,    77,     0,     0,   119,   119,
     119,     6,     0,     3,     4,    11,     0,    17,   119,    24,
      25,    18,    70,   119,    16,    15,    12,    14,    13,   119,
       0,   119,    83,     0,     0,     0,     2,     1,    10,     9,
       6,     8,     7,    89,     0,     0,   119,   119,    39,    74,
      42,    69,    41,    43,    79,    81,    80,    82,     0,     0,
     120,     0,    89,     0,     0,   119,     0,    39,    48,    53,
      45,   119,   103,    50,    51,    54,    55,    56,    46,    42,
       0,     0,   101,   119,     5,    90,   119,     0,     0,    44,
      71,     0,     0,     0,   107,   116,   119,     0,   119,   119,
     119,   119,   119,     0,    27,   119,     0,   119,    44,    47,
       0,   119,     0,     0,     0,     0,   119,   119,     0,     0,
       0,    89,   119,    40,     0,     0,   119,   119,   119,     0,
     119,     0,     0,     0,     0,     0,    28,    89,   119,     0,
       0,    57,    58,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   104,   104,
     119,   119,   119,   119,   104,    72,     0,   121,     0,     0,
     119,   114,     0,    20,    21,    22,    23,    19,   119,   104,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,    89,     0,     0,     0,     0,   119,   108,   106,   119,
       0,    73,     0,     0,    34,    35,    33,    38,    37,    36,
      29,    30,    31,    32,   119,    61,    64,    66,    60,    63,
     105,   119,     0,    92,     0,     0,    99,   102,     0,    91,
       0,    88,     0,     0,   110,   107,     0,   115,     0,    86,
       0,   119,    93,     0,    94,   119,   119,   111,     0,   109,
     117,   119,     0,   104,    95,   104,   104,     0,     0,     0,
     104,   119,    98,     0,     0,     0,   112,   119,     0,   104,
     100,    87,   113,   116,    85,    96,   118,    97
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    12,    13,    40,   196,    15,    16,    17,    67,    19,
      20,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    51,    52,    53,    24,    25,    54,    87,
      26,   234,   235,    27,    28,    83,    80,   197,    55,   127,
      56,    57,   129,   140,   207
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const short int yypact[] =
{
     350,  -148,  -148,    35,  -148,  -148,    33,    70,   -22,   -22,
     -22,   350,    78,  -148,    54,  -148,    94,  -148,   384,  -148,
    -148,  -148,  -148,   -22,  -148,  -148,  -148,  -148,  -148,    38,
      45,   -22,    15,   491,   491,   103,  -148,  -148,  -148,  -148,
     737,  -148,  -148,     3,    82,   461,   558,    47,    48,     9,
    -148,  -148,   104,  -148,  -148,  -148,  -148,  -148,    83,    58,
    -148,    93,     4,    77,   585,   -22,   491,   596,  -148,  -148,
    -148,   105,  -148,   177,   -19,   -26,   -15,  -148,  -148,   629,
      73,    80,    18,   -22,  -148,    19,    89,    91,   491,  -148,
    -148,    95,    82,   101,    82,    82,   -23,   107,   -22,   -22,
     -22,   -22,   -22,    93,  -148,   117,   102,   -22,   663,   195,
     585,    24,   697,   128,   138,   131,   -22,   -22,   123,   150,
     125,   172,   -22,  -148,   129,   139,   137,   -22,   -22,   -30,
     -22,   491,   491,   491,   491,   491,  -148,   172,   -22,   491,
     293,   337,  -148,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   737,   737,
     -22,   -22,   141,   -22,   737,  -148,   568,   135,   142,   140,
     -22,  -148,    82,  -148,  -148,  -148,  -148,  -148,   -22,   737,
    -148,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   244,    16,   167,   103,
     491,   172,   148,   169,    82,    13,   -10,  -148,  -148,   -22,
     145,  -148,   153,   182,   372,   480,   496,   507,   601,   618,
     652,   684,   715,   723,   292,  -148,  -148,   478,  -148,  -148,
    -148,   -22,   154,  -148,    27,   186,  -148,  -148,   157,  -148,
     161,  -148,   162,   171,  -148,    82,   491,  -148,   178,  -148,
     491,   -22,  -148,   199,  -148,   -22,   -22,  -148,   578,  -148,
      26,   -22,   180,   737,  -148,   737,   737,    82,   185,   183,
     737,   -22,  -148,   201,   218,   189,  -148,   197,   223,   737,
    -148,  -148,  -148,    82,  -148,   233,  -148,  -148
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -148,   241,   221,  -148,     2,  -148,  -148,  -148,     0,   -56,
    -148,  -148,  -148,    53,   297,    -6,   280,   196,  -148,  -148,
    -148,    34,    10,   -89,    22,  -148,  -148,  -148,  -148,   -58,
    -148,   -21,    37,  -148,  -148,    75,   -33,  -147,  -148,    36,
    -148,  -148,   -14,   299,  -148
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -120
static const short int yytable[] =
{
      18,    81,    14,   124,   106,   104,  -119,   -54,    85,    85,
      22,    18,   198,    14,  -119,  -119,   170,   203,    48,   -55,
      29,    22,    23,    29,    29,   171,    90,    29,    50,   231,
     232,    29,   213,    23,    21,    82,    29,   233,    31,    91,
      18,   232,    14,  -119,    48,    21,    48,   136,   252,   230,
      22,    86,   105,  -119,    50,    29,    50,    23,   243,   -74,
      91,    29,    23,   163,    29,    29,   244,    48,  -119,  -119,
      29,    49,    29,   142,    21,    32,  -119,    50,    37,   178,
     -26,    29,    91,   211,    29,     1,     2,     3,     4,     5,
      61,    43,    48,    29,    48,    48,    96,    89,     3,    93,
      38,    39,    50,   103,    50,    50,     1,     2,     3,     4,
       5,    98,    99,   100,   101,   107,   272,   108,   273,   274,
      49,   102,    44,   278,   116,   173,   174,   175,   176,   177,
      88,   117,   285,   180,    46,    29,    47,   -52,   -52,   -52,
      41,    42,   122,   239,   123,    49,   125,   126,   128,   -41,
      29,    29,   -49,   138,   -49,   -49,   -49,   130,    18,    18,
     -49,   153,   154,    29,    18,   157,    48,   161,    22,    22,
     155,   156,    48,   160,    22,   162,    50,    85,   165,    18,
      23,    23,    50,    29,   166,   206,    23,    29,   236,    22,
     241,   209,    21,    21,   238,   208,    18,   240,    21,    82,
     247,    23,   248,   249,    48,   251,    22,   254,   255,   -62,
     -59,   -59,   256,    21,    50,   257,   258,   262,    23,   205,
     264,    23,   280,   -50,   -50,    49,   -50,   -50,   -50,   261,
      21,   271,   -50,   277,   -47,   -47,   -47,   -47,   276,   281,
     260,    29,   282,    29,   284,    48,   231,     1,     2,     3,
       4,     5,    36,     6,     7,    50,     8,   242,    48,     9,
      10,    84,   111,    18,   287,    18,    18,    48,    50,   286,
      18,   253,     0,    22,   237,    22,    22,    50,     0,    18,
      22,   259,     0,    48,     0,    23,     0,    23,    23,    22,
      38,    39,    23,    50,     0,     0,     0,    21,   126,    21,
      21,    23,    30,     0,    21,     0,     0,    33,    34,    35,
       0,   268,     0,    21,     0,     0,     0,    58,     0,     0,
     275,     0,    59,     0,   -52,   -52,   -52,     0,    60,     0,
      62,    63,   149,   150,   151,   152,   128,     0,    29,   -52,
       0,   -52,   -52,   -52,    92,    94,    95,   -52,    97,     0,
       0,    59,     0,     1,     2,     3,     4,     5,     0,     6,
       7,   109,     8,     0,   110,     9,    10,     0,     0,     0,
     112,     0,     0,   113,   114,   115,  -119,  -119,  -119,  -119,
       0,   118,   119,    29,   120,   121,     0,     1,     2,     3,
       4,     5,     0,    43,     0,    92,    11,   131,   132,   133,
     134,   135,     0,     0,   137,     0,   139,   141,     0,     0,
     113,  -119,  -119,  -119,  -119,   158,   159,     0,    29,     0,
       0,   164,     0,     0,    44,   167,   168,   169,     0,   172,
      29,     0,    45,     0,     0,     0,    46,   179,    47,     0,
       0,     0,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,     0,   199,
     200,   201,   202,     0,     1,     2,     3,     4,     5,   210,
      43,   225,   226,   227,   228,   229,     0,   212,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   224,
     224,   224,   224,     0,     1,     2,     3,     4,     5,     0,
      43,    64,     0,     0,    65,   245,     0,    29,   246,    66,
      90,   -66,   -66,    46,     0,    47,     0,     0,     0,  -119,
    -119,  -119,  -119,   112,   -66,   -66,    29,   -66,   -66,   -66,
     250,    64,     0,   -66,    65,  -119,  -119,  -119,  -119,    66,
       0,     0,    29,    46,     0,    47,  -119,  -119,  -119,  -119,
     263,     0,     0,    29,   265,   266,     0,     0,     0,   269,
     270,     1,     2,     3,     4,     5,     0,    43,     0,     0,
     279,     1,     2,     3,     4,     5,   283,    43,     0,     0,
       0,     1,     2,     3,     4,     5,     0,    43,     1,     2,
       3,     4,     5,     0,    43,     0,     0,     0,    44,     1,
       2,     3,     4,     5,    29,    43,    88,     0,    44,     0,
      46,     0,    47,   204,     0,     0,    88,     0,    44,     0,
      46,     0,    47,   267,     0,    64,    88,     0,     0,     0,
      46,     0,    47,    88,     0,     0,    44,    46,     0,    47,
    -119,  -119,  -119,  -119,    45,     0,     0,    29,    46,     0,
      47,   -42,   -42,   -42,   -42,     0,     0,  -119,  -119,  -119,
    -119,   -42,   -42,   -42,    29,   -42,   -42,     0,   -42,   -42,
     -42,   -42,     0,     0,     0,   -42,   -42,     0,   -42,   -42,
     -42,     0,     0,     0,   -42,   -44,   -44,   -44,   -44,     0,
       0,   -29,   -29,   -29,   -29,   -44,   -44,   -44,    29,   -44,
     -44,     0,   -44,   -44,   -44,   -44,     0,     0,     0,   -44,
     -44,     0,   -44,   -44,   -44,     0,     0,     0,   -44,   143,
     144,   145,   146,   -30,   -30,   -30,   -30,     0,     0,     0,
      29,     0,     0,   147,   148,     0,   149,   150,   151,   152,
       1,     2,     3,     4,     5,     0,     6,     7,     0,     8,
       0,     0,     9,    10,   -31,   -31,   -31,   -31,     0,     0,
       0,    29,   -32,   -32,   -32,   -32,     0,     0,     0,    29
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     118,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,   122,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,    55,
       0,     7,     0,     0,   162,   164,     0,     0,     0,     0,
       0,     0,   301,   218,     0,     0,     0,     0,     0,     0,
       1,     3,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      59,    63,    66,     0,    68,    70,    72,     0,     0,     0,
      74,     0,     0,   168,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    89,     0,    94,    99,   104,     0,
       0,     0,   109,     0,   208,   210,   212,   214,     0,     0,
       0,   216,     0,   303,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    11,    13,    15,    17,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    23,
       0,   285,   287,    25,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,   289,   291,   233,   293,   295,   297,
       0,     0,     0,   299,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   237,     0,     0,     0,     0,     0,     0,
       0,    29,    31,    33,    35,    37,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,    43,     0,    45,     0,     0,     0,
      47,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,     0,     0,
       0,   124,   126,   128,   130,     0,     0,     0,     0,     0,
       0,   132,   134,   136,   241,   138,   140,     0,   142,   144,
     146,   148,     0,     0,     0,   150,   152,     0,   154,   156,
     158,     0,     0,     0,   160,   170,   172,   174,   176,     0,
       0,   243,   245,   247,   249,   178,   180,   182,   251,   184,
     186,     0,   188,   190,   192,   194,     0,     0,     0,   196,
     198,     0,   200,   202,   204,     0,     0,     0,   206,     0,
       0,     0,     0,   253,   255,   257,   259,     0,     0,     0,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,   265,   267,   269,     0,     0,
       0,   271,   273,   275,   277,   279,     0,     0,     0,   281
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   119,     0,    26,     0,   119,     0,    83,     0,   119,
       0,   119,     0,   119,     0,   119,     0,   119,     0,   119,
       0,   119,     0,   119,     0,   119,     0,   119,     0,   119,
       0,   119,     0,   119,     0,   119,     0,   119,     0,   119,
       0,   119,     0,   119,     0,   119,     0,   119,     0,   119,
       0,   119,     0,    74,     0,   119,     0,   119,     0,    41,
       0,    39,     0,    49,    52,     0,    52,     0,    52,     0,
      52,     0,    52,     0,    52,     0,    62,    65,    68,     0,
      62,    65,    68,     0,    59,    62,    65,    68,     0,    59,
      62,    65,    68,     0,    59,    62,    65,    68,     0,    59,
      62,    65,    68,     0,    59,    62,    65,    68,     0,    59,
      62,    65,    68,     0,    51,     0,   119,     0,    54,     0,
     119,     0,    55,     0,    70,     0,    70,     0,    70,     0,
      70,     0,    70,     0,    70,     0,    70,     0,    70,     0,
      70,     0,    70,     0,    70,     0,    70,     0,    70,     0,
      70,     0,    70,     0,    70,     0,    70,     0,    70,     0,
      70,     0,   101,     0,    90,     0,   119,     0,   119,     0,
      45,     0,    45,     0,    45,     0,    45,     0,    45,     0,
      45,     0,    45,     0,    45,     0,    45,     0,    45,     0,
      45,     0,    45,     0,    45,     0,    45,     0,    45,     0,
      45,     0,    45,     0,    45,     0,    45,     0,   119,     0,
     119,     0,   119,     0,   119,     0,    47,     0,    51,     0,
     119,     0,    57,     0,   119,     0,   119,   122,     0,   122,
       0,    34,     0,    35,     0,    33,     0,    38,     0,    37,
       0,    36,     0,   119,     0,   119,     0,   119,     0,   119,
       0,    29,     0,   119,     0,   119,     0,   119,     0,   119,
       0,    30,     0,   119,     0,   119,     0,   119,     0,   119,
       0,    31,     0,   119,     0,   119,     0,   119,     0,   119,
       0,    32,     0,    52,     0,    67,     0,    67,     0,    67,
       0,    67,     0,    67,     0,    67,     0,    67,     0,    67,
       0,   117,     0,   119,     0
};

static const short int yycheck[] =
{
       0,    34,     0,    92,    62,    61,    32,    33,     5,     5,
       0,    11,   159,    11,    33,    34,    46,   164,    18,    34,
      46,    11,     0,    46,    46,    55,    49,    46,    18,    13,
      14,    46,   179,    11,     0,    35,    46,    21,     5,    45,
      40,    14,    40,    53,    44,    11,    46,   103,    21,   196,
      40,    48,    48,    38,    44,    46,    46,    35,    45,    50,
      66,    46,    40,   121,    46,    46,    53,    67,    50,    50,
      46,    18,    46,    49,    40,     5,    50,    67,     0,   137,
      45,    46,    88,   172,    46,     3,     4,     5,     6,     7,
      45,     9,    92,    46,    94,    95,    48,    44,     5,    46,
      46,    47,    92,    45,    94,    95,     3,     4,     5,     6,
       7,    28,    29,    30,    31,    38,   263,    64,   265,   266,
      67,    38,    40,   270,    51,   131,   132,   133,   134,   135,
      48,    51,   279,   139,    52,    46,    54,    32,    33,    34,
      46,    47,    51,   201,    49,    92,    45,    94,    95,    45,
      46,    46,    47,    51,    49,    50,    51,    50,   158,   159,
      55,    33,    34,    46,   164,    34,   166,    17,   158,   159,
      32,    33,   172,    50,   164,    50,   166,     5,    49,   179,
     158,   159,   172,    46,    45,    50,   164,    46,    21,   179,
      21,    51,   158,   159,   200,    53,   196,    49,   164,   199,
      55,   179,    49,    21,   204,    51,   196,    21,    51,    32,
      33,    34,    51,   179,   204,    53,    45,   250,   196,   166,
      21,   199,    21,    46,    47,   172,    49,    50,    51,    51,
     196,    51,    55,    50,    39,    40,    41,    42,    53,    21,
     246,    46,    53,    46,    21,   245,    13,     3,     4,     5,
       6,     7,    11,     9,    10,   245,    12,   204,   258,    15,
      16,    40,    66,   263,   285,   265,   266,   267,   258,   283,
     270,   234,    -1,   263,   199,   265,   266,   267,    -1,   279,
     270,   245,    -1,   283,    -1,   263,    -1,   265,   266,   279,
      46,    47,   270,   283,    -1,    -1,    -1,   263,   245,   265,
     266,   279,     3,    -1,   270,    -1,    -1,     8,     9,    10,
      -1,   258,    -1,   279,    -1,    -1,    -1,    18,    -1,    -1,
     267,    -1,    23,    -1,    32,    33,    34,    -1,    29,    -1,
      31,    32,    39,    40,    41,    42,   283,    -1,    46,    47,
      -1,    49,    50,    51,    45,    46,    47,    55,    49,    -1,
      -1,    52,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    64,    12,    -1,    65,    15,    16,    -1,    -1,    -1,
      71,    -1,    -1,    74,    75,    76,    39,    40,    41,    42,
      -1,    82,    83,    46,    85,    86,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    96,    46,    98,    99,   100,
     101,   102,    -1,    -1,   105,    -1,   107,   110,    -1,    -1,
     111,    39,    40,    41,    42,   116,   117,    -1,    46,    -1,
      -1,   122,    -1,    -1,    40,   126,   127,   128,    -1,   130,
      46,    -1,    48,    -1,    -1,    -1,    52,   138,    54,    -1,
      -1,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,    -1,   160,
     161,   162,   163,    -1,     3,     4,     5,     6,     7,   170,
       9,   191,   192,   193,   194,   195,    -1,   178,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,    -1,     3,     4,     5,     6,     7,    -1,
       9,    40,    -1,    -1,    43,   206,    -1,    46,   209,    48,
      49,    33,    34,    52,    -1,    54,    -1,    -1,    -1,    39,
      40,    41,    42,   224,    46,    47,    46,    49,    50,    51,
     231,    40,    -1,    55,    43,    39,    40,    41,    42,    48,
      -1,    -1,    46,    52,    -1,    54,    39,    40,    41,    42,
     251,    -1,    -1,    46,   255,   256,    -1,    -1,    -1,   260,
     261,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
     271,     3,     4,     5,     6,     7,   277,     9,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    -1,    40,     3,
       4,     5,     6,     7,    46,     9,    48,    -1,    40,    -1,
      52,    -1,    54,    45,    -1,    -1,    48,    -1,    40,    -1,
      52,    -1,    54,    45,    -1,    40,    48,    -1,    -1,    -1,
      52,    -1,    54,    48,    -1,    -1,    40,    52,    -1,    54,
      39,    40,    41,    42,    48,    -1,    -1,    46,    52,    -1,
      54,    22,    23,    24,    25,    -1,    -1,    39,    40,    41,
      42,    32,    33,    34,    46,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    50,
      51,    -1,    -1,    -1,    55,    22,    23,    24,    25,    -1,
      -1,    39,    40,    41,    42,    32,    33,    34,    46,    36,
      37,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    50,    51,    -1,    -1,    -1,    55,    22,
      23,    24,    25,    39,    40,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    36,    37,    -1,    39,    40,    41,    42,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    12,
      -1,    -1,    15,    16,    39,    40,    41,    42,    -1,    -1,
      -1,    46,    39,    40,    41,    42,    -1,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    10,    12,    15,
      16,    46,    57,    58,    60,    61,    62,    63,    64,    65,
      66,    77,    78,    80,    82,    83,    86,    89,    90,    46,
      99,     5,     5,    99,    99,    99,    57,     0,    46,    47,
      59,    46,    47,     9,    40,    48,    52,    54,    64,    69,
      78,    79,    80,    81,    84,    94,    96,    97,    99,    99,
      99,    45,    99,    99,    40,    43,    48,    64,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      92,    92,    64,    91,    58,     5,    48,    85,    48,    69,
      49,    71,    99,    69,    99,    99,    48,    99,    28,    29,
      30,    31,    38,    45,    65,    48,    85,    38,    69,    70,
      99,    73,    99,    99,    99,    99,    51,    51,    99,    99,
      99,    99,    51,    49,    79,    45,    69,    95,    69,    98,
      50,    99,    99,    99,    99,    99,    65,    99,    51,    99,
      99,    70,    49,    22,    23,    24,    25,    36,    37,    39,
      40,    41,    42,    33,    34,    32,    33,    34,    99,    99,
      50,    17,    50,    85,    99,    49,    45,    99,    99,    99,
      46,    55,    99,    71,    71,    71,    71,    71,    85,    99,
      71,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    60,    93,    93,    99,
      99,    99,    99,    93,    45,    69,    50,   100,    53,    51,
      99,    79,    99,    93,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    72,    72,    72,    72,    72,
      93,    13,    14,    21,    87,    88,    21,    91,    71,    85,
      49,    21,    69,    45,    53,    99,    99,    55,    49,    21,
      99,    51,    21,    88,    21,    51,    51,    53,    45,    95,
      71,    51,    92,    99,    21,    99,    99,    45,    69,    99,
      99,    51,    93,    93,    93,    69,    53,    50,    93,    99,
      21,    21,    53,    99,    21,    93,    98,    87
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (Parser_Context* context);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))							\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex (&yylval, &yylloc, scanner)


#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)
#define Parser_nerrs yynerrs
#define Parser_char yychar
#define Parser_lval yylval
#define Parser_lloc yylloc

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Parser_Context* context)
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (context);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Parser_Context* context)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, Location, context);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	  && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, Parser_Context* context, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, YYLTYPE *yylocp, Parser_Context* context, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yylocp, context, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      , Parser_Context* context)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
  YYUSE (context);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (yylocp, context, YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 4:

/* Line 936 of glr.c  */
#line 237 "parser/delta.y"
    { context->ast->addExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node)); }
    break;

  case 7:

/* Line 936 of glr.c  */
#line 244 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node); }
    break;

  case 8:

/* Line 936 of glr.c  */
#line 246 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node); }
    break;

  case 9:

/* Line 936 of glr.c  */
#line 248 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node); }
    break;

  case 10:

/* Line 936 of glr.c  */
#line 250 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node); }
    break;

  case 11:

/* Line 936 of glr.c  */
#line 252 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 12:

/* Line 936 of glr.c  */
#line 258 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 13:

/* Line 936 of glr.c  */
#line 260 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 14:

/* Line 936 of glr.c  */
#line 262 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 15:

/* Line 936 of glr.c  */
#line 264 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 16:

/* Line 936 of glr.c  */
#line 273 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 17:

/* Line 936 of glr.c  */
#line 275 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 18:

/* Line 936 of glr.c  */
#line 277 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 19:

/* Line 936 of glr.c  */
#line 283 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Assign, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
										}
    break;

  case 20:

/* Line 936 of glr.c  */
#line 287 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::AssignAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
										}
    break;

  case 21:

/* Line 936 of glr.c  */
#line 291 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::AssignSubs, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
										}
    break;

  case 22:

/* Line 936 of glr.c  */
#line 295 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::AssignMult, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
										}
    break;

  case 23:

/* Line 936 of glr.c  */
#line 299 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::AssignDiv, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
										}
    break;

  case 24:

/* Line 936 of glr.c  */
#line 307 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 25:

/* Line 936 of glr.c  */
#line 309 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 26:

/* Line 936 of glr.c  */
#line 313 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeSlot((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.name)); }
    break;

  case 27:

/* Line 936 of glr.c  */
#line 315 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeSlot((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.name), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.node)); }
    break;

  case 28:

/* Line 936 of glr.c  */
#line 319 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeConstSlot((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.node)); }
    break;

  case 29:

/* Line 936 of glr.c  */
#line 325 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Add, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 30:

/* Line 936 of glr.c  */
#line 327 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Subs, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 31:

/* Line 936 of glr.c  */
#line 329 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Mult, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 32:

/* Line 936 of glr.c  */
#line 331 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Div, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 33:

/* Line 936 of glr.c  */
#line 336 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompEq, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 34:

/* Line 936 of glr.c  */
#line 338 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompGte, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 35:

/* Line 936 of glr.c  */
#line 340 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompLte, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 36:

/* Line 936 of glr.c  */
#line 342 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompLt, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 37:

/* Line 936 of glr.c  */
#line 344 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompGt, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 38:

/* Line 936 of glr.c  */
#line 346 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::CompNeq, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 39:

/* Line 936 of glr.c  */
#line 351 "parser/delta.y"
    {
											AstNodeFunCall* f = new AstNodeFunCall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 40:

/* Line 936 of glr.c  */
#line 356 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.node); }
    break;

  case 41:

/* Line 936 of glr.c  */
#line 357 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 42:

/* Line 936 of glr.c  */
#line 359 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 43:

/* Line 936 of glr.c  */
#line 360 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 44:

/* Line 936 of glr.c  */
#line 362 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.node), AstNodeOperator::Negative, 0); }
    break;

  case 45:

/* Line 936 of glr.c  */
#line 368 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 46:

/* Line 936 of glr.c  */
#line 370 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 47:

/* Line 936 of glr.c  */
#line 372 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.node), AstNodeOperator::Negative, 0); }
    break;

  case 48:

/* Line 936 of glr.c  */
#line 374 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 49:

/* Line 936 of glr.c  */
#line 381 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 50:

/* Line 936 of glr.c  */
#line 383 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 51:

/* Line 936 of glr.c  */
#line 385 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 52:

/* Line 936 of glr.c  */
#line 390 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 53:

/* Line 936 of glr.c  */
#line 392 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 54:

/* Line 936 of glr.c  */
#line 398 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 55:

/* Line 936 of glr.c  */
#line 400 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 56:

/* Line 936 of glr.c  */
#line 402 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 57:

/* Line 936 of glr.c  */
#line 404 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.node), AstNodeOperator::Not, 0); }
    break;

  case 58:

/* Line 936 of glr.c  */
#line 406 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.node); }
    break;

  case 59:

/* Line 936 of glr.c  */
#line 408 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 60:

/* Line 936 of glr.c  */
#line 413 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Or, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 61:

/* Line 936 of glr.c  */
#line 415 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Or, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 62:

/* Line 936 of glr.c  */
#line 417 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 63:

/* Line 936 of glr.c  */
#line 421 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Xor, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 64:

/* Line 936 of glr.c  */
#line 423 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::Xor, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 65:

/* Line 936 of glr.c  */
#line 425 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 66:

/* Line 936 of glr.c  */
#line 429 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::And, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 67:

/* Line 936 of glr.c  */
#line 431 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeOperator((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), AstNodeOperator::And, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node)); }
    break;

  case 68:

/* Line 936 of glr.c  */
#line 433 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 69:

/* Line 936 of glr.c  */
#line 439 "parser/delta.y"
    { 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.node));
											f->setSlot((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 70:

/* Line 936 of glr.c  */
#line 445 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 71:

/* Line 936 of glr.c  */
#line 451 "parser/delta.y"
    {
											AstNodeFunCall* f = new AstNodeFunCall((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 72:

/* Line 936 of glr.c  */
#line 457 "parser/delta.y"
    {
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.node));
											f->setSlot((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 73:

/* Line 936 of glr.c  */
#line 468 "parser/delta.y"
    { 
											AstNodeFunCall* f = dynamic_cast<AstNodeFunCall*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
											f->addParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 74:

/* Line 936 of glr.c  */
#line 474 "parser/delta.y"
    { 
											AstNodeFunCall* f = new AstNodeFunCall();
											f->addParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 75:

/* Line 936 of glr.c  */
#line 484 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeNumber((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.number)); }
    break;

  case 76:

/* Line 936 of glr.c  */
#line 486 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 77:

/* Line 936 of glr.c  */
#line 488 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeBoolean((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.boolean)); }
    break;

  case 78:

/* Line 936 of glr.c  */
#line 490 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeSymbol((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.symbol)); }
    break;

  case 79:

/* Line 936 of glr.c  */
#line 496 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 80:

/* Line 936 of glr.c  */
#line 498 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 81:

/* Line 936 of glr.c  */
#line 500 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 82:

/* Line 936 of glr.c  */
#line 502 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 83:

/* Line 936 of glr.c  */
#line 508 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeSlotDecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.name));
										}
    break;

  case 84:

/* Line 936 of glr.c  */
#line 512 "parser/delta.y"
    {
											((*yyvalp).node) = new AstNodeSlotDecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.name), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.node));
										}
    break;

  case 85:

/* Line 936 of glr.c  */
#line 519 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (12))].yystate.yysemantics.yysval.node));
											f->setName((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (12))].yystate.yysemantics.yysval.name));
											f->setCodeBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (12))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 86:

/* Line 936 of glr.c  */
#line 526 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.node));
											f->setName((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.name));
											f->setCodeBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 87:

/* Line 936 of glr.c  */
#line 536 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.node));
											f->setCodeBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 88:

/* Line 936 of glr.c  */
#line 542 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.node));
											f->setCodeBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = f;
										}
    break;

  case 89:

/* Line 936 of glr.c  */
#line 551 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = new AstNodeFunctionBlock();
											((*yyvalp).node) = f;
										}
    break;

  case 90:

/* Line 936 of glr.c  */
#line 556 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = new AstNodeFunctionBlock();
											f->addParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.name));
											((*yyvalp).node) = f;
										}
    break;

  case 91:

/* Line 936 of glr.c  */
#line 562 "parser/delta.y"
    { 
											AstNodeFunctionBlock* f = dynamic_cast<AstNodeFunctionBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
											f->addParam((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.name));
											((*yyvalp).node) = f;
										}
    break;

  case 92:

/* Line 936 of glr.c  */
#line 575 "parser/delta.y"
    { 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.node));
											b->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.node));
											b->setElifBlock(0);
											b->setElseBlock(0);
											((*yyvalp).node) = b;
										}
    break;

  case 93:

/* Line 936 of glr.c  */
#line 584 "parser/delta.y"
    { 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.node));
											b->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (8))].yystate.yysemantics.yysval.node));
											b->setElifBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.node));
											b->setElseBlock(0);
											((*yyvalp).node) = b;
										}
    break;

  case 94:

/* Line 936 of glr.c  */
#line 593 "parser/delta.y"
    { 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.node));
											b->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (8))].yystate.yysemantics.yysval.node));
											b->setElifBlock(0);
											b->setElseBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 95:

/* Line 936 of glr.c  */
#line 602 "parser/delta.y"
    { 
											AstNodeIfBlock* b = new AstNodeIfBlock();
											b->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.node));
											b->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (9))].yystate.yysemantics.yysval.node));
											b->setElifBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (9))].yystate.yysemantics.yysval.node));
											b->setElseBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 96:

/* Line 936 of glr.c  */
#line 613 "parser/delta.y"
    {
											AstNodeIfBlock* current = new AstNodeIfBlock();

											current->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.node));
											current->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = current;
										}
    break;

  case 97:

/* Line 936 of glr.c  */
#line 621 "parser/delta.y"
    {
											AstNodeIfBlock* current = new AstNodeIfBlock();

											current->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.node));
											current->setIfBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.node));
											current->setElifBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = current;
										}
    break;

  case 98:

/* Line 936 of glr.c  */
#line 632 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.node); }
    break;

  case 99:

/* Line 936 of glr.c  */
#line 638 "parser/delta.y"
    { 
											AstNodeWhileBlock* block = new AstNodeWhileBlock();
											block->setBoolExpr((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.node));
											block->setBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = block;
										}
    break;

  case 100:

/* Line 936 of glr.c  */
#line 649 "parser/delta.y"
    { 
											AstNodeForBlock* b = dynamic_cast<AstNodeForBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.node));
											b->setIterator((((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.node));
											b->setBlock((((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 101:

/* Line 936 of glr.c  */
#line 658 "parser/delta.y"
    { 
											AstNodeForBlock* b = new AstNodeForBlock();
											b->addInVar((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 102:

/* Line 936 of glr.c  */
#line 664 "parser/delta.y"
    {
											AstNodeForBlock* b = dynamic_cast<AstNodeForBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
											b->addInVar((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 103:

/* Line 936 of glr.c  */
#line 673 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.node); }
    break;

  case 104:

/* Line 936 of glr.c  */
#line 677 "parser/delta.y"
    { ((*yyvalp).node) = new AstNodeBlock(); }
    break;

  case 105:

/* Line 936 of glr.c  */
#line 679 "parser/delta.y"
    { 
											AstNodeBlock* b = dynamic_cast<AstNodeBlock*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.node)); 
											b->addExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = b;
										}
    break;

  case 106:

/* Line 936 of glr.c  */
#line 689 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.node); }
    break;

  case 107:

/* Line 936 of glr.c  */
#line 693 "parser/delta.y"
    {
											AstNodeArray* a = new AstNodeArray();
											((*yyvalp).node) = a;
										}
    break;

  case 108:

/* Line 936 of glr.c  */
#line 698 "parser/delta.y"
    {
											AstNodeArray* a = new AstNodeArray();
											a->addValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = a;
										}
    break;

  case 109:

/* Line 936 of glr.c  */
#line 704 "parser/delta.y"
    {
											AstNodeArray* a = dynamic_cast<AstNodeArray*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
											a->addValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = a;
										}
    break;

  case 110:

/* Line 936 of glr.c  */
#line 716 "parser/delta.y"
    {
											AstNodeRange* r = new AstNodeRange((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = r;
										}
    break;

  case 111:

/* Line 936 of glr.c  */
#line 721 "parser/delta.y"
    {
											AstNodeRange* r = new AstNodeRange((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = r;
										}
    break;

  case 112:

/* Line 936 of glr.c  */
#line 726 "parser/delta.y"
    {
											AstNodeRange* r = new AstNodeRange((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (9))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = r;
										}
    break;

  case 113:

/* Line 936 of glr.c  */
#line 731 "parser/delta.y"
    {
											AstNodeRange* r = new AstNodeRange((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (10))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (10))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = r;
										}
    break;

  case 114:

/* Line 936 of glr.c  */
#line 740 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.node); }
    break;

  case 115:

/* Line 936 of glr.c  */
#line 742 "parser/delta.y"
    { ((*yyvalp).node) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.node); }
    break;

  case 116:

/* Line 936 of glr.c  */
#line 747 "parser/delta.y"
    { 
											AstNodeMap* m = new AstNodeMap();
											((*yyvalp).node) = m;
										}
    break;

  case 117:

/* Line 936 of glr.c  */
#line 752 "parser/delta.y"
    { 
											AstNodeMap* m = new AstNodeMap();
											m->addValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = m;
										}
    break;

  case 118:

/* Line 936 of glr.c  */
#line 758 "parser/delta.y"
    { 
											AstNodeMap* m = dynamic_cast<AstNodeMap*>((((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (9))].yystate.yysemantics.yysval.node));
											m->addValue((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (9))].yystate.yysemantics.yysval.node), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (9))].yystate.yysemantics.yysval.node));
											((*yyvalp).node) = m;
										}
    break;



/* Line 936 of glr.c  */
#line 2329 "parser.yy.cpp"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Parser_Context* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, Parser_Context* context)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, &yys->yyloc, context);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, &yys->yyloc, context);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh, context);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(yystate) \
  ((yystate) == (-148))

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp, Parser_Context* context)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp, context);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
	/* Set default location.  */
	yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp, context);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp, Parser_Context* context)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (context);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)		       , context);
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval, Parser_Context* context)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc, context));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc, context));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp, Parser_Context* context);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp, Parser_Context* context)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, context));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp, context));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp, Parser_Context* context)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp, context);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys, context);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp, context);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1, YYLTYPE *yylocp, Parser_Context* context)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (yylocp, context, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp, Parser_Context* context)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, context);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp, context);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, Parser_Context* context)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp, context);
	      return yyreportAmbiguity (yybest, yyp, yylocp, context);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp, context);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy, context);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, yylocp, context);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, context);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, Parser_Context* context)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     , context));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn, YYLTYPE *yylocp, Parser_Context* context)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse, context));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	    }

	  if (yychar <= YYEOF)
	    {
	      yychar = yytoken = YYEOF;
	      YYDPRINTF ((stderr, "Now at end of input.\n"));
	    }
	  else
	    {
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }

	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse, context));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn, yylocp, context));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse, context));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp, Parser_Context* context)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (&yylloc, context, YY_("syntax error"));
#else
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  size_t yysize1;
  yybool yysize_overflow = yyfalse;
  char* yymsg = NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
                yysize_overflow |= yysize1 < yysize;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  yysize1 = yysize + strlen (yyformat);
  yysize_overflow |= yysize1 < yysize;
  yysize = yysize1;

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (&yylloc, context, yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (&yylloc, context, YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp, Parser_Context* context)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, &yylloc, context, NULL);
	if (yychar != YYEMPTY)
	  {
	    /* We throw away the lookahead, but the error range
	       of the shifted error token must take it into account.  */
	    yyGLRState *yys = yystackp->yytops.yystates[0];
	    yyGLRStackItem yyerror_range[3];
	    yyerror_range[1].yystate.yyloc = yys->yyloc;
	    yyerror_range[2].yystate.yyloc = yylloc;
	    YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, &yylloc, context);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	if (yychar <= YYEOF)
	  {
	    yychar = yytoken = YYEOF;
	    YYDPRINTF ((stderr, "Now at end of input.\n"));
	  }
	else
	  {
	    yytoken = YYTRANSLATE (yychar);
	    YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	  }
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yypact_value_is_default (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (! yytable_value_is_error (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, &yylloc, context, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      yystackp->yyerror_range[2].yystate.yyloc = yylloc;
	      YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != NULL)
	yydestroyGLRState ("Error: popping", yys, context);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, &yylloc, context, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (Parser_Context* context)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif


  /* User initialization code.  */
  
/* Line 2356 of glr.c  */
#line 45 "parser/delta.y"
{
	yydebug = 1;
}

/* Line 2356 of glr.c  */
#line 3781 "parser.yy.cpp"

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack, context);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, context));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		}

	      if (yychar <= YYEOF)
		{
		  yychar = yytoken = YYEOF;
		  YYDPRINTF ((stderr, "Now at end of input.\n"));
		}
	      else
		{
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}

	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack, context);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, context));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, &yylloc, context));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, &yylloc, context, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack, context));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yystack.yyerror_range[1].yystate.yyloc = yylloc;
	      yyreportSyntaxError (&yystack, context);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack, context));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, context);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, &yylloc, context);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
		    if (yys->yypred != NULL)
		      yydestroyGLRState ("Cleanup: popping", yys, context);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		     yyp->yystate.yyresolved, yyp->yystate.yylrState,
		     (unsigned long int) yyp->yystate.yyposn,
		     (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    YYFPRINTF (stderr, ", firstVal: %ld",
		       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
	}
      else
	{
	  YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
		     yyp->yyoption.yyrule - 1,
		     (long int) YYINDEX (yyp->yyoption.yystate),
		     (long int) YYINDEX (yyp->yyoption.yynext));
	}
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	       (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif



/* Line 2659 of glr.c  */
#line 776 "parser/delta.y"


/* =====================
 *
 * Error handler
 *
 * ===================== */
void Parser_error(YYLTYPE* locp, Parser_Context* context, const char* err)
{
   cout << locp->first_line << ":" << err << endl;
}



