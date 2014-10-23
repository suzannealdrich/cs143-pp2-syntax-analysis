/*
 * File: utiliy.cc
 * ---------------
 * Some of this code is based on code from Eric Roberts' cslib libraries.
 */

#include "utility.h"
#include <stdarg.h>
#include <string.h>
#include "scanner.h"
#include "parser.h" // for struct yyltype

#define BufferSize   2048
int numErrors = 0;

static void UnderlineErrorInLine(const char *line, struct yyltype *pos);
  
void ReportError(struct yyltype *pos, const char *format, ...)
{
  va_list args;
  char errbuf[BufferSize];
  
  numErrors++;
  va_start(args, format);
  vsprintf(errbuf,format, args);
  va_end(args);
  if (strlen(errbuf) > BufferSize) {
    Failure("Error message too long\n");
  } else {
    fflush(stdout); // make sure any buffered text has been output
    if (pos) {
      fprintf(stderr,"\n*** Error line %d column %d\n",
              pos->first_line, pos->first_column);
      UnderlineErrorInLine(GetLineNumbered(pos->first_line), pos);
    } else {
      fprintf(stderr,"\n*** Error at unidentified line\n");
    }
   fprintf(stderr,"*** %s\n\n", errbuf);
  }
}


// Map standard yacc error function to ours
void yyerror(char *msg)
{
  ReportError(&yylloc, "%s", msg);
}

static void UnderlineErrorInLine(const char *line, struct yyltype *pos)
{
  if (!line) return;
  fprintf(stderr, "%s\n", line);
  for (int i = 1; i <= pos->last_column; i++)
    fprintf(stderr, "%c", i >= pos->first_column ? '^' : ' ');
  fprintf(stderr, "\n");
}

void Failure(const char *format, ...)
{
  va_list args;
  char errbuf[BufferSize];
  
  va_start(args, format);
  vsprintf(errbuf, format, args);
  va_end(args);
  fflush(stdout);
  if (strlen(errbuf) > BufferSize) 
    fprintf(stderr, "\n*** Failure: Failure message too long\n\n");
  else 
    fprintf(stderr,"\n*** Failure: %s\n\n", errbuf);
  exit(1);
}



#define MaxDebugKeys 256

static char *gDebugKeys[MaxDebugKeys];
static int gNumDebugKeys = 0;

static bool KeyInList(const char *key)
{
  int i;
  for (i = 0; i < gNumDebugKeys; i++) 
    if (strcmp(key, gDebugKeys[i]) == 0)
      return true;
  return false;
}

void DebugOn(const char *key)
{
  if (KeyInList(key))
    return;
  Assert(gNumDebugKeys < MaxDebugKeys - 1);
  gDebugKeys[gNumDebugKeys++] = strdup(key);
}



void PrintDebug(const char *key, const char *format, ...)
{
  va_list args;
  char buf[BufferSize];

  if (!KeyInList(key)) 
    return;
  
  va_start(args, format);
  vsprintf(buf, format, args);
  va_end(args);
  if (strlen(buf) > BufferSize) 
    Failure("PrintDebug message too long\n");
  else
    printf("+++ Debug(%s): %s\n", key, buf);
}
