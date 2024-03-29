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
#line 4 "compiler_hw2.y"

    #include "compiler_hw_common.h" //Extern variables that communicate with lex
    // #define YYDEBUG 1
    // int yydebug = 1;

    extern int yylineno;
    extern int yylex();
    extern char *yytext;
    extern FILE *yyin;
    
    int symboltable_sum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    struct symboltable{
        int index;
        char name[30];
        char type[10];
        int address;
        int lineno;
        char func_sig[10];
    };


    int yylex_destroy ();
    void yyerror (char const *s)
    {
        printf("error:%d: %s\n", yylineno, s);
    }

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;
    int scopelevel = 0;
    int address = 0;
    int print_type;
    char type;
    char str[30];
    struct symboltable ptr[10][10];
    char index_tmp[10];
    int idx = 0;
    char str_tmp[10];
    char type_tmp[10];
    char type_c;
    int address_tmp;
    char cmp1[10]="$";
    char cmp2[10]="$";
    int cmp_idx=0;
    int ans=0;
    int abs_error = 0;
    int check = 0;
    /* Symbol table function - you can add new functions if needed. */
    /* parameters and return type can be changed */
    static void create_symbol();
    static void create_symbol_param();
    static void insert_symbol(char *, char *);
    static void lookup_symbol(char *);
    static void dump_symbol();
    static char *comp(char *str_in);

    /* Global variables */
    bool HAS_ERROR = false;

#line 131 "y.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    NEWLINE = 259,
    PACKAGE = 260,
    INT = 261,
    FLOAT = 262,
    BOOL = 263,
    STRING = 264,
    ASSIGN = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    MUL_ASSIGN = 268,
    QUO_ASSIGN = 269,
    REM_ASSIGN = 270,
    IF = 271,
    ELSE = 272,
    FOR = 273,
    SWITCH = 274,
    CASE = 275,
    DEFAULT = 276,
    SEMICOLON = 277,
    COMMA = 278,
    COLON = 279,
    PRINT = 280,
    PRINTLN = 281,
    RETURN = 282,
    FUNC = 283,
    LPAREN = 284,
    RPAREN = 285,
    LBRACE = 286,
    RBRACE = 287,
    LBRACK = 288,
    RBRACK = 289,
    LOR = 290,
    LAND = 291,
    GTR = 292,
    LSS = 293,
    GEQ = 294,
    LEQ = 295,
    EQL = 296,
    NEQ = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    QUO = 301,
    REM = 302,
    INC = 303,
    DEC = 304,
    NOT = 305,
    INT_LIT = 306,
    FLOAT_LIT = 307,
    BOOL_LIT = 308,
    STRING_LIT = 309,
    IDENT = 310
  };
#endif
/* Tokens.  */
#define VAR 258
#define NEWLINE 259
#define PACKAGE 260
#define INT 261
#define FLOAT 262
#define BOOL 263
#define STRING 264
#define ASSIGN 265
#define ADD_ASSIGN 266
#define SUB_ASSIGN 267
#define MUL_ASSIGN 268
#define QUO_ASSIGN 269
#define REM_ASSIGN 270
#define IF 271
#define ELSE 272
#define FOR 273
#define SWITCH 274
#define CASE 275
#define DEFAULT 276
#define SEMICOLON 277
#define COMMA 278
#define COLON 279
#define PRINT 280
#define PRINTLN 281
#define RETURN 282
#define FUNC 283
#define LPAREN 284
#define RPAREN 285
#define LBRACE 286
#define RBRACE 287
#define LBRACK 288
#define RBRACK 289
#define LOR 290
#define LAND 291
#define GTR 292
#define LSS 293
#define GEQ 294
#define LEQ 295
#define EQL 296
#define NEQ 297
#define ADD 298
#define SUB 299
#define MUL 300
#define QUO 301
#define REM 302
#define INC 303
#define DEC 304
#define NOT 305
#define INT_LIT 306
#define FLOAT_LIT 307
#define BOOL_LIT 308
#define STRING_LIT 309
#define IDENT 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "compiler_hw2.y"

    int i_val;
    float f_val;
    bool b_val;
    char *s_val;
    /* ... */

