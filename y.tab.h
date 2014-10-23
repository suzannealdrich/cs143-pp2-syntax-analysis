typedef union {
  int integerConstant;
  bool boolConstant;
  const char *stringConstant;
  double doubleConstant;
  char identifier[128];
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#define	T_Void	257
#define	T_Bool	258
#define	T_Int	259
#define	T_Double	260
#define	T_String	261
#define	T_Class	262
#define	T_LessEqual	263
#define	T_GreaterEqual	264
#define	T_Equal	265
#define	T_NotEqual	266
#define	T_And	267
#define	T_Or	268
#define	T_Null	269
#define	T_Extends	270
#define	T_This	271
#define	T_While	272
#define	T_For	273
#define	T_If	274
#define	T_Else	275
#define	T_Return	276
#define	T_Identifier	277
#define	T_StringConstant	278
#define	T_IntConstant	279
#define	T_DoubleConstant	280
#define	T_BoolConstant	281
#define	T_New	282
#define	T_NewArray	283
#define	T_Print	284
#define	T_ReadInteger	285
#define	T_ReadLine	286
#define	T_PostPlus	287
#define	T_PostMinus	288
#define	T_Switch	289
#define	T_Case	290
#define	T_Default	291
#define	T_Break	292
#define	Lower_Than_Else	293
#define	UMINUS	294


extern YYSTYPE yylval;
