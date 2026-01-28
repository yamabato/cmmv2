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
    CHAR = 261,                    /* CHAR  */
    ID = 262,                      /* ID  */
    STR = 263,                     /* STR  */
    MAIN = 264,                    /* MAIN  */
    LIT_TRUE = 265,                /* LIT_TRUE  */
    LIT_FALSE = 266,               /* LIT_FALSE  */
    LPAR = 267,                    /* LPAR  */
    RPAR = 268,                    /* RPAR  */
    COMMA = 269,                   /* COMMA  */
    LBRA = 270,                    /* LBRA  */
    RBRA = 271,                    /* RBRA  */
    LSQR = 272,                    /* LSQR  */
    RSQR = 273,                    /* RSQR  */
    WRITE = 274,                   /* WRITE  */
    WRITELN = 275,                 /* WRITELN  */
    READ = 276,                    /* READ  */
    TIME = 277,                    /* TIME  */
    ISODD = 278,                   /* ISODD  */
    PUTC = 279,                    /* PUTC  */
    GETC = 280,                    /* GETC  */
    SEMI = 281,                    /* SEMI  */
    COLON = 282,                   /* COLON  */
    PLUS = 283,                    /* PLUS  */
    MINUS = 284,                   /* MINUS  */
    INC = 285,                     /* INC  */
    DEC = 286,                     /* DEC  */
    MULT = 287,                    /* MULT  */
    DIV = 288,                     /* DIV  */
    MOD = 289,                     /* MOD  */
    POW = 290,                     /* POW  */
    ADDR = 291,                    /* ADDR  */
    DEREF = 292,                   /* DEREF  */
    NUMBER = 293,                  /* NUMBER  */
    FLOAT = 294,                   /* FLOAT  */
    IF = 295,                      /* IF  */
    ELSE = 296,                    /* ELSE  */
    WHILE = 297,                   /* WHILE  */
    DO = 298,                      /* DO  */
    FOR = 299,                     /* FOR  */
    BREAK = 300,                   /* BREAK  */
    CONTINUE = 301,                /* CONTINUE  */
    SWITCH = 302,                  /* SWITCH  */
    CASE = 303,                    /* CASE  */
    DEFAULT = 304,                 /* DEFAULT  */
    GOTO = 305,                    /* GOTO  */
    COLEQ = 306,                   /* COLEQ  */
    ASSIGN = 307,                  /* ASSIGN  */
    ADD_ASSIGN = 308,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 309,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 310,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 311,              /* DIV_ASSIGN  */
    POW_ASSIGN = 312,              /* POW_ASSIGN  */
    MOD_ASSIGN = 313,              /* MOD_ASSIGN  */
    AND_ASSIGN = 314,              /* AND_ASSIGN  */
    OR_ASSIGN = 315,               /* OR_ASSIGN  */
    GE = 316,                      /* GE  */
    GT = 317,                      /* GT  */
    LE = 318,                      /* LE  */
    LT = 319,                      /* LT  */
    NE = 320,                      /* NE  */
    EQ = 321,                      /* EQ  */
    AND = 322,                     /* AND  */
    OR = 323,                      /* OR  */
    NOT = 324,                     /* NOT  */
    RETURN = 325                   /* RETURN  */
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
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_STR = 8,                        /* STR  */
  YYSYMBOL_MAIN = 9,                       /* MAIN  */
  YYSYMBOL_LIT_TRUE = 10,                  /* LIT_TRUE  */
  YYSYMBOL_LIT_FALSE = 11,                 /* LIT_FALSE  */
  YYSYMBOL_LPAR = 12,                      /* LPAR  */
  YYSYMBOL_RPAR = 13,                      /* RPAR  */
  YYSYMBOL_COMMA = 14,                     /* COMMA  */
  YYSYMBOL_LBRA = 15,                      /* LBRA  */
  YYSYMBOL_RBRA = 16,                      /* RBRA  */
  YYSYMBOL_LSQR = 17,                      /* LSQR  */
  YYSYMBOL_RSQR = 18,                      /* RSQR  */
  YYSYMBOL_WRITE = 19,                     /* WRITE  */
  YYSYMBOL_WRITELN = 20,                   /* WRITELN  */
  YYSYMBOL_READ = 21,                      /* READ  */
  YYSYMBOL_TIME = 22,                      /* TIME  */
  YYSYMBOL_ISODD = 23,                     /* ISODD  */
  YYSYMBOL_PUTC = 24,                      /* PUTC  */
  YYSYMBOL_GETC = 25,                      /* GETC  */
  YYSYMBOL_SEMI = 26,                      /* SEMI  */
  YYSYMBOL_COLON = 27,                     /* COLON  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MINUS = 29,                     /* MINUS  */
  YYSYMBOL_INC = 30,                       /* INC  */
  YYSYMBOL_DEC = 31,                       /* DEC  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_MOD = 34,                       /* MOD  */
  YYSYMBOL_POW = 35,                       /* POW  */
  YYSYMBOL_ADDR = 36,                      /* ADDR  */
  YYSYMBOL_DEREF = 37,                     /* DEREF  */
  YYSYMBOL_NUMBER = 38,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_WHILE = 42,                     /* WHILE  */
  YYSYMBOL_DO = 43,                        /* DO  */
  YYSYMBOL_FOR = 44,                       /* FOR  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 46,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 47,                    /* SWITCH  */
  YYSYMBOL_CASE = 48,                      /* CASE  */
  YYSYMBOL_DEFAULT = 49,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 50,                      /* GOTO  */
  YYSYMBOL_COLEQ = 51,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 52,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 53,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 54,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 55,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 56,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 57,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 58,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 59,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 60,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 61,                        /* GE  */
  YYSYMBOL_GT = 62,                        /* GT  */
  YYSYMBOL_LE = 63,                        /* LE  */
  YYSYMBOL_LT = 64,                        /* LT  */
  YYSYMBOL_NE = 65,                        /* NE  */
  YYSYMBOL_EQ = 66,                        /* EQ  */
  YYSYMBOL_AND = 67,                       /* AND  */
  YYSYMBOL_OR = 68,                        /* OR  */
  YYSYMBOL_NOT = 69,                       /* NOT  */
  YYSYMBOL_RETURN = 70,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_main = 73,                      /* main  */
  YYSYMBOL_fdecls = 74,                    /* fdecls  */
  YYSYMBOL_fdecl = 75,                     /* fdecl  */
  YYSYMBOL_fhead = 76,                     /* fhead  */
  YYSYMBOL_fid = 77,                       /* fid  */
  YYSYMBOL_params = 78,                    /* params  */
  YYSYMBOL_body = 79,                      /* body  */
  YYSYMBOL_stmts = 80,                     /* stmts  */
  YYSYMBOL_decl_var = 81,                  /* decl_var  */
  YYSYMBOL_var_inits = 82,                 /* var_inits  */
  YYSYMBOL_var_init = 83,                  /* var_init  */
  YYSYMBOL_decl_const = 84,                /* decl_const  */
  YYSYMBOL_const_inits = 85,               /* const_inits  */
  YYSYMBOL_const_init = 86,                /* const_init  */
  YYSYMBOL_array_decl = 87,                /* array_decl  */
  YYSYMBOL_array_size = 88,                /* array_size  */
  YYSYMBOL_st = 89,                        /* st  */
  YYSYMBOL_ifstmt = 90,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 91,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 92,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 93,                   /* forstmt  */
  YYSYMBOL_switchstmt = 94,                /* switchstmt  */
  YYSYMBOL_cases = 95,                     /* cases  */
  YYSYMBOL_case_item = 96,                 /* case_item  */
  YYSYMBOL_case_default = 97,              /* case_default  */
  YYSYMBOL_cond = 98,                      /* cond  */
  YYSYMBOL_cond_or = 99,                   /* cond_or  */
  YYSYMBOL_cond_and = 100,                 /* cond_and  */
  YYSYMBOL_cond_not = 101,                 /* cond_not  */
  YYSYMBOL_comp = 102,                     /* comp  */
  YYSYMBOL_compound_assignment = 103,      /* compound_assignment  */
  YYSYMBOL_E = 104,                        /* E  */
  YYSYMBOL_ADD_SUB = 105,                  /* ADD_SUB  */
  YYSYMBOL_T = 106,                        /* T  */
  YYSYMBOL_P = 107,                        /* P  */
  YYSYMBOL_F = 108,                        /* F  */
  YYSYMBOL_str = 109,                      /* str  */
  YYSYMBOL_FUNC_CALL = 110,                /* FUNC_CALL  */
  YYSYMBOL_deref = 111,                    /* deref  */
  YYSYMBOL_fparams = 112,                  /* fparams  */
  YYSYMBOL_ac_params = 113,                /* ac_params  */
  YYSYMBOL_fparam = 114,                   /* fparam  */
  YYSYMBOL_arr_ref = 115,                  /* arr_ref  */
  YYSYMBOL_arr_init = 116,                 /* arr_init  */
  YYSYMBOL_arr_elems = 117,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 118,          /* arr_initializer  */
  YYSYMBOL_arr_index = 119                 /* arr_index  */
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
#define YYLAST   533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    71,    75,    82,    85,    89,    94,   101,
     106,   111,   115,   121,   125,   130,   133,   137,   143,   146,
     151,   155,   161,   165,   171,   174,   178,   185,   190,   202,
     208,   224,   227,   230,   233,   236,   239,   242,   246,   249,
     252,   255,   258,   261,   264,   267,   270,   273,   276,   279,
     283,   287,   292,   295,   298,   302,   306,   310,   314,   319,
     322,   326,   331,   334,   338,   343,   346,   351,   354,   359,
     362,   367,   370,   373,   376,   379,   382,   385,   390,   395,
     400,   405,   410,   415,   420,   425,   433,   437,   440,   443,
     446,   451,   454,   457,   462,   465,   468,   471,   476,   479,
     484,   487,   490,   493,   496,   499,   502,   506,   510,   517,
     524,   531,   538,   541,   544,   547,   550,   553,   557,   561,
     566,   571,   577,   582,   585,   590,   593,   597,   601,   608,
     612,   617,   620,   623,   628,   631,   636,   640
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
  "CHAR", "ID", "STR", "MAIN", "LIT_TRUE", "LIT_FALSE", "LPAR", "RPAR",
  "COMMA", "LBRA", "RBRA", "LSQR", "RSQR", "WRITE", "WRITELN", "READ",
  "TIME", "ISODD", "PUTC", "GETC", "SEMI", "COLON", "PLUS", "MINUS", "INC",
  "DEC", "MULT", "DIV", "MOD", "POW", "ADDR", "DEREF", "NUMBER", "FLOAT",
  "IF", "ELSE", "WHILE", "DO", "FOR", "BREAK", "CONTINUE", "SWITCH",
  "CASE", "DEFAULT", "GOTO", "COLEQ", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "POW_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "OR_ASSIGN", "GE", "GT", "LE", "LT", "NE", "EQ", "AND", "OR", "NOT",
  "RETURN", "$accept", "program", "main", "fdecls", "fdecl", "fhead",
  "fid", "params", "body", "stmts", "decl_var", "var_inits", "var_init",
  "decl_const", "const_inits", "const_init", "array_decl", "array_size",
  "st", "ifstmt", "whilestmt", "dowhilestmt", "forstmt", "switchstmt",
  "cases", "case_item", "case_default", "cond", "cond_or", "cond_and",
  "cond_not", "comp", "compound_assignment", "E", "ADD_SUB", "T", "P", "F",
  "str", "FUNC_CALL", "deref", "fparams", "ac_params", "fparam", "arr_ref",
  "arr_init", "arr_elems", "arr_initializer", "arr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -100,     9,    29,  -100,  -100,    11,  -100,  -100,    11,    28,
     234,  -100,    39,  -100,    41,    48,    57,  -100,    32,  -100,
    -100,   164,  -100,   462,   396,  -100,  -100,   495,   462,  -100,
     495,    75,    87,   495,   495,   495,  -100,   164,   164,    11,
      86,    78,    79,   462,    99,   429,  -100,   286,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    84,    43,    33,
    -100,     0,  -100,    65,    68,  -100,     1,    -9,    -3,  -100,
    -100,    69,    -2,  -100,   462,   462,  -100,  -100,  -100,   363,
     462,   462,   462,   462,   462,   462,   462,   462,   101,   308,
     164,   109,    55,    60,  -100,  -100,    74,    72,   102,  -100,
     103,    30,  -100,  -100,  -100,   105,  -100,  -100,  -100,  -100,
    -100,  -100,    11,    11,    90,   462,  -100,  -100,   118,   115,
    -100,   116,  -100,  -100,  -100,   495,   495,   495,   495,   495,
     495,   462,   363,  -100,   137,   107,   462,    -7,    48,  -100,
     462,    57,  -100,  -100,   133,   140,  -100,   139,  -100,   363,
    -100,  -100,   132,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,   462,   462,  -100,  -100,   164,   164,   462,   462,   462,
     462,   462,   462,   462,  -100,  -100,  -100,   119,  -100,   164,
     142,   111,  -100,  -100,    33,    33,  -100,  -100,  -100,  -100,
    -100,  -100,   143,  -100,   154,  -100,   135,    17,  -100,  -100,
    -100,  -100,   462,  -100,  -100,  -100,    81,  -100,  -100,   159,
      60,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -13,   152,
     164,   462,     3,  -100,  -100,  -100,   161,  -100,  -100,   363,
    -100,  -100,  -100,  -100,  -100,   155,    11,    11,  -100,   166,
    -100,  -100,   462,  -100,  -100,  -100,   167,    11,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     3,     1,     9,     0,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,   114,   100,   106,
     107,     0,    14,     0,     0,   117,   119,     0,     0,   118,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    35,    36,
      16,    39,    40,    41,    42,    43,    89,     0,    90,    93,
      97,    99,   112,   104,   115,    11,     0,    20,     0,    19,
      22,     0,     0,    25,   123,     0,    49,   108,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   100,
       0,     0,    64,    66,    68,    70,    77,   115,     0,    32,
       0,   100,   102,   104,   115,     0,   101,   109,   111,   105,
     103,   122,     0,     0,     0,     0,    46,    47,     0,     0,
      45,     0,    13,    15,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,    27,     0,    17,
       0,     0,    23,   127,     0,   124,   126,     0,   120,   133,
      86,   130,     0,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,    69,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    33,    34,    52,    55,     0,
       0,     0,    50,    44,    91,    92,    94,    95,    96,    98,
      88,    87,     0,    10,     0,    21,     0,     0,    18,    26,
      24,   121,     0,   136,   134,   135,     0,   132,    37,     0,
      65,    67,    72,    71,    74,    73,    75,    76,     0,     0,
       0,     0,    63,    60,    38,    30,     0,    28,   125,     0,
     129,   137,    53,    54,    56,     0,     0,     0,    59,     0,
      29,   131,     0,    61,    62,    58,     0,     0,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,   177,  -100,  -100,  -100,  -100,    -5,  -100,
    -100,  -100,    46,  -100,  -100,    49,  -100,  -100,   144,   -26,
    -100,  -100,  -100,  -100,  -100,   -25,  -100,   -32,  -100,    38,
     -83,  -100,  -100,    -6,  -100,   -23,   -99,    66,  -100,  -100,
     -14,  -100,  -100,    -4,    23,   -78,  -100,   -24,  -100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    66,    46,    47,
      48,    68,    69,    49,    72,    73,    70,   137,    50,    51,
      52,    53,    54,    55,   222,   223,   239,    91,    92,    93,
      94,    95,    56,    96,    58,    59,    60,    61,   151,    62,
      63,   144,   145,   146,    97,   205,   206,   207,    88
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,   152,    10,    13,    57,   112,   113,   163,   135,     3,
     196,   138,   141,   103,   133,   134,   103,    98,   100,   103,
     103,   103,   105,   139,   142,   148,    10,    37,   186,   187,
     188,   189,   149,    64,   114,   130,     4,   118,     5,   121,
      14,    57,    74,   136,    74,   197,     4,    75,    65,    75,
     104,   221,   237,   104,   192,    67,   104,   104,   104,    76,
      77,    78,    77,    78,    71,   127,   128,   129,   143,   147,
      64,   125,   126,   150,   153,   154,   155,   156,   157,   158,
     159,   160,   107,   211,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   102,   108,   229,   106,   230,   115,   109,
     110,   111,   184,   185,   116,   117,   119,   177,   178,   180,
     124,   103,   103,   103,   103,   103,   103,   131,   161,   227,
     132,   140,   164,   165,   173,   190,   191,   166,   174,   175,
     195,   176,   179,   181,   199,   167,   168,   169,   170,   171,
     172,   182,   183,   204,   193,   194,   201,   219,   104,   104,
     104,   104,   104,   104,   202,   209,   150,   203,   208,   221,
     218,   212,   213,   214,   215,   216,   217,   191,   220,   224,
      17,    89,   225,   226,    19,    20,    21,   231,   234,   240,
     247,   242,   245,    12,   198,    25,    26,    27,   235,    29,
     200,   123,   233,    30,    31,    32,   143,   238,   228,    33,
      34,    35,    36,   210,     0,   241,     0,     0,     0,     0,
       0,     0,     0,   232,     0,   236,     0,     0,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,   243,   244,    90,     0,     0,   246,    15,    16,     0,
      17,    18,   248,     0,    19,    20,    21,     0,     0,    10,
      22,     0,     0,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,     0,     0,     0,    33,
      34,    35,    36,     0,    37,     0,    38,    39,    40,    41,
      42,    43,     0,     0,    44,     0,     0,     0,     0,    15,
      16,     0,    17,    18,     0,     0,    19,    20,    21,     0,
       0,    10,   122,     0,    45,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,     0,     0,
      74,    33,    34,    35,    36,    75,    37,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
     162,    80,    81,    82,    83,    84,    85,    86,    87,    17,
      89,   148,     0,    19,    20,    21,     0,     0,   149,     0,
       0,     0,     0,     0,    25,    26,    27,     0,    29,     0,
       0,     0,    30,    31,    32,     0,     0,     0,    33,    34,
      35,    36,    17,    89,     0,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
       0,    29,    99,     0,     0,    30,    31,    32,     0,     0,
       0,    33,    34,    35,    36,    17,    89,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,     0,    29,   120,     0,     0,    30,    31,
      32,     0,     0,     0,    33,    34,    35,    36,    17,    89,
       0,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,     0,    29,     0,     0,
       0,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    17,   101,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,     0,
      29,     0,     0,     0,    30,    31,    32,     0,     0,     0,
      33,    34,    35,    36
};

