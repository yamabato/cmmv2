/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cmm.y"

/**
   The cmm compiler
   2004.08.18
   2005.06.13
   Hisashi Nakai, University of Tsukuba
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "node.h"
#include "parser.h"
#include "ast.h"

extern int yylex();
extern int yyerror(char *s);

typedef struct Codeval {
	Node  *node;
	int    val;
	double fval;
	char*  name;
} codeval;

#define YYSTYPE codeval

Node *ast_root;

#line 102 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VAR = 258,                     /* VAR  */
    INT = 259,                     /* INT  */
    MAIN = 260,                    /* MAIN  */
    ID = 261,                      /* ID  */
    LIT_TRUE = 262,                /* LIT_TRUE  */
    LIT_FALSE = 263,               /* LIT_FALSE  */
    LPAR = 264,                    /* LPAR  */
    RPAR = 265,                    /* RPAR  */
    COMMA = 266,                   /* COMMA  */
    LBRA = 267,                    /* LBRA  */
    RBRA = 268,                    /* RBRA  */
    WRITE = 269,                   /* WRITE  */
    WRITELN = 270,                 /* WRITELN  */
    SEMI = 271,                    /* SEMI  */
    COLON = 272,                   /* COLON  */
    PLUS = 273,                    /* PLUS  */
    MINUS = 274,                   /* MINUS  */
    INC = 275,                     /* INC  */
    DEC = 276,                     /* DEC  */
    MULT = 277,                    /* MULT  */
    DIV = 278,                     /* DIV  */
    MOD = 279,                     /* MOD  */
    POW = 280,                     /* POW  */
    NUMBER = 281,                  /* NUMBER  */
    FLOAT = 282,                   /* FLOAT  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    WHILE = 285,                   /* WHILE  */
    DO = 286,                      /* DO  */
    FOR = 287,                     /* FOR  */
    SWITCH = 288,                  /* SWITCH  */
    CASE = 289,                    /* CASE  */
    DEFAULT = 290,                 /* DEFAULT  */
    GOTO = 291,                    /* GOTO  */
    READ = 292,                    /* READ  */
    COLEQ = 293,                   /* COLEQ  */
    ASSIGN = 294,                  /* ASSIGN  */
    GE = 295,                      /* GE  */
    GT = 296,                      /* GT  */
    LE = 297,                      /* LE  */
    LT = 298,                      /* LT  */
    NE = 299,                      /* NE  */
    EQ = 300,                      /* EQ  */
    AND = 301,                     /* AND  */
    OR = 302,                      /* OR  */
    NOT = 303,                     /* NOT  */
    RETURN = 304                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR = 3,                        /* VAR  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_MAIN = 5,                       /* MAIN  */
  YYSYMBOL_ID = 6,                         /* ID  */
  YYSYMBOL_LIT_TRUE = 7,                   /* LIT_TRUE  */
  YYSYMBOL_LIT_FALSE = 8,                  /* LIT_FALSE  */
  YYSYMBOL_LPAR = 9,                       /* LPAR  */
  YYSYMBOL_RPAR = 10,                      /* RPAR  */
  YYSYMBOL_COMMA = 11,                     /* COMMA  */
  YYSYMBOL_LBRA = 12,                      /* LBRA  */
  YYSYMBOL_RBRA = 13,                      /* RBRA  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_WRITELN = 15,                   /* WRITELN  */
  YYSYMBOL_SEMI = 16,                      /* SEMI  */
  YYSYMBOL_COLON = 17,                     /* COLON  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MINUS = 19,                     /* MINUS  */
  YYSYMBOL_INC = 20,                       /* INC  */
  YYSYMBOL_DEC = 21,                       /* DEC  */
  YYSYMBOL_MULT = 22,                      /* MULT  */
  YYSYMBOL_DIV = 23,                       /* DIV  */
  YYSYMBOL_MOD = 24,                       /* MOD  */
  YYSYMBOL_POW = 25,                       /* POW  */
  YYSYMBOL_NUMBER = 26,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 27,                     /* FLOAT  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_CASE = 34,                      /* CASE  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 36,                      /* GOTO  */
  YYSYMBOL_READ = 37,                      /* READ  */
  YYSYMBOL_COLEQ = 38,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_GT = 41,                        /* GT  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_LT = 43,                        /* LT  */
  YYSYMBOL_NE = 44,                        /* NE  */
  YYSYMBOL_EQ = 45,                        /* EQ  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_OR = 47,                        /* OR  */
  YYSYMBOL_NOT = 48,                       /* NOT  */
  YYSYMBOL_RETURN = 49,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_main = 52,                      /* main  */
  YYSYMBOL_fdecls = 53,                    /* fdecls  */
  YYSYMBOL_fdecl = 54,                     /* fdecl  */
  YYSYMBOL_fhead = 55,                     /* fhead  */
  YYSYMBOL_fid = 56,                       /* fid  */
  YYSYMBOL_params = 57,                    /* params  */
  YYSYMBOL_body = 58,                      /* body  */
  YYSYMBOL_stmts = 59,                     /* stmts  */
  YYSYMBOL_vardecl = 60,                   /* vardecl  */
  YYSYMBOL_ids = 61,                       /* ids  */
  YYSYMBOL_st = 62,                        /* st  */
  YYSYMBOL_ifstmt = 63,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 64,                 /* whilestmt  */
  YYSYMBOL_forstmt = 65,                   /* forstmt  */
  YYSYMBOL_switchstmt = 66,                /* switchstmt  */
  YYSYMBOL_cases = 67,                     /* cases  */
  YYSYMBOL_case_item = 68,                 /* case_item  */
  YYSYMBOL_case_default = 69,              /* case_default  */
  YYSYMBOL_cond = 70,                      /* cond  */
  YYSYMBOL_cond_or = 71,                   /* cond_or  */
  YYSYMBOL_cond_and = 72,                  /* cond_and  */
  YYSYMBOL_cond_not = 73,                  /* cond_not  */
  YYSYMBOL_comp = 74,                      /* comp  */
  YYSYMBOL_E = 75,                         /* E  */
  YYSYMBOL_ADD_SUB = 76,                   /* ADD_SUB  */
  YYSYMBOL_T = 77,                         /* T  */
  YYSYMBOL_P = 78,                         /* P  */
  YYSYMBOL_F = 79,                         /* F  */
  YYSYMBOL_FUNC_CALL = 80,                 /* FUNC_CALL  */
  YYSYMBOL_fparams = 81,                   /* fparams  */
  YYSYMBOL_ac_params = 82,                 /* ac_params  */
  YYSYMBOL_fparam = 83                     /* fparam  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    64,    68,    75,    78,    82,    87,    94,
      99,   104,   108,   113,   117,   122,   125,   128,   131,   135,
     141,   145,   150,   153,   156,   160,   163,   167,   170,   173,
     176,   179,   182,   185,   188,   192,   198,   201,   204,   208,
     212,   216,   221,   224,   228,   233,   236,   240,   245,   248,
     253,   256,   261,   264,   269,   272,   275,   278,   281,   284,
     287,   292,   296,   301,   304,   307,   312,   315,   318,   321,
     324,   329,   332,   337,   340,   344,   348,   355,   362,   369,
     376,   379,   382,   386,   393,   396,   401,   404,   408
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VAR", "INT", "MAIN",
  "ID", "LIT_TRUE", "LIT_FALSE", "LPAR", "RPAR", "COMMA", "LBRA", "RBRA",
  "WRITE", "WRITELN", "SEMI", "COLON", "PLUS", "MINUS", "INC", "DEC",
  "MULT", "DIV", "MOD", "POW", "NUMBER", "FLOAT", "IF", "ELSE", "WHILE",
  "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "GOTO", "READ", "COLEQ",
  "ASSIGN", "GE", "GT", "LE", "LT", "NE", "EQ", "AND", "OR", "NOT",
  "RETURN", "$accept", "program", "main", "fdecls", "fdecl", "fhead",
  "fid", "params", "body", "stmts", "vardecl", "ids", "st", "ifstmt",
  "whilestmt", "forstmt", "switchstmt", "cases", "case_item",
  "case_default", "cond", "cond_or", "cond_and", "cond_not", "comp", "E",
  "ADD_SUB", "T", "P", "F", "FUNC_CALL", "fparams", "ac_params", "fparam", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -56,    11,    41,   -56,    12,   -56,   -56,   -56,    12,    13,
       2,   -56,    25,   -56,    34,    48,     3,   -56,   120,    36,
      75,    75,    71,   120,    53,    87,    91,   -56,    30,   -56,
     -56,   -56,   -56,   -56,   -56,    93,   -56,    46,   -56,    10,
     120,   -56,   120,    -2,   -56,   -56,    75,   149,   102,   107,
     -56,   104,    50,    92,   -56,    96,   -56,   -56,    75,    12,
      77,     4,   -56,   -56,    31,    12,   120,   106,   114,   115,
     -56,   116,   -56,   -56,   -56,   -56,   -56,   132,   138,   -56,
     -56,   135,   139,   -56,   136,   -56,   -56,   120,   143,    44,
     -56,   -56,   -56,   -56,   128,   128,   149,   149,   149,   149,
     -56,   130,    75,    75,   120,   120,   120,   120,   120,   120,
     -56,   144,   127,   -56,   -56,   -56,   -56,   -56,   -56,   120,
     -56,   -56,   -56,    92,    92,   -56,   -56,   -56,   -56,     1,
       4,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    75,   120,
      43,   -56,   -56,   -56,   -56,   146,    12,    12,   -56,   150,
     120,   -56,   -56,   -56,   154,    12,   -56
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,    18,
      17,    27,    28,    29,    30,     0,    11,     0,    21,     0,
      84,    34,     0,    73,    74,    75,     0,     0,     0,     0,
      81,     0,    62,    65,    70,    72,    80,    23,     0,     0,
      47,    49,    51,    53,    60,     0,     0,     0,     0,     0,
      32,     0,    13,    16,    15,    25,     8,     0,     0,    19,
      88,     0,    85,    87,     0,    76,    78,     0,     0,    73,
      69,    77,    79,    22,     0,     0,     0,     0,     0,     0,
      52,    36,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,    35,    24,    31,    10,    20,    83,     0,
      26,    61,    82,    63,    64,    66,    67,    68,    71,     0,
      48,    50,    55,    54,    57,    56,    58,    59,     0,     0,
      46,    43,    86,    37,    38,     0,     0,     0,    42,     0,
       0,    44,    45,    41,     0,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   -56,   159,   -56,   -56,   -56,   -56,    -4,   -56,
     140,   -56,   145,    37,   -56,   -56,   -56,   -56,    27,   -56,
     -19,   -56,    69,   -55,   -56,   -17,   -56,    -9,     7,   125,
       0,   -56,   -56,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    37,    27,    28,
      29,    39,    30,    31,    32,    33,    34,   140,   141,   149,
      59,    60,    61,    62,    63,    64,    52,    53,    54,    55,
      56,    81,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    51,    65,   100,    13,    15,    67,    40,    16,    71,
      35,     3,    40,    10,    10,    17,    18,    19,    85,    86,
      41,    78,    14,    80,    10,    84,    79,    88,    35,    20,
      20,     5,    21,    15,    22,    23,    16,    87,    24,    25,
      36,    42,    10,    72,    18,    19,     4,     5,   131,   111,
     103,    26,    57,    40,    38,   101,    76,    77,    20,    68,
      21,   110,    22,    23,    85,    86,    24,    25,    94,    95,
     121,   104,   105,   106,   107,   108,   109,   139,   147,    26,
      66,    43,    44,    45,    46,   123,   124,   132,   133,   134,
     135,   136,   137,    69,    47,    48,    49,    43,    44,    45,
      46,    50,    80,   125,   126,   127,   128,    70,    91,    75,
      47,    48,    49,    92,    96,    97,    98,    50,   112,   145,
      93,    99,   146,    58,   102,   143,    43,    44,    45,    46,
     113,   114,   115,   154,    89,    44,    45,    46,   116,    47,
      48,    49,   151,   152,   117,   118,    50,    47,    48,    49,
     119,   156,   120,   122,    50,    89,    44,    45,    46,   129,
     138,   139,   150,   153,   155,    12,   144,   148,    73,    48,
      49,   130,    90,    74,   142,    50
};

static const yytype_uint8 yycheck[] =
{
       4,    18,    21,    58,     8,     3,    23,     9,     6,    26,
      10,     0,     9,    12,    12,    13,    14,    15,    20,    21,
      17,    11,     9,    40,    12,    42,    16,    46,    28,    28,
      28,     6,    30,     3,    32,    33,     6,    39,    36,    37,
       6,    38,    12,    13,    14,    15,     5,     6,   103,    66,
      46,    49,    16,     9,     6,    59,    10,    11,    28,     6,
      30,    65,    32,    33,    20,    21,    36,    37,    18,    19,
      87,    40,    41,    42,    43,    44,    45,    34,    35,    49,
       9,     6,     7,     8,     9,    94,    95,   104,   105,   106,
     107,   108,   109,     6,    19,    20,    21,     6,     7,     8,
       9,    26,   119,    96,    97,    98,    99,    16,     6,    16,
      19,    20,    21,     6,    22,    23,    24,    26,    12,   138,
      16,    25,   139,    48,    47,   129,     6,     7,     8,     9,
      16,    16,    16,   150,     6,     7,     8,     9,     6,    19,
      20,    21,   146,   147,     6,    10,    26,    19,    20,    21,
      11,   155,    16,    10,    26,     6,     7,     8,     9,    29,
      16,    34,    16,    13,    10,     6,   129,   140,    28,    20,
      21,   102,    47,    28,   119,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,    53,     0,     5,     6,    52,    54,    55,    56,
      12,    58,    53,    58,     9,     3,     6,    13,    14,    15,
      28,    30,    32,    33,    36,    37,    49,    58,    59,    60,
      62,    63,    64,    65,    66,    80,     6,    57,     6,    61,
       9,    17,    38,     6,     7,     8,     9,    19,    20,    21,
      26,    75,    76,    77,    78,    79,    80,    16,    48,    70,
      71,    72,    73,    74,    75,    70,     9,    75,     6,     6,
      16,    75,    13,    60,    62,    16,    10,    11,    11,    16,
      75,    81,    82,    83,    75,    20,    21,    39,    70,     6,
      79,     6,     6,    16,    18,    19,    22,    23,    24,    25,
      73,    58,    47,    46,    40,    41,    42,    43,    44,    45,
      58,    75,    12,    16,    16,    16,     6,     6,    10,    11,
      16,    75,    10,    77,    77,    78,    78,    78,    78,    29,
      72,    73,    75,    75,    75,    75,    75,    75,    16,    34,
      67,    68,    83,    58,    63,    70,    75,    35,    68,    69,
      16,    58,    58,    13,    75,    10,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    53,    53,    54,    55,    56,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    63,    64,
      65,    66,    67,    67,    68,    69,    69,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    81,    81,    82,    82,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     2,     1,     1,     3,
       3,     1,     3,     2,     3,     2,     4,     1,     1,     1,
       1,     3,     2,     1,     2,     3,     3,     5,     5,     3,
       9,     6,     2,     1,     3,     2,     0,     1,     3,     1,
       3,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     2,
       1,     3,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     3,     4,     0,     1,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: fdecls main fdecls  */