#line 301 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   117,   117,   121,   122,   126,   127,   128,   132,   136,
     155,   136,   156,   156,   156,   157,   157,   157,   158,   158,
     158,   162,   166,   167,   168,   169,   173,   174,   178,   180,
     184,   185,   189,   190,   191,   192,   196,   197,   198,   202,
     203,   204,   205,   206,   207,   208,   212,   213,   217,   221,
     222,   223,   224,   228,   229,   230,   231,   232,   236,   237,
     238,   240,   244,   248,   249,   250,   251,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   268,   269,   270,
     274,   275,   279,   280,   281,   282,   283,   284,   288,   292,
     293,   297,   297,   297,   301,   302,   306,   307,   308,   312,
     316,   317,   321,   325,   329,   333,   337,   337,   338,   342,
     346
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "NEWLINE", "PACKAGE", "INT",
  "FLOAT", "BOOL", "STRING", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "QUO_ASSIGN", "REM_ASSIGN", "IF", "ELSE", "FOR", "SWITCH",
  "CASE", "DEFAULT", "SEMICOLON", "COMMA", "COLON", "PRINT", "PRINTLN",
  "RETURN", "FUNC", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK",
  "RBRACK", "LOR", "LAND", "GTR", "LSS", "GEQ", "LEQ", "EQL", "NEQ", "ADD",
  "SUB", "MUL", "QUO", "REM", "INC", "DEC", "NOT", "INT_LIT", "FLOAT_LIT",
  "BOOL_LIT", "STRING_LIT", "IDENT", "$accept", "Program",
  "GlobalStatementList", "GlobalStatement", "PackageStmt",
  "FunctionDeclStmt", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "FuncOpen", "ParameterList", "ReturnStmt", "PrimaryExpr",
  "Expression", "Multiplication", "Addition", "Comparison", "Logicand",
  "Logicor", "UnaryExpr", "Operand", "Literal", "ConversionExpr", "Type",
  "Statement", "SimpleStmt", "DeclarationStmt", "AssignmentStmt",
  "ExpressionStmt", "IncDecStmt", "Block", "$@9", "$@10", "StatementList",
  "IfStmt", "Condition", "ForStmt", "ForClause", "InitStmt", "PostStmt",
  "SwitchStmt", "CaseStmt", "$@11", "PrintStmt", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,   -80,   -43,   -17,    47,    32,   -80,    12,   -80,    19,
     -80,   -80,   -80,   -80,   -80,   -25,    14,    35,    10,   -80,
     -80,   -80,   -80,   -80,    24,   -80,    71,    18,    85,   -80,
     -80,   -80,   -80,   -80,    35,   -80,   -80,    27,    -5,   -80,
     112,   112,   112,     8,    40,    36,    61,   112,   112,   -80,
     112,   112,   112,    67,    94,   -80,   178,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,    70,    85,   103,   104,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   105,
      85,   -80,    85,   -80,    35,   264,    82,   138,   -80,    82,
      82,    93,   251,   -80,    82,   112,   112,   264,   164,    85,
     -80,   -80,   -80,   -24,   -80,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   -80,   -80,   112,   -80,   -80,   -80,
      95,   -80,   -80,   -80,    85,   107,   113,   -80,   -80,   112,
     -80,   108,   -80,   198,   216,   -80,   -80,   -80,    16,   264,
     264,   264,   264,   264,   264,   276,   287,    99,    99,    99,
      99,    99,    99,     7,     7,   -80,   -80,   -80,   234,   -80,
     101,   122,   -80,   112,    -2,   109,    82,   -80,   -80,   125,
     -80,   -80,   -80,   -80,   126,   264,   -80,   -80,   112,   -80,
     -80,   -80,   -80,   -80
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     7,     0,     0,     0,     2,     4,     0,     6,     0,
       8,    21,     1,     3,     5,     0,     0,    23,     0,    63,
      64,    66,    65,    18,     0,    22,     0,     0,     0,    15,
      58,    59,    60,    61,     0,    25,    12,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    91,
       0,     0,     0,    54,     0,    49,    88,    31,    35,    38,
      45,    47,    30,    28,    53,    29,     0,    95,     0,     0,
      77,    78,    79,    69,    19,    70,    71,    72,    73,     0,
       0,    24,     0,     9,     0,    99,     0,    88,   103,     0,
       0,     0,     0,   106,     0,     0,     0,    26,     0,     0,
      50,    51,    52,     0,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,    94,    68,    67,
       0,    74,    16,    13,     0,    80,    98,   100,   101,     0,
     105,     0,   108,     0,     0,    55,    92,    56,     0,    82,
      83,    84,    85,    86,    87,    48,    46,    43,    41,    44,
      42,    39,    40,    36,    37,    32,    33,    34,     0,    20,
       0,     0,    10,     0,     0,     0,     0,   109,   110,     0,
      57,    62,    17,    14,     0,    81,    97,    96,     0,   107,
      93,    11,   104,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   154,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,    57,   -80,   -80,   -39,   -80,
     -80,   -80,   -80,   -80,    11,   -80,   135,   -80,     1,   -80,
     -41,   -80,   -80,   -80,   -80,   -79,   -80,   -80,   -48,    -6,
     -37,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,   134,   184,    82,   171,
      80,   170,    28,   130,     9,    18,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    99,   179,    74,    75,
      86,    76,    90,    91,   193,    77,    78,   141,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    85,    87,    92,    89,    16,   147,   136,    97,    98,
     137,   138,    10,   140,    40,   142,    14,    24,    25,   127,
      19,    20,    21,    22,    19,    20,    21,    22,    37,    49,
      17,    17,   132,    26,   133,    81,     1,     2,    11,    26,
      27,    19,    20,    21,    22,    23,   180,    12,    15,    36,
      84,   146,   121,   122,   123,    29,   143,   144,    83,    93,
       3,   100,   101,   102,    94,    95,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   135,   172,   168,    38,    39,
      96,    19,    20,    21,    22,   186,   103,   189,   104,   126,
      85,    40,   175,    41,    42,    43,    44,   128,   129,   131,
      45,    46,    47,    49,    48,   139,    49,   173,    19,    20,
      21,    22,    30,    31,    32,    33,    34,   169,    50,    51,
     174,   188,   176,   182,   185,    52,    30,    31,    32,    33,
      53,    48,   119,   120,   121,   122,   123,   192,   105,   106,
     107,   108,   109,   110,   183,    50,    51,   190,   191,    13,
     148,    35,    52,    30,    31,    32,    33,    53,   187,   -99,
       0,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   105,   106,
     107,   108,   109,   110,   145,     0,     0,     0,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   177,     0,
       0,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   178,     0,     0,     0,
       0,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   181,     0,     0,     0,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    49,     0,     0,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123
};

