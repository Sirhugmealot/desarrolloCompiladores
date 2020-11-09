
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "analizadorSintactico.y"

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "y.tab.h"
#include "tercetos.h"

//int yylval;
int yystopparser=0;
FILE  *yyin;
char *yyltext;
char *yytext;
int indiceIdentificador;
int indiceConstante;
int indiceFactor;
int indiceTermino;
int indiceExpresion;
int indiceIdentificadorIntermedio;
int indiceAsignacionEspecial;
int indiceAsigEspSuma;
int indiceAsignacion;
int indiceReal;
int indiceString;

int numeroTipo;
int posicionTablaSimbolos;


int ultimoTerceto;



/* Line 189 of yacc.c  */
#line 106 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     CONSTANTE = 259,
     REAL = 260,
     MAIN = 261,
     COMENTARIO = 262,
     SUMA = 263,
     RESTA = 264,
     MULTIPLICACION = 265,
     DIVISION = 266,
     ASIG = 267,
     MAYOR = 268,
     MENOR = 269,
     MAYORIGUAL = 270,
     MENORIGUAL = 271,
     IGUAL = 272,
     DISTINTO = 273,
     PUNTOYCOMA = 274,
     ABRIRPARENTESIS = 275,
     CERRARPARENTESIS = 276,
     ABRIRLLAVE = 277,
     CERRARLLAVE = 278,
     ABRIRCORCHETE = 279,
     CERRARCORCHETE = 280,
     IF = 281,
     ELSE = 282,
     WHILE = 283,
     PUT = 284,
     GET = 285,
     AND = 286,
     OR = 287,
     DECLARE = 288,
     INT = 289,
     FLOAT = 290,
     DOUBLE = 291,
     CHAR = 292,
     BOOLEAN = 293,
     ASIGESPMAS = 294,
     ASIGESPMENOS = 295,
     ASIGESPMULTIPLICACION = 296,
     ASIGESPDIVISION = 297,
     STRING = 298
   };
#endif
/* Tokens.  */
#define IDENTIFICADOR 258
#define CONSTANTE 259
#define REAL 260
#define MAIN 261
#define COMENTARIO 262
#define SUMA 263
#define RESTA 264
#define MULTIPLICACION 265
#define DIVISION 266
#define ASIG 267
#define MAYOR 268
#define MENOR 269
#define MAYORIGUAL 270
#define MENORIGUAL 271
#define IGUAL 272
#define DISTINTO 273
#define PUNTOYCOMA 274
#define ABRIRPARENTESIS 275
#define CERRARPARENTESIS 276
#define ABRIRLLAVE 277
#define CERRARLLAVE 278
#define ABRIRCORCHETE 279
#define CERRARCORCHETE 280
#define IF 281
#define ELSE 282
#define WHILE 283
#define PUT 284
#define GET 285
#define AND 286
#define OR 287
#define DECLARE 288
#define INT 289
#define FLOAT 290
#define DOUBLE 291
#define CHAR 292
#define BOOLEAN 293
#define ASIGESPMAS 294
#define ASIGESPMENOS 295
#define ASIGESPMULTIPLICACION 296
#define ASIGESPDIVISION 297
#define STRING 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 34 "analizadorSintactico.y"

	char var[20];
	int valor;