#line 60 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1367 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 64 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1375 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 68 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1385 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 75 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1393 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 78 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1401 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 82 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1410 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 87 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1421 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 94 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1429 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 99 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1439 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 104 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1448 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 108 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1456 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 113 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1465 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 117 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1473 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 122 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1481 "y.tab.c"
    break;

  case 16: /* stmts: stmts vardecl  */
#line 125 "cmm.y"
                        {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1489 "y.tab.c"
    break;

  case 17: /* stmts: st  */
#line 128 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1497 "y.tab.c"
    break;

  case 18: /* stmts: vardecl  */
#line 131 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1505 "y.tab.c"
    break;

  case 19: /* vardecl: VAR ids SEMI  */
#line 135 "cmm.y"
                       {
	yyval.node = new_node(NK_VAR);
	yyval.node->ids = yyvsp[-1].node;
}
#line 1514 "y.tab.c"
    break;

  case 20: /* ids: ids COMMA ID  */
#line 141 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, id);
}
#line 1523 "y.tab.c"
    break;

  case 21: /* ids: ID  */
#line 145 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1531 "y.tab.c"
    break;

  case 22: /* st: WRITE E SEMI  */
#line 150 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1539 "y.tab.c"
    break;

  case 23: /* st: WRITELN SEMI  */
