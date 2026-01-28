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
    LSQR = 270,                    /* LSQR  */
    RSQR = 271,                    /* RSQR  */
    WRITE = 272,                   /* WRITE  */
    WRITELN = 273,                 /* WRITELN  */
    SEMI = 274,                    /* SEMI  */
    COLON = 275,                   /* COLON  */
    PLUS = 276,                    /* PLUS  */
    MINUS = 277,                   /* MINUS  */
    INC = 278,                     /* INC  */
    DEC = 279,                     /* DEC  */
    MULT = 280,                    /* MULT  */
    DIV = 281,                     /* DIV  */
    MOD = 282,                     /* MOD  */
    POW = 283,                     /* POW  */
    NUMBER = 284,                  /* NUMBER  */
    FLOAT = 285,                   /* FLOAT  */
    IF = 286,                      /* IF  */
    ELSE = 287,                    /* ELSE  */
    WHILE = 288,                   /* WHILE  */
    DO = 289,                      /* DO  */
    FOR = 290,                     /* FOR  */
    BREAK = 291,                   /* BREAK  */
    CONTINUE = 292,                /* CONTINUE  */
    SWITCH = 293,                  /* SWITCH  */
    CASE = 294,                    /* CASE  */
    DEFAULT = 295,                 /* DEFAULT  */
    GOTO = 296,                    /* GOTO  */
    READ = 297,                    /* READ  */
    COLEQ = 298,                   /* COLEQ  */
    ASSIGN = 299,                  /* ASSIGN  */
    ADD_ASSIGN = 300,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 301,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 302,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 303,              /* DIV_ASSIGN  */
    POW_ASSIGN = 304,              /* POW_ASSIGN  */
    MOD_ASSIGN = 305,              /* MOD_ASSIGN  */
    AND_ASSIGN = 306,              /* AND_ASSIGN  */
    OR_ASSIGN = 307,               /* OR_ASSIGN  */
    GE = 308,                      /* GE  */
    GT = 309,                      /* GT  */
    LE = 310,                      /* LE  */
    LT = 311,                      /* LT  */
    NE = 312,                      /* NE  */
    EQ = 313,                      /* EQ  */
    AND = 314,                     /* AND  */
    OR = 315,                      /* OR  */
    NOT = 316,                     /* NOT  */
    RETURN = 317                   /* RETURN  */
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
  YYSYMBOL_LSQR = 15,                      /* LSQR  */
  YYSYMBOL_RSQR = 16,                      /* RSQR  */
  YYSYMBOL_WRITE = 17,                     /* WRITE  */
  YYSYMBOL_WRITELN = 18,                   /* WRITELN  */
  YYSYMBOL_SEMI = 19,                      /* SEMI  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_PLUS = 21,                      /* PLUS  */
  YYSYMBOL_MINUS = 22,                     /* MINUS  */
  YYSYMBOL_INC = 23,                       /* INC  */
  YYSYMBOL_DEC = 24,                       /* DEC  */
  YYSYMBOL_MULT = 25,                      /* MULT  */
  YYSYMBOL_DIV = 26,                       /* DIV  */
  YYSYMBOL_MOD = 27,                       /* MOD  */
  YYSYMBOL_POW = 28,                       /* POW  */
  YYSYMBOL_NUMBER = 29,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_WHILE = 33,                     /* WHILE  */
  YYSYMBOL_DO = 34,                        /* DO  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_BREAK = 36,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 37,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 38,                    /* SWITCH  */
  YYSYMBOL_CASE = 39,                      /* CASE  */
  YYSYMBOL_DEFAULT = 40,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 41,                      /* GOTO  */
  YYSYMBOL_READ = 42,                      /* READ  */
  YYSYMBOL_COLEQ = 43,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 44,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 45,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 46,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 47,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 48,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 49,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 50,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 51,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 52,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 53,                        /* GE  */
  YYSYMBOL_GT = 54,                        /* GT  */
  YYSYMBOL_LE = 55,                        /* LE  */
  YYSYMBOL_LT = 56,                        /* LT  */
  YYSYMBOL_NE = 57,                        /* NE  */
  YYSYMBOL_EQ = 58,                        /* EQ  */
  YYSYMBOL_AND = 59,                       /* AND  */
  YYSYMBOL_OR = 60,                        /* OR  */
  YYSYMBOL_NOT = 61,                       /* NOT  */
  YYSYMBOL_RETURN = 62,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_main = 65,                      /* main  */
  YYSYMBOL_fdecls = 66,                    /* fdecls  */
  YYSYMBOL_fdecl = 67,                     /* fdecl  */
  YYSYMBOL_fhead = 68,                     /* fhead  */
  YYSYMBOL_fid = 69,                       /* fid  */
  YYSYMBOL_params = 70,                    /* params  */
  YYSYMBOL_body = 71,                      /* body  */
  YYSYMBOL_stmts = 72,                     /* stmts  */
  YYSYMBOL_decl_var = 73,                  /* decl_var  */
  YYSYMBOL_var_inits = 74,                 /* var_inits  */
  YYSYMBOL_var_init = 75,                  /* var_init  */
  YYSYMBOL_decl_const = 76,                /* decl_const  */
  YYSYMBOL_const_inits = 77,               /* const_inits  */
  YYSYMBOL_const_init = 78,                /* const_init  */
  YYSYMBOL_array_decl = 79,                /* array_decl  */
  YYSYMBOL_array_size = 80,                /* array_size  */
  YYSYMBOL_st = 81,                        /* st  */
  YYSYMBOL_ifstmt = 82,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 83,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 84,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 85,                   /* forstmt  */
  YYSYMBOL_switchstmt = 86,                /* switchstmt  */
  YYSYMBOL_cases = 87,                     /* cases  */
  YYSYMBOL_case_item = 88,                 /* case_item  */
  YYSYMBOL_case_default = 89,              /* case_default  */
  YYSYMBOL_cond = 90,                      /* cond  */
  YYSYMBOL_cond_or = 91,                   /* cond_or  */
  YYSYMBOL_cond_and = 92,                  /* cond_and  */
  YYSYMBOL_cond_not = 93,                  /* cond_not  */
  YYSYMBOL_comp = 94,                      /* comp  */
  YYSYMBOL_compound_assignment = 95,       /* compound_assignment  */
  YYSYMBOL_E = 96,                         /* E  */
  YYSYMBOL_ADD_SUB = 97,                   /* ADD_SUB  */
  YYSYMBOL_T = 98,                         /* T  */
  YYSYMBOL_P = 99,                         /* P  */
  YYSYMBOL_F = 100,                        /* F  */
  YYSYMBOL_FUNC_CALL = 101,                /* FUNC_CALL  */
  YYSYMBOL_fparams = 102,                  /* fparams  */
  YYSYMBOL_ac_params = 103,                /* ac_params  */
  YYSYMBOL_fparam = 104                    /* fparam  */
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
#define YYLAST   239

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    69,    73,    80,    83,    87,    92,    99,
     104,   109,   113,   118,   122,   127,   130,   134,   140,   143,
     148,   152,   157,   161,   167,   170,   174,   180,   187,   192,
     207,   210,   213,   216,   220,   223,   226,   229,   233,   236,
     239,   242,   245,   248,   251,   254,   257,   260,   263,   266,
     270,   276,   279,   282,   286,   290,   294,   298,   303,   306,
     310,   315,   318,   322,   327,   330,   335,   338,   343,   346,
     351,   354,   357,   360,   363,   366,   369,   374,   379,   384,
     389,   394,   399,   404,   409,   417,   421,   424,   429,   432,
     435,   440,   443,   446,   449,   452,   457,   460,   465,   468,
     472,   476,   483,   490,   497,   504,   507,   510,   514,   521,
     524,   529,   532,   536
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
  "RBRA", "LSQR", "RSQR", "WRITE", "WRITELN", "SEMI", "COLON", "PLUS",
  "MINUS", "INC", "DEC", "MULT", "DIV", "MOD", "POW", "NUMBER", "FLOAT",
  "IF", "ELSE", "WHILE", "DO", "FOR", "BREAK", "CONTINUE", "SWITCH",
  "CASE", "DEFAULT", "GOTO", "READ", "COLEQ", "ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "POW_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "OR_ASSIGN", "GE", "GT", "LE", "LT", "NE", "EQ", "AND",
  "OR", "NOT", "RETURN", "$accept", "program", "main", "fdecls", "fdecl",
  "fhead", "fid", "params", "body", "stmts", "decl_var", "var_inits",
  "var_init", "decl_const", "const_inits", "const_init", "array_decl",
  "array_size", "st", "ifstmt", "whilestmt", "dowhilestmt", "forstmt",
  "switchstmt", "cases", "case_item", "case_default", "cond", "cond_or",
  "cond_and", "cond_not", "comp", "compound_assignment", "E", "ADD_SUB",
  "T", "P", "F", "FUNC_CALL", "fparams", "ac_params", "fparam", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -88,    10,    20,   -88,    -7,   -88,   -88,   -88,    -7,    13,
      62,   -88,    57,   -88,    77,    82,    87,   103,   -88,   181,
     150,     6,     6,    -7,    91,    83,    88,   181,   104,   105,
     177,   -88,   102,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,    95,    98,   -88,    50,     2,    51,   -88,   -88,   -23,
      66,   -88,   181,   -88,   181,   181,   181,   181,   181,   181,
     181,   181,   181,     8,   -88,   -88,     6,   208,   111,   114,
     -88,   -88,   106,    60,    47,   -88,    94,   -88,   -88,   115,
       6,    -7,    81,    86,   -88,   -88,   166,    -7,   109,   181,
     -88,   -88,    97,   137,   142,   -88,   143,   -88,   -88,   -88,
     -88,   -88,   156,   136,   181,   152,    82,   -88,   181,    87,
     -88,   -88,   159,   163,   -88,   157,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   181,   167,    -2,   -88,
     -88,   -88,   -88,   204,   204,   208,   208,   208,   208,   -88,
     -88,   145,     6,     6,   181,   181,   181,   181,   181,   181,
     -88,     6,   161,   155,   -88,   -88,   -88,   -88,   165,   -88,
     153,   -88,   -88,   -88,   -88,   181,   -88,   -88,   -88,    47,
      47,   -88,   -88,   -88,   -88,    -6,    86,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   176,     6,   181,    48,   -88,   -88,
     182,   -88,   -88,   -88,   -88,   178,    -7,    -7,   -88,   193,
     -88,   181,   -88,   -88,   -88,   197,    -7,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,    35,    36,    16,    39,    40,    41,    42,
      43,     0,     0,    11,     0,    20,     0,    19,    22,     0,
       0,    25,   109,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,     0,     0,     0,     0,
     106,    86,     0,    87,    90,    95,    97,   105,    31,     0,
       0,     0,    63,    65,    67,    69,    76,     0,     0,     0,
      46,    47,     0,     0,     0,    45,     0,    13,    15,    38,
      34,     8,     0,     0,     0,    27,     0,    17,     0,     0,
      23,   113,     0,   110,   112,     0,    77,    78,    79,    80,
      81,    82,    83,    84,   101,   103,     0,     0,    98,    94,
     102,   104,    30,     0,     0,     0,     0,     0,     0,    32,
      68,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,    50,    33,    44,    10,     0,    21,
       0,    18,    26,    24,   108,     0,    37,    85,   107,    88,
      89,    91,    92,    93,    96,     0,    64,    66,    71,    70,
      73,    72,    74,    75,     0,     0,     0,    62,    59,    29,
       0,   111,    52,    53,    55,     0,     0,     0,    58,     0,
      28,     0,    60,    61,    57,     0,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   203,   -88,   -88,   -88,   -88,    -4,   -88,
     -88,   -88,   119,   -88,   -88,   120,   -88,   -88,   198,    59,
     -88,   -88,   -88,   -88,   -88,    49,   -88,   -19,   -88,    93,
     -75,   -88,     1,   -18,   -88,   -42,   -87,   171,    14,   -88,
     -88,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    44,    31,    32,
      33,    46,    47,    34,    50,    51,    48,   105,    35,    36,
      37,    38,    39,    40,   187,   188,   199,    81,    82,    83,
      84,    85,    71,    86,    73,    74,    75,    76,    77,   112,
     113,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    72,    79,    87,    13,   140,    10,    10,    52,    92,
       3,    41,    96,    63,    64,    65,    66,   103,    52,    88,
     108,   124,   125,    14,    42,    21,     4,     5,    67,    68,
      69,   124,   125,    41,   111,    70,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   104,    42,   127,   171,   172,
     173,   174,   126,    55,    56,    57,    58,    59,    60,    61,
      62,   101,   102,   106,     5,    15,    16,    80,   177,    17,
     107,   152,   135,   136,   137,    10,    18,   141,   109,    19,
      20,   133,   134,   150,    43,   110,   159,   186,   197,    45,
     162,   169,   170,    21,    49,    22,    23,    24,    25,    26,
      27,    89,    90,    28,    29,    15,    16,    91,   167,    17,
     153,    93,    94,    52,    99,    10,    97,   100,   130,    19,
      20,   131,   138,    53,    30,   132,   178,   179,   180,   181,
     182,   183,   184,    21,   139,    22,    23,    24,    25,    26,
      27,   142,   151,    28,    29,   143,    54,   111,    55,    56,
      57,    58,    59,    60,    61,    62,   154,    63,    64,    65,
      66,   155,   156,   157,    30,   158,   195,   160,   196,    78,
     164,   192,    67,    68,    69,   165,   166,   175,   168,    70,
     185,   189,   190,   205,    63,    64,    65,    66,    63,    64,
      65,    66,   202,   203,   186,   194,    95,   201,   200,    67,
      68,    69,   207,    67,    68,    69,    70,   204,   206,    12,
      70,   128,    64,    65,    66,   128,    64,    65,    66,   144,
     145,   146,   147,   148,   149,   161,    67,    68,    69,   163,
      98,    68,    69,    70,   193,   176,   198,    70,   129,   191
};