static const yytype_int16 yycheck[] =
{
       5,    79,    15,     8,    10,    37,    38,    90,    17,     0,
      17,    14,    14,    27,    13,    14,    30,    23,    24,    33,
      34,    35,    28,    26,    26,     8,    15,    40,   127,   128,
     129,   130,    15,    10,    39,    35,     7,    43,     9,    45,
      12,    47,    12,    52,    12,    52,     7,    17,     7,    17,
      27,    48,    49,    30,   132,     7,    33,    34,    35,    27,
      30,    31,    30,    31,     7,    32,    33,    34,    74,    75,
      47,    28,    29,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     7,   166,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    27,     7,    14,    30,    16,    12,    33,
      34,    35,   125,   126,    26,    26,     7,   112,   113,   115,
      26,   125,   126,   127,   128,   129,   130,    52,    17,   197,
      52,    52,    13,    68,    52,   131,   132,    67,    26,    26,
     136,    26,    42,    15,   140,    61,    62,    63,    64,    65,
      66,    26,    26,   149,     7,    38,    13,   179,   125,   126,
     127,   128,   129,   130,    14,   161,   162,    18,    26,    48,
      41,   167,   168,   169,   170,   171,   172,   173,    26,    26,
       6,     7,    18,    38,    10,    11,    12,    18,    26,    18,
      13,    26,    16,     6,   138,    21,    22,    23,   220,    25,
     141,    47,   218,    29,    30,    31,   202,   222,   202,    35,
      36,    37,    38,   165,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,   237,    69,    -1,    -1,   242,     3,     4,    -1,
       6,     7,   247,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    70,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,
      12,    35,    36,    37,    38,    17,    40,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     6,
       7,     8,    -1,    10,    11,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      37,    38,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    -1,    -1,
      -1,    35,    36,    37,    38,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    29,    30,    31,    -1,    -1,    -1,    35,    36,    37,
      38,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,    74,     0,     7,     9,    73,    75,    76,    77,
      15,    79,    74,    79,    12,     3,     4,     6,     7,    10,
      11,    12,    16,    19,    20,    21,    22,    23,    24,    25,
      29,    30,    31,    35,    36,    37,    38,    40,    42,    43,
      44,    45,    46,    47,    50,    70,    79,    80,    81,    84,
      89,    90,    91,    92,    93,    94,   103,   104,   105,   106,
     107,   108,   110,   111,   115,     7,    78,     7,    82,    83,
      87,     7,    85,    86,    12,    17,    27,    30,    31,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   119,     7,
      69,    98,    99,   100,   101,   102,   104,   115,   104,    26,
     104,     7,   108,   111,   115,   104,   108,     7,     7,   108,
     108,   108,    98,    98,    79,    12,    26,    26,   104,     7,
      26,   104,    16,    89,    26,    28,    29,    32,    33,    34,
      35,    52,    52,    13,    14,    17,    52,    88,    14,    26,
      52,    14,    26,   104,   112,   113,   114,   104,     8,    15,
     104,   109,   116,   104,   104,   104,   104,   104,   104,   104,
     104,    17,    52,   101,    13,    68,    67,    61,    62,    63,
      64,    65,    66,    52,    26,    26,    26,    79,    79,    42,
     104,    15,    26,    26,   106,   106,   107,   107,   107,   107,
     104,   104,   116,     7,    38,   104,    17,    52,    83,   104,
      86,    13,    14,    18,   104,   116,   117,   118,    26,   104,
     100,   101,   104,   104,   104,   104,   104,   104,    41,    98,
      26,    48,    95,    96,    26,    18,    38,   116,   114,    14,
      16,    18,    79,    90,    26,    98,   104,    49,    96,    97,
      18,   118,    26,    79,    79,    16,   104,    13,    79
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    72,    73,    74,    74,    75,    76,    77,
      78,    78,    78,    79,    79,    80,    80,    81,    82,    82,
      83,    83,    83,    84,    85,    85,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    92,    93,    94,    95,
      95,    96,    97,    97,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   110,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     4,     4,
       3,     3,     2,     3,     3,     1,     1,     4,     4,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     1,     2,
       3,     2,     3,     5,     5,     3,     5,     9,     6,     2,
       1,     3,     2,     0,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       1,     2,     2,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     4,     2,     0,     1,     3,     1,     1,     2,     3,
       1,     3,     1,     0,     1,     1,     3,     4
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
#line 67 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1548 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 71 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1556 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 75 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->fbody = yyvsp[0].node;
}
#line 1566 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 82 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1574 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 85 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1582 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 89 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1591 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 94 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1602 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 101 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1610 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 106 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1620 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 111 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1629 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 115 "cmm.y"
          { /* epsilon */
	yyval.node = new_node(NK_NOTHING);
	yyval.node->ival = 0;
}
#line 1638 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 121 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1647 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 125 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1655 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 130 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1663 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 133 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1671 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 137 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1680 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 143 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1688 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 146 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1696 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 151 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1705 "y.tab.c"
    break;

  case 21: /* var_init: ID ASSIGN E  */