#line 153 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1547 "y.tab.c"
    break;

  case 24: /* st: READ ID SEMI  */
#line 156 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1556 "y.tab.c"
    break;

  case 25: /* st: FUNC_CALL SEMI  */
#line 160 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1564 "y.tab.c"
    break;

  case 26: /* st: ID COLEQ E SEMI  */
#line 163 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1573 "y.tab.c"
    break;

  case 27: /* st: ifstmt  */
#line 167 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1581 "y.tab.c"
    break;

  case 28: /* st: whilestmt  */
#line 170 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1589 "y.tab.c"
    break;

  case 29: /* st: forstmt  */
#line 173 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1597 "y.tab.c"
    break;

  case 30: /* st: switchstmt  */
#line 176 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1605 "y.tab.c"
    break;

  case 31: /* st: RETURN E SEMI  */
#line 179 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1613 "y.tab.c"
    break;

  case 32: /* st: RETURN SEMI  */
#line 182 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1621 "y.tab.c"
    break;

  case 33: /* st: body  */
#line 185 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1629 "y.tab.c"
    break;

  case 34: /* st: ID COLON  */
#line 188 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1638 "y.tab.c"
    break;

  case 35: /* st: GOTO ID SEMI  */
#line 192 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1647 "y.tab.c"
    break;

  case 36: /* ifstmt: IF cond body  */