static const yytype_uint8 yycheck[] =
{
       4,    19,    20,    22,     8,    80,    13,    13,    10,    27,
       0,    10,    30,     7,     8,     9,    10,    15,    10,    23,
      43,    23,    24,    10,    10,    31,     6,     7,    22,    23,
      24,    23,    24,    32,    52,    29,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    43,    32,    66,   135,   136,
     137,   138,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    11,    12,    12,     7,     3,     4,    61,   143,     7,
      19,    89,    25,    26,    27,    13,    14,    81,    12,    17,
      18,    21,    22,    87,     7,    19,   104,    39,    40,     7,
     108,   133,   134,    31,     7,    33,    34,    35,    36,    37,
      38,    10,    19,    41,    42,     3,     4,    19,   126,     7,
      13,     7,     7,    10,    19,    13,    14,    19,     7,    17,
      18,     7,    28,    20,    62,    19,   144,   145,   146,   147,
     148,   149,   151,    31,    19,    33,    34,    35,    36,    37,
      38,    60,    33,    41,    42,    59,    43,   165,    45,    46,
      47,    48,    49,    50,    51,    52,    19,     7,     8,     9,
      10,    19,    19,     7,    62,    29,   185,    15,   186,    19,
      11,   175,    22,    23,    24,    12,    19,    32,    11,    29,
      19,    16,    29,   201,     7,     8,     9,    10,     7,     8,
       9,    10,   196,   197,    39,    19,    19,    19,    16,    22,
      23,    24,   206,    22,    23,    24,    29,    14,    11,     6,
      29,     7,     8,     9,    10,     7,     8,     9,    10,    53,
      54,    55,    56,    57,    58,   106,    22,    23,    24,   109,
      32,    23,    24,    29,   175,   142,   187,    29,    67,   165
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    64,    66,     0,     6,     7,    65,    67,    68,    69,
      13,    71,    66,    71,    10,     3,     4,     7,    14,    17,
      18,    31,    33,    34,    35,    36,    37,    38,    41,    42,
      62,    71,    72,    73,    76,    81,    82,    83,    84,    85,
      86,    95,   101,     7,    70,     7,    74,    75,    79,     7,
      77,    78,    10,    20,    43,    45,    46,    47,    48,    49,
      50,    51,    52,     7,     8,     9,    10,    22,    23,    24,
      29,    95,    96,    97,    98,    99,   100,   101,    19,    96,
      61,    90,    91,    92,    93,    94,    96,    90,    71,    10,
      19,    19,    96,     7,     7,    19,    96,    14,    81,    19,
      19,    11,    12,    15,    43,    80,    12,    19,    43,    12,
      19,    96,   102,   103,   104,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    23,    24,    44,    90,     7,   100,
       7,     7,    19,    21,    22,    25,    26,    27,    28,    19,
      93,    71,    60,    59,    53,    54,    55,    56,    57,    58,
      71,    33,    96,    13,    19,    19,    19,     7,    29,    96,
      15,    75,    96,    78,    11,    12,    19,    96,    11,    98,
      98,    99,    99,    99,    99,    32,    92,    93,    96,    96,
      96,    96,    96,    96,    90,    19,    39,    87,    88,    16,
      29,   104,    71,    82,    19,    90,    96,    40,    88,    89,
      16,    19,    71,    71,    14,    96,    11,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    65,    66,    66,    67,    68,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    75,    76,    77,    77,    78,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    83,    84,    85,    86,    87,    87,
      88,    89,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   102,
     102,   103,   103,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     4,     3,
       3,     2,     3,     3,     2,     1,     1,     4,     2,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     1,     2,
       3,     3,     5,     5,     3,     5,     9,     6,     2,     1,
       3,     2,     0,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     3,
       1,     3,     3,     3,     2,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     3,     4,     0,
       1,     3,     1,     1
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
#line 65 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1444 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 69 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1452 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 73 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1462 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 80 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1470 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 83 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1478 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 87 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1487 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 92 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1498 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 99 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1506 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 104 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1516 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 109 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1525 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 113 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1533 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 118 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1542 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 122 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1550 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 127 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1558 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 130 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1566 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 134 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1575 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 140 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1583 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 143 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1591 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 148 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1600 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 152 "cmm.y"
                     {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
}
#line 1610 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 157 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1618 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 161 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1627 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 167 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1635 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 170 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1643 "y.tab.c"
    break;

  case 26: /* const_init: ID COLEQ E  */
#line 174 "cmm.y"
                        {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1653 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 180 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1663 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 187 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
}
#line 1673 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 192 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
}
#line 1682 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 207 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1690 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 210 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1698 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 213 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1706 "y.tab.c"
    break;

  case 33: /* st: READ ID SEMI  */
