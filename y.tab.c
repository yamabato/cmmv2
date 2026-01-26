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

#line 101 "y.tab.c"

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
    LPAR = 262,                    /* LPAR  */
    RPAR = 263,                    /* RPAR  */
    COMMA = 264,                   /* COMMA  */
    LBRA = 265,                    /* LBRA  */
    RBRA = 266,                    /* RBRA  */
    WRITE = 267,                   /* WRITE  */
    WRITELN = 268,                 /* WRITELN  */
    SEMI = 269,                    /* SEMI  */
    PLUS = 270,                    /* PLUS  */
    MINUS = 271,                   /* MINUS  */
    PLUS2 = 272,                   /* PLUS2  */
    MINUS2 = 273,                  /* MINUS2  */
    MULT = 274,                    /* MULT  */
    DIV = 275,                     /* DIV  */
    MOD = 276,                     /* MOD  */
    NUMBER = 277,                  /* NUMBER  */
    FLOAT = 278,                   /* FLOAT  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    ELSE = 281,                    /* ELSE  */
    ENDIF = 282,                   /* ENDIF  */
    WHILE = 283,                   /* WHILE  */
    DO = 284,                      /* DO  */
    READ = 285,                    /* READ  */
    COLEQ = 286,                   /* COLEQ  */
    GE = 287,                      /* GE  */
    GT = 288,                      /* GT  */
    LE = 289,                      /* LE  */
    LT = 290,                      /* LT  */
    NE = 291,                      /* NE  */
    EQ = 292,                      /* EQ  */
    RETURN = 293                   /* RETURN  */
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
  YYSYMBOL_LPAR = 7,                       /* LPAR  */
  YYSYMBOL_RPAR = 8,                       /* RPAR  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_LBRA = 10,                      /* LBRA  */
  YYSYMBOL_RBRA = 11,                      /* RBRA  */
  YYSYMBOL_WRITE = 12,                     /* WRITE  */
  YYSYMBOL_WRITELN = 13,                   /* WRITELN  */
  YYSYMBOL_SEMI = 14,                      /* SEMI  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_PLUS2 = 17,                     /* PLUS2  */
  YYSYMBOL_MINUS2 = 18,                    /* MINUS2  */
  YYSYMBOL_MULT = 19,                      /* MULT  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_MOD = 21,                       /* MOD  */
  YYSYMBOL_NUMBER = 22,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 23,                     /* FLOAT  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_READ = 30,                      /* READ  */
  YYSYMBOL_COLEQ = 31,                     /* COLEQ  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_GT = 33,                        /* GT  */
  YYSYMBOL_LE = 34,                        /* LE  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_NE = 36,                        /* NE  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_main = 41,                      /* main  */
  YYSYMBOL_fdecls = 42,                    /* fdecls  */
  YYSYMBOL_fdecl = 43,                     /* fdecl  */
  YYSYMBOL_fhead = 44,                     /* fhead  */
  YYSYMBOL_fid = 45,                       /* fid  */
  YYSYMBOL_params = 46,                    /* params  */
  YYSYMBOL_body = 47,                      /* body  */
  YYSYMBOL_stmts = 48,                     /* stmts  */
  YYSYMBOL_vardecl = 49,                   /* vardecl  */
  YYSYMBOL_ids = 50,                       /* ids  */
  YYSYMBOL_st = 51,                        /* st  */
  YYSYMBOL_ifstmt = 52,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 53,                 /* whilestmt  */
  YYSYMBOL_cond = 54,                      /* cond  */
  YYSYMBOL_E = 55,                         /* E  */
  YYSYMBOL_T = 56,                         /* T  */
  YYSYMBOL_F = 57,                         /* F  */
  YYSYMBOL_FUNC_CALL = 58,                 /* FUNC_CALL  */
  YYSYMBOL_fparams = 59,                   /* fparams  */
  YYSYMBOL_ac_params = 60,                 /* ac_params  */
  YYSYMBOL_fparam = 61                     /* fparam  */
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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    58,    62,    69,    72,    76,    81,    88,
      93,    98,   102,   107,   111,   116,   119,   122,   125,   129,
     135,   139,   144,   147,   150,   154,   157,   161,   164,   167,
     170,   173,   178,   181,   184,   188,   193,   196,   199,   202,
     205,   208,   213,   216,   219,   224,   227,   230,   233,   236,
     241,   244,   251,   254,   257,   261,   268,   271,   276,   279,
     283
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
  "ID", "LPAR", "RPAR", "COMMA", "LBRA", "RBRA", "WRITE", "WRITELN",
  "SEMI", "PLUS", "MINUS", "PLUS2", "MINUS2", "MULT", "DIV", "MOD",
  "NUMBER", "FLOAT", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "READ",
  "COLEQ", "GE", "GT", "LE", "LT", "NE", "EQ", "RETURN", "$accept",
  "program", "main", "fdecls", "fdecl", "fhead", "fid", "params", "body",
  "stmts", "vardecl", "ids", "st", "ifstmt", "whilestmt", "cond", "E", "T",
  "F", "FUNC_CALL", "fparams", "ac_params", "fparam", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-33)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -33,    31,    28,   -33,    33,   -33,   -33,   -33,    33,    45,
      -1,   -33,    32,   -33,    44,    51,     1,   -33,    29,    54,
      29,    29,    58,     8,   -33,    43,   -33,   -33,   -33,   -33,
      89,   -33,    39,   -33,    11,    29,    29,     9,    29,    68,
     -33,    64,    73,   -33,   -33,   -33,    33,    50,    33,    90,
     -33,    81,   -33,   -33,   -33,   -33,   -33,    66,    99,   -33,
      86,    98,   100,   -33,    84,   -33,    61,   -33,   -33,    29,
      29,    68,    68,    68,    82,    29,    29,    29,    29,    29,
      29,   -33,   -33,   -33,   -33,   -33,   -33,    29,   -33,   -33,
      73,    73,   -33,   -33,   -33,    -7,    86,    86,    86,    86,
      86,    86,   -33,   -33,   -33
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,    14,     0,     0,
       0,     0,     0,     0,    31,     0,    18,    17,    27,    28,
       0,    11,     0,    21,     0,    56,     0,    50,     0,     0,
      53,     0,    44,    49,    52,    23,     0,     0,     0,     0,
      30,     0,    13,    16,    15,    25,     8,     0,     0,    19,
      60,     0,    57,    59,     0,    51,     0,    48,    22,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,    35,    24,    29,    10,    20,    55,     0,    26,    54,
      42,    43,    45,    46,    47,     0,    37,    36,    39,    38,
      40,    41,    58,    33,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,   -33,   101,   -33,   -33,   -33,   -33,    -4,   -33,
      85,   -33,    87,    16,   -33,    92,   -17,    19,   -32,     3,
     -33,   -33,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    32,    24,    25,
      26,    34,    27,    28,    29,    46,    47,    42,    43,    44,
      61,    62,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    41,    15,    10,    13,    16,    51,    67,    35,    10,
      17,    18,    19,    30,    37,    38,    35,    20,    60,    64,
      58,    66,    50,    20,    39,    59,    65,    21,    30,    22,
      40,     3,    36,     4,     5,    37,    38,    23,     5,    92,
      93,    94,    74,    10,    81,    39,    15,    56,    57,    16,
      31,    40,    14,    10,    52,    18,    19,    33,    96,    97,
      98,    99,   100,   101,    49,    69,    70,    20,    45,    89,
      60,    21,    84,    22,    37,    38,    69,    70,    68,    69,
      70,    23,    75,    76,    77,    78,    79,    80,    90,    91,
      40,   103,    71,    72,    73,    83,    69,    70,    88,    69,
      70,    69,    70,    55,    82,    85,    86,    12,    95,    87,
      53,   104,    54,    48,   102
};

