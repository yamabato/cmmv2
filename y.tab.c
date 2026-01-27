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
    CONST = 259,                   /* CONST  */
    INT = 260,                     /* INT  */
    MAIN = 261,                    /* MAIN  */
    ID = 262,                      /* ID  */
    LIT_TRUE = 263,                /* LIT_TRUE  */
    LIT_FALSE = 264,               /* LIT_FALSE  */
    LPAR = 265,                    /* LPAR  */
    RPAR = 266,                    /* RPAR  */
    COMMA = 267,                   /* COMMA  */
    LBRA = 268,                    /* LBRA  */
    RBRA = 269,                    /* RBRA  */
    WRITE = 270,                   /* WRITE  */
    WRITELN = 271,                 /* WRITELN  */
    SEMI = 272,                    /* SEMI  */
    COLON = 273,                   /* COLON  */
    PLUS = 274,                    /* PLUS  */
    MINUS = 275,                   /* MINUS  */
    INC = 276,                     /* INC  */
    DEC = 277,                     /* DEC  */
    MULT = 278,                    /* MULT  */
    DIV = 279,                     /* DIV  */
    MOD = 280,                     /* MOD  */
    POW = 281,                     /* POW  */
    NUMBER = 282,                  /* NUMBER  */
    FLOAT = 283,                   /* FLOAT  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    WHILE = 286,                   /* WHILE  */
    DO = 287,                      /* DO  */
    FOR = 288,                     /* FOR  */
    SWITCH = 289,                  /* SWITCH  */
    CASE = 290,                    /* CASE  */
    DEFAULT = 291,                 /* DEFAULT  */
    GOTO = 292,                    /* GOTO  */
    READ = 293,                    /* READ  */
    COLEQ = 294,                   /* COLEQ  */
    ASSIGN = 295,                  /* ASSIGN  */
    ADD_ASSIGN = 296,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 297,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 298,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 299,              /* DIV_ASSIGN  */
    POW_ASSIGN = 300,              /* POW_ASSIGN  */
    MOD_ASSIGN = 301,              /* MOD_ASSIGN  */
    AND_ASSIGN = 302,              /* AND_ASSIGN  */
    OR_ASSIGN = 303,               /* OR_ASSIGN  */
    GE = 304,                      /* GE  */
    GT = 305,                      /* GT  */
    LE = 306,                      /* LE  */
    LT = 307,                      /* LT  */
    NE = 308,                      /* NE  */
    EQ = 309,                      /* EQ  */
    AND = 310,                     /* AND  */
    OR = 311,                      /* OR  */
    NOT = 312,                     /* NOT  */
    RETURN = 313                   /* RETURN  */
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
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_MAIN = 6,                       /* MAIN  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_LIT_TRUE = 8,                   /* LIT_TRUE  */
  YYSYMBOL_LIT_FALSE = 9,                  /* LIT_FALSE  */
  YYSYMBOL_LPAR = 10,                      /* LPAR  */
  YYSYMBOL_RPAR = 11,                      /* RPAR  */
  YYSYMBOL_COMMA = 12,                     /* COMMA  */
  YYSYMBOL_LBRA = 13,                      /* LBRA  */
  YYSYMBOL_RBRA = 14,                      /* RBRA  */
  YYSYMBOL_WRITE = 15,                     /* WRITE  */
  YYSYMBOL_WRITELN = 16,                   /* WRITELN  */
  YYSYMBOL_SEMI = 17,                      /* SEMI  */
  YYSYMBOL_COLON = 18,                     /* COLON  */
  YYSYMBOL_PLUS = 19,                      /* PLUS  */
  YYSYMBOL_MINUS = 20,                     /* MINUS  */
  YYSYMBOL_INC = 21,                       /* INC  */
  YYSYMBOL_DEC = 22,                       /* DEC  */
  YYSYMBOL_MULT = 23,                      /* MULT  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_MOD = 25,                       /* MOD  */
  YYSYMBOL_POW = 26,                       /* POW  */
  YYSYMBOL_NUMBER = 27,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 28,                     /* FLOAT  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_WHILE = 31,                     /* WHILE  */
  YYSYMBOL_DO = 32,                        /* DO  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_SWITCH = 34,                    /* SWITCH  */
  YYSYMBOL_CASE = 35,                      /* CASE  */
  YYSYMBOL_DEFAULT = 36,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 37,                      /* GOTO  */
  YYSYMBOL_READ = 38,                      /* READ  */
  YYSYMBOL_COLEQ = 39,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 40,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 41,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 42,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 43,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 44,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 45,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 46,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 47,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 48,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 49,                        /* GE  */
  YYSYMBOL_GT = 50,                        /* GT  */
  YYSYMBOL_LE = 51,                        /* LE  */
  YYSYMBOL_LT = 52,                        /* LT  */
  YYSYMBOL_NE = 53,                        /* NE  */
  YYSYMBOL_EQ = 54,                        /* EQ  */
  YYSYMBOL_AND = 55,                       /* AND  */
  YYSYMBOL_OR = 56,                        /* OR  */
  YYSYMBOL_NOT = 57,                       /* NOT  */
  YYSYMBOL_RETURN = 58,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_main = 61,                      /* main  */
  YYSYMBOL_fdecls = 62,                    /* fdecls  */
  YYSYMBOL_fdecl = 63,                     /* fdecl  */
  YYSYMBOL_fhead = 64,                     /* fhead  */
  YYSYMBOL_fid = 65,                       /* fid  */
  YYSYMBOL_params = 66,                    /* params  */
  YYSYMBOL_body = 67,                      /* body  */
  YYSYMBOL_stmts = 68,                     /* stmts  */
  YYSYMBOL_decl_var = 69,                  /* decl_var  */
  YYSYMBOL_var_inits = 70,                 /* var_inits  */
  YYSYMBOL_var_init = 71,                  /* var_init  */
  YYSYMBOL_decl_const = 72,                /* decl_const  */
  YYSYMBOL_const_inits = 73,               /* const_inits  */
  YYSYMBOL_const_init = 74,                /* const_init  */
  YYSYMBOL_st = 75,                        /* st  */
  YYSYMBOL_ifstmt = 76,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 77,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 78,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 79,                   /* forstmt  */
  YYSYMBOL_switchstmt = 80,                /* switchstmt  */
  YYSYMBOL_cases = 81,                     /* cases  */
  YYSYMBOL_case_item = 82,                 /* case_item  */
  YYSYMBOL_case_default = 83,              /* case_default  */
  YYSYMBOL_cond = 84,                      /* cond  */
  YYSYMBOL_cond_or = 85,                   /* cond_or  */
  YYSYMBOL_cond_and = 86,                  /* cond_and  */
  YYSYMBOL_cond_not = 87,                  /* cond_not  */
  YYSYMBOL_comp = 88,                      /* comp  */
  YYSYMBOL_compound_assignment = 89,       /* compound_assignment  */
  YYSYMBOL_E = 90,                         /* E  */
  YYSYMBOL_ADD_SUB = 91,                   /* ADD_SUB  */
  YYSYMBOL_T = 92,                         /* T  */
  YYSYMBOL_P = 93,                         /* P  */
  YYSYMBOL_F = 94,                         /* F  */
  YYSYMBOL_FUNC_CALL = 95,                 /* FUNC_CALL  */
  YYSYMBOL_fparams = 96,                   /* fparams  */
  YYSYMBOL_ac_params = 97,                 /* ac_params  */
  YYSYMBOL_fparam = 98                     /* fparam  */
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
#define YYLAST   228

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    67,    71,    78,    81,    85,    90,    97,
     102,   107,   111,   116,   120,   125,   128,   132,   138,   141,
     146,   149,   154,   160,   163,   167,   182,   185,   188,   191,
     195,   198,   201,   204,   208,   211,   214,   217,   220,   223,
     226,   229,   232,   235,   239,   245,   248,   251,   255,   259,
     263,   267,   272,   275,   279,   284,   287,   291,   296,   299,
     304,   307,   312,   315,   320,   323,   326,   329,   332,   335,
     338,   343,   348,   353,   358,   363,   368,   373,   378,   386,
     390,   393,   398,   401,   404,   409,   412,   415,   418,   421,
     426,   429,   434,   437,   441,   445,   452,   459,   466,   473,
     476,   479,   483,   490,   493,   498,   501,   505
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
  "\"end of file\"", "error", "\"invalid token\"", "VAR", "CONST", "INT",
  "MAIN", "ID", "LIT_TRUE", "LIT_FALSE", "LPAR", "RPAR", "COMMA", "LBRA",
  "RBRA", "WRITE", "WRITELN", "SEMI", "COLON", "PLUS", "MINUS", "INC",
  "DEC", "MULT", "DIV", "MOD", "POW", "NUMBER", "FLOAT", "IF", "ELSE",
  "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "GOTO", "READ",
  "COLEQ", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "POW_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "GE", "GT", "LE", "LT", "NE", "EQ", "AND", "OR", "NOT", "RETURN",
  "$accept", "program", "main", "fdecls", "fdecl", "fhead", "fid",
  "params", "body", "stmts", "decl_var", "var_inits", "var_init",
  "decl_const", "const_inits", "const_init", "st", "ifstmt", "whilestmt",
  "dowhilestmt", "forstmt", "switchstmt", "cases", "case_item",
  "case_default", "cond", "cond_or", "cond_and", "cond_not", "comp",
  "compound_assignment", "E", "ADD_SUB", "T", "P", "F", "FUNC_CALL",
  "fparams", "ac_params", "fparam", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -97,    10,    11,   -97,    30,   -97,   -97,   -97,    30,    36,
      72,   -97,    40,   -97,    44,    51,    54,   155,   -97,   106,
      45,     6,     6,    30,    58,   106,    57,    66,   197,   -97,
     137,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,    65,
      90,   -97,     9,    69,    32,   -97,    73,    33,   -97,   106,
     -97,   106,   106,   106,   106,   106,   106,   106,   106,   106,
      49,   -97,   -97,     6,   201,    76,   104,   -97,   -97,   100,
      37,    75,   -97,    92,   -97,   -97,   102,     6,    30,    82,
      77,   -97,   -97,   134,    30,   111,   106,   118,   126,   128,
     -97,   129,   -97,   -97,   -97,   -97,   -97,   152,   106,    51,
     -97,   106,    54,   -97,   -97,   153,   151,   -97,   150,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   106,
     165,     2,   -97,   -97,   -97,   -97,   127,   127,   201,   201,
     201,   201,   -97,   -97,   147,     6,     6,   106,   106,   106,
     106,   106,   106,   -97,     6,   161,   144,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   106,   -97,   -97,   -97,
      75,    75,   -97,   -97,   -97,   -97,    -7,    77,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   163,     6,   106,    42,   -97,
     -97,   -97,   -97,   -97,   172,    30,    30,   -97,   177,   106,
     -97,   -97,   -97,   181,    30,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    31,    32,    16,    35,    36,    37,    38,    39,     0,
       0,    11,     0,    20,     0,    19,     0,     0,    24,   103,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,     0,     0,     0,     0,   100,    80,     0,
      81,    84,    89,    91,    99,    27,     0,     0,     0,    57,
      59,    61,    63,    70,     0,     0,     0,     0,     0,     0,
      41,     0,    13,    15,    34,    30,     8,     0,     0,     0,
      17,     0,     0,    22,   107,     0,   104,   106,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    95,    97,     0,
       0,    92,    88,    96,    98,    26,     0,     0,     0,     0,
       0,     0,    28,    62,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,    44,    29,    40,
      10,    21,    18,    25,    23,   102,     0,    33,    79,   101,
      82,    83,    85,    86,    87,    90,     0,    58,    60,    65,
      64,    67,    66,    68,    69,     0,     0,     0,    56,    53,
     105,    46,    47,    49,     0,     0,     0,    52,     0,     0,
      54,    55,    51,     0,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -97,   187,   -97,   -97,   -97,   -97,    -4,   -97,
     -97,   -97,   113,   -97,   -97,   114,   183,    55,   -97,   -97,
     -97,   -97,   -97,    47,   -97,   -15,   -97,    80,   -76,   -97,
      -5,   -17,   -97,   -96,    27,   156,    -1,   -97,   -97,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    42,    29,    30,
      31,    44,    45,    32,    47,    48,    33,    34,    35,    36,
      37,    38,   178,   179,   188,    78,    79,    80,    81,    82,
      68,    83,    70,    71,    72,    73,    74,   105,   106,   107
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,   133,    69,    76,    13,    39,    10,    84,    87,    40,
       3,    91,    49,    60,    61,    62,    63,     4,     5,    85,
      96,    97,    21,   117,   118,    39,    64,    65,    66,    40,
     160,   161,   104,    67,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    10,    99,   102,    14,     5,   120,   100,
     103,    41,    60,    61,    62,    63,   126,   127,    43,    49,
     168,    46,    75,    77,    88,    64,    65,    66,    86,   145,
     117,   118,    67,    89,   134,    15,    16,   177,   186,    17,
     143,   151,    94,   123,   153,    10,    18,    19,    20,   119,
      52,    53,    54,    55,    56,    57,    58,    59,   128,   129,
     130,    21,   158,    22,    23,    24,    25,    95,    98,    26,
      27,   124,   101,    60,    61,    62,    63,   125,   131,   132,
     169,   170,   171,   172,   173,   174,    64,    65,    66,   175,
      28,   146,   136,    67,   121,    61,    62,    63,   135,   104,
      15,    16,   144,   147,    17,   148,   149,    64,    65,    66,
      10,    92,    19,    20,    67,   162,   163,   164,   165,   150,
     185,   184,   181,   156,   155,    49,    21,   157,    22,    23,
      24,    25,   193,    50,    26,    27,   159,   166,   176,   177,
     183,   190,   191,   137,   138,   139,   140,   141,   142,   189,
     195,   192,   194,    12,    51,    28,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,   121,    61,
      62,    63,   152,    93,    90,   167,   154,    64,    65,    66,
     122,   182,    65,    66,    67,   187,   180,     0,    67
};