#line 216 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1715 "y.tab.c"
    break;

  case 34: /* st: FUNC_CALL SEMI  */
#line 220 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1723 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 223 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1731 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 226 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1739 "y.tab.c"
    break;

  case 37: /* st: ID COLEQ E SEMI  */
#line 229 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1748 "y.tab.c"
    break;

  case 38: /* st: compound_assignment SEMI  */
#line 233 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1756 "y.tab.c"
    break;

  case 39: /* st: ifstmt  */
#line 236 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1764 "y.tab.c"
    break;

  case 40: /* st: whilestmt  */
#line 239 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1772 "y.tab.c"
    break;

  case 41: /* st: dowhilestmt  */
#line 242 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1780 "y.tab.c"
    break;

  case 42: /* st: forstmt  */
#line 245 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1788 "y.tab.c"
    break;

  case 43: /* st: switchstmt  */
#line 248 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1796 "y.tab.c"
    break;

  case 44: /* st: RETURN E SEMI  */
#line 251 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1804 "y.tab.c"
    break;

  case 45: /* st: RETURN SEMI  */
#line 254 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1812 "y.tab.c"
    break;

  case 46: /* st: BREAK SEMI  */
#line 257 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1820 "y.tab.c"
    break;

  case 47: /* st: CONTINUE SEMI  */
