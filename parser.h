/*
 * File: parser.h
 * --------------
 * Do not modify this file. It provides constants and type definitions
 * that will be used by the parser.
 */

#ifndef _H_parser
#define _H_parser

 
#include "y.tab.h"        // use include generated header to get define
extern struct yyltype yylloc;    // global defined in generated y.tab.c file
 
int yyparse(void);       // Defined in the generated y.tab.c file
void Inityyparse(void);  // Defined in parser.y

#endif