static const yytype_int16 yycheck[] =
{
       4,    77,    19,    20,     8,    10,    13,    22,    25,    10,
       0,    28,    10,     7,     8,     9,    10,     6,     7,    23,
      11,    12,    29,    21,    22,    30,    20,    21,    22,    30,
     126,   127,    49,    27,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    13,    12,    12,    10,     7,    63,    17,
      17,     7,     7,     8,     9,    10,    19,    20,     7,    10,
     136,     7,    17,    57,     7,    20,    21,    22,    10,    86,
      21,    22,    27,     7,    78,     3,     4,    35,    36,     7,
      84,    98,    17,     7,   101,    13,    14,    15,    16,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    23,    24,
      25,    29,   119,    31,    32,    33,    34,    17,    39,    37,
      38,     7,    39,     7,     8,     9,    10,    17,    26,    17,
     137,   138,   139,   140,   141,   142,    20,    21,    22,   144,
      58,    13,    55,    27,     7,     8,     9,    10,    56,   156,
       3,     4,    31,    17,     7,    17,    17,    20,    21,    22,
      13,    14,    15,    16,    27,   128,   129,   130,   131,     7,
     177,   176,   166,    12,    11,    10,    29,    17,    31,    32,
      33,    34,   189,    18,    37,    38,    11,    30,    17,    35,
      17,   185,   186,    49,    50,    51,    52,    53,    54,    17,
     194,    14,    11,     6,    39,    58,    41,    42,    43,    44,
      45,    46,    47,    48,     7,     8,     9,    10,     7,     8,
       9,    10,    99,    30,    17,   135,   102,    20,    21,    22,
      64,   166,    21,    22,    27,   178,   156,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    60,    62,     0,     6,     7,    61,    63,    64,    65,
      13,    67,    62,    67,    10,     3,     4,     7,    14,    15,
      16,    29,    31,    32,    33,    34,    37,    38,    58,    67,
      68,    69,    72,    75,    76,    77,    78,    79,    80,    89,
      95,     7,    66,     7,    70,    71,     7,    73,    74,    10,
      18,    39,    41,    42,    43,    44,    45,    46,    47,    48,
       7,     8,     9,    10,    20,    21,    22,    27,    89,    90,
      91,    92,    93,    94,    95,    17,    90,    57,    84,    85,
      86,    87,    88,    90,    84,    67,    10,    90,     7,     7,
      17,    90,    14,    75,    17,    17,    11,    12,    39,    12,
      17,    39,    12,    17,    90,    96,    97,    98,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    21,    22,    40,
      84,     7,    94,     7,     7,    17,    19,    20,    23,    24,
      25,    26,    17,    87,    67,    56,    55,    49,    50,    51,
      52,    53,    54,    67,    31,    90,    13,    17,    17,    17,
       7,    90,    71,    90,    74,    11,    12,    17,    90,    11,
      92,    92,    93,    93,    93,    93,    30,    86,    87,    90,
      90,    90,    90,    90,    90,    84,    17,    35,    81,    82,
      98,    67,    76,    17,    84,    90,    36,    82,    83,    17,
      67,    67,    14,    90,    11,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    61,    62,    62,    63,    64,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    77,    78,
      79,    80,    81,    81,    82,    83,    83,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    96,    96,    97,    97,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     3,     3,     1,     3,     3,     2,     3,     3,
       2,     1,     1,     4,     2,     1,     1,     1,     1,     1,
       3,     2,     1,     2,     3,     3,     5,     5,     3,     5,
       9,     6,     2,     1,     3,     2,     0,     1,     3,     1,
       3,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     3,     2,     1,
       3,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     3,     4,     0,     1,     3,     1,     1
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
#line 63 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1424 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 67 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1432 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 71 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1442 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 78 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1450 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 81 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1458 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 85 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1467 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 90 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1478 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 97 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1486 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 102 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1496 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 107 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1505 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 111 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1513 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 116 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1522 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 120 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1530 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 125 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1538 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 128 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1546 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 132 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->ids = yyvsp[-1].node;
}
#line 1555 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 138 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1563 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 141 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1571 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 146 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1579 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 149 "cmm.y"
                     {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[0].node);
}
#line 1588 "y.tab.c"
    break;

  case 22: /* decl_const: CONST const_inits SEMI  */