#line 260 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1828 "y.tab.c"
    break;

  case 48: /* st: body  */
#line 263 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1836 "y.tab.c"
    break;

  case 49: /* st: ID COLON  */
#line 266 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1845 "y.tab.c"
    break;

  case 50: /* st: GOTO ID SEMI  */
#line 270 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1854 "y.tab.c"
    break;

  case 51: /* ifstmt: IF cond body  */
#line 276 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1862 "y.tab.c"
    break;

  case 52: /* ifstmt: IF cond body ELSE body  */
#line 279 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1870 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body ELSE ifstmt  */
#line 282 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1878 "y.tab.c"
    break;

  case 54: /* whilestmt: WHILE cond body  */
#line 286 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1886 "y.tab.c"
    break;

  case 55: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 290 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1894 "y.tab.c"
    break;

  case 56: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 294 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1902 "y.tab.c"
    break;

  case 57: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 298 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1910 "y.tab.c"
    break;

  case 58: /* cases: cases case_item  */
#line 303 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1918 "y.tab.c"
    break;

  case 59: /* cases: case_item  */
#line 306 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1926 "y.tab.c"
    break;

  case 60: /* case_item: CASE E body  */
#line 310 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1934 "y.tab.c"
    break;

  case 61: /* case_default: DEFAULT body  */
