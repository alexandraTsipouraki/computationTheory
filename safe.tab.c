/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "safe.y"

#include <stdio.h>
#include <string.h>
#include "cgen.h"
#include "thetalib.h"

extern int yylex(void);   /*Prologue*/
extern int line_num;



#line 82 "safe.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SAFE_TAB_H_INCLUDED
# define YY_YY_SAFE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_IDENTIFIERS = 258,
    TK_INTCONST = 259,
    TK_FPCONST = 260,
    TK_BOOLCONST = 261,
    TK_CONSTSTRINGS = 262,
    TK_DEF = 263,
    TK_ENDDEF = 264,
    TK_RET = 265,
    TK_ARROW = 266,
    TK_SMALLER = 267,
    TK_BIGGER = 268,
    TK_POWER = 269,
    TK_EQ = 270,
    TK_NEQ = 271,
    TK_SIGNOP = 272,
    TK_AND = 273,
    TK_OR = 274,
    TK_NOT = 275,
    TK_ASSIGNOP = 276,
    TK_CONST = 277,
    TK_CONTINUE = 278,
    TK_BREAK = 279,
    TK_IF = 280,
    TK_ENDIF = 281,
    TK_FOR = 282,
    TK_ENDFOR = 283,
    TK_WHILE = 284,
    TK_ENDWHILE = 285,
    TK_ELSE = 286,
    TK_IN = 287,
    TK_COMP = 288,
    TK_ENDCOMP = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "safe.y"


char* str;