#line 198 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1655 "y.tab.c"
    break;

  case 37: /* ifstmt: IF cond body ELSE body  */
#line 201 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1663 "y.tab.c"
    break;

  case 38: /* ifstmt: IF cond body ELSE ifstmt  */
#line 204 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1671 "y.tab.c"
    break;

  case 39: /* whilestmt: WHILE cond body  */
#line 208 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1679 "y.tab.c"
    break;

  case 40: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 212 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1687 "y.tab.c"
    break;

  case 41: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 216 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1695 "y.tab.c"
    break;

  case 42: /* cases: cases case_item  */
#line 221 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1703 "y.tab.c"
    break;

  case 43: /* cases: case_item  */
#line 224 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1711 "y.tab.c"
    break;

  case 44: /* case_item: CASE E body  */
#line 228 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1719 "y.tab.c"
    break;

  case 45: /* case_default: DEFAULT body  */
#line 233 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 1727 "y.tab.c"
    break;

  case 46: /* case_default: %empty  */
#line 236 "cmm.y"
          {
	yyval.node = NULL;
}
#line 1735 "y.tab.c"
    break;

  case 47: /* cond: cond_or  */
#line 240 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1743 "y.tab.c"
    break;

  case 48: /* cond_or: cond_or OR cond_and  */
