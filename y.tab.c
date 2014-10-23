
/*  A Bison parser, made from parser.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define YYLSP_NEEDED

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

#line 10 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include <stdio.h>
#include <stdlib.h>
#include "utility.h" // for PrintDebug



#line 41 "parser.y"
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

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		191
#define	YYFLAG		-32768
#define	YYNTBASE	60

#define YYTRANSLATE(x) ((unsigned)(x) <= 294 ? yytranslate[x] : 97)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    48,     2,     2,     2,    47,     2,     2,    54,
    55,    45,    43,    56,    44,    51,    46,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    59,    52,    41,
    40,    42,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    50,     2,    53,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    58,     2,    57,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    49
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     6,     8,    10,    12,    14,    17,    20,
    23,    25,    27,    29,    31,    33,    36,    40,    47,    49,
    50,    54,    56,    63,    66,    73,    76,    77,    80,    81,
    83,    85,    87,    91,    94,    95,    97,   100,   102,   104,
   106,   108,   111,   114,   116,   119,   123,   125,   126,   129,
   134,   137,   138,   144,   146,   147,   151,   153,   163,   169,
   176,   179,   180,   190,   193,   194,   199,   203,   204,   206,
   208,   211,   216,   218,   220,   222,   225,   228,   230,   232,
   236,   240,   244,   248,   252,   256,   259,   263,   267,   271,
   275,   279,   283,   287,   291,   294,   298,   302,   307,   314,
   316,   318,   320,   322
};

static const short yyrhs[] = {    61,
     0,    61,    62,     0,     0,    63,     0,    70,     0,    69,
     0,    66,     0,    64,    52,     0,     1,    52,     0,    65,
    23,     0,     5,     0,     6,     0,     4,     0,     7,     0,
     3,     0,     8,    23,     0,    65,    50,    53,     0,    65,
    23,    54,    67,    55,    52,     0,    68,     0,     0,    68,
    56,    64,     0,    64,     0,    65,    23,    54,    67,    55,
    74,     0,     1,    57,     0,     8,    23,    71,    58,    72,
    57,     0,    16,    23,     0,     0,    72,    73,     0,     0,
    63,     0,    66,     0,    69,     0,    58,    75,    57,     0,
    75,    76,     0,     0,    63,     0,    77,    52,     0,    85,
     0,    84,     0,    83,     0,    87,     0,    92,    52,     0,
    93,    52,     0,    74,     0,    91,    52,     0,    78,    40,
    95,     0,    95,     0,     0,    79,    23,     0,    95,    50,
    95,    53,     0,    95,    51,     0,     0,    79,    23,    54,
    81,    55,     0,    82,     0,     0,    82,    56,    95,     0,
    95,     0,    19,    54,    77,    52,    94,    52,    77,    55,
    76,     0,    18,    54,    94,    55,    76,     0,    20,    54,
    94,    55,    76,    86,     0,    21,    76,     0,     0,    35,
    54,    95,    55,    58,    89,    88,    90,    57,     0,    88,
    89,     0,     0,    36,    25,    59,    75,     0,    37,    59,
    75,     0,     0,    38,     0,    22,     0,    22,    95,     0,
    30,    54,    82,    55,     0,    95,     0,    96,     0,    78,
     0,    78,    33,     0,    78,    34,     0,    17,     0,    80,
     0,    54,    95,    55,     0,    95,    43,    95,     0,    95,
    44,    95,     0,    95,    45,    95,     0,    95,    46,    95,
     0,    95,    47,    95,     0,    44,    95,     0,    95,    41,
    95,     0,    95,     9,    95,     0,    95,    42,    95,     0,
    95,    10,    95,     0,    95,    11,    95,     0,    95,    12,
    95,     0,    95,    13,    95,     0,    95,    14,    95,     0,
    48,    95,     0,    31,    54,    55,     0,    32,    54,    55,
     0,    28,    54,    23,    55,     0,    29,    54,    95,    56,
    65,    55,     0,    25,     0,    26,     0,    27,     0,    24,
     0,    15,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    87,    93,    94,    98,    99,   100,   101,   104,   105,   108,
   111,   112,   113,   114,   115,   116,   117,   120,   123,   124,
   127,   128,   131,   132,   135,   138,   139,   142,   143,   146,
   147,   148,   151,   154,   155,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   171,   172,   173,   176,   177,
   180,   181,   184,   187,   188,   191,   192,   195,   198,   201,
   204,   205,   208,   211,   212,   215,   218,   219,   222,   225,
   226,   229,   232,   235,   236,   237,   238,   239,   240,   241,
   242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
   252,   253,   254,   255,   256,   257,   258,   259,   260,   263,
   264,   265,   266,   267
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","T_Void",
"T_Bool","T_Int","T_Double","T_String","T_Class","T_LessEqual","T_GreaterEqual",
"T_Equal","T_NotEqual","T_And","T_Or","T_Null","T_Extends","T_This","T_While",
"T_For","T_If","T_Else","T_Return","T_Identifier","T_StringConstant","T_IntConstant",
"T_DoubleConstant","T_BoolConstant","T_New","T_NewArray","T_Print","T_ReadInteger",
"T_ReadLine","T_PostPlus","T_PostMinus","T_Switch","T_Case","T_Default","T_Break",
"Lower_Than_Else","'='","'<'","'>'","'+'","'-'","'*'","'/'","'%'","'!'","UMINUS",
"'['","'.'","';'","']'","'('","')'","','","'}'","'{'","':'","Program","DeclList",
"Decl","VariableDecl","Variable","Type","FunctionDecl","Formals","VariableList",
"FunctionDefn","ClassDefn","OptExtends","FieldList","Field","StmtBlock","StmtList",
"Stmt","SimpleStmt","LValue","OptReceiver","Call","Actuals","ExprList","ForStmt",
"WhileStmt","IfStmt","OptElse","SwitchStmt","CaseList","CaseStmt","DefaultStmt",
"BreakStmt","ReturnStmt","PrintStmt","BoolExpr","Expr","Constant", NULL
};
#endif

static const short yyr1[] = {     0,
    60,    61,    61,    62,    62,    62,    62,    63,    63,    64,
    65,    65,    65,    65,    65,    65,    65,    66,    67,    67,
    68,    68,    69,    69,    70,    71,    71,    72,    72,    73,
    73,    73,    74,    75,    75,    76,    76,    76,    76,    76,
    76,    76,    76,    76,    76,    77,    77,    77,    78,    78,
    79,    79,    80,    81,    81,    82,    82,    83,    84,    85,
    86,    86,    87,    88,    88,    89,    90,    90,    91,    92,
    92,    93,    94,    95,    95,    95,    95,    95,    95,    95,
    95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
    95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
    96,    96,    96,    96
};

static const short yyr2[] = {     0,
     1,     2,     0,     1,     1,     1,     1,     2,     2,     2,
     1,     1,     1,     1,     1,     2,     3,     6,     1,     0,
     3,     1,     6,     2,     6,     2,     0,     2,     0,     1,
     1,     1,     3,     2,     0,     1,     2,     1,     1,     1,
     1,     2,     2,     1,     2,     3,     1,     0,     2,     4,
     2,     0,     5,     1,     0,     3,     1,     9,     5,     6,
     2,     0,     9,     2,     0,     4,     3,     0,     1,     1,
     2,     4,     1,     1,     1,     2,     2,     1,     1,     3,
     3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     2,     3,     3,     4,     6,     1,
     1,     1,     1,     1
};

static const short yydefact[] = {     3,
     0,     0,    15,    13,    11,    12,    14,     0,     2,     4,
     0,     0,     7,     6,     5,     9,    24,    16,     8,    10,
     0,     0,     0,    20,    17,    26,    29,     0,    22,     0,
     0,    19,     0,    16,    10,     0,     0,    25,    30,    31,
    32,    28,    18,    35,    23,    21,     0,     0,   104,    78,
     0,     0,     0,    52,   103,   100,   101,   102,     0,     0,
     0,     0,     0,     0,    69,    52,    52,    52,    33,    36,
    44,    34,     0,    75,     0,    79,    40,    39,    38,    41,
     0,     0,     0,    47,    74,    52,    48,    52,    75,    71,
     0,    52,    52,     0,     0,    52,    86,    95,     0,    37,
    76,    77,    52,    49,    45,    42,    43,    52,    52,    52,
    52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
    52,    51,     0,    73,     0,     0,     0,     0,     0,    57,
    96,    97,     0,    80,    46,    52,    88,    90,    91,    92,
    93,    94,    87,    89,    81,    82,    83,    84,    85,     0,
     0,    52,     0,    98,     0,    72,    52,     0,     0,    54,
    50,    59,     0,    62,     0,    56,     0,    53,    48,     0,
    60,    99,     0,    65,     0,    61,     0,    68,     0,    35,
     0,    64,     0,    58,     0,    35,    63,     0,     0,     0,
     0
};

static const short yydefgoto[] = {   189,
     1,     9,    70,    11,    30,    13,    31,    32,    14,    15,
    23,    33,    42,    71,    47,    72,    73,    89,    75,    76,
   159,   129,    77,    78,    79,   171,    80,   178,   174,   183,
    81,    82,    83,   123,    84,    85
};

static const short yypact[] = {-32768,
   394,   -41,-32768,-32768,-32768,-32768,-32768,   -10,-32768,-32768,
   -31,   -17,-32768,-32768,-32768,-32768,-32768,   -13,-32768,   -23,
   -11,    27,     0,   204,-32768,-32768,-32768,    70,-32768,   -16,
    22,    36,    19,-32768,-32768,   -44,   204,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   198,    48,-32768,-32768,
    47,    50,    52,   543,-32768,-32768,-32768,-32768,    55,    63,
    64,    67,    68,    80,-32768,   607,   607,   607,-32768,-32768,
-32768,-32768,    86,    15,    79,-32768,-32768,-32768,-32768,-32768,
    97,    98,    99,   424,-32768,   607,   575,   607,    41,   424,
   114,   607,   607,   101,   106,   607,    35,    35,    85,-32768,
-32768,-32768,   607,   119,-32768,-32768,-32768,   607,   607,   607,
   607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
   607,-32768,   124,   424,   100,   125,   126,    69,    33,   424,
-32768,-32768,   364,-32768,   424,   511,   463,   463,   474,   474,
   446,   435,   463,   463,     6,     6,    35,    35,    35,   379,
   314,   607,   314,-32768,   204,-32768,   607,    95,   127,   118,
-32768,-32768,   131,   164,   -20,   424,   150,-32768,   575,   314,
-32768,-32768,   162,-32768,   134,-32768,   132,    54,   314,-32768,
   136,-32768,   133,-32768,   140,-32768,-32768,   256,   193,   196,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,     3,    -9,    -1,   167,-32768,-32768,   181,-32768,
-32768,-32768,-32768,   183,  -140,  -141,   -85,   -46,-32768,-32768,
-32768,    96,-32768,-32768,-32768,-32768,-32768,-32768,    53,-32768,
-32768,-32768,-32768,   -79,   -49,-32768
};


#define	YYLAST		661


static const short yytable[] = {    12,
    74,   125,    22,    10,    90,    20,    35,    43,   126,   162,
    16,   164,    18,    44,    29,    17,    97,    98,    99,     2,
    19,     3,     4,     5,     6,     7,    28,    46,   176,    21,
    24,    12,    21,    21,   172,    39,   124,   184,   124,   185,
    74,    25,   128,   130,   -27,   188,   133,   101,   102,    26,
   118,   119,   120,   135,   103,   121,   122,    27,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   163,   101,   102,    38,    36,   108,   109,   110,
   111,   112,   113,   175,   121,   122,   130,   156,   157,   173,
   181,    37,    34,   108,   109,   110,   111,   112,   113,    16,
    86,   104,   124,    87,    74,    88,    74,   166,    91,   114,
   115,   116,   117,   118,   119,   120,    92,    93,   121,   122,
    94,    95,    74,    74,   155,   114,   115,   116,   117,   118,
   119,   120,    74,    96,   121,   122,   127,   100,    74,   134,
    48,    74,     3,     4,     5,     6,     7,    28,   105,   106,
   107,   152,   167,   165,    49,   131,    50,    51,    52,    53,
   132,    54,   -52,    55,    56,    57,    58,    59,    60,    61,
    62,    63,   136,   157,    64,   -66,   -66,    65,   151,   153,
   154,   168,   169,    66,   170,   173,   177,    67,   179,   187,
   180,   -48,   190,    68,   186,   191,   -66,    44,    48,    40,
     3,     4,     5,     6,     7,    28,     3,     4,     5,     6,
     7,    28,    49,    41,    50,    51,    52,    53,    45,    54,
   -52,    55,    56,    57,    58,    59,    60,    61,    62,    63,
   182,   160,    64,     0,     0,    65,     0,     0,     0,     0,
     0,    66,     0,     0,     0,    67,     0,     0,     0,   -48,
     0,    68,     0,     0,    69,    44,    48,     0,     3,     4,
     5,     6,     7,    28,     0,     0,     0,     0,     0,     0,
    49,     0,    50,    51,    52,    53,     0,    54,   -52,    55,
    56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
    64,     0,     0,    65,     0,     0,     0,     0,     0,    66,
     0,     0,     0,    67,     0,     0,     0,   -48,     0,    68,
     0,     0,   -67,    44,    48,     0,     3,     4,     5,     6,
     7,    28,     0,     0,     0,     0,     0,     0,    49,     0,
    50,    51,    52,    53,     0,    54,   -52,    55,    56,    57,
    58,    59,    60,    61,    62,    63,     0,     0,    64,     0,
     0,    65,     0,     0,     0,     0,     0,    66,     0,     0,
     0,    67,     0,     0,     0,   -48,     0,    68,     0,     0,
     0,    44,   108,   109,   110,   111,   112,   113,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   108,   109,   110,
   111,   112,   113,    -1,     2,     0,     3,     4,     5,     6,
     7,     8,     0,     0,   114,   115,   116,   117,   118,   119,
   120,     0,     0,   121,   122,     0,     0,     0,   158,   114,
   115,   116,   117,   118,   119,   120,     0,     0,   121,   122,
     0,   161,   108,   109,   110,   111,   112,   113,     0,     0,
     0,     0,     0,   108,   109,   110,   111,   112,     0,     0,
     0,     0,     0,     0,   108,   109,   110,   111,     0,     0,
     0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
   120,-32768,-32768,   121,   122,   114,   115,   116,   117,   118,
   119,   120,   108,   109,   121,   122,   114,   115,   116,   117,
   118,   119,   120,     0,     0,   121,   122,     0,     0,     0,
     0,     0,     0,-32768,-32768,   116,   117,   118,   119,   120,
     0,     0,   121,   122,   114,   115,   116,   117,   118,   119,
   120,     0,     0,   121,   122,    49,     0,    50,     0,     0,
     0,     0,     0,     0,    55,    56,    57,    58,    59,    60,
     0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    66,     0,     0,    49,    67,    50,
     0,     0,     0,     0,    68,   -55,    55,    56,    57,    58,
    59,    60,     0,    62,    63,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    66,     0,     0,    49,
    67,    50,     0,     0,   -70,     0,    68,   -52,    55,    56,
    57,    58,    59,    60,     0,    62,    63,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
     0,    49,    67,    50,     0,     0,     0,     0,    68,     0,
    55,    56,    57,    58,    59,    60,     0,    62,    63,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    66,     0,     0,     0,    67,     0,     0,     0,     0,     0,
    68
};

static const short yycheck[] = {     1,
    47,    87,    16,     1,    54,    23,    23,    52,    88,   151,
    52,   153,    23,    58,    24,    57,    66,    67,    68,     1,
    52,     3,     4,     5,     6,     7,     8,    37,   170,    50,
    54,    33,    50,    50,    55,    33,    86,   179,    88,   180,
    87,    53,    92,    93,    58,   186,    96,    33,    34,    23,
    45,    46,    47,   103,    40,    50,    51,    58,   108,   109,
   110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,   152,    33,    34,    57,    55,     9,    10,    11,
    12,    13,    14,   169,    50,    51,   136,    55,    56,    36,
    37,    56,    23,     9,    10,    11,    12,    13,    14,    52,
    54,    23,   152,    54,   151,    54,   153,   157,    54,    41,
    42,    43,    44,    45,    46,    47,    54,    54,    50,    51,
    54,    54,   169,   170,    56,    41,    42,    43,    44,    45,
    46,    47,   179,    54,    50,    51,    23,    52,   185,    55,
     1,   188,     3,     4,     5,     6,     7,     8,    52,    52,
    52,    52,    58,   155,    15,    55,    17,    18,    19,    20,
    55,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    54,    56,    35,    36,    37,    38,    55,    55,
    55,    55,    52,    44,    21,    36,    25,    48,    55,    57,
    59,    52,     0,    54,    59,     0,    57,    58,     1,    33,
     3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
     7,     8,    15,    33,    17,    18,    19,    20,    36,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
   178,   136,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,
    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
    -1,    54,    -1,    -1,    57,    58,     1,    -1,     3,     4,
     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
    15,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    54,
    -1,    -1,    57,    58,     1,    -1,     3,     4,     5,     6,
     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
    17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    -1,    -1,    35,    -1,
    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
    -1,    48,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
    -1,    58,     9,    10,    11,    12,    13,    14,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
    12,    13,    14,     0,     1,    -1,     3,     4,     5,     6,
     7,     8,    -1,    -1,    41,    42,    43,    44,    45,    46,
    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,    41,
    42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
    -1,    53,     9,    10,    11,    12,    13,    14,    -1,    -1,
    -1,    -1,    -1,     9,    10,    11,    12,    13,    -1,    -1,
    -1,    -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,
    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
    47,     9,    10,    50,    51,    41,    42,    43,    44,    45,
    46,    47,     9,    10,    50,    51,    41,    42,    43,    44,
    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
    -1,    -1,    50,    51,    41,    42,    43,    44,    45,    46,
    47,    -1,    -1,    50,    51,    15,    -1,    17,    -1,    -1,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    44,    -1,    -1,    15,    48,    17,
    -1,    -1,    -1,    -1,    54,    55,    24,    25,    26,    27,
    28,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    15,
    48,    17,    -1,    -1,    52,    -1,    54,    23,    24,    25,
    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
    -1,    15,    48,    17,    -1,    -1,    -1,    -1,    54,    -1,
    24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
    54
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/pubsw/lib/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/pubsw/lib/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 87 "parser.y"
{ printf("Program -> DeclList\n"); yylsp[0];
    break;}
case 2:
#line 93 "parser.y"
{ printf("DeclList -> DeclList Decl\n"); ;
    break;}
case 3:
#line 94 "parser.y"
{ printf("DeclList -> \n"); ;
    break;}
case 4:
#line 98 "parser.y"
{ printf("Decl -> VariableDecl\n"); ;
    break;}
case 5:
#line 99 "parser.y"
{ printf("Decl -> ClassDefn\n"); ;
    break;}
case 6:
#line 100 "parser.y"
{ printf("Decl -> FunctionDefn\n"); ;
    break;}
case 7:
#line 101 "parser.y"
{ printf("Decl -> FunctionDecl\n"); ;
    break;}
case 8:
#line 104 "parser.y"
{ printf("VariableDecl -> Variable ;\n"); ;
    break;}
case 9:
#line 105 "parser.y"
{ printf("VariableDecl -> error ;\n"); ;
    break;}
case 10:
#line 108 "parser.y"
{ printf("Variable -> Type identifier\n"); ;
    break;}
case 11:
#line 111 "parser.y"
{ printf("Type -> int\n"); ;
    break;}
case 12:
#line 112 "parser.y"
{ printf("Type -> double\n"); ;
    break;}
case 13:
#line 113 "parser.y"
{ printf("Type -> bool\n"); ;
    break;}
case 14:
#line 114 "parser.y"
{ printf("Type -> string\n"); ;
    break;}
case 15:
#line 115 "parser.y"
{ printf("Type -> void\n"); ;
    break;}
case 16:
#line 116 "parser.y"
{ printf("Type -> class identifier\n"); ;
    break;}
case 17:
#line 117 "parser.y"
{ printf("Type -> Type[]\n"); ;
    break;}
case 18:
#line 120 "parser.y"
{ printf("FunctionDecl -> Type identifier ( Formals ) ;\n") ;
    break;}
case 19:
#line 123 "parser.y"
{ printf("Formals -> VariableList\n"); ;
    break;}
case 20:
#line 124 "parser.y"
{ printf("Formals -> \n"); ;
    break;}
case 21:
#line 127 "parser.y"
{ printf("VariableList -> VariableList , Variable\n"); ;
    break;}
case 22:
#line 128 "parser.y"
{ printf("VariableList -> Variable\n"); ;
    break;}
case 23:
#line 131 "parser.y"
{ printf("FunctionDefn -> Type identifier ( Formals ) StmtBlock\n"); ;
    break;}
case 24:
#line 132 "parser.y"
{ printf("FunctionDefn -> error }\n"); ;
    break;}
case 25:
#line 135 "parser.y"
{ printf("ClassDefn -> class identifier OptExtends { FieldList }\n"); ;
    break;}
case 26:
#line 138 "parser.y"
{ printf("OptExtends -> extends identifier\n"); ;
    break;}
case 27:
#line 139 "parser.y"
{ printf("OptExtends -> \n"); ;
    break;}
case 28:
#line 142 "parser.y"
{ printf("FieldList -> FieldList Field\n"); ;
    break;}
case 29:
#line 143 "parser.y"
{ printf("FieldList -> \n"); ;
    break;}
case 30:
#line 146 "parser.y"
{ printf("Field -> VariableDecl\n"); ;
    break;}
case 31:
#line 147 "parser.y"
{ printf("Field -> FunctionDecl\n"); ;
    break;}
case 32:
#line 148 "parser.y"
{ printf("Field -> FunctionDefn\n"); ;
    break;}
case 33:
#line 151 "parser.y"
{ printf("StmtBlock -> { StmtList }\n"); ;
    break;}
case 34:
#line 154 "parser.y"
{ printf("StmtList -> StmtList Stmt\n"); ;
    break;}
case 35:
#line 155 "parser.y"
{ printf("StmtList -> \n"); ;
    break;}
case 36:
#line 158 "parser.y"
{ printf("Stmt -> VariableDecl\n"); ;
    break;}
case 37:
#line 159 "parser.y"
{ printf("Stmt -> SimpleStmt ;\n"); ;
    break;}
case 38:
#line 160 "parser.y"
{ printf("Stmt -> IfStmt\n"); ;
    break;}
case 39:
#line 161 "parser.y"
{ printf("Stmt -> WhileStmt\n"); ;
    break;}
case 40:
#line 162 "parser.y"
{ printf("Stmt -> ForStmt\n"); ;
    break;}
case 41:
#line 163 "parser.y"
{ printf("Stmt -> SwitchStmt\n"); ;
    break;}
case 42:
#line 164 "parser.y"
{ printf("Stmt -> ReturnStmt ;\n"); ;
    break;}
case 43:
#line 165 "parser.y"
{ printf("Stmt -> PrintStmt ;\n"); ;
    break;}
case 44:
#line 166 "parser.y"
{ printf("Stmt -> StmtBlock\n"); ;
    break;}
case 45:
#line 167 "parser.y"
{ printf("Stmt -> BreakStmt ;\n"); ;
    break;}
case 46:
#line 171 "parser.y"
{ printf("SimpleStmt -> LValue = Expr\n"); ;
    break;}
case 47:
#line 172 "parser.y"
{ printf("SimpleStmt -> Expr\n"); ;
    break;}
case 48:
#line 173 "parser.y"
{ printf("SimpleStmt -> \n"); ;
    break;}
case 49:
#line 176 "parser.y"
{ printf("LValue -> OptReceiver identifier\n"); ;
    break;}
case 50:
#line 177 "parser.y"
{ printf("LValue -> Expr [ Expr ]\n"); ;
    break;}
case 51:
#line 180 "parser.y"
{ printf("OptReceiver -> Expr .\n"); ;
    break;}
case 52:
#line 181 "parser.y"
{ printf("OptReceiver -> \n"); ;
    break;}
case 53:
#line 184 "parser.y"
{ printf("Call -> OptReceiver identifier ( Actuals )\n"); ;
    break;}
case 54:
#line 187 "parser.y"
{ printf("Actuals -> ExprList\n"); ;
    break;}
case 55:
#line 188 "parser.y"
{ printf("Actuals -> \n"); ;
    break;}
case 56:
#line 191 "parser.y"
{ printf("ExprList -> ExprList , Expr\n"); ;
    break;}
case 57:
#line 192 "parser.y"
{ printf("ExprList -> Expr\n"); ;
    break;}
case 58:
#line 195 "parser.y"
{ printf("ForStmt -> for ( SimpleStmt ; BoolExpr  ; SimpleStmt ) Stmt\n"); ;
    break;}
case 59:
#line 198 "parser.y"
{ printf("WhileStmt -> while ( BoolExpr ) Stmt\n"); ;
    break;}
case 60:
#line 201 "parser.y"
{ printf("IfStmt -> if ( BoolExpr ) Stmt OptElse\n"); ;
    break;}
case 61:
#line 204 "parser.y"
{ printf("OptElse -> else Stmt\n"); ;
    break;}
case 62:
#line 205 "parser.y"
{ printf("OptElse -> \n"); ;
    break;}
case 63:
#line 208 "parser.y"
{ printf("SwitchStmt -> switch ( Expr ) { CaseStmt CaseList Default }\n"); ;
    break;}
case 64:
#line 211 "parser.y"
{ printf("CaseList -> CaseList CaseStmt\n"); ;
    break;}
case 65:
#line 212 "parser.y"
{ printf("CaseList -> \n");;
    break;}
case 66:
#line 215 "parser.y"
{ printf("CaseStmt -> case intConstant : StmtList\n"); ;
    break;}
case 67:
#line 218 "parser.y"
{ printf("DefaultStmt -> default : StmtList\n"); ;
    break;}
case 68:
#line 219 "parser.y"
{ printf("DefaultStmt -> \n"); ;
    break;}
case 69:
#line 222 "parser.y"
{ printf("BreakStmt -> break\n"); ;
    break;}
case 70:
#line 225 "parser.y"
{ printf("ReturnStmt -> return\n"); ;
    break;}
case 71:
#line 226 "parser.y"
{ printf("ReturnStmt -> return Expr\n"); ;
    break;}
case 72:
#line 229 "parser.y"
{ printf("PrintStmt -> Print ( ExprList )\n"); ;
    break;}
case 73:
#line 232 "parser.y"
{ printf("BoolExpr -> Expr\n"); ;
    break;}
case 74:
#line 235 "parser.y"
{ printf("Expr -> Constant\n"); ;
    break;}
case 75:
#line 236 "parser.y"
{ printf("Expr -> LValue\n"); ;
    break;}
case 76:
#line 237 "parser.y"
{ printf("Expr -> LValue ++\n"); ;
    break;}
case 77:
#line 238 "parser.y"
{ printf("Expr -> LValue --\n"); ;
    break;}
case 78:
#line 239 "parser.y"
{ printf("Expr -> this\n"); ;
    break;}
case 79:
#line 240 "parser.y"
{ printf("Expr -> Call\n"); ;
    break;}
case 80:
#line 241 "parser.y"
{ printf("Expr -> ( Expr )\n");;
    break;}
case 81:
#line 242 "parser.y"
{ printf("Expr -> Expr + Expr\n"); ;
    break;}
case 82:
#line 243 "parser.y"
{ printf("Expr -> Expr - Expr\n"); ;
    break;}
case 83:
#line 244 "parser.y"
{ printf("Expr -> Expr * Expr\n"); ;
    break;}
case 84:
#line 245 "parser.y"
{ printf("Expr -> Expr / Expr\n"); ;
    break;}
case 85:
#line 246 "parser.y"
{ printf("Expr -> Expr %% Expr\n"); ;
    break;}
case 86:
#line 247 "parser.y"
{ printf("Expr -> - Expr\n"); ;
    break;}
case 87:
#line 248 "parser.y"
{ printf("Expr -> Expr < Expr\n"); ;
    break;}
case 88:
#line 249 "parser.y"
{ printf("Expr -> Expr <= Expr\n"); ;
    break;}
case 89:
#line 250 "parser.y"
{ printf("Expr -> Expr > Expr\n"); ;
    break;}
case 90:
#line 251 "parser.y"
{ printf("Expr -> Expr >= Expr\n"); ;
    break;}
case 91:
#line 252 "parser.y"
{ printf("Expr -> Expr == Expr\n"); ;
    break;}
case 92:
#line 253 "parser.y"
{ printf("Expr -> Expr != Expr\n"); ;
    break;}
case 93:
#line 254 "parser.y"
{ printf("Expr -> Expr && Expr\n"); ;
    break;}
case 94:
#line 255 "parser.y"
{ printf("Expr -> Expr || Expr\n"); ;
    break;}
case 95:
#line 256 "parser.y"
{ printf("Expr -> ! Expr\n"); ;
    break;}
case 96:
#line 257 "parser.y"
{ printf("Expr -> ReadInteger ( )\n"); ;
    break;}
case 97:
#line 258 "parser.y"
{ printf("Expr -> ReadLine ( )\n"); ;
    break;}
case 98:
#line 259 "parser.y"
{ printf("Expr -> New ( identifier )\n"); ;
    break;}
case 99:
#line 260 "parser.y"
{ printf("Expr -> NewArray ( Expr , Type )\n"); ;
    break;}
case 100:
#line 263 "parser.y"
{ printf("Constant -> intConstant\n"); ;
    break;}
case 101:
#line 264 "parser.y"
{ printf("Constant -> doubleConstant\n"); ;
    break;}
case 102:
#line 265 "parser.y"
{ printf("Constant -> boolConstant\n"); ;
    break;}
case 103:
#line 266 "parser.y"
{ printf("Constant -> stringConstant\n"); ;
    break;}
case 104:
#line 267 "parser.y"
{ printf("Constant -> null\n"); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/pubsw/lib/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 272 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/*
 * Function: Inityyparse()
 * -----------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void Inityyparse(void)
{
  PrintDebug("parser", "Initializing parser");
  yydebug = false;
}

 