#line 315 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 1942 "y.tab.c"
    break;

  case 62: /* case_default: %empty  */
#line 318 "cmm.y"
          {
	yyval.node = NULL;
}
#line 1950 "y.tab.c"
    break;

  case 63: /* cond: cond_or  */
#line 322 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1958 "y.tab.c"
    break;

  case 64: /* cond_or: cond_or OR cond_and  */
#line 327 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 1966 "y.tab.c"
    break;

  case 65: /* cond_or: cond_and  */
#line 330 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1974 "y.tab.c"
    break;

  case 66: /* cond_and: cond_and AND cond_not  */
#line 335 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 1982 "y.tab.c"
    break;

  case 67: /* cond_and: cond_not  */
#line 338 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1990 "y.tab.c"
    break;

  case 68: /* cond_not: NOT cond_not  */
#line 343 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 1998 "y.tab.c"
    break;

  case 69: /* cond_not: comp  */
#line 346 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2006 "y.tab.c"
    break;

  case 70: /* comp: E GT E  */
#line 351 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2014 "y.tab.c"
    break;

  case 71: /* comp: E GE E  */
#line 354 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2022 "y.tab.c"
    break;

  case 72: /* comp: E LT E  */
#line 357 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2030 "y.tab.c"
    break;

  case 73: /* comp: E LE E  */