#line 245 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 1751 "y.tab.c"
    break;

  case 49: /* cond_or: cond_and  */
#line 248 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1759 "y.tab.c"
    break;

  case 50: /* cond_and: cond_and AND cond_not  */
#line 253 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 1767 "y.tab.c"
    break;

  case 51: /* cond_and: cond_not  */
#line 256 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1775 "y.tab.c"
    break;

  case 52: /* cond_not: NOT cond_not  */
#line 261 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 1783 "y.tab.c"
    break;

  case 53: /* cond_not: comp  */
#line 264 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1791 "y.tab.c"
    break;

  case 54: /* comp: E GT E  */
#line 269 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1799 "y.tab.c"
    break;

  case 55: /* comp: E GE E  */
#line 272 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1807 "y.tab.c"
    break;

  case 56: /* comp: E LT E  */
#line 275 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1815 "y.tab.c"
    break;

  case 57: /* comp: E LE E  */
#line 278 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1823 "y.tab.c"
    break;

  case 58: /* comp: E NE E  */
#line 281 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1831 "y.tab.c"
    break;

  case 59: /* comp: E EQ E  */
#line 284 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 1839 "y.tab.c"
    break;

  case 60: /* comp: E  */
#line 287 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1847 "y.tab.c"
    break;

  case 61: /* E: ID ASSIGN E  */