#line 175 "safe.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SAFE_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    49,     2,    40,     2,     2,
      43,    44,    38,     2,    47,     2,    45,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    46,
      36,    35,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   108,   108,   109,   119,   120,   121,   127,   128,   129,
     130,   137,   140,   143,   148,   151,   154,   161,   166,   173,
     176,   179,   182,   185,   188,   196,   199,   202,   205,   211,
     214,   217,   220,   223,   226,   233,   236,   242,   248,   251,
     254,   257,   262,   266,   272,   276,   291,   300,   303,   306,
     309,   312,   315,   318,   321,   324,   327,   330,   333,   336,
     339,   342,   345,   348,   351,   354,   357,   360,   363,   366,
     369,   372,   375,   378,   381,   387,   390,   397,   400,   403,
     406,   409,   412,   422,   427,   441,   448,   451,   474,   477,
     480,   486,   489,   496,   504,   507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_IDENTIFIERS", "TK_INTCONST",
  "TK_FPCONST", "TK_BOOLCONST", "TK_CONSTSTRINGS", "TK_DEF", "TK_ENDDEF",
  "TK_RET", "TK_ARROW", "TK_SMALLER", "TK_BIGGER", "TK_POWER", "TK_EQ",
  "TK_NEQ", "TK_SIGNOP", "TK_AND", "TK_OR", "TK_NOT", "TK_ASSIGNOP",
  "TK_CONST", "TK_CONTINUE", "TK_BREAK", "TK_IF", "TK_ENDIF", "TK_FOR",
  "TK_ENDFOR", "TK_WHILE", "TK_ENDWHILE", "TK_ELSE", "TK_IN", "TK_COMP",
  "TK_ENDCOMP", "'='", "'<'", "'>'", "'*'", "'/'", "'%'", "'['", "']'",
  "'('", "')'", "'.'", "';'", "','", "':'", "'#'", "$accept", "input",
  "prog_body", "data_types", "array", "comp_vars", "variables",
  "hasht_vars", "constants", "func_args", "function_head", "function_ret",
  "function_end", "function_body", "commands", "function", "comps", "exp",
  "func_expr", "statements", "break_statement", "continue_statement",
  "if_expr", "iff", "sss_for", "for_statement", "while_statement",
  "funccall_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    61,    60,    62,    42,    47,
      37,    91,    93,    40,    41,    46,    59,    44,    58,    35
};
# endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-16)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,   108,  -132,    76,  -132,  -132,  -132,  -132,    13,   365,
     365,    26,  -132,  -132,   -18,    32,    -3,    39,   365,   365,
    -132,   100,   110,  -132,  -132,   216,  -132,  -132,    19,  -132,
    -132,   498,  -132,  -132,  -132,   338,  -132,  -132,  -132,  -132,
      27,     0,    33,    79,  -132,   498,   128,    67,   365,    75,
     365,    62,   374,   408,   131,   122,    92,  -132,    94,   338,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   104,   130,
     141,  -132,  -132,   498,   -34,     6,   170,   419,   145,   453,
     139,  -132,  -132,   150,  -132,   143,  -132,  -132,  -132,  -132,
    -132,  -132,   216,  -132,   128,   128,    61,    60,    60,   128,
     553,   543,   553,   498,   509,   128,   128,    61,    61,    61,
     464,  -132,   175,  -132,  -132,  -132,   365,   -15,     1,     8,
     146,   147,   155,   157,    43,   160,    58,   161,   164,  -132,
    -132,  -132,   162,   498,    14,   122,   149,  -132,    12,   211,
     122,   122,   122,   122,   169,   176,  -132,  -132,  -132,    22,
     338,   131,   219,   338,   192,   188,  -132,   189,   196,   266,
    -132,   199,  -132,  -132,  -132,  -132,   122,   122,    58,    58,
     205,   116,   222,   207,   210,   122,  -132,  -132,   217,   227,
    -132,  -132,   259,    15,   225,   122,  -132,   257,   122,  -132,
    -132,  -132,   229,   274,  -132,  -132,  -132,  -132,   338,   243,
     246,   245,   284,   338,  -132,   249,   311,  -132
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    48,    49,    47,    72,    71,     0,    35,
       0,     0,    84,    83,     0,     0,     0,     0,     0,     0,
       3,    73,     0,    38,    39,     0,    82,    42,     0,     4,
       5,    41,    40,    80,    81,     0,    77,    78,    79,    74,
       0,     0,     0,    48,    73,    36,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    95,    76,     0,     0,     0,     0,     0,     0,
       0,    69,    68,    14,    15,    16,     7,    10,     8,     9,
      17,    37,     0,    43,    63,    64,    66,    60,    59,    65,
      57,    56,    58,    55,    51,    61,    62,    52,    53,    54,
       0,    67,     0,    13,    12,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      70,    87,     0,    75,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    89,    88,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
      30,    28,    19,    23,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    31,     0,     0,
      20,    24,    90,     0,     0,     0,    46,     0,     0,    26,
      34,    32,     0,     0,    93,    18,    86,    27,     0,     0,
       0,     0,     0,     0,    92,     0,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -131,    -1,   -52,  -132,  -132,  -132,   148,
    -132,  -132,   194,   -51,   -24,   137,  -132,    18,  -132,  -132,
    -132,  -132,  -132,  -132,    -9,  -132,  -132,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    20,   100,    44,    22,    23,   162,    24,   129,
      25,    26,    57,    27,    28,    29,    30,    31,    84,    32,
      33,    34,    35,    36,   159,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    58,    95,    43,     4,     5,     6,     7,   103,   127,
     125,    78,   146,   126,   166,   168,    42,    10,   164,   172,
     173,   174,   175,   169,    21,    48,   144,    45,    46,    47,
      79,    80,   178,   145,    21,    49,    52,    53,   189,   178,
      50,    18,    51,    19,    82,   190,   191,   154,   155,   147,
     128,   103,   148,    94,   199,   149,   165,   202,    21,    83,
     170,   157,   158,   203,   205,    59,    87,   207,    89,    81,
     179,   103,    60,    61,    62,    62,    85,    65,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    71,    72,    73,    74,
      75,    21,    86,    76,    76,    77,    77,    88,     2,   181,
      90,     3,     4,     5,     6,     7,     8,    40,     9,    41,
      40,    21,    41,   -14,   -14,    10,    96,    97,    98,    99,
      11,    12,    13,    14,    93,    15,   180,    16,   101,   183,
     102,    17,    62,   103,   143,    65,   103,   -15,   -15,    18,
     122,    19,   167,    96,    97,    98,    99,    54,    55,    21,
      94,   103,    21,    54,   195,   103,    73,    74,    75,   192,
     193,    76,   123,    77,   130,   131,   132,   133,     3,     4,
       5,     6,     7,   124,   210,     9,   136,   134,   138,   215,
      54,    40,    10,    21,   150,   151,    21,    11,    12,    13,
      14,   141,    15,   152,    16,   153,   142,    21,   156,   160,
     163,    21,    21,   161,   127,    21,    18,   176,    19,     3,
       4,     5,     6,     7,   177,    56,     9,     8,     3,     4,
       5,     6,     7,    10,   184,     9,   185,   186,    11,    12,
      13,    14,    10,    15,   187,    16,   149,    11,    12,    13,
      14,   194,    15,   197,    16,   204,   196,    18,   198,    19,
       3,     4,     5,     6,     7,   200,    18,     9,    19,   188,
      96,    97,    98,    99,    10,   201,   178,   208,   209,    11,
      12,    13,    14,   206,    15,   211,    16,     3,     4,     5,
       6,     7,   212,   213,     9,   216,   139,   171,    18,   182,
      19,    10,     0,     0,     0,     0,    11,    12,    13,    14,
       0,    15,   214,    16,     3,     4,     5,     6,     7,     0,
       0,     9,     0,     0,     0,    18,     0,    19,    10,     0,
       0,     0,     0,    11,    12,    13,    14,     0,    15,   217,
      16,     3,     4,     5,     6,     7,     0,     0,     9,     0,
       0,     0,    18,     0,    19,    10,     0,     0,     0,     0,
      11,    12,    13,    14,     0,    15,     0,    16,    43,     4,
       5,     6,     7,     0,     0,     0,     0,     0,     0,    18,
       0,    19,    10,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,    19,    70,
      71,    72,    73,    74,    75,     0,    91,    76,     0,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,     0,     0,    70,    71,    72,    73,    74,    75,     0,
       0,    76,    92,    77,    70,    71,    72,    73,    74,    75,
       0,     0,    76,   135,    77,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     0,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,     0,    70,    71,
      72,    73,    74,    75,     0,     0,    76,   137,    77,    70,
      71,    72,    73,    74,    75,     0,     0,    76,   140,    77,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,    70,    71,    72,    73,    74,    75,     0,
       0,    76,     0,    77,    70,    71,    72,    73,    74,    75,
       0,     0,    76,     0,    77,    60,    61,    62,    63,    64,
      65,    66,     0,    68,     0,    60,    61,    62,    63,    64,
      65,     0,     0,    68,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,     0,    76,     0,    77,    71,
      72,    73,    74,    75,     0,     0,    76,     0,    77
};