/* Line 214 of yacc.c  */
#line 235 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 247 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   113

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    11,    15,    18,    21,    24,    26,
      28,    30,    33,    36,    38,    42,    46,    51,    53,    57,
      61,    65,    69,    71,    75,    80,    82,    86,    90,    94,
     102,   106,   108,   112,   116,   119,   122,   125,   128,   131,
     135,   137,   139,   141,   143,   145,   147,   149,   153,   155,
     159,   163,   165,   169,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   196
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     6,    22,    47,    23,    -1,    48,    19,
      -1,    47,    48,    19,    -1,    28,    51,    -1,    26,    56,
      -1,    64,    19,    -1,    67,    -1,    61,    -1,    62,    -1,
      29,    49,    -1,    30,    50,    -1,    50,    -1,    20,    43,
      21,    -1,    20,     3,    21,    -1,    20,    52,    21,    54,
      -1,    53,    -1,    53,    31,    53,    -1,    53,    32,    53,
      -1,    67,    69,    67,    -1,    22,    55,    23,    -1,    48,
      -1,    55,    19,    48,    -1,    20,    57,    21,    59,    -1,
      58,    -1,    58,    31,    58,    -1,    58,    32,    58,    -1,
      67,    69,    67,    -1,    22,    60,    23,    27,    22,    60,
      23,    -1,    22,    60,    23,    -1,    48,    -1,    60,    19,
      48,    -1,     3,    12,    67,    -1,     3,    63,    -1,    39,
      67,    -1,    40,    67,    -1,    41,    67,    -1,    42,    67,
      -1,    33,    65,    66,    -1,    35,    -1,    34,    -1,    43,
      -1,    38,    -1,    37,    -1,    36,    -1,     3,    -1,    66,
      44,     3,    -1,    68,    -1,    67,     9,    68,    -1,    67,
       8,    68,    -1,    70,    -1,    68,    10,    70,    -1,    68,
      11,    70,    -1,    13,    -1,    14,    -1,    15,    -1,    16,
      -1,    17,    -1,    18,    -1,     3,    -1,     4,    -1,     5,
      -1,     3,    24,     4,    25,    -1,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    68,    69,    70,    71,
      72,    73,    74,    78,    79,    83,    87,    91,    92,    93,
      97,   101,   105,   106,   110,   114,   115,   116,   120,   124,
     125,   129,   130,   134,   143,   155,   156,   157,   158,   162,
     170,   174,   178,   182,   186,   190,   197,   202,   206,   207,
     211,   218,   219,   223,   230,   231,   232,   233,   234,   235,
     239,   246,   251,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "CONSTANTE", "REAL",
  "MAIN", "COMENTARIO", "SUMA", "RESTA", "MULTIPLICACION", "DIVISION",
  "ASIG", "MAYOR", "MENOR", "MAYORIGUAL", "MENORIGUAL", "IGUAL",
  "DISTINTO", "PUNTOYCOMA", "ABRIRPARENTESIS", "CERRARPARENTESIS",
  "ABRIRLLAVE", "CERRARLLAVE", "ABRIRCORCHETE", "CERRARCORCHETE", "IF",
  "ELSE", "WHILE", "PUT", "GET", "AND", "OR", "DECLARE", "INT", "FLOAT",
  "DOUBLE", "CHAR", "BOOLEAN", "ASIGESPMAS", "ASIGESPMENOS",
  "ASIGESPMULTIPLICACION", "ASIGESPDIVISION", "STRING", "','", "$accept",
  "programa", "sentencias", "sentencia", "sentenciaparentesis",
  "factorparentesis", "sentenciawhile", "sentenciacomparacionwhile",
  "expresioncomparacionwhile", "sentenciainicialwhile",
  "sentenciaintermediawhile", "sentenciaif", "sentenciacomparacionif",
  "expresioncomparacionif", "sentenciainicialif", "sentenciaintermediaif",
  "asignacion", "asignacionespecial", "asignadorespecial", "declaretion",
  "tipo", "identificadorintermedio", "expresion", "termino",
  "comparadores", "factor", 0
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
     295,   296,   297,   298,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    50,    51,    52,    52,    52,
      53,    54,    55,    55,    56,    57,    57,    57,    58,    59,
      59,    60,    60,    61,    62,    63,    63,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     3,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     3,     3,     4,     1,     3,     3,
       3,     3,     1,     3,     4,     1,     3,     3,     3,     7,
       3,     1,     3,     3,     2,     2,     2,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    60,    61,    62,     0,     0,
       0,     0,     0,    64,     0,     0,     9,    10,     0,     8,
      48,    51,     0,     0,     0,     0,     0,     0,    34,     0,
       6,     0,     5,     0,    11,    13,     0,    12,    41,    40,
      45,    44,    43,    42,     0,     2,     0,     3,     7,     0,
       0,     0,     0,    60,    33,     0,    35,    36,    37,    38,
       0,    25,     0,     0,    17,     0,     0,     0,    46,    39,
       4,    50,    49,    52,    53,    63,     0,     0,     0,    54,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
      15,    14,     0,     0,    24,    26,    27,    28,     0,    16,
      18,    19,    20,    47,    31,     0,    22,     0,     0,    30,
       0,    21,    32,     0,    23,     0,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    14,   104,    34,    35,    32,    63,    64,    99,
     107,    30,    60,    61,    94,   105,    16,    17,    28,    18,
      44,    69,    19,    20,    85,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -22