#line 154 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->ids = yyvsp[-1].node;
}
#line 1597 "y.tab.c"
    break;

  case 23: /* const_inits: const_inits COMMA const_init  */
#line 160 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1605 "y.tab.c"
    break;

  case 24: /* const_inits: const_init  */
#line 163 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1613 "y.tab.c"
    break;

  case 25: /* const_init: ID COLEQ E  */
#line 167 "cmm.y"
                        {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[0].node);
}
#line 1622 "y.tab.c"
    break;

  case 26: /* st: WRITE E SEMI  */
#line 182 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1630 "y.tab.c"
    break;

  case 27: /* st: WRITELN SEMI  */
#line 185 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1638 "y.tab.c"
    break;

  case 28: /* st: WRITELN E SEMI  */
#line 188 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1646 "y.tab.c"
    break;

  case 29: /* st: READ ID SEMI  */
#line 191 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1655 "y.tab.c"
    break;

  case 30: /* st: FUNC_CALL SEMI  */
#line 195 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1663 "y.tab.c"
    break;

  case 31: /* st: decl_var  */
#line 198 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1671 "y.tab.c"
    break;

  case 32: /* st: decl_const  */
#line 201 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1679 "y.tab.c"
    break;

  case 33: /* st: ID COLEQ E SEMI  */