static const yytype_int16 yycheck[] =
{
       1,    25,    54,     3,     4,     5,     6,     7,    59,     3,
      44,    35,    11,    47,   145,   146,     3,    17,     4,   150,
     151,   152,   153,    11,    25,    43,    41,     9,    10,     3,
       3,     4,    17,    48,    35,     3,    18,    19,   169,    17,
      43,    41,     3,    43,    44,   176,   177,     4,     5,    48,
      44,   102,    44,    54,   185,    47,    42,    42,    59,    41,
      48,     3,     4,    48,   195,    46,    48,   198,    50,    42,
      48,   122,    12,    13,    14,    14,    43,    17,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    36,    37,    38,    39,
      40,   102,    35,    43,    43,    45,    45,    32,     0,   161,
      48,     3,     4,     5,     6,     7,     8,    41,    10,    43,
      41,   122,    43,    47,    48,    17,     4,     5,     6,     7,
      22,    23,    24,    25,     3,    27,   160,    29,    46,   163,
      46,    33,    14,   194,   126,    17,   197,    47,    48,    41,
      46,    43,     3,     4,     5,     6,     7,    47,    48,   160,
     161,   212,   163,    47,    48,   216,    38,    39,    40,   178,
     179,    43,    42,    45,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    42,   208,    10,    41,    17,    49,   213,
      47,    41,    17,   194,    48,    48,   197,    22,    23,    24,
      25,    26,    27,    48,    29,    48,    31,   208,    48,    48,
      48,   212,   213,    49,     3,   216,    41,    48,    43,     3,
       4,     5,     6,     7,    48,     9,    10,     8,     3,     4,
       5,     6,     7,    17,    42,    10,    48,    48,    22,    23,
      24,    25,    17,    27,    48,    29,    47,    22,    23,    24,
      25,    46,    27,    46,    29,    30,    34,    41,    48,    43,
       3,     4,     5,     6,     7,    48,    41,    10,    43,     3,
       4,     5,     6,     7,    17,    48,    17,    48,     4,    22,
      23,    24,    25,    26,    27,    42,    29,     3,     4,     5,
       6,     7,    46,    48,    10,    46,   102,   149,    41,   162,
      43,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    28,    29,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    41,    -1,    43,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      29,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    41,    -1,    43,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    -1,    29,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    43,    17,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    45,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    44,    45,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    -1,    43,    44,    45,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    44,    45,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    45,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    -1,    45,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    43,    -1,    45,    36,
      37,    38,    39,    40,    -1,    -1,    43,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     3,     4,     5,     6,     7,     8,    10,
      17,    22,    23,    24,    25,    27,    29,    33,    41,    43,
      52,    54,    55,    56,    58,    60,    61,    63,    64,    65,
      66,    67,    69,    70,    71,    72,    73,    75,    76,    77,
      41,    43,     3,     3,    54,    67,    67,     3,    43,     3,
      43,     3,    67,    67,    47,    48,     9,    62,    64,    46,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      35,    36,    37,    38,    39,    40,    43,    45,    64,     3,
       4,    42,    44,    67,    68,    43,    35,    67,    32,    67,
      48,    42,    44,     3,    54,    55,     4,     5,     6,     7,
      53,    46,    46,    63,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    46,    42,    42,    44,    47,     3,    44,    59,
       4,     5,     6,     7,    17,    44,    41,    44,    49,    62,
      44,    26,    31,    67,    41,    48,    11,    48,    44,    47,
      48,    48,    48,    48,     4,     5,    48,     3,     4,    74,
      48,    49,    57,    48,     4,    42,    53,     3,    53,    11,
      48,    59,    53,    53,    53,    53,    48,    48,    17,    48,
      64,    55,    65,    64,    42,    48,    48,    48,     3,    53,
      53,    53,    74,    74,    46,    48,    34,    46,    48,    53,
      48,    48,    42,    48,    30,    53,    26,    53,    48,     4,
      64,    42,    46,    48,    28,    64,    46,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    55,    55,    55,    56,    57,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    61,    61,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    70,    71,    72,    73,    73,    74,    74,
      74,    75,    75,    76,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       1,     3,     4,     4,     1,     1,     3,     3,     4,     6,
       7,     6,     6,     6,     7,     3,     5,     6,     3,     5,
       6,     7,     8,     7,     8,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     4,     2,     7,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     8,     4,     1,     1,
       3,    14,    12,     8,     4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
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
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 110 "safe.y"
{
    if (yyerror_count == 0){
        puts(c_prologue);
        printf("%s\n", (yyvsp[0].str));
    }

}
#line 1574 "safe.tab.c"
    break;

  case 6:
#line 121 "safe.y"
             {
    (yyval.str)=template("%s ",(yyvsp[-1].str));
}
#line 1582 "safe.tab.c"
    break;

  case 7:
#line 127 "safe.y"
            { (yyval.str) = template("int"); }
#line 1588 "safe.tab.c"
    break;

  case 8:
#line 128 "safe.y"
               { (yyval.str) = template("int"); }
#line 1594 "safe.tab.c"
    break;

  case 9:
#line 129 "safe.y"
                  { (yyval.str) = template("char*"); }
#line 1600 "safe.tab.c"
    break;

  case 10:
#line 130 "safe.y"
             {(yyval.str) = template("double"); }
#line 1606 "safe.tab.c"
    break;

  case 11:
#line 137 "safe.y"
                     {
    (yyval.str)=template("%s[]",(yyvsp[-2].str));
}
#line 1614 "safe.tab.c"
    break;

  case 12:
#line 140 "safe.y"
                                  {
    (yyval.str)=template("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str));
}
#line 1622 "safe.tab.c"
    break;

  case 13:
#line 143 "safe.y"
                                     {
    (yyval.str)=template("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str));
}
#line 1630 "safe.tab.c"
    break;

  case 14:
#line 148 "safe.y"
               { 
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 1638 "safe.tab.c"
    break;

  case 15:
#line 151 "safe.y"
       { 
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 1646 "safe.tab.c"
    break;

  case 16:
#line 154 "safe.y"
                         {
    (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));
}
#line 1654 "safe.tab.c"
    break;

  case 17:
#line 161 "safe.y"
                         {
  (yyval.str) = template("%s %s ", (yyvsp[0].str), (yyvsp[-2].str));
}
#line 1662 "safe.tab.c"
    break;

  case 18:
#line 166 "safe.y"
                            {
  (yyval.str) = template("%s %s ", (yyvsp[0].str), (yyvsp[-2].str));
}
#line 1670 "safe.tab.c"
    break;

  case 19:
#line 173 "safe.y"
                                                      {
    (yyval.str) = template("const %s %s = %s ",(yyvsp[0].str),(yyvsp[-4].str),(yyvsp[-2].str));
}
#line 1678 "safe.tab.c"
    break;

  case 20:
#line 176 "safe.y"
                                                                 {
    (yyval.str) = template("const %s %s = %s%s ",(yyvsp[0].str),(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[-2].str));
}
#line 1686 "safe.tab.c"
    break;

  case 21:
#line 179 "safe.y"
                                                        {
    (yyval.str) = template("const %s %s = %s ",(yyvsp[0].str),(yyvsp[-4].str),(yyvsp[-2].str));
}
#line 1694 "safe.tab.c"
    break;

  case 22:
#line 182 "safe.y"
                                                            {
    (yyval.str) = template("const %s %s = %s ",(yyvsp[0].str),(yyvsp[-4].str),(yyvsp[-2].str));
}
#line 1702 "safe.tab.c"
    break;

  case 23:
#line 185 "safe.y"
                                                      {
    (yyval.str) = template("const %s %s = %s ",(yyvsp[0].str),(yyvsp[-4].str),(yyvsp[-2].str));
}
#line 1710 "safe.tab.c"
    break;

  case 24:
#line 188 "safe.y"
                                                                {
    (yyval.str) = template("const %s %s = %s%s ",(yyvsp[0].str),(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[-2].str));
}
#line 1718 "safe.tab.c"
    break;

  case 25:
#line 196 "safe.y"
                              {
    (yyval.str)=template("%s  %s", (yyvsp[0].str),(yyvsp[-2].str));
}
#line 1726 "safe.tab.c"
    break;

  case 26:
#line 199 "safe.y"
                                     {
    (yyval.str)=template("%s %s[]",(yyvsp[0].str),(yyvsp[-4].str));
}
#line 1734 "safe.tab.c"
    break;

  case 27:
#line 202 "safe.y"
                                                 {
    (yyval.str)=template(" %s %s[%s]",(yyvsp[0].str),(yyvsp[-5].str),(yyvsp[-3].str));
}
#line 1742 "safe.tab.c"
    break;

  case 28:
#line 205 "safe.y"
                          {
    (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));
}
#line 1750 "safe.tab.c"
    break;

  case 29:
#line 211 "safe.y"
                                  {  //for voids and no args
    (yyval.str)=template("void %s(){",(yyvsp[-3].str));
}
#line 1758 "safe.tab.c"
    break;

  case 30:
#line 214 "safe.y"
                                              {  //for voids with args
    (yyval.str)=template("void %s(%s){",(yyvsp[-4].str), (yyvsp[-2].str));
}
#line 1766 "safe.tab.c"
    break;

  case 31:
#line 217 "safe.y"
                                                       {  //for ret type!=void  and no args
    (yyval.str)=template("%s %s(){",(yyvsp[-1].str),(yyvsp[-5].str));
}
#line 1774 "safe.tab.c"
    break;

  case 32:
#line 220 "safe.y"
                                                                  {  //for ret type!=void  and  args
    (yyval.str)=template("%s %s(%s){",(yyvsp[-1].str),(yyvsp[-6].str),(yyvsp[-4].str));
}
#line 1782 "safe.tab.c"
    break;

  case 33:
#line 223 "safe.y"
                                                           {  //for ret type!=void  and no args
    (yyval.str)=template("%s %s(){",(yyvsp[-1].str),(yyvsp[-5].str));
}
#line 1790 "safe.tab.c"
    break;

  case 34:
#line 226 "safe.y"
                                                                      {  //for ret type!=void  and  args
    (yyval.str)=template("%s %s(%s){",(yyvsp[-1].str),(yyvsp[-6].str),(yyvsp[-4].str));
}
#line 1798 "safe.tab.c"
    break;

  case 35:
#line 233 "safe.y"
       {
    (yyval.str)=template("return");
}
#line 1806 "safe.tab.c"
    break;

  case 36:
#line 236 "safe.y"
              {
    (yyval.str)=template("return %s",(yyvsp[0].str));
}
#line 1814 "safe.tab.c"
    break;

  case 37:
#line 242 "safe.y"
             {
    (yyval.str)=template("}");
}
#line 1822 "safe.tab.c"
    break;

  case 38:
#line 248 "safe.y"
         {
    (yyval.str)=template("%s;\n",(yyvsp[0].str));
}
#line 1830 "safe.tab.c"
    break;

  case 39:
#line 251 "safe.y"
          {
    (yyval.str)=template("%s;\n",(yyvsp[0].str));
}
#line 1838 "safe.tab.c"
    break;

  case 40:
#line 254 "safe.y"
           {
    (yyval.str)=template("%s;\n",(yyvsp[0].str));
}
#line 1846 "safe.tab.c"
    break;

  case 41:
#line 257 "safe.y"
    {
    (yyval.str)=template("%s;\n",(yyvsp[0].str));
}
#line 1854 "safe.tab.c"
    break;

  case 42:
#line 262 "safe.y"
              {
     (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 1862 "safe.tab.c"
    break;

  case 43:
#line 266 "safe.y"
                          {
    (yyval.str) = template ("%s %s",(yyvsp[-2].str),(yyvsp[0].str));
}
#line 1870 "safe.tab.c"
    break;

  case 44:
#line 272 "safe.y"
                                       {
    (yyval.str)=template("%s\n %s\n %s\n",(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[0].str));

}
#line 1879 "safe.tab.c"
    break;

  case 45:
#line 276 "safe.y"
                           {
    (yyval.str)=template("%s\n %s\n ",(yyvsp[-1].str),(yyvsp[0].str));

}
#line 1888 "safe.tab.c"
    break;

  case 46:
#line 291 "safe.y"
                                                            {
   // $$=template("typedef struct %s { \n %s ");
   (yyval.str)=template("ok");
}
#line 1897 "safe.tab.c"
    break;

  case 47:
#line 300 "safe.y"
          {
    (yyval.str)=template(" %s ", (yyvsp[0].str));
}
#line 1905 "safe.tab.c"
    break;

  case 48:
#line 303 "safe.y"
                { 
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 1913 "safe.tab.c"
    break;

  case 49:
#line 306 "safe.y"
            {
    (yyval.str)=template(" %s ", (yyvsp[0].str));
}
#line 1921 "safe.tab.c"
    break;

  case 50:
#line 309 "safe.y"
                {
     (yyval.str)=template("%s %s ", (yyvsp[-1].str),(yyvsp[0].str));
}
#line 1929 "safe.tab.c"
    break;

  case 51:
#line 312 "safe.y"
            {
    (yyval.str)=template(" %s = %s", (yyvsp[-2].str),(yyvsp[0].str));
}
#line 1937 "safe.tab.c"
    break;

  case 52:
#line 315 "safe.y"
            {
    (yyval.str)=template(" %s * %s", (yyvsp[-2].str),(yyvsp[0].str));
}
#line 1945 "safe.tab.c"
    break;

  case 53:
#line 318 "safe.y"
            {
    (yyval.str)=template(" %s / %s", (yyvsp[-2].str),(yyvsp[0].str));
}
#line 1953 "safe.tab.c"
    break;

  case 54:
#line 321 "safe.y"
            {
    (yyval.str)=template(" %s % %s", (yyvsp[-2].str),(yyvsp[0].str));
}
#line 1961 "safe.tab.c"
    break;

  case 55:
#line 324 "safe.y"
                    {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 1969 "safe.tab.c"
    break;

  case 56:
#line 327 "safe.y"
                {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 1977 "safe.tab.c"
    break;

  case 57:
#line 330 "safe.y"
                {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 1985 "safe.tab.c"
    break;

  case 58:
#line 333 "safe.y"
                {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 1993 "safe.tab.c"
    break;

  case 59:
#line 336 "safe.y"
                {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2001 "safe.tab.c"
    break;

  case 60:
#line 339 "safe.y"
              {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2009 "safe.tab.c"
    break;

  case 61:
#line 342 "safe.y"
            {
    (yyval.str)=template(" %s < %s ",(yyvsp[-2].str),(yyvsp[0].str));
}
#line 2017 "safe.tab.c"
    break;

  case 62:
#line 345 "safe.y"
            {
    (yyval.str)=template(" %s > %s ",(yyvsp[-2].str),(yyvsp[0].str));
}
#line 2025 "safe.tab.c"
    break;

  case 63:
#line 348 "safe.y"
                   {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2033 "safe.tab.c"
    break;

  case 64:
#line 351 "safe.y"
                   {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2041 "safe.tab.c"
    break;

  case 65:
#line 354 "safe.y"
                   {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2049 "safe.tab.c"
    break;

  case 66:
#line 357 "safe.y"
                   {
    (yyval.str)=template(" %s %s %s", (yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2057 "safe.tab.c"
    break;

  case 67:
#line 360 "safe.y"
              {
     (yyval.str)=template(" %s . %s ",(yyvsp[-2].str),(yyvsp[0].str));
}
#line 2065 "safe.tab.c"
    break;

  case 68:
#line 363 "safe.y"
            {
     (yyval.str)=template(" (%s) ",(yyvsp[-1].str));
}
#line 2073 "safe.tab.c"
    break;

  case 69:
#line 366 "safe.y"
            {
     (yyval.str)=template(" [%s] ",(yyvsp[-1].str));
}
#line 2081 "safe.tab.c"
    break;

  case 70:
#line 369 "safe.y"
               {
     (yyval.str)=template(" %s(%s) ",(yyvsp[-3].str),(yyvsp[-1].str));
}
#line 2089 "safe.tab.c"
    break;

  case 71:
#line 372 "safe.y"
                {
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2097 "safe.tab.c"
    break;

  case 72:
#line 375 "safe.y"
             {
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2105 "safe.tab.c"
    break;

  case 73:
#line 378 "safe.y"
      {
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2113 "safe.tab.c"
    break;

  case 74:
#line 381 "safe.y"
                   {
     (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2121 "safe.tab.c"
    break;

  case 75:
#line 387 "safe.y"
                 {
    (yyval.str)=template(" %s,%s ",(yyvsp[-2].str),(yyvsp[0].str));
}
#line 2129 "safe.tab.c"
    break;

  case 76:
#line 390 "safe.y"
    {
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2137 "safe.tab.c"
    break;

  case 77:
#line 397 "safe.y"
   {
       (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2145 "safe.tab.c"
    break;

  case 78:
#line 400 "safe.y"
              {
       (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2153 "safe.tab.c"
    break;

  case 79:
#line 403 "safe.y"
                {
       (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2161 "safe.tab.c"
    break;

  case 80:
#line 406 "safe.y"
                {
       (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2169 "safe.tab.c"
    break;

  case 81:
#line 409 "safe.y"
                   {
       (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2177 "safe.tab.c"
    break;

  case 82:
#line 412 "safe.y"
             {
     (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2185 "safe.tab.c"
    break;

  case 83:
#line 422 "safe.y"
        {
    (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2193 "safe.tab.c"
    break;

  case 84:
#line 427 "safe.y"
            {
   (yyval.str)=template("%s",(yyvsp[0].str));
}
#line 2201 "safe.tab.c"
    break;

  case 85:
#line 441 "safe.y"
                     {
    (yyval.str)=template("if (%s){\n",(yyvsp[-2].str));
}
#line 2209 "safe.tab.c"
    break;

  case 86:
#line 448 "safe.y"
                                                       {
(yyval.str)=template("%s  %s }\nelse\n{ %s \n} ", (yyvsp[-7].str),(yyvsp[-4].str),(yyvsp[-2].str));
}
#line 2217 "safe.tab.c"
    break;

  case 87:
#line 451 "safe.y"
                               {
(yyval.str)=template("%s  %s }",(yyvsp[-3].str),(yyvsp[-2].str));
}
#line 2225 "safe.tab.c"
    break;

  case 88:
#line 474 "safe.y"
           {
(yyval.str)=template( "%s" ,(yyvsp[0].str));
}
#line 2233 "safe.tab.c"
    break;

  case 89:
#line 477 "safe.y"
               {
(yyval.str)=template( "%s" ,(yyvsp[0].str));
}
#line 2241 "safe.tab.c"
    break;

  case 90:
#line 480 "safe.y"
                          {
(yyval.str)=template( "%s %s %s" ,(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str));
}
#line 2249 "safe.tab.c"
    break;

  case 91:
#line 486 "safe.y"
                                                                                                  {
    (yyval.str)=template("for (int %s=%s ; %s < %s; %s=%s+%s){\n %s \n}",(yyvsp[-12].str),(yyvsp[-9].str),(yyvsp[-12].str),(yyvsp[-7].str),(yyvsp[-12].str),(yyvsp[-12].str),(yyvsp[-5].str),(yyvsp[-2].str));
}
#line 2257 "safe.tab.c"
    break;

  case 92:
#line 489 "safe.y"
                                                                                 {
    (yyval.str)=template("for (int %s=%s ; %s < %s; %s++){\n %s \n}",(yyvsp[-10].str),(yyvsp[-7].str),(yyvsp[-10].str),(yyvsp[-5].str),(yyvsp[-10].str),(yyvsp[-2].str));
}
#line 2265 "safe.tab.c"
    break;

  case 93:
#line 496 "safe.y"
                                                {
    (yyval.str)=template("while ( %s ){\n %s\n}",(yyvsp[-5].str),(yyvsp[-2].str));
}
#line 2273 "safe.tab.c"
    break;

  case 94:
#line 504 "safe.y"
                              {
    (yyval.str)=template( "%s(%s)" ,(yyvsp[-3].str),(yyvsp[-1].str));
}
#line 2281 "safe.tab.c"
    break;

  case 95:
#line 507 "safe.y"
                      {
    (yyval.str)=template( "%s()" ,(yyvsp[-2].str));
}
#line 2289 "safe.tab.c"
    break;


#line 2293 "safe.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 514 "safe.y"

int main(){   /*Epilogue*/
/* #ifdef YYDEBUG
yydebug = 1;
#endif  */
if ( yyparse() == 0 )
    printf("//Accepted!\n");
else
    printf("//Rejected!\n");
          }