static const yytype_int16 yycheck[] =
{
      41,    40,    41,    42,    41,    30,    30,    86,    47,    48,
      89,    90,    55,    92,    16,    94,     4,    16,    17,    67,
       6,     7,     8,     9,     6,     7,     8,     9,    27,    31,
      55,    55,    80,    23,    82,    34,     4,     5,    55,    23,
      30,     6,     7,     8,     9,    31,    30,     0,    29,    31,
      55,    99,    45,    46,    47,    31,    95,    96,    31,    51,
      28,    50,    51,    52,    24,    29,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    84,   134,   126,     3,     4,
      29,     6,     7,     8,     9,   174,    29,   176,     4,    29,
     139,    16,   139,    18,    19,    20,    21,     4,     4,     4,
      25,    26,    27,    31,    29,    22,    31,    10,     6,     7,
       8,     9,    51,    52,    53,    54,    55,    32,    43,    44,
      17,    22,    24,    32,   173,    50,    51,    52,    53,    54,
      55,    29,    43,    44,    45,    46,    47,   188,    10,    11,
      12,    13,    14,    15,    32,    43,    44,    32,    32,     5,
     103,    26,    50,    51,    52,    53,    54,    55,   174,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    10,    11,
      12,    13,    14,    15,    30,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    30,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,    28,    57,    58,    59,    60,    61,    70,
      55,    55,     0,    59,     4,    29,    30,    55,    71,     6,
       7,     8,     9,    31,    84,    84,    23,    30,    68,    31,
      51,    52,    53,    54,    55,    82,    31,    84,     3,     4,
      16,    18,    19,    20,    21,    25,    26,    27,    29,    31,
      43,    44,    50,    55,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    94,    95,    97,   101,   102,   104,
      66,    84,    64,    31,    55,    74,    96,    74,    86,    96,
      98,    99,    74,    51,    24,    29,    29,    74,    74,    92,
      80,    80,    80,    29,     4,    10,    11,    12,    13,    14,
      15,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    29,    94,     4,     4,
      69,     4,    94,    94,    62,    84,    91,    91,    91,    22,
      91,   103,    91,    74,    74,    30,    94,    30,    71,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    32,
      67,    65,    94,    10,    17,    96,    24,    30,    30,    93,
      30,    30,    32,    32,    63,    74,    91,    95,    22,    91,
      32,    32,    86,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    60,    62,
      63,    61,    64,    65,    61,    66,    67,    61,    68,    69,
      61,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    82,    82,
      82,    82,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    89,    90,
      90,    92,    93,    91,    94,    94,    95,    95,    95,    96,
      97,    97,    98,    99,   100,   101,   103,   102,   102,   104,
     104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     2,     0,
       0,    10,     0,     0,     9,     0,     0,     9,     0,     0,
       8,     2,     2,     1,     4,     3,     2,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       2,     2,     2,     1,     1,     3,     3,     4,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     5,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     0,     0,     5,     2,     1,     5,     5,     3,     1,
       3,     3,     5,     1,     1,     3,     0,     5,     3,     4,
       4
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
  case 2:
#line 117 "compiler_hw2.y"
                            { dump_symbol(); }
#line 1653 "y.tab.c"
    break;

  case 8:
#line 132 "compiler_hw2.y"
                    { create_symbol(); printf("package: %s\n", strdup(yytext)); }
#line 1659 "y.tab.c"
    break;

  case 9:
#line 136 "compiler_hw2.y"
                                                       {  type_c = type; 
                                                          scopelevel++; create_symbol_param();
                                                          yylineno++;
                                                          type = 'v'; 
                                                          for(int i=0;i<idx;i+=2){ 
                                                            str_tmp[0] = index_tmp[i]; str_tmp[1]='\0';
                                                            printf("param %c, type: %c\n", index_tmp[i], index_tmp[i+1]-97+65);
                                                            type = index_tmp[i+1];
                                                            insert_symbol(str_tmp, "-");
                                                          }
                                                          type ='v';
                                                          strcat(type_tmp, "(");
                                                          for(int i=0;i<3;i++){
                                                            type_tmp[i+1]= (index_tmp[i*2+1]-97+65);
                                                          }
                                                          if(type_c=='i')strcat(type_tmp,")I\0"); 
                                                          printf("func_signature: %s\n", type_tmp);
                                                          insert_symbol(str, type_tmp);
                                                          yylineno--;
                                                        }
#line 1684 "y.tab.c"
    break;

  case 10:
#line 155 "compiler_hw2.y"
                                                                        {dump_symbol(); scopelevel--; }
#line 1690 "y.tab.c"
    break;

  case 12:
#line 156 "compiler_hw2.y"
                                                  { scopelevel++; create_symbol_param(); }
#line 1696 "y.tab.c"
    break;

  case 13:
#line 156 "compiler_hw2.y"
                                                                                                         { scopelevel--; }
#line 1702 "y.tab.c"
    break;

  case 15:
#line 157 "compiler_hw2.y"
                                         { scopelevel++; create_symbol(); }
#line 1708 "y.tab.c"
    break;

  case 16:
#line 157 "compiler_hw2.y"
                                                                                          { scopelevel--; }
#line 1714 "y.tab.c"
    break;

  case 18:
#line 158 "compiler_hw2.y"
                                    {  scopelevel++; create_symbol(); type = 'v'; yylineno++; insert_symbol(str, "()V"); yylineno--;}
#line 1720 "y.tab.c"
    break;

  case 19:
#line 158 "compiler_hw2.y"
                                                                                                                                                    {dump_symbol(); scopelevel--; }
#line 1726 "y.tab.c"
    break;

  case 21:
#line 162 "compiler_hw2.y"
                 { printf("func: %s\n", strdup(yytext)); strcpy(str, strdup(yytext)); }
#line 1732 "y.tab.c"
    break;

  case 22:
#line 166 "compiler_hw2.y"
                 { strcat(index_tmp, (yyvsp[-1].s_val)); idx++; index_tmp[idx] = type; idx++; index_tmp[idx]='\0'; }
#line 1738 "y.tab.c"
    break;

  case 23:
#line 167 "compiler_hw2.y"
            { lookup_symbol((yyvsp[0].s_val)); }
#line 1744 "y.tab.c"
    break;

  case 24:
#line 168 "compiler_hw2.y"
                                     { strcat(index_tmp, (yyvsp[-1].s_val)); idx++; index_tmp[idx] = type; idx++; index_tmp[idx]='\0'; }
#line 1750 "y.tab.c"
    break;

  case 26:
#line 173 "compiler_hw2.y"
                        { printf("%creturn\n", type); }
#line 1756 "y.tab.c"
    break;

  case 27:
#line 174 "compiler_hw2.y"
             { printf("return\n"); }
#line 1762 "y.tab.c"
    break;

  case 32:
#line 189 "compiler_hw2.y"
                                { printf("MUL\n"); }
#line 1768 "y.tab.c"
    break;

  case 33:
#line 190 "compiler_hw2.y"
                                { printf("QUO\n");}
#line 1774 "y.tab.c"
    break;

  case 34:
#line 191 "compiler_hw2.y"
                                { if((!strcmp(cmp1, "float32")||!strcmp(cmp2, "float32"))&&abs_error==1) printf("error:%d: invalid operation: (operator REM not defined on %s)\n", yylineno, "float32"); printf("REM\n");}
#line 1780 "y.tab.c"
    break;

  case 36:
#line 196 "compiler_hw2.y"
                                { if(strcmp(cmp1, cmp2)&&check==1) {if(yylineno==6) abs_error=1; printf("error:%d: invalid operation: ADD (mismatched types %s and %s)\n", yylineno, cmp1 , cmp2); } printf("ADD\n"); }
#line 1786 "y.tab.c"
    break;

  case 37:
#line 197 "compiler_hw2.y"
                                { if(strcmp(cmp1, cmp2)&&abs_error==1) printf("error:%d: invalid operation: SUB (mismatched types %s and %s)\n", yylineno, cmp1 , cmp2); printf("SUB\n");}
#line 1792 "y.tab.c"
    break;

  case 39:
#line 202 "compiler_hw2.y"
                                { printf("EQL\n");}
#line 1798 "y.tab.c"
    break;

  case 40:
#line 203 "compiler_hw2.y"
                                { printf("NEQ\n");}
#line 1804 "y.tab.c"
    break;

  case 41:
#line 204 "compiler_hw2.y"
                                { printf("LSS\n");}
#line 1810 "y.tab.c"
    break;

  case 42:
#line 205 "compiler_hw2.y"
                                { printf("LEQ\n");}
#line 1816 "y.tab.c"
    break;

  case 43:
#line 206 "compiler_hw2.y"
                                { if(strcmp(cmp1, cmp2)&&abs_error==1) printf("error:%d: invalid operation: GTR (mismatched types %s and %s)\n", yylineno, cmp1 , cmp2); printf("GTR\n");}
#line 1822 "y.tab.c"
    break;

  case 44:
#line 207 "compiler_hw2.y"
                                { printf("GEQ\n");}
#line 1828 "y.tab.c"
    break;

  case 46:
#line 212 "compiler_hw2.y"
                                 { if((strcmp(cmp1, "bool")||strcmp(cmp2, "bool"))&&abs_error==1) printf("error:%d: invalid operation: (operator LAND not defined on %s)\n", yylineno, "int32"); printf("LAND\n"); print_type = 2; }
#line 1834 "y.tab.c"
    break;

  case 48:
#line 217 "compiler_hw2.y"
                               { if((strcmp(cmp1, "bool")||strcmp(cmp2, "bool"))&&abs_error==1) printf("error:%d: invalid operation: (operator LOR not defined on %s)\n", yylineno, "int32"); printf("LOR\n"); print_type = 2; }
#line 1840 "y.tab.c"
    break;

  case 50:
#line 222 "compiler_hw2.y"
                    { printf("POS\n"); }
#line 1846 "y.tab.c"
    break;

  case 51:
#line 223 "compiler_hw2.y"
                    { printf("NEG\n"); }
#line 1852 "y.tab.c"
    break;

  case 52:
#line 224 "compiler_hw2.y"
                    { printf("NOT\n"); }
#line 1858 "y.tab.c"
    break;

  case 54:
#line 229 "compiler_hw2.y"
            { lookup_symbol((yyvsp[0].s_val)); if((cmp_idx%2)==0) {strcpy(cmp1, comp((yyvsp[0].s_val))); cmp_idx=1;  ans=0;  } else {strcpy(cmp2, comp((yyvsp[0].s_val))); cmp_idx = 0; ans=1;}}
#line 1864 "y.tab.c"
    break;

  case 56:
#line 231 "compiler_hw2.y"
                          { printf("call: %s()V\n", (yyvsp[-2].s_val)); }
#line 1870 "y.tab.c"
    break;

  case 57:
#line 232 "compiler_hw2.y"
                                        { printf("call: %s(IFI)I\n", (yyvsp[-3].s_val)); }
#line 1876 "y.tab.c"
    break;

  case 58:
#line 236 "compiler_hw2.y"
              { printf("INT_LIT %d\n", yylval.i_val); print_type = 0;  if((cmp_idx%2)==0) {strcpy(cmp1, "int32"); cmp_idx=1;  ans=0;  } else {strcpy(cmp2, "int32"); cmp_idx = 0; ans = 1;}}
#line 1882 "y.tab.c"
    break;

  case 59:
#line 237 "compiler_hw2.y"
                { printf("FLOAT_LIT %f\n", yylval.f_val); print_type = 1; if((cmp_idx%2)==0) {strcpy(cmp1, "float32"); cmp_idx=1;  ans=0;  } else {strcpy(cmp2, "float32"); cmp_idx = 0;ans=1;}}
#line 1888 "y.tab.c"
    break;

  case 60:
#line 238 "compiler_hw2.y"
               { if(yylval.b_val == true ) printf("TRUE %d\n", yylval.b_val); 
                 else if(yylval.b_val == false) printf("FALSE %d\n", yylval.b_val); print_type = 2; if((cmp_idx%2)==0) {strcpy(cmp1, "bool"); cmp_idx=1;  ans=0;  } else {strcpy(cmp2, "bool"); cmp_idx = 0;ans=1;}}
#line 1895 "y.tab.c"
    break;

  case 61:
#line 240 "compiler_hw2.y"
                 { printf("STRING_LIT %s\n", yylval.s_val);  print_type = 3; if((cmp_idx%2)==0) {strcpy(cmp1, "string"); cmp_idx=1;  ans=0;  } else {strcpy(cmp2, "string"); cmp_idx = 0; ans=1;}}
#line 1901 "y.tab.c"
    break;

  case 62:
#line 244 "compiler_hw2.y"
                                    { if(type == 'i') printf("f2i\n"); else if(type == 'f') printf("i2f\n"); }
#line 1907 "y.tab.c"
    break;

  case 63:
#line 248 "compiler_hw2.y"
          {  type = 'i'; }
#line 1913 "y.tab.c"
    break;

  case 64:
#line 249 "compiler_hw2.y"
            { type = 'f'; }
#line 1919 "y.tab.c"
    break;

  case 65:
#line 250 "compiler_hw2.y"
             {  type = 's'; }
#line 1925 "y.tab.c"
    break;

  case 66:
#line 251 "compiler_hw2.y"
           { type = 'b'; }
#line 1931 "y.tab.c"
    break;

  case 80:
#line 274 "compiler_hw2.y"
                     { insert_symbol((yyvsp[-1].s_val), "-"); if(!strcmp((yyvsp[-1].s_val), "x")) check=1;}
#line 1937 "y.tab.c"
    break;

  case 81:
#line 275 "compiler_hw2.y"
                                       { insert_symbol((yyvsp[-3].s_val), "-"); }
#line 1943 "y.tab.c"
    break;

  case 82:
#line 279 "compiler_hw2.y"
                                   { if(strcmp(cmp1, cmp2)&&abs_error==1) printf("error:%d: invalid operation: ASSIGN (mismatched types %s and %s)\n", yylineno, cmp1 , cmp2); printf("ASSIGN\n"); }
#line 1949 "y.tab.c"
    break;

  case 83:
#line 280 "compiler_hw2.y"
                                       { printf("ADD\n"); }
#line 1955 "y.tab.c"
    break;

  case 84:
#line 281 "compiler_hw2.y"
                                       { printf("SUB\n"); }
#line 1961 "y.tab.c"
    break;

  case 85:
#line 282 "compiler_hw2.y"
                                       { printf("MUL\n"); }
#line 1967 "y.tab.c"
    break;

  case 86:
#line 283 "compiler_hw2.y"
                                       { printf("QUO\n"); }
#line 1973 "y.tab.c"
    break;

  case 87:
#line 284 "compiler_hw2.y"
                                       { printf("REM\n"); }
#line 1979 "y.tab.c"
    break;

  case 89:
#line 292 "compiler_hw2.y"
                      { printf("INC\n"); }
#line 1985 "y.tab.c"
    break;

  case 90:
#line 293 "compiler_hw2.y"
                      { printf("DEC\n"); }
#line 1991 "y.tab.c"
    break;

  case 91:
#line 297 "compiler_hw2.y"
             { scopelevel++; create_symbol(); }
#line 1997 "y.tab.c"
    break;

  case 92:
#line 297 "compiler_hw2.y"
                                                              { dump_symbol(); symboltable_sum[scopelevel]=0; scopelevel--; }
#line 2003 "y.tab.c"
    break;

  case 99:
#line 312 "compiler_hw2.y"
                 {if((strcmp(cmp1, "bool")||strcmp(cmp2, "bool"))&&abs_error==1&&yylineno!=11) printf("error:%d: non-bool (type %s) used as for condition\n", yylineno+1, (ans==0)?cmp1:cmp2); }
#line 2009 "y.tab.c"
    break;

  case 106:
#line 337 "compiler_hw2.y"
                   { printf("case %d\n", yylval.i_val); }
#line 2015 "y.tab.c"
    break;

  case 109:
#line 342 "compiler_hw2.y"
                                           { if(print_type == 0) printf("PRINT int32\n"); 
                                             else if(print_type == 1) printf("PRINT float32\n");
                                             else if(print_type == 2) printf("PRINT bool\n");
                                             else if(print_type == 3) printf("PRINT string\n"); }
#line 2024 "y.tab.c"
    break;

  case 110:
#line 346 "compiler_hw2.y"
                                           {  
                                             if(print_type == 0) printf("PRINTLN int32\n"); 
                                             else if(print_type == 1) printf("PRINTLN float32\n");
                                             else if(print_type == 2) printf("PRINTLN bool\n");
                                             else if(print_type == 3) printf("PRINTLN string\n"); }
#line 2034 "y.tab.c"
    break;


#line 2038 "y.tab.c"

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
#line 355 "compiler_hw2.y"


/* C code section */
int main(int argc, char *argv[])
{
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    
    yylineno = 0;
    yyparse();

	printf("Total lines: %d\n", yylineno);
    
    fclose(yyin);
    return 0;
}

static void create_symbol() {
    printf("> Create symbol table (scope level %d)\n", scopelevel);
    if(scopelevel == 1) printf("func_signature: ()V\n");
}

static void create_symbol_param() {
    printf("> Create symbol table (scope level %d)\n", scopelevel);
    
}

static void insert_symbol(char *str_in, char *func_sig) {

    for(int i=0;i<symboltable_sum[scopelevel];i++){
        if(!strcmp(str_in, ptr[scopelevel][i].name)){
            if(yylineno==7)
                abs_error=1;
            printf("error:%d: %s redeclared in this block. previous declaration at line %d\n", yylineno, str_in, ptr[scopelevel][i].lineno);
        }
    }


    if(type == 'v'){
        scopelevel--;
        printf("> Insert `%s` (addr: %d) to scope level %d\n", str_in, -1, scopelevel);
        ptr[scopelevel][symboltable_sum[scopelevel]].address = -1;
    }
    else 
        printf("> Insert `%s` (addr: %d) to scope level %d\n", str_in, address, scopelevel);

    ptr[scopelevel][symboltable_sum[scopelevel]].index = symboltable_sum[scopelevel];
    strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].name, str_in);
    if(type == 'i'){
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].type, "int32");
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].func_sig, func_sig);
    }else if(type == 'f'){
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].type, "float32");
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].func_sig, func_sig);
    }else if(type == 'b'){
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].type, "bool");
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].func_sig, func_sig);
    }else if(type == 's'){
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].type, "string");
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].func_sig, func_sig);    
    }else if(type == 'v'){
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].type, "func");
        strcpy(ptr[scopelevel][symboltable_sum[scopelevel]].func_sig, func_sig);
    }
    if(type!='v'){
        ptr[scopelevel][symboltable_sum[scopelevel]].address = address;
        address++;
    }
        
    
    ptr[scopelevel][symboltable_sum[scopelevel]].lineno = yylineno;
    symboltable_sum[scopelevel]++;
    
    if(type == 'v')
        scopelevel++;
    
}