static const yytype_int8 yycheck[] =
{
       4,    18,     3,    10,     8,     6,    23,    39,     7,    10,
      11,    12,    13,    10,     6,     7,     7,    24,    35,    36,
       9,    38,    14,    24,    16,    14,    17,    28,    25,    30,
      22,     0,    31,     5,     6,     6,     7,    38,     6,    71,
      72,    73,    46,    10,    48,    16,     3,     8,     9,     6,
       6,    22,     7,    10,    11,    12,    13,     6,    75,    76,
      77,    78,    79,    80,     6,    15,    16,    24,    14,     8,
      87,    28,     6,    30,     6,     7,    15,    16,    14,    15,
      16,    38,    32,    33,    34,    35,    36,    37,    69,    70,
      22,    95,    19,    20,    21,    14,    15,    16,    14,    15,
      16,    15,    16,    14,    14,     6,     8,     6,    26,     9,
      25,    95,    25,    21,    87
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    42,     0,     5,     6,    41,    43,    44,    45,
      10,    47,    42,    47,     7,     3,     6,    11,    12,    13,
      24,    28,    30,    38,    47,    48,    49,    51,    52,    53,
      58,     6,    46,     6,    50,     7,    31,     6,     7,    16,
      22,    55,    56,    57,    58,    14,    54,    55,    54,     6,
      14,    55,    11,    49,    51,    14,     8,     9,     9,    14,
      55,    59,    60,    61,    55,    17,    55,    57,    14,    15,
      16,    19,    20,    21,    47,    32,    33,    34,    35,    36,
      37,    47,    14,    14,     6,     6,     8,     9,    14,     8,
      56,    56,    57,    57,    57,    26,    55,    55,    55,    55,
      55,    55,    61,    47,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    42,    42,    43,    44,    45,
      46,    46,    46,    47,    47,    48,    48,    48,    48,    49,
      50,    50,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    52,    53,    54,    54,    54,    54,
      54,    54,    55,    55,    55,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    58,    59,    59,    60,    60,
      61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     2,     1,     1,     3,
       3,     1,     3,     2,     3,     2,     4,     1,     1,     3,
       2,     1,     3,     5,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     2,     1,
       1,     2,     1,     1,     3,     4,     0,     1,     3,     1,
       1
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
#line 54 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1294 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 58 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1302 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 62 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1312 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 69 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1320 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 72 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1328 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 76 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->body = yyvsp[0].node;
}
#line 1337 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 81 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1348 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 88 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1356 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 93 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1366 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 98 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1375 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 102 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1383 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 107 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1392 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 111 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1400 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 116 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1408 "y.tab.c"
    break;

  case 16: /* stmts: stmts vardecl  */