#line 204 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1688 "y.tab.c"
    break;

  case 34: /* st: compound_assignment SEMI  */
#line 208 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1696 "y.tab.c"
    break;

  case 35: /* st: ifstmt  */
#line 211 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1704 "y.tab.c"
    break;

  case 36: /* st: whilestmt  */
#line 214 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1712 "y.tab.c"
    break;

  case 37: /* st: dowhilestmt  */
#line 217 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1720 "y.tab.c"
    break;

  case 38: /* st: forstmt  */
#line 220 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1728 "y.tab.c"
    break;

  case 39: /* st: switchstmt  */
#line 223 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1736 "y.tab.c"
    break;

  case 40: /* st: RETURN E SEMI  */
#line 226 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1744 "y.tab.c"
    break;

  case 41: /* st: RETURN SEMI  */
#line 229 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1752 "y.tab.c"
    break;

  case 42: /* st: body  */
#line 232 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1760 "y.tab.c"
    break;

  case 43: /* st: ID COLON  */
#line 235 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1769 "y.tab.c"
    break;

  case 44: /* st: GOTO ID SEMI  */
#line 239 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1778 "y.tab.c"
    break;

  case 45: /* ifstmt: IF cond body  */
#line 245 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1786 "y.tab.c"
    break;

  case 46: /* ifstmt: IF cond body ELSE body  */
