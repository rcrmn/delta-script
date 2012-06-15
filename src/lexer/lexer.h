/*
 * Roc Ramon
 */

#pragma once
#ifndef __LEXER_H__
#define __LEXER_H__

#define ERROR -1

#define DOT 1
#define END 2 //
#define NEW 3 //
#define FUN 4
#define NAME 5
#define CLASS_NAME 6
#define CLASS 7
#define OPAREN 8 // Open parenthesys
#define CPAREN 9 // Close parenthesys
#define NUMBER 10
#define STRING 11
#define OPERATOR 12
#define END_STMT 13
#define BOOLEAN 14
#define COMMA 15
#define CONTROL 16
#define OCURL 17 // Open curly braces
#define CCURL 18 // Close curly braces
#define ARGS_ANY 19 // Any number of arguments (*x)
#define IF 20 //
#define ELIF 21 //
#define ELSE 22 //
#define WHILE 23 //
#define FOR 24 //
#define IN 25 //
#define BREAK 26 //
#define CONTINUE 27 //
#define VAR 28
#define OBRACKET 29
#define CBRACKET 30
#define RANGE 31
#define COLON 32 //
#define RETURN 33

#ifdef __cplusplus
extern "C" {
#endif
	#include <stdio.h>
	int lexer(FILE * input);
#ifdef __cplusplus
};
#endif


#endif

