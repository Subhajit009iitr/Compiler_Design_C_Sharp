/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     STRING_LITERAL = 259,
     INTEGER = 260,
     SEMICOLON = 261,
     LPAREN = 262,
     RPAREN = 263,
     LBRACE = 264,
     RBRACE = 265,
     PLUS = 266,
     MINUS = 267,
     MULT = 268,
     DIV = 269,
     ASSIGN = 270,
     EQ = 271,
     NEQ = 272,
     LT = 273,
     LTE = 274,
     GT = 275,
     GTE = 276,
     MOD = 277,
     AND = 278,
     OR = 279,
     NOT = 280,
     TRUE = 281,
     FALSE = 282,
     DO = 283,
     SWITCH = 284,
     CASE = 285,
     DEFAULT = 286,
     BREAK = 287,
     CONTINUE = 288,
     DOT = 289,
     USING = 290,
     VOID = 291,
     STATIC = 292,
     RETURN = 293,
     IF = 294,
     ELSE = 295,
     WHILE = 296,
     FOR = 297,
     INT = 298,
     FLOAT = 299,
     STRING = 300,
     CLASS = 301,
     FUNCTION = 302,
     NEW = 303,
     COMMA = 304,
     GREATEREQUAL = 305,
     GREATER = 306,
     LESSEQUAL = 307,
     LESS = 308,
     NOTEQUAL = 309,
     EQUAL = 310
   };
#endif
/* Tokens.  */
#define ID 258
#define STRING_LITERAL 259
#define INTEGER 260
#define SEMICOLON 261
#define LPAREN 262
#define RPAREN 263
#define LBRACE 264
#define RBRACE 265
#define PLUS 266
#define MINUS 267
#define MULT 268
#define DIV 269
#define ASSIGN 270
#define EQ 271
#define NEQ 272
#define LT 273
#define LTE 274
#define GT 275
#define GTE 276
#define MOD 277
#define AND 278
#define OR 279
#define NOT 280
#define TRUE 281
#define FALSE 282
#define DO 283
#define SWITCH 284
#define CASE 285
#define DEFAULT 286
#define BREAK 287
#define CONTINUE 288
#define DOT 289
#define USING 290
#define VOID 291
#define STATIC 292
#define RETURN 293
#define IF 294
#define ELSE 295
#define WHILE 296
#define FOR 297
#define INT 298
#define FLOAT 299
#define STRING 300
#define CLASS 301
#define FUNCTION 302
#define NEW 303
#define COMMA 304
#define GREATEREQUAL 305
#define GREATER 306
#define LESSEQUAL 307
#define LESS 308
#define NOTEQUAL 309
#define EQUAL 310




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

extern int yylex();
extern int yyparse();

// Define a struct to represent parse tree nodes
struct Node {
    string label;
    vector<Node*> children;
};

Node* createNode(const string& label) {
    Node* node = new Node;
    node->label = label;
    return node;
}

void addChild(Node* parent, Node* child) {
    parent->children.push_back(child);
}