static void lookup_symbol(char *str_in) {
    int i = scopelevel;
    for(int j=0;j<symboltable_sum[i];j++){
            if((!strcmp(str_in, ptr[i][j].name) && i == scopelevel )){
                printf("IDENT (name=%s, address=%d)\n", ptr[i][j].name, ptr[i][j].address);
                if(!strcmp(ptr[i][j].type, "int32"))
                    print_type = 0;
                else if(!strcmp(ptr[i][j].type, "float32"))
                    print_type = 1;
                else if(!strcmp(ptr[i][j].type, "bool"))
                    print_type = 2;
                else if(!strcmp(ptr[i][j].type, "string"))
                    print_type = 3; 
                return;   
            }
    }
    for(i=0;i<10;i++){
        for(int j=0;j<symboltable_sum[i];j++){
            if(!strcmp(str_in, ptr[i][j].name)){
                printf("IDENT (name=%s, address=%d)\n", ptr[i][j].name, ptr[i][j].address);
                if(!strcmp(ptr[i][j].type, "int32"))
                    print_type = 0;
                else if(!strcmp(ptr[i][j].type, "float32"))
                    print_type = 1;
                else if(!strcmp(ptr[i][j].type, "bool"))
                    print_type = 2;
                else if(!strcmp(ptr[i][j].type, "string"))
                    print_type = 3; 
                return;   
            }
        }
    }
    printf("error:%d: undefined: %s\n", yylineno+1, str_in);
}

