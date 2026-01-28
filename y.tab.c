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
    PUTC = 278,                    /* PUTC  */
    GETC = 279,                    /* GETC  */
    SEMI = 280,                    /* SEMI  */
    COLON = 281,                   /* COLON  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    INC = 284,                     /* INC  */
    DEC = 285,                     /* DEC  */
    MULT = 286,                    /* MULT  */
    DIV = 287,                     /* DIV  */
    MOD = 288,                     /* MOD  */
    POW = 289,                     /* POW  */
    ADDR = 290,                    /* ADDR  */
    DEREF = 291,                   /* DEREF  */
    NUMBER = 292,                  /* NUMBER  */
    FLOAT = 293,                   /* FLOAT  */
    IF = 294,                      /* IF  */
    ELSE = 295,                    /* ELSE  */
    WHILE = 296,                   /* WHILE  */
    DO = 297,                      /* DO  */
    FOR = 298,                     /* FOR  */
    BREAK = 299,                   /* BREAK  */
    CONTINUE = 300,                /* CONTINUE  */
    SWITCH = 301,                  /* SWITCH  */
    CASE = 302,                    /* CASE  */
    DEFAULT = 303,                 /* DEFAULT  */
    GOTO = 304,                    /* GOTO  */
    COLEQ = 305,                   /* COLEQ  */
    ASSIGN = 306,                  /* ASSIGN  */
    ADD_ASSIGN = 307,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 308,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 309,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 310,              /* DIV_ASSIGN  */
    POW_ASSIGN = 311,              /* POW_ASSIGN  */
    MOD_ASSIGN = 312,              /* MOD_ASSIGN  */
    AND_ASSIGN = 313,              /* AND_ASSIGN  */
    OR_ASSIGN = 314,               /* OR_ASSIGN  */
    GE = 315,                      /* GE  */
    GT = 316,                      /* GT  */
    LE = 317,                      /* LE  */
    LT = 318,                      /* LT  */
    NE = 319,                      /* NE  */
    EQ = 320,                      /* EQ  */
    AND = 321,                     /* AND  */
    OR = 322,                      /* OR  */
    NOT = 323,                     /* NOT  */
    RETURN = 324                   /* RETURN  */
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
  YYSYMBOL_PUTC = 23,                      /* PUTC  */
  YYSYMBOL_GETC = 24,                      /* GETC  */
  YYSYMBOL_SEMI = 25,                      /* SEMI  */
  YYSYMBOL_COLON = 26,                     /* COLON  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_INC = 29,                       /* INC  */
  YYSYMBOL_DEC = 30,                       /* DEC  */
  YYSYMBOL_MULT = 31,                      /* MULT  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_POW = 34,                       /* POW  */
  YYSYMBOL_ADDR = 35,                      /* ADDR  */
  YYSYMBOL_DEREF = 36,                     /* DEREF  */
  YYSYMBOL_NUMBER = 37,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 38,                     /* FLOAT  */
  YYSYMBOL_IF = 39,                        /* IF  */
  YYSYMBOL_ELSE = 40,                      /* ELSE  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_DO = 42,                        /* DO  */
  YYSYMBOL_FOR = 43,                       /* FOR  */
  YYSYMBOL_BREAK = 44,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 45,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 46,                    /* SWITCH  */
  YYSYMBOL_CASE = 47,                      /* CASE  */
  YYSYMBOL_DEFAULT = 48,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 49,                      /* GOTO  */
  YYSYMBOL_COLEQ = 50,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 51,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 52,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 53,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 54,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 55,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 56,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 57,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 58,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 59,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 60,                        /* GE  */
  YYSYMBOL_GT = 61,                        /* GT  */
  YYSYMBOL_LE = 62,                        /* LE  */
  YYSYMBOL_LT = 63,                        /* LT  */
  YYSYMBOL_NE = 64,                        /* NE  */
  YYSYMBOL_EQ = 65,                        /* EQ  */
  YYSYMBOL_AND = 66,                       /* AND  */
  YYSYMBOL_OR = 67,                        /* OR  */
  YYSYMBOL_NOT = 68,                       /* NOT  */
  YYSYMBOL_RETURN = 69,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_main = 72,                      /* main  */
  YYSYMBOL_fdecls = 73,                    /* fdecls  */
  YYSYMBOL_fdecl = 74,                     /* fdecl  */
  YYSYMBOL_fhead = 75,                     /* fhead  */
  YYSYMBOL_fid = 76,                       /* fid  */
  YYSYMBOL_params = 77,                    /* params  */
  YYSYMBOL_body = 78,                      /* body  */
  YYSYMBOL_stmts = 79,                     /* stmts  */
  YYSYMBOL_decl_var = 80,                  /* decl_var  */
  YYSYMBOL_var_inits = 81,                 /* var_inits  */
  YYSYMBOL_var_init = 82,                  /* var_init  */
  YYSYMBOL_decl_const = 83,                /* decl_const  */
  YYSYMBOL_const_inits = 84,               /* const_inits  */
  YYSYMBOL_const_init = 85,                /* const_init  */
  YYSYMBOL_array_decl = 86,                /* array_decl  */
  YYSYMBOL_array_size = 87,                /* array_size  */
  YYSYMBOL_st = 88,                        /* st  */
  YYSYMBOL_ifstmt = 89,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 90,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 91,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 92,                   /* forstmt  */
  YYSYMBOL_switchstmt = 93,                /* switchstmt  */
  YYSYMBOL_cases = 94,                     /* cases  */
  YYSYMBOL_case_item = 95,                 /* case_item  */
  YYSYMBOL_case_default = 96,              /* case_default  */
  YYSYMBOL_cond = 97,                      /* cond  */
  YYSYMBOL_cond_or = 98,                   /* cond_or  */
  YYSYMBOL_cond_and = 99,                  /* cond_and  */
  YYSYMBOL_cond_not = 100,                 /* cond_not  */
  YYSYMBOL_comp = 101,                     /* comp  */
  YYSYMBOL_compound_assignment = 102,      /* compound_assignment  */
  YYSYMBOL_E = 103,                        /* E  */
  YYSYMBOL_ADD_SUB = 104,                  /* ADD_SUB  */
  YYSYMBOL_T = 105,                        /* T  */
  YYSYMBOL_P = 106,                        /* P  */
  YYSYMBOL_F = 107,                        /* F  */
  YYSYMBOL_str = 108,                      /* str  */
  YYSYMBOL_FUNC_CALL = 109,                /* FUNC_CALL  */
  YYSYMBOL_deref = 110,                    /* deref  */
  YYSYMBOL_fparams = 111,                  /* fparams  */
  YYSYMBOL_ac_params = 112,                /* ac_params  */
  YYSYMBOL_fparam = 113,                   /* fparam  */
  YYSYMBOL_arr_ref = 114,                  /* arr_ref  */
  YYSYMBOL_arr_init = 115,                 /* arr_init  */
  YYSYMBOL_arr_elems = 116,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 117,          /* arr_initializer  */
  YYSYMBOL_arr_index = 118                 /* arr_index  */
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
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    70,    74,    81,    84,    88,    93,   100,
     105,   110,   114,   120,   124,   129,   132,   136,   142,   145,
     150,   154,   160,   164,   170,   173,   177,   183,   190,   196,
     212,   215,   218,   221,   224,   227,   230,   234,   237,   240,
     243,   246,   249,   252,   255,   258,   261,   264,   267,   271,
     275,   280,   283,   286,   290,   294,   298,   302,   307,   310,
     314,   319,   322,   326,   331,   334,   339,   342,   347,   350,
     355,   358,   361,   364,   367,   370,   373,   378,   383,   388,
     393,   398,   403,   408,   413,   421,   425,   428,   431,   434,
     439,   442,   445,   450,   453,   456,   459,   464,   467,   472,
     475,   478,   481,   484,   487,   491,   495,   502,   509,   516,
     523,   526,   529,   532,   535,   538,   542,   546,   551,   556,
     562,   567,   570,   575,   578,   582,   586,   593,   597,   602,
     605,   608,   613,   616,   621,   625
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
  "TIME", "PUTC", "GETC", "SEMI", "COLON", "PLUS", "MINUS", "INC", "DEC",
  "MULT", "DIV", "MOD", "POW", "ADDR", "DEREF", "NUMBER", "FLOAT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "BREAK", "CONTINUE", "SWITCH", "CASE",
  "DEFAULT", "GOTO", "COLEQ", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
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

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,    15,    23,   -84,   -84,     4,   -84,   -84,     4,    19,
     230,   -84,    27,   -84,    43,    75,    76,   -84,    34,   -84,
     -84,   162,   -84,   445,   381,   -84,   -84,   445,   -84,   477,
      77,    91,   477,   477,   477,   -84,   162,   162,     4,    29,
      -3,    89,   445,   108,   413,   -84,   274,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,    92,    30,    38,   -84,
      11,   -84,    65,    67,   -84,    13,    -4,    -2,   -84,   -84,
     -10,     0,   -84,   445,   445,   -84,   -84,   -84,   349,   445,
     445,   445,   445,   445,   445,   445,   445,   102,   295,   162,
     107,    54,    56,   -84,   -84,    48,    74,   101,   -84,   104,
     105,    -1,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       4,     4,    86,   445,   -84,   -84,   116,   114,   -84,   115,
     -84,   -84,   -84,   477,   477,   477,   477,   477,   477,   445,
     349,   -84,   136,   109,   445,   127,    75,   -84,   445,    76,
     -84,   -84,   132,   133,   -84,   130,   -84,   349,   -84,   -84,
     124,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   445,
     445,   -84,   -84,   162,   162,   445,   445,   445,   445,   445,
     445,   445,   -84,   -84,   -84,   110,   -84,   162,   126,   111,
     -84,   -84,    38,    38,   -84,   -84,   -84,   -84,   -84,   -84,
     131,   -84,   134,   -84,   118,   -84,   -84,   -84,   -84,   445,
     -84,   -84,   -84,    21,   -84,   -84,   139,    56,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     9,   141,   162,   445,    14,
     -84,   -84,   -84,   149,   -84,   349,   -84,   -84,   -84,   -84,
     -84,   145,     4,     4,   -84,   155,   -84,   -84,   445,   -84,
     -84,   -84,   163,     4,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     3,     1,     9,     0,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,   112,    99,   104,
     105,     0,    14,     0,     0,   115,   117,     0,   116,     0,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    34,    35,    16,
      38,    39,    40,    41,    42,    88,     0,    89,    92,    96,
      98,   110,   102,   113,    11,     0,    20,     0,    19,    22,
       0,     0,    25,   121,     0,    48,   106,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,    99,     0,
       0,    63,    65,    67,    69,    76,   113,     0,    31,     0,
       0,    99,   100,   102,   113,   107,   109,   103,   101,   120,
       0,     0,     0,     0,    45,    46,     0,     0,    44,     0,
      13,    15,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,    27,     0,    17,     0,     0,
      23,   125,     0,   122,   124,     0,   118,   131,    85,   128,
       0,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    68,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    32,    33,    51,    54,     0,     0,     0,
      49,    43,    90,    91,    93,    94,    95,    97,    87,    86,
       0,    10,     0,    21,     0,    18,    26,    24,   119,     0,
     134,   132,   133,     0,   130,    36,     0,    64,    66,    71,
      70,    73,    72,    74,    75,     0,     0,     0,     0,    62,
      59,    37,    29,     0,   123,     0,   127,   135,    52,    53,
      55,     0,     0,     0,    58,     0,    28,   129,     0,    60,
      61,    57,     0,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   169,   -84,   -84,   -84,   -84,    -5,   -84,
     -84,   -84,    41,   -84,   -84,    39,   -84,   -84,   135,   -36,
     -84,   -84,   -84,   -84,   -84,   -39,   -84,   -35,   -84,    22,
     -83,   -84,   -84,    -6,   -84,   -58,   -31,    20,   -84,   -84,
     -24,   -84,   -84,   -12,    10,   -71,   -84,   -37,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    65,    45,    46,
      47,    67,    68,    48,    71,    72,    69,   135,    49,    50,
      51,    52,    53,    54,   219,   220,   235,    90,    91,    92,
      93,    94,    55,    95,    57,    58,    59,    60,   149,    61,
      62,   142,   143,   144,    96,   202,   203,   204,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,   110,   111,    13,    56,   103,   161,   150,   103,   103,
     103,    73,   136,   133,   139,     3,    74,    97,    99,    10,
      63,   100,   114,   137,    10,   140,   131,   132,    76,    77,
       4,    14,     5,   112,     4,   225,   116,   226,   119,   104,
      56,   113,   104,   104,   104,   128,    73,   134,    36,   102,
      64,    74,   107,   108,   109,   138,    63,   123,   124,   190,
      75,   218,   233,    76,    77,   182,   183,   141,   145,   125,
     126,   127,   148,   151,   152,   153,   154,   155,   156,   157,
     158,   208,    66,    70,   105,    78,    79,    80,    81,    82,
      83,    84,    85,    86,   184,   185,   186,   187,   106,   103,
     103,   103,   103,   103,   103,   175,   176,   178,   165,   166,
     167,   168,   169,   170,   115,   117,   129,   122,   130,   159,
     162,   163,   164,   188,   189,   171,   172,   177,   193,   173,
     174,   179,   196,   104,   104,   104,   104,   104,   104,   180,
     181,   201,   216,   191,   194,   198,   192,   199,   200,   205,
     215,   217,   222,   206,   148,   223,   221,   227,   218,   209,
     210,   211,   212,   213,   214,   189,   230,   236,    17,    88,
     238,   241,    19,    20,    21,    12,   243,   195,   197,   229,
     234,   121,   231,    25,    26,   207,    28,   224,   237,     0,
      29,    30,    31,   141,     0,     0,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     228,     0,   232,     0,     0,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,   239,   240,     0,
      89,     0,   242,    15,    16,     0,    17,    18,   244,     0,
      19,    20,    21,     0,     0,    10,    22,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,     0,    36,
       0,    37,    38,    39,    40,    41,    42,    15,    16,    43,
      17,    18,     0,     0,    19,    20,    21,     0,     0,    10,
     120,     0,     0,    23,    24,    25,    26,    27,    28,    44,
       0,     0,    29,    30,    31,     0,     0,    73,    32,    33,
      34,    35,    74,    36,     0,    37,    38,    39,    40,    41,
      42,     0,     0,    43,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,   160,    79,    80,    81,
      82,    83,    84,    85,    86,    17,    88,   146,     0,    19,
      20,    21,     0,     0,   147,     0,     0,     0,     0,     0,
      25,    26,     0,    28,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    17,    88,     0,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,    28,    98,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    17,
      88,     0,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,    28,   118,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    17,    88,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,    28,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    17,   101,     0,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,    28,     0,     0,     0,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
       5,    36,    37,     8,    10,    29,    89,    78,    32,    33,
      34,    12,    14,    17,    14,     0,    17,    23,    24,    15,
      10,    27,    25,    25,    15,    25,    13,    14,    29,    30,
       7,    12,     9,    38,     7,    14,    42,    16,    44,    29,
      46,    12,    32,    33,    34,    34,    12,    51,    39,    29,
       7,    17,    32,    33,    34,    65,    46,    27,    28,   130,
      26,    47,    48,    29,    30,   123,   124,    73,    74,    31,
      32,    33,    78,    79,    80,    81,    82,    83,    84,    85,
      86,   164,     7,     7,     7,    51,    52,    53,    54,    55,
      56,    57,    58,    59,   125,   126,   127,   128,     7,   123,
     124,   125,   126,   127,   128,   110,   111,   113,    60,    61,
      62,    63,    64,    65,    25,     7,    51,    25,    51,    17,
      13,    67,    66,   129,   130,    51,    25,    41,   134,    25,
      25,    15,   138,   123,   124,   125,   126,   127,   128,    25,
      25,   147,   177,     7,    17,    13,    37,    14,    18,    25,
      40,    25,    18,   159,   160,    37,    25,    18,    47,   165,
     166,   167,   168,   169,   170,   171,    25,    18,     6,     7,
      25,    16,    10,    11,    12,     6,    13,   136,   139,   215,
     219,    46,   217,    21,    22,   163,    24,   199,   225,    -1,
      28,    29,    30,   199,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   233,    -1,
      68,    -1,   238,     3,     4,    -1,     6,     7,   243,    -1,
      10,    11,    12,    -1,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,     3,     4,    49,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    69,
      -1,    -1,    28,    29,    30,    -1,    -1,    12,    34,    35,
      36,    37,    17,    39,    -1,    41,    42,    43,    44,    45,
      46,    -1,    -1,    49,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     6,     7,     8,    -1,    10,
      11,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    29,    30,
      -1,    -1,    -1,    34,    35,    36,    37,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,     6,
       7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    -1,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    34,    35,    36,
      37,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    36,    37,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    71,    73,     0,     7,     9,    72,    74,    75,    76,
      15,    78,    73,    78,    12,     3,     4,     6,     7,    10,
      11,    12,    16,    19,    20,    21,    22,    23,    24,    28,
      29,    30,    34,    35,    36,    37,    39,    41,    42,    43,
      44,    45,    46,    49,    69,    78,    79,    80,    83,    88,
      89,    90,    91,    92,    93,   102,   103,   104,   105,   106,
     107,   109,   110,   114,     7,    77,     7,    81,    82,    86,
       7,    84,    85,    12,    17,    26,    29,    30,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   118,     7,    68,
      97,    98,    99,   100,   101,   103,   114,   103,    25,   103,
     103,     7,   107,   110,   114,     7,     7,   107,   107,   107,
      97,    97,    78,    12,    25,    25,   103,     7,    25,   103,
      16,    88,    25,    27,    28,    31,    32,    33,    34,    51,
      51,    13,    14,    17,    51,    87,    14,    25,    65,    14,
      25,   103,   111,   112,   113,   103,     8,    15,   103,   108,
     115,   103,   103,   103,   103,   103,   103,   103,   103,    17,
      51,   100,    13,    67,    66,    60,    61,    62,    63,    64,
      65,    51,    25,    25,    25,    78,    78,    41,   103,    15,
      25,    25,   105,   105,   106,   106,   106,   106,   103,   103,
     115,     7,    37,   103,    17,    82,   103,    85,    13,    14,
      18,   103,   115,   116,   117,    25,   103,    99,   100,   103,
     103,   103,   103,   103,   103,    40,    97,    25,    47,    94,
      95,    25,    18,    37,   113,    14,    16,    18,    78,    89,
      25,    97,   103,    48,    95,    96,    18,   117,    25,    78,
      78,    16,   103,    13,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    71,    72,    73,    73,    74,    75,    76,
      77,    77,    77,    78,    78,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    84,    84,    85,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    89,    90,    91,    92,    93,    94,    94,
      95,    96,    96,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   109,
     110,   111,   111,   112,   112,   113,   114,   115,   115,   116,
     116,   116,   117,   117,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     4,     3,
       3,     2,     3,     3,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     3,     2,     2,     2,     1,     2,     3,
       2,     3,     5,     5,     3,     5,     9,     6,     2,     1,
       3,     2,     0,     1,     3,     1,     3,     1,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     1,     1,
       2,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     4,
       2,     0,     1,     3,     1,     1,     2,     3,     1,     3,
       1,     0,     1,     1,     3,     4
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
#line 66 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1542 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 70 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1550 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 74 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->fbody = yyvsp[0].node;
}
#line 1560 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 81 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1568 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 84 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1576 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 88 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1585 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 93 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1596 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 100 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1604 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 105 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1614 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 110 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1623 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 114 "cmm.y"
          { /* epsilon */
	yyval.node = new_node(NK_NOTHING);
	yyval.node->ival = 0;
}
#line 1632 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 120 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1641 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 124 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1649 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 129 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1657 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 132 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1665 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 136 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1674 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 142 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1682 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 145 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1690 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 150 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1699 "y.tab.c"
    break;

  case 21: /* var_init: ID ASSIGN E  */