#line 119 "cmm.y"
                        {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1416 "y.tab.c"
    break;

  case 17: /* stmts: st  */
#line 122 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1424 "y.tab.c"
    break;

  case 18: /* stmts: vardecl  */
#line 125 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1432 "y.tab.c"
    break;

  case 19: /* vardecl: VAR ids SEMI  */
#line 129 "cmm.y"
                       {
	yyval.node = new_node(NK_VAR);
	yyval.node->ids = yyvsp[-1].node;
}
#line 1441 "y.tab.c"
    break;

  case 20: /* ids: ids COMMA ID  */
#line 135 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, id);
}
#line 1450 "y.tab.c"
    break;

  case 21: /* ids: ID  */
#line 139 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1458 "y.tab.c"
    break;

  case 22: /* st: WRITE E SEMI  */
#line 144 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1466 "y.tab.c"
    break;

  case 23: /* st: WRITELN SEMI  */
#line 147 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1474 "y.tab.c"
    break;

  case 24: /* st: READ ID SEMI  */
#line 150 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1483 "y.tab.c"
    break;

  case 25: /* st: FUNC_CALL SEMI  */
#line 154 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1491 "y.tab.c"
    break;

  case 26: /* st: ID COLEQ E SEMI  */
#line 157 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[-1].node);
}
#line 1500 "y.tab.c"
    break;

  case 27: /* st: ifstmt  */