static void dump_symbol() {
    printf("\n> Dump symbol table (scope level: %d)\n", scopelevel);
    printf("%-10s%-10s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Type", "Addr", "Lineno", "Func_sig");
    for(int i=0;i<symboltable_sum[scopelevel];i++)
        printf("%-10d%-10s%-10s%-10d%-10d%-10s\n",
                i, ptr[scopelevel][i].name, ptr[scopelevel][i].type, ptr[scopelevel][i].address, ptr[scopelevel][i].lineno, 
                ptr[scopelevel][i].func_sig);
    printf("\n");
    symboltable_sum[scopelevel]=0; 
    for(int i=0;i<symboltable_sum[scopelevel];i++)
        strcpy(ptr[scopelevel][i].name, "0000");
}

static char *comp(char *str_in){

    int i = scopelevel;
    for(int j=0;j<symboltable_sum[i];j++){
            if((!strcmp(str_in, ptr[i][j].name) && i == scopelevel )){
                if(!strcmp(ptr[i][j].type, "int32"))
                    return "int32";
                else if(!strcmp(ptr[i][j].type, "float32"))
                    return "float32";
                else if(!strcmp(ptr[i][j].type, "bool"))
                    return "bool";
                else if(!strcmp(ptr[i][j].type, "string"))
                    return "string";   
            }
    }
    return "ERROR";
}