#line 292 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 1856 "y.tab.c"
    break;

  case 62: /* E: ADD_SUB  */
#line 296 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1864 "y.tab.c"
    break;

  case 63: /* ADD_SUB: ADD_SUB PLUS T  */
#line 301 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 1872 "y.tab.c"
    break;

  case 64: /* ADD_SUB: ADD_SUB MINUS T  */
#line 304 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 1880 "y.tab.c"
    break;

  case 65: /* ADD_SUB: T  */
#line 307 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1888 "y.tab.c"
    break;

  case 66: /* T: T MULT P  */
#line 312 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 1896 "y.tab.c"
    break;

  case 67: /* T: T DIV P  */
#line 315 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 1904 "y.tab.c"
    break;

  case 68: /* T: T MOD P  */
#line 318 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 1912 "y.tab.c"
    break;

  case 69: /* T: MINUS F  */
#line 321 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 1920 "y.tab.c"
    break;

  case 70: /* T: P  */
#line 324 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1928 "y.tab.c"
    break;

  case 71: /* P: F POW P  */
#line 329 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 1936 "y.tab.c"
    break;

  case 72: /* P: F  */
#line 332 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1944 "y.tab.c"
    break;

  case 73: /* F: ID  */
#line 337 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1952 "y.tab.c"
    break;

  case 74: /* F: LIT_TRUE  */
#line 340 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 1961 "y.tab.c"
    break;

  case 75: /* F: LIT_FALSE  */
#line 344 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 1970 "y.tab.c"
    break;

  case 76: /* F: ID INC  */
#line 348 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 1982 "y.tab.c"
    break;

  case 77: /* F: INC ID  */
#line 355 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 1994 "y.tab.c"
    break;

  case 78: /* F: ID DEC  */
#line 362 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2006 "y.tab.c"
    break;

  case 79: /* F: DEC ID  */
#line 369 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2018 "y.tab.c"
    break;

  case 80: /* F: FUNC_CALL  */
#line 376 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2026 "y.tab.c"
    break;

  case 81: /* F: NUMBER  */
#line 379 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2034 "y.tab.c"
    break;

  case 82: /* F: LPAR cond RPAR  */
#line 382 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2042 "y.tab.c"
    break;

  case 83: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 386 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2052 "y.tab.c"
    break;

  case 84: /* fparams: %empty  */
#line 393 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2060 "y.tab.c"
    break;

  case 85: /* fparams: ac_params  */
#line 396 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2068 "y.tab.c"
    break;

  case 86: /* ac_params: ac_params COMMA fparam  */
#line 401 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2076 "y.tab.c"
    break;

  case 87: /* ac_params: fparam  */
#line 404 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2084 "y.tab.c"
    break;

  case 88: /* fparam: E  */
#line 408 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2092 "y.tab.c"
    break;


#line 2096 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 412 "cmm.y"


#include "lex.yy.c"