#line 248 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1794 "y.tab.c"
    break;

  case 47: /* ifstmt: IF cond body ELSE ifstmt  */
#line 251 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1802 "y.tab.c"
    break;

  case 48: /* whilestmt: WHILE cond body  */
#line 255 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1810 "y.tab.c"
    break;

  case 49: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 259 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1818 "y.tab.c"
    break;

  case 50: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 263 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1826 "y.tab.c"
    break;

  case 51: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 267 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1834 "y.tab.c"
    break;

  case 52: /* cases: cases case_item  */
#line 272 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1842 "y.tab.c"
    break;

  case 53: /* cases: case_item  */
#line 275 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1850 "y.tab.c"
    break;

  case 54: /* case_item: CASE E body  */
#line 279 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1858 "y.tab.c"
    break;

  case 55: /* case_default: DEFAULT body  */
#line 284 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 1866 "y.tab.c"
    break;

  case 56: /* case_default: %empty  */
#line 287 "cmm.y"
          {
	yyval.node = NULL;
}
#line 1874 "y.tab.c"
    break;

  case 57: /* cond: cond_or  */
#line 291 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1882 "y.tab.c"
    break;

  case 58: /* cond_or: cond_or OR cond_and  */
#line 296 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 1890 "y.tab.c"
    break;

  case 59: /* cond_or: cond_and  */