static const yytype_int8 yypact[] =
{
       3,   -20,    51,    15,   -22,    37,   -22,   -22,    42,    45,
      55,    67,    46,   -22,     9,    41,   -22,   -22,    69,    16,
      23,   -22,    12,    19,    12,    12,    12,    12,   -22,    12,
     -22,    12,   -22,     4,   -22,   -22,    89,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,    90,   -22,    75,   -22,   -22,    12,
      12,    12,    12,    72,    16,    73,    16,    16,    16,    16,
      76,    22,    13,    78,    38,    13,    79,    80,   -22,    58,
     -22,    23,    23,   -22,   -22,   -22,    81,    12,    12,   -22,
     -22,   -22,   -22,   -22,   -22,    12,    82,    12,    12,    12,
     -22,   -22,   103,    15,   -22,   -22,   -22,    16,    15,   -22,
     -22,   -22,    16,   -22,   -22,    17,   -22,    27,    15,    83,
      15,   -22,   -22,    86,   -22,    15,    40,   -22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -22,    -3,   -22,    98,   -22,   -22,   -16,   -22,
     -22,   -22,   -22,    -4,   -22,    -2,   -22,   -22,   -22,   -22,
     -22,   -22,   -21,    36,    47,    39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      15,    54,     3,    56,    57,    58,    59,    66,    62,     1,
      65,    46,     5,     6,     7,    53,     6,     7,     5,     6,
       7,    49,    50,    55,    49,    50,    79,    80,    81,    82,
      83,    84,    45,    51,    52,     8,   108,     9,    10,    11,
     109,     8,    12,     9,    10,    11,   110,    67,    12,    22,
     111,     4,    13,    77,    78,    13,    62,    62,    13,   108,
      47,    23,    29,   117,    97,    31,    65,    65,   102,    87,
      88,   100,   101,    95,    96,    33,    24,    25,    26,    27,
      38,    39,    40,    41,    42,    71,    72,    36,    48,    43,
      73,    74,    66,    68,    70,   106,    23,    76,    75,    86,
      90,    91,    92,    93,    98,   112,   103,   114,   115,    37,
     113,     0,    89,   116
};

