/*
 * File: scanner.h
 * ---------------
 * You should not need to modify this file. It declare a few constants,
 * types, variables,and functions that are used and/or exported by
 * the lex-generated scanner.
 */

#ifndef _H_scanner
#define _H_scanner


extern char *yytext;     // Text of lexeme just scanned

int yylex(void);         // Defined in the generated lex.yy.c file
void Inityylex();        // Defined in scanner.l user subroutine section
const char *GetLineNumbered(int number); // ditto
 
#endif