#line 299 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1898 "y.tab.c"
    break;

  case 60: /* cond_and: cond_and AND cond_not  */
#line 304 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 1906 "y.tab.c"
    break;

  case 61: /* cond_and: cond_not  */
#line 307 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1914 "y.tab.c"
    break;

  case 62: /* cond_not: NOT cond_not  */
#line 312 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 1922 "y.tab.c"
    break;

  case 63: /* cond_not: comp  */
#line 315 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1930 "y.tab.c"
    break;

  case 64: /* comp: E GT E  */
#line 320 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1938 "y.tab.c"
    break;

  case 65: /* comp: E GE E  */
#line 323 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1946 "y.tab.c"
    break;

  case 66: /* comp: E LT E  */
#line 326 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 1954 "y.tab.c"
    break;

  case 67: /* comp: E LE E  */
#line 329 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1962 "y.tab.c"
    break;

  case 68: /* comp: E NE E  */
#line 332 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 1970 "y.tab.c"
    break;

  case 69: /* comp: E EQ E  */
#line 335 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 1978 "y.tab.c"
    break;

  case 70: /* comp: E  */
#line 338 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 1986 "y.tab.c"
    break;

  case 71: /* compound_assignment: ID ADD_ASSIGN E  */
#line 343 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 1996 "y.tab.c"
    break;

  case 72: /* compound_assignment: ID SUB_ASSIGN E  */