static const yytype_int8 yycheck[] =
{
       3,    22,    22,    24,    25,    26,    27,     3,    29,     6,
      31,    14,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     8,     9,     4,     8,     9,    13,    14,    15,    16,
      17,    18,    23,    10,    11,    26,    19,    28,    29,    30,
      23,    26,    33,    28,    29,    30,    19,    43,    33,    12,
      23,     0,    43,    31,    32,    43,    77,    78,    43,    19,
      19,    24,    20,    23,    85,    20,    87,    88,    89,    31,
      32,    87,    88,    77,    78,    20,    39,    40,    41,    42,
      34,    35,    36,    37,    38,    49,    50,    20,    19,    43,
      51,    52,     3,     3,    19,    98,    24,    21,    25,    21,
      21,    21,    44,    22,    22,   108,     3,   110,    22,    11,
      27,    -1,    65,   115
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    46,    22,     0,     3,     4,     5,    26,    28,
      29,    30,    33,    43,    47,    48,    61,    62,    64,    67,
      68,    70,    12,    24,    39,    40,    41,    42,    63,    20,
      56,    20,    51,    20,    49,    50,    20,    50,    34,    35,
      36,    37,    38,    43,    65,    23,    48,    19,    19,     8,
       9,    10,    11,     3,    67,     4,    67,    67,    67,    67,
      57,    58,    67,    52,    53,    67,     3,    43,     3,    66,
      19,    68,    68,    70,    70,    25,    21,    31,    32,    13,
      14,    15,    16,    17,    18,    69,    21,    31,    32,    69,
      21,    21,    44,    22,    59,    58,    58,    67,    22,    54,
      53,    53,    67,     3,    48,    60,    48,    55,    19,    23,
      19,    23,    48,    27,    48,    22,    60,    23
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

/* Line 1455 of yacc.c  */
#line 58 "analizadorSintactico.y"
    {printf("Main OK\n");guardarArchivoTercetos();}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 62 "analizadorSintactico.y"
    {printf("Sentencia ok\n"); escribirTablaSimbolos();}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 63 "analizadorSintactico.y"
    {escribirTablaSimbolos();}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "analizadorSintactico.y"
    {printf("While ok\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "analizadorSintactico.y"
    {printf("If ok\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "analizadorSintactico.y"
    {printf("Declaracion de variable ok\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 70 "analizadorSintactico.y"
    {printf("Expresion ok\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 71 "analizadorSintactico.y"
    {printf("Asignacion ok\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "analizadorSintactico.y"
    {printf("Asignacion especial ok\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 91 "analizadorSintactico.y"
    {printf("Sentencia comparacion WHILE ok\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 97 "analizadorSintactico.y"
    {printf("Condicion WHILE ok\n");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 110 "analizadorSintactico.y"
    {printf("Sentencia if ok\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 114 "analizadorSintactico.y"
    {printf("Sentencia comparacion IF ok\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 115 "analizadorSintactico.y"
    {printf("Sentencia AND comparacion IF ok\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 116 "analizadorSintactico.y"
    {printf("Sentencia OR comparacion IF ok\n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 120 "analizadorSintactico.y"
    {printf("Condicion IF ok\n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "analizadorSintactico.y"
    {printf("Cuerpo en If sin ELSE ok\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 134 "analizadorSintactico.y"
    {
		printf("Var: %s Asignacion ok\n",(yyvsp[(1) - (3)].var));
		indiceIdentificador = buscarPosicionTablaSimbolos((yyvsp[(1) - (3)].var));
		indiceAsignacion = crear_terceto(NOOP, NOOP, indiceIdentificador);
		crear_terceto(ASIG, indiceIdentificador,indiceExpresion);
		}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 143 "analizadorSintactico.y"
    {
		indiceAsignacion = buscarPosicionTablaSimbolos((yyvsp[(1) - (2)].var));
		printf("asigesp es: %d\n", ASIGESPMAS );
		indiceAsignacion = crear_terceto(NOOP,NOOP,indiceAsignacion);
		//modificarTerceto(indiceAsignacionEspecial,OP1,indiceAsignacion);
		indiceAsignacionEspecial = crear_terceto(indiceAsignacionEspecial, indiceExpresion, indiceAsignacion);
		indiceAsignacionEspecial = crear_terceto(ASIG,indiceAsignacionEspecial,indiceAsignacion);

		}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 155 "analizadorSintactico.y"
    {indiceAsignacionEspecial=SUMA;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 156 "analizadorSintactico.y"
    {indiceAsignacionEspecial=RESTA;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 157 "analizadorSintactico.y"
    {indiceAsignacionEspecial=MULTIPLICACION;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "analizadorSintactico.y"
    {indiceAsignacionEspecial=DIVISION;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 162 "analizadorSintactico.y"
    {
		printf("Primer Declaretion ok \n");
		posicionTablaSimbolos = agregarTipoTablaDeSimbolos(posicionTablaSimbolos, numeroTipo);
		}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 170 "analizadorSintactico.y"
    {
		printf("Variable de tipo float \n");
		numeroTipo = FLOAT;
		}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 174 "analizadorSintactico.y"
    {
		printf("Variable de tipo entero leido\n");
		numeroTipo = INT;
		}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 178 "analizadorSintactico.y"
    {
		printf("Variable de tipo string leido\n");
		numeroTipo = STRING;
		}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 182 "analizadorSintactico.y"
    {
		printf("Variable de tipo boolean leido\n");
		numeroTipo = BOOLEAN;
		}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 186 "analizadorSintactico.y"
    {
		printf("Variable de tipo char leido\n");
		numeroTipo = CHAR;
		}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 190 "analizadorSintactico.y"
    {
		printf("Variable de tipo double leido\n");
		numeroTipo = DOUBLE;
		}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 197 "analizadorSintactico.y"
    {
		printf("IdentificadorIntermedio: %s\n",(yyvsp[(1) - (1)].var));
		indiceIdentificadorIntermedio = crear_terceto(NOOP, NOOP, (yyvsp[(1) - (1)].var));
		posicionTablaSimbolos = agregarNombreTablaDeSimbolos((yyvsp[(1) - (1)].var));
		}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 206 "analizadorSintactico.y"
    {printf("llega a expresion");indiceExpresion = indiceTermino;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 207 "analizadorSintactico.y"
    {
			printf("Resta OK\n");
			indiceExpresion=crear_terceto(RESTA, indiceExpresion,indiceTermino);
			}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 211 "analizadorSintactico.y"
    {
			   printf("Suma OK\n");
			   indiceExpresion=crear_terceto(SUMA, indiceExpresion,indiceTermino);
			   }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 218 "analizadorSintactico.y"
    {indiceTermino = indiceFactor;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 219 "analizadorSintactico.y"
    {
			   printf("Multiplicacion OK\n");
			   indiceTermino=crear_terceto(MULTIPLICACION, indiceFactor,indiceTermino);
			   }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 223 "analizadorSintactico.y"
    {
			  printf("Division OK\n");
			  indiceTermino=crear_terceto(DIVISION, indiceFactor,indiceTermino);
			  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 239 "analizadorSintactico.y"
    {
		printf("Entra a factor y luego a IDENTIFICADOR: %s\n",(yyvsp[(1) - (1)].var));
		indiceIdentificador = buscarPosicionTablaSimbolos((yyvsp[(1) - (1)].var));
		validarExistenciaVariable(indiceIdentificador,(yyvsp[(1) - (1)].var));
		indiceFactor = crear_terceto(NOOP, NOOP, indiceIdentificador);

		}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 246 "analizadorSintactico.y"
    {
		agregarConstanteTablaDeSimbolos((yyvsp[(1) - (1)].var),CONSTANTE);
		indiceConstante = buscarPosicionTablaSimbolos((yyvsp[(1) - (1)].var));
		indiceFactor = crear_terceto(NOOP, NOOP, indiceConstante);
		}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 251 "analizadorSintactico.y"
    {
		agregarConstanteTablaDeSimbolos((yyvsp[(1) - (1)].var),REAL);
		indiceReal = buscarPosicionTablaSimbolos((yyvsp[(1) - (1)].var));
		indiceFactor = crear_terceto(NOOP, NOOP, indiceReal);
		}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 256 "analizadorSintactico.y"
    {printf("vector %s con %s espacios",(yyvsp[(1) - (4)].var),(yyvsp[(3) - (4)].var));}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 257 "analizadorSintactico.y"
    {
		agregarConstanteTablaDeSimbolos((yyvsp[(1) - (1)].var),CONSTANTE);
		indiceString = buscarPosicionTablaSimbolos((yyvsp[(1) - (1)].var));
		indiceFactor = crear_terceto(NOOP, NOOP, indiceString);
		}
    break;



/* Line 1455 of yacc.c  */
#line 1910 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 264 "analizadorSintactico.y"


int main(int argc,char *argv[])
{
  if ((yyin = fopen(argv[1], "rt")) == NULL)
  {
	  printf("\nNo se puede abrir el archivo: %s\n", argv[1]);
  }
  else
  {
	yyparse();
    printf("\nCompilacion Ok\n");
  }
  
  fclose(yyin);
  return (0);
}

int yyerror(void)
{
  printf("Error de sintaxis\n");
	getchar();
	exit (1);
}