#line 154 "cmm.y"
                      {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
	yyval.node = var;
}
#line 1710 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 160 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1718 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 164 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1727 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 170 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1735 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 173 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1743 "y.tab.c"
    break;

  case 26: /* const_init: ID EQ E  */
#line 177 "cmm.y"
                     {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1753 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 183 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1763 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 190 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1774 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 196 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1784 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 212 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1792 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 215 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1800 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 218 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1808 "y.tab.c"
    break;

  case 33: /* st: PUTC E SEMI  */
#line 221 "cmm.y"
                      {
	yyval.node = new_unary_node(NK_PUTC, yyvsp[-1].node);
}
#line 1816 "y.tab.c"
    break;

  case 34: /* st: decl_var  */
#line 224 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1824 "y.tab.c"
    break;

  case 35: /* st: decl_const  */
#line 227 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1832 "y.tab.c"
    break;

  case 36: /* st: ID ASSIGN arr_init SEMI  */
#line 230 "cmm.y"
                                  {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1841 "y.tab.c"
    break;

  case 37: /* st: arr_ref ASSIGN arr_init SEMI  */
#line 234 "cmm.y"
                                       {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1849 "y.tab.c"
    break;

  case 38: /* st: ifstmt  */
#line 237 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1857 "y.tab.c"
    break;

  case 39: /* st: whilestmt  */
#line 240 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1865 "y.tab.c"
    break;

  case 40: /* st: dowhilestmt  */
#line 243 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1873 "y.tab.c"
    break;

  case 41: /* st: forstmt  */
#line 246 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1881 "y.tab.c"
    break;

  case 42: /* st: switchstmt  */
#line 249 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1889 "y.tab.c"
    break;

  case 43: /* st: RETURN E SEMI  */
#line 252 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1897 "y.tab.c"
    break;

  case 44: /* st: RETURN SEMI  */
#line 255 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1905 "y.tab.c"
    break;

  case 45: /* st: BREAK SEMI  */
#line 258 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1913 "y.tab.c"
    break;

  case 46: /* st: CONTINUE SEMI  */
#line 261 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1921 "y.tab.c"
    break;

  case 47: /* st: body  */
#line 264 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1929 "y.tab.c"
    break;

  case 48: /* st: ID COLON  */
#line 267 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1938 "y.tab.c"
    break;

  case 49: /* st: GOTO ID SEMI  */
#line 271 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1947 "y.tab.c"
    break;

  case 50: /* st: E SEMI  */
#line 275 "cmm.y"
                 {
	yyval.node = yyvsp[-1].node;
}
#line 1955 "y.tab.c"
    break;

  case 51: /* ifstmt: IF cond body  */
#line 280 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1963 "y.tab.c"
    break;

  case 52: /* ifstmt: IF cond body ELSE body  */
#line 283 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1971 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body ELSE ifstmt  */
#line 286 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1979 "y.tab.c"
    break;

  case 54: /* whilestmt: WHILE cond body  */
#line 290 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1987 "y.tab.c"
    break;

  case 55: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 294 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1995 "y.tab.c"
    break;

  case 56: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 298 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 2003 "y.tab.c"
    break;

  case 57: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 302 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 2011 "y.tab.c"
    break;

  case 58: /* cases: cases case_item  */
#line 307 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2019 "y.tab.c"
    break;

  case 59: /* cases: case_item  */
#line 310 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2027 "y.tab.c"
    break;

  case 60: /* case_item: CASE E body  */
#line 314 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2035 "y.tab.c"
    break;

  case 61: /* case_default: DEFAULT body  */
#line 319 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 2043 "y.tab.c"
    break;

  case 62: /* case_default: %empty  */
#line 322 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2051 "y.tab.c"
    break;

  case 63: /* cond: cond_or  */
#line 326 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2059 "y.tab.c"
    break;

  case 64: /* cond_or: cond_or OR cond_and  */
#line 331 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2067 "y.tab.c"
    break;

  case 65: /* cond_or: cond_and  */
#line 334 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2075 "y.tab.c"
    break;

  case 66: /* cond_and: cond_and AND cond_not  */
#line 339 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2083 "y.tab.c"
    break;

  case 67: /* cond_and: cond_not  */
#line 342 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2091 "y.tab.c"
    break;

  case 68: /* cond_not: NOT cond_not  */
#line 347 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2099 "y.tab.c"
    break;

  case 69: /* cond_not: comp  */
#line 350 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2107 "y.tab.c"
    break;

  case 70: /* comp: E GT E  */
#line 355 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2115 "y.tab.c"
    break;

  case 71: /* comp: E GE E  */
#line 358 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2123 "y.tab.c"
    break;

  case 72: /* comp: E LT E  */
#line 361 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2131 "y.tab.c"
    break;

  case 73: /* comp: E LE E  */
#line 364 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2139 "y.tab.c"
    break;

  case 74: /* comp: E NE E  */
#line 367 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2147 "y.tab.c"
    break;

  case 75: /* comp: E EQ E  */
#line 370 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2155 "y.tab.c"
    break;

  case 76: /* comp: E  */
#line 373 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2163 "y.tab.c"
    break;

  case 77: /* compound_assignment: ID ADD_ASSIGN E  */
#line 378 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2173 "y.tab.c"
    break;

  case 78: /* compound_assignment: ID SUB_ASSIGN E  */
#line 383 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2183 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID MUL_ASSIGN E  */
#line 388 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2193 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID DIV_ASSIGN E  */
#line 393 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2203 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID POW_ASSIGN E  */
#line 398 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2213 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID MOD_ASSIGN E  */
#line 403 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2223 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID AND_ASSIGN E  */
#line 408 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2233 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID OR_ASSIGN E  */
#line 413 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2243 "y.tab.c"
    break;

  case 85: /* E: ID ASSIGN E  */
#line 421 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2252 "y.tab.c"
    break;

  case 86: /* E: arr_ref ASSIGN E  */
#line 425 "cmm.y"
                           {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2260 "y.tab.c"
    break;

  case 87: /* E: deref ASSIGN E  */
#line 428 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2268 "y.tab.c"
    break;

  case 88: /* E: compound_assignment  */
#line 431 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2276 "y.tab.c"
    break;

  case 89: /* E: ADD_SUB  */
#line 434 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2284 "y.tab.c"
    break;

  case 90: /* ADD_SUB: ADD_SUB PLUS T  */
#line 439 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2292 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB MINUS T  */
#line 442 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2300 "y.tab.c"
    break;

  case 92: /* ADD_SUB: T  */
#line 445 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2308 "y.tab.c"
    break;

  case 93: /* T: T MULT P  */
#line 450 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2316 "y.tab.c"
    break;

  case 94: /* T: T DIV P  */
#line 453 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2324 "y.tab.c"
    break;

  case 95: /* T: T MOD P  */
#line 456 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2332 "y.tab.c"
    break;

  case 96: /* T: P  */
#line 459 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2340 "y.tab.c"
    break;

  case 97: /* P: F POW P  */
#line 464 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2348 "y.tab.c"
    break;

  case 98: /* P: F  */
#line 467 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2356 "y.tab.c"
    break;

  case 99: /* F: ID  */
#line 472 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2364 "y.tab.c"
    break;

  case 100: /* F: MINUS F  */
#line 475 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2372 "y.tab.c"
    break;

  case 101: /* F: ADDR F  */
#line 478 "cmm.y"
                 {
	yyval.node = new_unary_node(NK_ADDR, yyvsp[0].node);
}
#line 2380 "y.tab.c"
    break;

  case 102: /* F: deref  */
#line 481 "cmm.y"
                {
	yyval.node = yyvsp[0].node;
}
#line 2388 "y.tab.c"
    break;

  case 103: /* F: POW F  */
#line 484 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2396 "y.tab.c"
    break;

  case 104: /* F: LIT_TRUE  */
#line 487 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2405 "y.tab.c"
    break;

  case 105: /* F: LIT_FALSE  */
#line 491 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2414 "y.tab.c"
    break;

  case 106: /* F: ID INC  */
#line 495 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2426 "y.tab.c"
    break;

  case 107: /* F: INC ID  */
#line 502 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2438 "y.tab.c"
    break;

  case 108: /* F: ID DEC  */
#line 509 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2450 "y.tab.c"
    break;

  case 109: /* F: DEC ID  */
#line 516 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2462 "y.tab.c"
    break;

  case 110: /* F: FUNC_CALL  */
#line 523 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2470 "y.tab.c"
    break;

  case 111: /* F: NUMBER  */
#line 526 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2478 "y.tab.c"
    break;

  case 112: /* F: CHAR  */
#line 529 "cmm.y"
               {
	yyval.node = new_char_node(yyvsp[0].name);
}
#line 2486 "y.tab.c"
    break;

  case 113: /* F: arr_ref  */
#line 532 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2494 "y.tab.c"
    break;

  case 114: /* F: LPAR cond RPAR  */
#line 535 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2502 "y.tab.c"
    break;

  case 115: /* F: READ  */
#line 538 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 0;
}
#line 2511 "y.tab.c"
    break;

  case 116: /* F: GETC  */
#line 542 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 11;
}
#line 2520 "y.tab.c"
    break;

  case 117: /* F: TIME  */
#line 546 "cmm.y"
               {
	yyval.node = new_node(NK_CSP);
	yyval.node->ival = 20;
}
#line 2529 "y.tab.c"
    break;

  case 118: /* str: STR  */
#line 551 "cmm.y"
          {
	yyval.node = new_node(NK_STR);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 2538 "y.tab.c"
    break;

  case 119: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 556 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2548 "y.tab.c"
    break;

  case 120: /* deref: DEREF F  */
#line 562 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2556 "y.tab.c"
    break;

  case 121: /* fparams: %empty  */
#line 567 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2564 "y.tab.c"
    break;

  case 122: /* fparams: ac_params  */
#line 570 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2572 "y.tab.c"
    break;

  case 123: /* ac_params: ac_params COMMA fparam  */
#line 575 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2580 "y.tab.c"
    break;

  case 124: /* ac_params: fparam  */
#line 578 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2588 "y.tab.c"
    break;

  case 125: /* fparam: E  */
#line 582 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2596 "y.tab.c"
    break;

  case 126: /* arr_ref: ID arr_index  */
#line 586 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2606 "y.tab.c"
    break;

  case 127: /* arr_init: LBRA arr_elems RBRA  */
#line 593 "cmm.y"
                             {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2615 "y.tab.c"
    break;

  case 128: /* arr_init: str  */
#line 597 "cmm.y"
              {
	yyval.node = yyvsp[0].node;
}
#line 2623 "y.tab.c"
    break;

  case 129: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 602 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2631 "y.tab.c"
    break;

  case 130: /* arr_elems: arr_initializer  */
#line 605 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2639 "y.tab.c"
    break;

  case 131: /* arr_elems: %empty  */
#line 608 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2647 "y.tab.c"
    break;

  case 132: /* arr_initializer: E  */
#line 613 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2655 "y.tab.c"
    break;

  case 133: /* arr_initializer: arr_init  */
#line 616 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2663 "y.tab.c"
    break;

  case 134: /* arr_index: LSQR E RSQR  */
#line 621 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2672 "y.tab.c"
    break;

  case 135: /* arr_index: arr_index LSQR E RSQR  */
#line 625 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2682 "y.tab.c"
    break;


#line 2686 "y.tab.c"

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

#line 631 "cmm.y"


#include "lex.yy.c"