#line 348 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2006 "y.tab.c"
    break;

  case 73: /* compound_assignment: ID MUL_ASSIGN E  */
#line 353 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2016 "y.tab.c"
    break;

  case 74: /* compound_assignment: ID DIV_ASSIGN E  */
#line 358 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2026 "y.tab.c"
    break;

  case 75: /* compound_assignment: ID POW_ASSIGN E  */
#line 363 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2036 "y.tab.c"
    break;

  case 76: /* compound_assignment: ID MOD_ASSIGN E  */
#line 368 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2046 "y.tab.c"
    break;

  case 77: /* compound_assignment: ID AND_ASSIGN E  */
#line 373 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2056 "y.tab.c"
    break;

  case 78: /* compound_assignment: ID OR_ASSIGN E  */
#line 378 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2066 "y.tab.c"
    break;

  case 79: /* E: ID ASSIGN E  */
#line 386 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2075 "y.tab.c"
    break;

  case 80: /* E: compound_assignment  */
#line 390 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2083 "y.tab.c"
    break;

  case 81: /* E: ADD_SUB  */
#line 393 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2091 "y.tab.c"
    break;

  case 82: /* ADD_SUB: ADD_SUB PLUS T  */
#line 398 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2099 "y.tab.c"
    break;

  case 83: /* ADD_SUB: ADD_SUB MINUS T  */
#line 401 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2107 "y.tab.c"
    break;

  case 84: /* ADD_SUB: T  */
#line 404 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2115 "y.tab.c"
    break;

  case 85: /* T: T MULT P  */
#line 409 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2123 "y.tab.c"
    break;

  case 86: /* T: T DIV P  */
#line 412 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2131 "y.tab.c"
    break;

  case 87: /* T: T MOD P  */
#line 415 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2139 "y.tab.c"
    break;

  case 88: /* T: MINUS F  */
#line 418 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2147 "y.tab.c"
    break;

  case 89: /* T: P  */
#line 421 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2155 "y.tab.c"
    break;

  case 90: /* P: F POW P  */
#line 426 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2163 "y.tab.c"
    break;

  case 91: /* P: F  */
#line 429 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2171 "y.tab.c"
    break;

  case 92: /* F: ID  */
#line 434 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2179 "y.tab.c"
    break;

  case 93: /* F: LIT_TRUE  */
#line 437 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2188 "y.tab.c"
    break;

  case 94: /* F: LIT_FALSE  */
#line 441 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2197 "y.tab.c"
    break;

  case 95: /* F: ID INC  */
#line 445 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2209 "y.tab.c"
    break;

  case 96: /* F: INC ID  */
#line 452 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2221 "y.tab.c"
    break;

  case 97: /* F: ID DEC  */
#line 459 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2233 "y.tab.c"
    break;

  case 98: /* F: DEC ID  */
#line 466 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2245 "y.tab.c"
    break;

  case 99: /* F: FUNC_CALL  */
#line 473 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2253 "y.tab.c"
    break;

  case 100: /* F: NUMBER  */
#line 476 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2261 "y.tab.c"
    break;

  case 101: /* F: LPAR cond RPAR  */
#line 479 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2269 "y.tab.c"
    break;

  case 102: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 483 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2279 "y.tab.c"
    break;

  case 103: /* fparams: %empty  */
#line 490 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2287 "y.tab.c"
    break;

  case 104: /* fparams: ac_params  */
#line 493 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2295 "y.tab.c"
    break;

  case 105: /* ac_params: ac_params COMMA fparam  */
#line 498 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2303 "y.tab.c"
    break;

  case 106: /* ac_params: fparam  */
#line 501 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2311 "y.tab.c"
    break;

  case 107: /* fparam: E  */
#line 505 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2319 "y.tab.c"
    break;


#line 2323 "y.tab.c"

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

#line 509 "cmm.y"


#include "lex.yy.c"