#line 155 "cmm.y"
                      {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
	yyval.node = var;
}
#line 1716 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 161 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1724 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 165 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1733 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 171 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1741 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 174 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1749 "y.tab.c"
    break;

  case 26: /* const_init: ID ASSIGN E  */
#line 178 "cmm.y"
                         {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1759 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 185 "cmm.y"
                        {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1769 "y.tab.c"
    break;

  case 28: /* array_decl: ID array_size ASSIGN arr_init  */
#line 190 "cmm.y"
                                        {
	Node *decl = new_node(NK_ARR_DECL);
	decl->cval = yyvsp[-3].name;
	decl->arr_size = yyvsp[-2].node;

	Node *id = new_id_node(yyvsp[-3].name);
	Node *init = new_binary_node(NK_ARR_INIT, id, yyvsp[0].node);

	yyval.node = append_node(decl, init);
}
#line 1784 "y.tab.c"
    break;

  case 29: /* array_size: array_size LSQR NUMBER RSQR  */
#line 202 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1795 "y.tab.c"
    break;

  case 30: /* array_size: LSQR NUMBER RSQR  */
#line 208 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1805 "y.tab.c"
    break;

  case 31: /* st: WRITE E SEMI  */
#line 224 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1813 "y.tab.c"
    break;

  case 32: /* st: WRITELN SEMI  */
#line 227 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1821 "y.tab.c"
    break;

  case 33: /* st: WRITELN E SEMI  */
#line 230 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1829 "y.tab.c"
    break;

  case 34: /* st: PUTC E SEMI  */
#line 233 "cmm.y"
                      {
	yyval.node = new_unary_node(NK_PUTC, yyvsp[-1].node);
}
#line 1837 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 236 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1845 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 239 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1853 "y.tab.c"
    break;

  case 37: /* st: ID ASSIGN arr_init SEMI  */
#line 242 "cmm.y"
                                  {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1862 "y.tab.c"
    break;

  case 38: /* st: arr_ref ASSIGN arr_init SEMI  */
#line 246 "cmm.y"
                                       {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1870 "y.tab.c"
    break;

  case 39: /* st: ifstmt  */
#line 249 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1878 "y.tab.c"
    break;

  case 40: /* st: whilestmt  */
#line 252 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1886 "y.tab.c"
    break;

  case 41: /* st: dowhilestmt  */
#line 255 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1894 "y.tab.c"
    break;

  case 42: /* st: forstmt  */
#line 258 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1902 "y.tab.c"
    break;

  case 43: /* st: switchstmt  */
#line 261 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1910 "y.tab.c"
    break;

  case 44: /* st: RETURN E SEMI  */
#line 264 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1918 "y.tab.c"
    break;

  case 45: /* st: RETURN SEMI  */
#line 267 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1926 "y.tab.c"
    break;

  case 46: /* st: BREAK SEMI  */
#line 270 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1934 "y.tab.c"
    break;

  case 47: /* st: CONTINUE SEMI  */
#line 273 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1942 "y.tab.c"
    break;

  case 48: /* st: body  */
#line 276 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1950 "y.tab.c"
    break;

  case 49: /* st: ID COLON  */
#line 279 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1959 "y.tab.c"
    break;

  case 50: /* st: GOTO ID SEMI  */
#line 283 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1968 "y.tab.c"
    break;

  case 51: /* st: E SEMI  */
#line 287 "cmm.y"
                 {
	yyval.node = yyvsp[-1].node;
}
#line 1976 "y.tab.c"
    break;

  case 52: /* ifstmt: IF cond body  */
#line 292 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1984 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body ELSE body  */
#line 295 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1992 "y.tab.c"
    break;

  case 54: /* ifstmt: IF cond body ELSE ifstmt  */
#line 298 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 2000 "y.tab.c"
    break;

  case 55: /* whilestmt: WHILE cond body  */
#line 302 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2008 "y.tab.c"
    break;

  case 56: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 306 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 2016 "y.tab.c"
    break;

  case 57: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 310 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 2024 "y.tab.c"
    break;

  case 58: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 314 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 2032 "y.tab.c"
    break;

  case 59: /* cases: cases case_item  */
#line 319 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2040 "y.tab.c"
    break;

  case 60: /* cases: case_item  */
#line 322 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2048 "y.tab.c"
    break;

  case 61: /* case_item: CASE E body  */
#line 326 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2056 "y.tab.c"
    break;

  case 62: /* case_default: DEFAULT body  */
#line 331 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 2064 "y.tab.c"
    break;

  case 63: /* case_default: %empty  */
#line 334 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2072 "y.tab.c"
    break;

  case 64: /* cond: cond_or  */
#line 338 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2080 "y.tab.c"
    break;

  case 65: /* cond_or: cond_or OR cond_and  */
#line 343 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2088 "y.tab.c"
    break;

  case 66: /* cond_or: cond_and  */
#line 346 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2096 "y.tab.c"
    break;

  case 67: /* cond_and: cond_and AND cond_not  */
#line 351 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2104 "y.tab.c"
    break;

  case 68: /* cond_and: cond_not  */
#line 354 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2112 "y.tab.c"
    break;

  case 69: /* cond_not: NOT cond_not  */
#line 359 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2120 "y.tab.c"
    break;

  case 70: /* cond_not: comp  */
#line 362 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2128 "y.tab.c"
    break;

  case 71: /* comp: E GT E  */
#line 367 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2136 "y.tab.c"
    break;

  case 72: /* comp: E GE E  */
#line 370 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2144 "y.tab.c"
    break;

  case 73: /* comp: E LT E  */
#line 373 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2152 "y.tab.c"
    break;

  case 74: /* comp: E LE E  */
#line 376 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2160 "y.tab.c"
    break;

  case 75: /* comp: E NE E  */
#line 379 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2168 "y.tab.c"
    break;

  case 76: /* comp: E EQ E  */
#line 382 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2176 "y.tab.c"
    break;

  case 77: /* comp: E  */
#line 385 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2184 "y.tab.c"
    break;

  case 78: /* compound_assignment: ID ADD_ASSIGN E  */
#line 390 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2194 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID SUB_ASSIGN E  */
#line 395 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2204 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID MUL_ASSIGN E  */
#line 400 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2214 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID DIV_ASSIGN E  */
#line 405 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2224 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID POW_ASSIGN E  */
#line 410 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2234 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID MOD_ASSIGN E  */
#line 415 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2244 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID AND_ASSIGN E  */
#line 420 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2254 "y.tab.c"
    break;

  case 85: /* compound_assignment: ID OR_ASSIGN E  */
#line 425 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2264 "y.tab.c"
    break;

  case 86: /* E: ID ASSIGN E  */
#line 433 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2273 "y.tab.c"
    break;

  case 87: /* E: arr_ref ASSIGN E  */
#line 437 "cmm.y"
                           {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2281 "y.tab.c"
    break;

  case 88: /* E: deref ASSIGN E  */
#line 440 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2289 "y.tab.c"
    break;

  case 89: /* E: compound_assignment  */
#line 443 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2297 "y.tab.c"
    break;

  case 90: /* E: ADD_SUB  */
#line 446 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2305 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB PLUS T  */
#line 451 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2313 "y.tab.c"
    break;

  case 92: /* ADD_SUB: ADD_SUB MINUS T  */
#line 454 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2321 "y.tab.c"
    break;

  case 93: /* ADD_SUB: T  */
#line 457 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2329 "y.tab.c"
    break;

  case 94: /* T: T MULT P  */
#line 462 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2337 "y.tab.c"
    break;

  case 95: /* T: T DIV P  */
#line 465 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2345 "y.tab.c"
    break;

  case 96: /* T: T MOD P  */
#line 468 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2353 "y.tab.c"
    break;

  case 97: /* T: P  */
#line 471 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2361 "y.tab.c"
    break;

  case 98: /* P: F POW P  */
#line 476 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2369 "y.tab.c"
    break;

  case 99: /* P: F  */
#line 479 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2377 "y.tab.c"
    break;

  case 100: /* F: ID  */
#line 484 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2385 "y.tab.c"
    break;

  case 101: /* F: MINUS F  */
#line 487 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2393 "y.tab.c"
    break;

  case 102: /* F: ISODD F  */
#line 490 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_IS_ODD, yyvsp[0].node);
}
#line 2401 "y.tab.c"
    break;

  case 103: /* F: ADDR F  */
#line 493 "cmm.y"
                 {
	yyval.node = new_unary_node(NK_ADDR, yyvsp[0].node);
}
#line 2409 "y.tab.c"
    break;

  case 104: /* F: deref  */
#line 496 "cmm.y"
                {
	yyval.node = yyvsp[0].node;
}
#line 2417 "y.tab.c"
    break;

  case 105: /* F: POW F  */
#line 499 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2425 "y.tab.c"
    break;

  case 106: /* F: LIT_TRUE  */
#line 502 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2434 "y.tab.c"
    break;

  case 107: /* F: LIT_FALSE  */
#line 506 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2443 "y.tab.c"
    break;

  case 108: /* F: ID INC  */
#line 510 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2455 "y.tab.c"
    break;

  case 109: /* F: INC ID  */
#line 517 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2467 "y.tab.c"
    break;

  case 110: /* F: ID DEC  */
#line 524 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2479 "y.tab.c"
    break;

  case 111: /* F: DEC ID  */
#line 531 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2491 "y.tab.c"
    break;

  case 112: /* F: FUNC_CALL  */
#line 538 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2499 "y.tab.c"
    break;

  case 113: /* F: NUMBER  */
#line 541 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2507 "y.tab.c"
    break;

  case 114: /* F: CHAR  */
#line 544 "cmm.y"
               {
	yyval.node = new_char_node(yyvsp[0].name);
}
#line 2515 "y.tab.c"
    break;

  case 115: /* F: arr_ref  */
#line 547 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2523 "y.tab.c"
    break;

  case 116: /* F: LPAR cond RPAR  */
#line 550 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2531 "y.tab.c"
    break;

  case 117: /* F: READ  */
#line 553 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 0;
}
#line 2540 "y.tab.c"
    break;

  case 118: /* F: GETC  */
#line 557 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 11;
}
#line 2549 "y.tab.c"
    break;

  case 119: /* F: TIME  */
#line 561 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 20;
}
#line 2558 "y.tab.c"
    break;

  case 120: /* str: STR  */
#line 566 "cmm.y"
          {
	yyval.node = new_node(NK_STR);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 2567 "y.tab.c"
    break;

  case 121: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 571 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2577 "y.tab.c"
    break;

  case 122: /* deref: DEREF F  */
#line 577 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2585 "y.tab.c"
    break;

  case 123: /* fparams: %empty  */
#line 582 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2593 "y.tab.c"
    break;

  case 124: /* fparams: ac_params  */
#line 585 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2601 "y.tab.c"
    break;

  case 125: /* ac_params: ac_params COMMA fparam  */
#line 590 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2609 "y.tab.c"
    break;

  case 126: /* ac_params: fparam  */
#line 593 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2617 "y.tab.c"
    break;

  case 127: /* fparam: E  */
#line 597 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2625 "y.tab.c"
    break;

  case 128: /* arr_ref: ID arr_index  */
#line 601 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2635 "y.tab.c"
    break;

  case 129: /* arr_init: LBRA arr_elems RBRA  */
#line 608 "cmm.y"
                             {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2644 "y.tab.c"
    break;

  case 130: /* arr_init: str  */
#line 612 "cmm.y"
              {
	yyval.node = yyvsp[0].node;
}
#line 2652 "y.tab.c"
    break;

  case 131: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 617 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2660 "y.tab.c"
    break;

  case 132: /* arr_elems: arr_initializer  */
#line 620 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2668 "y.tab.c"
    break;

  case 133: /* arr_elems: %empty  */
#line 623 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2676 "y.tab.c"
    break;

  case 134: /* arr_initializer: E  */
#line 628 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2684 "y.tab.c"
    break;

  case 135: /* arr_initializer: arr_init  */
#line 631 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2692 "y.tab.c"
    break;

  case 136: /* arr_index: LSQR E RSQR  */
#line 636 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2701 "y.tab.c"
    break;

  case 137: /* arr_index: arr_index LSQR E RSQR  */
#line 640 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2711 "y.tab.c"
    break;


#line 2715 "y.tab.c"

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

#line 646 "cmm.y"


#include "lex.yy.c"