#line 161 "cmm.y"
                {
	yyval.node = yyvsp[0].node;
}
#line 1508 "y.tab.c"
    break;

  case 28: /* st: whilestmt  */
#line 164 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1516 "y.tab.c"
    break;

  case 29: /* st: RETURN E SEMI  */
#line 167 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1524 "y.tab.c"
    break;

  case 30: /* st: RETURN SEMI  */
#line 170 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
	}
#line 1532 "y.tab.c"
    break;

  case 31: /* st: body  */
#line 173 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1540 "y.tab.c"
    break;

  case 32: /* ifstmt: IF cond body  */
#line 178 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1548 "y.tab.c"
    break;

  case 33: /* ifstmt: IF cond body ELSE body  */
#line 181 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1556 "y.tab.c"
    break;

  case 34: /* ifstmt: IF cond body ELSE ifstmt  */
#line 184 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1564 "y.tab.c"
    break;

  case 35: /* whilestmt: WHILE cond body  */
#line 188 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1572 "y.tab.c"
    break;

  case 36: /* cond: E GT E  */
#line 193 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1580 "y.tab.c"
    break;

  case 37: /* cond: E GE E  */
#line 196 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1588 "y.tab.c"
    break;

  case 38: /* cond: E LT E  */
#line 199 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1596 "y.tab.c"
    break;

  case 39: /* cond: E LE E  */
#line 202 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1604 "y.tab.c"
    break;

  case 40: /* cond: E NE E  */
#line 205 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1612 "y.tab.c"
    break;

  case 41: /* cond: E EQ E  */
#line 208 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 1620 "y.tab.c"
    break;

  case 42: /* E: E PLUS T  */
#line 213 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 1628 "y.tab.c"
    break;

  case 43: /* E: E MINUS T  */
#line 216 "cmm.y"
                    {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 1636 "y.tab.c"
    break;

  case 44: /* E: T  */
#line 219 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1644 "y.tab.c"
    break;

  case 45: /* T: T MULT F  */
#line 224 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 1652 "y.tab.c"
    break;

  case 46: /* T: T DIV F  */
#line 227 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 1660 "y.tab.c"
    break;

  case 47: /* T: T MOD F  */
#line 230 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 1668 "y.tab.c"
    break;

  case 48: /* T: MINUS F  */
#line 233 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 1676 "y.tab.c"
    break;

  case 49: /* T: F  */
#line 236 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1684 "y.tab.c"
    break;

  case 50: /* F: ID  */
#line 241 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1692 "y.tab.c"
    break;

  case 51: /* F: ID PLUS2  */
#line 244 "cmm.y"
                   {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *id_ = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id_, one);
	yyval.node = new_binary_node(NK_ASSIGN, id, add);
}
#line 1704 "y.tab.c"
    break;

  case 52: /* F: FUNC_CALL  */
#line 251 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1712 "y.tab.c"
    break;

  case 53: /* F: NUMBER  */
#line 254 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 1720 "y.tab.c"
    break;

  case 54: /* F: LPAR E RPAR  */
#line 257 "cmm.y"
                      {
	yyval.node = yyvsp[-1].node;
}
#line 1728 "y.tab.c"
    break;

  case 55: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 261 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 1738 "y.tab.c"
    break;

  case 56: /* fparams: %empty  */
#line 268 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1746 "y.tab.c"
    break;

  case 57: /* fparams: ac_params  */
#line 271 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1754 "y.tab.c"
    break;

  case 58: /* ac_params: ac_params COMMA fparam  */
#line 276 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1762 "y.tab.c"
    break;

  case 59: /* ac_params: fparam  */
#line 279 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1770 "y.tab.c"
    break;

  case 60: /* fparam: E  */
#line 283 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 1778 "y.tab.c"
    break;


#line 1782 "y.tab.c"

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

#line 287 "cmm.y"


#include "lex.yy.c"