void printDot(Node* root, ofstream& file) {
    if (root == nullptr) return;
    file << "  \"" << root->label << "\" [shape=box];\n";
    for (Node* child : root->children) {
        file << "  \"" << root->label << "\" -> \"" << child->label << "\";\n";
        printDot(child, file);
    }
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 38 "parser.y"
{
    int ival;
    char* sval;
    Node* node;
}
/* Line 193 of yacc.c.  */
#line 249 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 262 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    15,    17,    20,
      22,    25,    29,    33,    37,    41,    45,    49,    53,    57,
      61,    65,    69,    73,    77,    81,    85,    88,    90,    93,
      96,    99,   102,   114,   122,   134,   140,   141,   143,   145,
     149,   155,   163,   165,   167,   169
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    57,    58,    -1,    59,     6,    -1,
      60,     6,    -1,    61,    -1,    62,    -1,    63,     6,    -1,
      66,    -1,    67,     6,    -1,    38,    59,     6,    -1,    35,
       3,     6,    -1,    59,    24,    59,    -1,    59,    23,    59,
      -1,    59,    55,    59,    -1,    59,    54,    59,    -1,    59,
      53,    59,    -1,    59,    52,    59,    -1,    59,    51,    59,
      -1,    59,    50,    59,    -1,    59,    11,    59,    -1,    59,
      12,    59,    -1,    59,    13,    59,    -1,    59,    14,    59,
      -1,    59,    22,    59,    -1,    25,    59,    -1,    68,    -1,
      43,     3,    -1,    44,     3,    -1,    45,     3,    -1,    36,
       3,    -1,    39,     7,    59,     8,     9,    57,    10,    40,
       9,    57,    10,    -1,    41,     7,    59,     8,     9,    57,
      10,    -1,    42,     7,    60,     6,    59,     6,    59,     8,
       9,    57,    10,    -1,    47,     3,     7,    64,     8,    -1,
      -1,    65,    -1,    59,    -1,    65,    49,    59,    -1,    46,
       3,     9,    57,    10,    -1,     3,     3,    15,    48,     3,
       7,     8,    -1,     5,    -1,     4,    -1,     3,    -1,     7,
      59,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    64,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    98,    99,
     100,   101,   105,   110,   112,   117,   121,   122,   126,   127,
     131,   136,   141,   142,   143,   144
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING_LITERAL", "INTEGER",
  "SEMICOLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "PLUS", "MINUS",
  "MULT", "DIV", "ASSIGN", "EQ", "NEQ", "LT", "LTE", "GT", "GTE", "MOD",
  "AND", "OR", "NOT", "TRUE", "FALSE", "DO", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "CONTINUE", "DOT", "USING", "VOID", "STATIC", "RETURN", "IF",
  "ELSE", "WHILE", "FOR", "INT", "FLOAT", "STRING", "CLASS", "FUNCTION",
  "NEW", "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS",
  "NOTEQUAL", "EQUAL", "$accept", "program", "statement", "expression",
  "declaration", "conditional", "loop", "function_call", "args",
  "arg_list", "class_definition", "object_creation", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     2,     2,
       2,     2,    11,     7,    11,     5,     0,     1,     1,     3,
       5,     7,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    44,    43,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     6,     7,     0,     9,     0,    27,     0,    44,
       0,    26,     0,    31,     0,     0,     0,     0,    28,    29,
      30,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     8,    10,
       0,    45,    12,    11,     0,     0,     0,     2,    36,    21,
      22,    23,    24,    25,    14,    13,    20,    19,    18,    17,
      16,    15,     0,     0,     0,     0,     0,    38,     0,    37,
       0,     2,     2,     0,    40,    35,     0,     0,     0,     0,
       0,    39,    41,     0,    33,     0,     0,     0,     2,     2,
       0,     0,    32,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    19,    20,    21,    22,    23,    24,    88,    89,
      25,    26,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int16 yypact[] =
{
     -32,   108,   -32,    -1,   -32,   -32,    64,    64,     0,     2,
      64,     9,    10,    11,     3,    17,    18,    19,    24,   -32,
       1,    22,   -32,   -32,    25,   -32,    26,   -32,    42,   -32,
     148,   -32,    31,   -32,    52,    64,    64,   -10,   -32,   -32,
     -32,    50,    63,   -32,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,   -32,   -32,   -32,
      34,   -32,   -32,   -32,   155,   172,    77,   -32,    64,    59,
      59,   -32,   -32,   -32,   360,   385,    -3,    -3,    -3,    -3,
      -3,    -3,    81,    82,    83,    64,   228,   379,    85,    46,
      92,   -32,   -32,    74,   -32,   -32,    64,    93,   273,   296,
      64,   379,   -32,    60,   -32,   206,   100,   101,   -32,   -32,
     319,   342,   -32,   -32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -31,   -32,    -6,    79,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      30,    31,    28,    32,    34,    33,    38,    43,    44,    45,
      46,    47,    44,    45,    46,    47,    35,    36,    37,    48,
      39,    40,    41,    48,    49,    50,     9,    42,    57,    64,
      65,    58,    59,    14,    15,    16,    86,    62,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    51,    52,    53,    54,    55,    56,    60,    63,    67,
      98,    99,    87,    44,    45,    46,    47,    29,     4,     5,
      68,     6,    46,    47,    48,    49,    50,   110,   111,    93,
     100,    48,    82,    85,    90,    44,    45,    46,    47,     7,
     101,    91,    92,    95,   105,    96,    48,    49,    50,    97,
     106,   102,    51,    52,    53,    54,    55,    56,     2,   108,
     109,     3,     4,     5,     0,     6,    66,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    61,     0,     0,    44,
      45,    46,    47,    83,     0,     0,    44,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,    48,    49,    50,
      84,     0,     0,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    50,     0,    51,    52,
      53,    54,    55,    56,     0,    51,    52,    53,    54,    55,
      56,     0,     0,     0,   107,     0,     0,    44,    45,    46,
      47,     0,    51,    52,    53,    54,    55,    56,    48,    49,
      50,     3,     4,     5,     0,     6,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,    51,    52,    53,    54,
      55,    56,     0,     8,     9,     0,    10,    11,     0,    12,
      13,    14,    15,    16,    17,    18,     3,     4,     5,     0,
       6,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     3,
       4,     5,     0,     6,     0,     0,   104,     0,     8,     9,
       0,    10,    11,     0,    12,    13,    14,    15,    16,    17,
      18,     7,     3,     4,     5,     0,     6,     0,     0,   112,
       0,     8,     9,     0,    10,    11,     0,    12,    13,    14,
      15,    16,    17,    18,     7,     3,     4,     5,     0,     6,
       0,     0,   113,     0,     8,     9,     0,    10,    11,     0,
      12,    13,    14,    15,    16,    17,    18,     7,     0,     0,
       0,    44,    45,    46,    47,     0,     0,     8,     9,     0,
      10,    11,    48,    12,    13,    14,    15,    16,    17,    18,
      44,    45,    46,    47,     0,     0,    44,    45,    46,    47,
       0,    48,    49,    50,     0,     0,     0,    48,    49,     0,
      51,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,    56,    51,    52,    53,    54,    55,
      56
};

static const yytype_int8 yycheck[] =
{
       6,     7,     3,     3,    10,     3,     3,     6,    11,    12,
      13,    14,    11,    12,    13,    14,     7,     7,     7,    22,
       3,     3,     3,    22,    23,    24,    36,     3,     6,    35,
      36,     6,     6,    43,    44,    45,    67,     6,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    50,    51,    52,    53,    54,    55,    15,     6,     9,
      91,    92,    68,    11,    12,    13,    14,     3,     4,     5,
       7,     7,    13,    14,    22,    23,    24,   108,   109,    85,
       6,    22,    48,     6,     3,    11,    12,    13,    14,    25,
      96,     9,     9,     8,   100,    49,    22,    23,    24,     7,
      40,     8,    50,    51,    52,    53,    54,    55,     0,     9,
       9,     3,     4,     5,    -1,     7,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,     8,    -1,    -1,    11,
      12,    13,    14,     8,    -1,    -1,    11,    12,    13,    14,
      22,    23,    24,    -1,    -1,    -1,    -1,    22,    23,    24,
       8,    -1,    -1,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    50,    51,
      52,    53,    54,    55,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,     8,    -1,    -1,    11,    12,    13,
      14,    -1,    50,    51,    52,    53,    54,    55,    22,    23,
      24,     3,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    35,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,     3,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,     3,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    35,    36,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    25,     3,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    35,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    25,     3,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    35,    36,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    25,    -1,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    35,    36,    -1,
      38,    39,    22,    41,    42,    43,    44,    45,    46,    47,
      11,    12,    13,    14,    -1,    -1,    11,    12,    13,    14,
      -1,    22,    23,    24,    -1,    -1,    -1,    22,    23,    -1,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    50,    51,    52,    53,    54,
      55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,     0,     3,     4,     5,     7,    25,    35,    36,
      38,    39,    41,    42,    43,    44,    45,    46,    47,    58,
      59,    60,    61,    62,    63,    66,    67,    68,     3,     3,
      59,    59,     3,     3,    59,     7,     7,     7,     3,     3,
       3,     3,     3,     6,    11,    12,    13,    14,    22,    23,
      24,    50,    51,    52,    53,    54,    55,     6,     6,     6,
      15,     8,     6,     6,    59,    59,    60,     9,     7,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    48,     8,     8,     6,    57,    59,    64,    65,
       3,     9,     9,    59,    10,     8,    49,     7,    57,    57,
       6,    59,     8,    10,    10,    59,    40,     8,     9,     9,
      57,    57,    10,    10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 68 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 5:
#line 69 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 6:
#line 70 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 71 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 72 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 9:
#line 73 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:
#line 74 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 11:
#line 75 "parser.y"
    { (yyval.node) = createNode("RETURN"); addChild((yyval.node), (yyvsp[(2) - (3)].node)); ;}
    break;

  case 12:
#line 76 "parser.y"
    { (yyval.node) = createNode("USING"); addChild((yyval.node), createNode((yyvsp[(2) - (3)].sval))); ;}
    break;

  case 13:
#line 80 "parser.y"
    { (yyval.node) = createNode("OR"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 14:
#line 81 "parser.y"
    { (yyval.node) = createNode("AND"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 15:
#line 82 "parser.y"
    { (yyval.node) = createNode("EQ"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 16:
#line 83 "parser.y"
    { (yyval.node) = createNode("NEQ"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 17:
#line 84 "parser.y"
    { (yyval.node) = createNode("LT"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 18:
#line 85 "parser.y"
    { (yyval.node) = createNode("LTE"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 19:
#line 86 "parser.y"
    { (yyval.node) = createNode("GT"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 20:
#line 87 "parser.y"
    { (yyval.node) = createNode("GTE"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 21:
#line 88 "parser.y"
    { (yyval.node) = createNode("PLUS"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 22:
#line 89 "parser.y"
    { (yyval.node) = createNode("MINUS"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 23:
#line 90 "parser.y"
    { (yyval.node) = createNode("MULT"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 24:
#line 91 "parser.y"
    { (yyval.node) = createNode("DIV"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 25:
#line 92 "parser.y"
    { (yyval.node) = createNode("MOD"); addChild((yyval.node), (yyvsp[(1) - (3)].node)); addChild((yyval.node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 26:
#line 93 "parser.y"
    { (yyval.node) = createNode("NOT"); addChild((yyval.node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 27:
#line 94 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 28:
#line 98 "parser.y"
    { (yyval.node) = createNode("INT"); addChild((yyval.node), createNode((yyvsp[(2) - (2)].sval))); ;}
    break;

  case 29:
#line 99 "parser.y"
    { (yyval.node) = createNode("FLOAT"); addChild((yyval.node), createNode((yyvsp[(2) - (2)].sval))); ;}
    break;

  case 30:
#line 100 "parser.y"
    { (yyval.node) = createNode("STRING"); addChild((yyval.node), createNode((yyvsp[(2) - (2)].sval))); ;}
    break;

  case 31:
#line 101 "parser.y"
    { (yyval.node) = createNode("VOID"); addChild((yyval.node), createNode((yyvsp[(2) - (2)].sval))); ;}
    break;

  case 32:
#line 106 "parser.y"
    { (yyval.node) = createNode("IF"); addChild((yyval.node), (yyvsp[(3) - (11)].node)); addChild                                  ((yyval.node), (yyvsp[(6) - (11)].node)); addChild((yyval.node), (yyvsp[(10) - (11)].node)); ;}
    break;

  case 33:
#line 111 "parser.y"
    { (yyval.node) = createNode("WHILE"); addChild((yyval.node), (yyvsp[(3) - (7)].node)); addChild((yyval.node), (yyvsp[(6) - (7)].node)); ;}
    break;

  case 34:
#line 113 "parser.y"
    { (yyval.node) = createNode("FOR"); addChild((yyval.node), (yyvsp[(3) - (11)].node)); addChild((yyval.node), (yyvsp[(5) - (11)].node)); addChild((yyval.node), (yyvsp[(7) - (11)].node)); addChild((yyval.node), (yyvsp[(10) - (11)].node)); ;}
    break;

  case 35:
#line 118 "parser.y"
    { (yyval.node) = createNode("FUNCTION_CALL"); addChild((yyval.node), createNode((yyvsp[(2) - (5)].sval))); addChild((yyval.node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 40:
#line 132 "parser.y"
    { (yyval.node) = createNode("CLASS_DEFINITION"); addChild((yyval.node), createNode((yyvsp[(2) - (5)].sval))); addChild((yyval.node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 41:
#line 137 "parser.y"
    { (yyval.node) = createNode("OBJECT_CREATION"); addChild((yyval.node), createNode((yyvsp[(1) - (7)].sval))); addChild((yyval.node), createNode((yyvsp[(2) - (7)].sval))); addChild((yyval.node), createNode("NEW")); addChild((yyval.node), createNode((yyvsp[(5) - (7)].sval))); ;}
    break;

  case 42:
#line 141 "parser.y"
    { (yyval.node) = createNode("INTEGER"); (yyval.node)->label = to_string((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 43:
#line 142 "parser.y"
    { (yyval.node) = createNode("STRING_LITERAL"); (yyval.node)->label = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 44:
#line 143 "parser.y"
    { (yyval.node) = createNode("ID"); (yyval.node)->label = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 45:
#line 144 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1806 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 147 "parser.y"


void yyerror(const char* s) {
    cerr << "Parse error: " << s << endl;
}

int main() {
    yyparse();
    return 0;
}

