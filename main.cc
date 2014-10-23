/* File: main.cc
 * -------------
 * This file defines the main() routine for the program and not much else.
 * You should not need to modify this file.
 */
 
#include "scanner.h"
#include "utility.h"
#include <stdio.h>
#include "parser.h"

static void ParseCommandLine(int argc, char *argv[]);


/*
 * Function: main()
 * ----------------
 * Entry point to the entire program.  We parse the command line and turn
 * on any debugging flags requested by the user when invoking the program.
 * Call Inityylex() to set up the scanner, Inityyparse() to set up the parser,
 * and then call yyparse() to parse a valid program from the input. Returns
 * 0 if parsed successfully and no errors, -1 otherwise
 */
int main(int argc, char *argv[])
{
  ParseCommandLine(argc, argv);
  Inityylex();
  Inityyparse();
  return ((yyparse() == 0 && numErrors == 0) ? 0 : -1);
}


/*
 * Function: ParseCommandLine
 * --------------------------
 * Turn on the debugging flags from the command line.  Verifies that
 * first argument is -d, and then interpret all the arguments that follow
 * as being flags to turn on.
 */
static void ParseCommandLine(int argc, char *argv[])
{
  int i;
  
  if (argc == 1) 
    return;
  
  if (strcmp(argv[1], "-d") != 0) { // first arg is not -d
    printf("Usage:   -d <debug-key-1> <debug-key-2> ... \n");
    exit(2);
  }

  for (i = 2; i < argc; i++) 
    DebugOn(argv[i]);
}