#line 360 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2038 "y.tab.c"
    break;

  case 74: /* comp: E NE E  */
#line 363 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2046 "y.tab.c"
    break;

  case 75: /* comp: E EQ E  */
#line 366 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2054 "y.tab.c"
    break;

  case 76: /* comp: E  */
#line 369 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2062 "y.tab.c"
    break;

  case 77: /* compound_assignment: ID ADD_ASSIGN E  */
#line 374 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2072 "y.tab.c"
    break;

  case 78: /* compound_assignment: ID SUB_ASSIGN E  */
#line 379 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2082 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID MUL_ASSIGN E  */
#line 384 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2092 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID DIV_ASSIGN E  */
#line 389 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2102 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID POW_ASSIGN E  */
#line 394 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2112 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID MOD_ASSIGN E  */
#line 399 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2122 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID AND_ASSIGN E  */
#line 404 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2132 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID OR_ASSIGN E  */
#line 409 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2142 "y.tab.c"
    break;

  case 85: /* E: ID ASSIGN E  */
#line 417 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2151 "y.tab.c"
    break;

  case 86: /* E: compound_assignment  */
#line 421 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2159 "y.tab.c"
    break;

  case 87: /* E: ADD_SUB  */
#line 424 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2167 "y.tab.c"
    break;

  case 88: /* ADD_SUB: ADD_SUB PLUS T  */
#line 429 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2175 "y.tab.c"
    break;

  case 89: /* ADD_SUB: ADD_SUB MINUS T  */
#line 432 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2183 "y.tab.c"
    break;

  case 90: /* ADD_SUB: T  */
#line 435 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2191 "y.tab.c"
    break;

  case 91: /* T: T MULT P  */
#line 440 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2199 "y.tab.c"
    break;

  case 92: /* T: T DIV P  */
#line 443 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2207 "y.tab.c"
    break;

  case 93: /* T: T MOD P  */
#line 446 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2215 "y.tab.c"
    break;

  case 94: /* T: MINUS F  */
#line 449 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2223 "y.tab.c"
    break;

  case 95: /* T: P  */
#line 452 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2231 "y.tab.c"
    break;

  case 96: /* P: F POW P  */
#line 457 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2239 "y.tab.c"
    break;

  case 97: /* P: F  */
#line 460 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2247 "y.tab.c"
    break;

  case 98: /* F: ID  */
#line 465 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2255 "y.tab.c"
    break;

  case 99: /* F: LIT_TRUE  */
#line 468 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2264 "y.tab.c"
    break;

  case 100: /* F: LIT_FALSE  */
#line 472 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2273 "y.tab.c"
    break;

  case 101: /* F: ID INC  */
#line 476 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2285 "y.tab.c"
    break;

  case 102: /* F: INC ID  */
#line 483 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2297 "y.tab.c"
    break;

  case 103: /* F: ID DEC  */
#line 490 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2309 "y.tab.c"
    break;

  case 104: /* F: DEC ID  */
#line 497 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2321 "y.tab.c"
    break;

  case 105: /* F: FUNC_CALL  */
#line 504 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2329 "y.tab.c"
    break;

  case 106: /* F: NUMBER  */
#line 507 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2337 "y.tab.c"
    break;

  case 107: /* F: LPAR cond RPAR  */
#line 510 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2345 "y.tab.c"
    break;

  case 108: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 514 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2355 "y.tab.c"
    break;

  case 109: /* fparams: %empty  */
#line 521 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2363 "y.tab.c"
    break;

  case 110: /* fparams: ac_params  */
#line 524 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2371 "y.tab.c"
    break;

  case 111: /* ac_params: ac_params COMMA fparam  */
#line 529 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2379 "y.tab.c"
    break;

  case 112: /* ac_params: fparam  */
#line 532 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2387 "y.tab.c"
    break;

  case 113: /* fparam: E  */
#line 536 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2395 "y.tab.c"
    break;


#line 2399 "y.tab.c"

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

#line 540 "cmm.y"


#include "lex.yy.c"
