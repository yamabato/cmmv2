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
    PUTC = 277,                    /* PUTC  */
    GETC = 278,                    /* GETC  */
    SEMI = 279,                    /* SEMI  */
    COLON = 280,                   /* COLON  */
    PLUS = 281,                    /* PLUS  */
    MINUS = 282,                   /* MINUS  */
    INC = 283,                     /* INC  */
    DEC = 284,                     /* DEC  */
    MULT = 285,                    /* MULT  */
    DIV = 286,                     /* DIV  */
    MOD = 287,                     /* MOD  */
    POW = 288,                     /* POW  */
    ADDR = 289,                    /* ADDR  */
    DEREF = 290,                   /* DEREF  */
    NUMBER = 291,                  /* NUMBER  */
    FLOAT = 292,                   /* FLOAT  */
    IF = 293,                      /* IF  */
    ELSE = 294,                    /* ELSE  */
    WHILE = 295,                   /* WHILE  */
    DO = 296,                      /* DO  */
    FOR = 297,                     /* FOR  */
    BREAK = 298,                   /* BREAK  */
    CONTINUE = 299,                /* CONTINUE  */
    SWITCH = 300,                  /* SWITCH  */
    CASE = 301,                    /* CASE  */
    DEFAULT = 302,                 /* DEFAULT  */
    GOTO = 303,                    /* GOTO  */
    COLEQ = 304,                   /* COLEQ  */
    ASSIGN = 305,                  /* ASSIGN  */
    ADD_ASSIGN = 306,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 307,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 308,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 309,              /* DIV_ASSIGN  */
    POW_ASSIGN = 310,              /* POW_ASSIGN  */
    MOD_ASSIGN = 311,              /* MOD_ASSIGN  */
    AND_ASSIGN = 312,              /* AND_ASSIGN  */
    OR_ASSIGN = 313,               /* OR_ASSIGN  */
    GE = 314,                      /* GE  */
    GT = 315,                      /* GT  */
    LE = 316,                      /* LE  */
    LT = 317,                      /* LT  */
    NE = 318,                      /* NE  */
    EQ = 319,                      /* EQ  */
    AND = 320,                     /* AND  */
    OR = 321,                      /* OR  */
    NOT = 322,                     /* NOT  */
    RETURN = 323                   /* RETURN  */
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
  YYSYMBOL_PUTC = 22,                      /* PUTC  */
  YYSYMBOL_GETC = 23,                      /* GETC  */
  YYSYMBOL_SEMI = 24,                      /* SEMI  */
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_INC = 28,                       /* INC  */
  YYSYMBOL_DEC = 29,                       /* DEC  */
  YYSYMBOL_MULT = 30,                      /* MULT  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_MOD = 32,                       /* MOD  */
  YYSYMBOL_POW = 33,                       /* POW  */
  YYSYMBOL_ADDR = 34,                      /* ADDR  */
  YYSYMBOL_DEREF = 35,                     /* DEREF  */
  YYSYMBOL_NUMBER = 36,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 37,                     /* FLOAT  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_WHILE = 40,                     /* WHILE  */
  YYSYMBOL_DO = 41,                        /* DO  */
  YYSYMBOL_FOR = 42,                       /* FOR  */
  YYSYMBOL_BREAK = 43,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 45,                    /* SWITCH  */
  YYSYMBOL_CASE = 46,                      /* CASE  */
  YYSYMBOL_DEFAULT = 47,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 48,                      /* GOTO  */
  YYSYMBOL_COLEQ = 49,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 50,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 51,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 52,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 53,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 54,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 55,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 56,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 57,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 58,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 59,                        /* GE  */
  YYSYMBOL_GT = 60,                        /* GT  */
  YYSYMBOL_LE = 61,                        /* LE  */
  YYSYMBOL_LT = 62,                        /* LT  */
  YYSYMBOL_NE = 63,                        /* NE  */
  YYSYMBOL_EQ = 64,                        /* EQ  */
  YYSYMBOL_AND = 65,                       /* AND  */
  YYSYMBOL_OR = 66,                        /* OR  */
  YYSYMBOL_NOT = 67,                       /* NOT  */
  YYSYMBOL_RETURN = 68,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_program = 70,                   /* program  */
  YYSYMBOL_main = 71,                      /* main  */
  YYSYMBOL_fdecls = 72,                    /* fdecls  */
  YYSYMBOL_fdecl = 73,                     /* fdecl  */
  YYSYMBOL_fhead = 74,                     /* fhead  */
  YYSYMBOL_fid = 75,                       /* fid  */
  YYSYMBOL_params = 76,                    /* params  */
  YYSYMBOL_body = 77,                      /* body  */
  YYSYMBOL_stmts = 78,                     /* stmts  */
  YYSYMBOL_decl_var = 79,                  /* decl_var  */
  YYSYMBOL_var_inits = 80,                 /* var_inits  */
  YYSYMBOL_var_init = 81,                  /* var_init  */
  YYSYMBOL_decl_const = 82,                /* decl_const  */
  YYSYMBOL_const_inits = 83,               /* const_inits  */
  YYSYMBOL_const_init = 84,                /* const_init  */
  YYSYMBOL_array_decl = 85,                /* array_decl  */
  YYSYMBOL_array_size = 86,                /* array_size  */
  YYSYMBOL_st = 87,                        /* st  */
  YYSYMBOL_ifstmt = 88,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 89,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 90,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 91,                   /* forstmt  */
  YYSYMBOL_switchstmt = 92,                /* switchstmt  */
  YYSYMBOL_cases = 93,                     /* cases  */
  YYSYMBOL_case_item = 94,                 /* case_item  */
  YYSYMBOL_case_default = 95,              /* case_default  */
  YYSYMBOL_cond = 96,                      /* cond  */
  YYSYMBOL_cond_or = 97,                   /* cond_or  */
  YYSYMBOL_cond_and = 98,                  /* cond_and  */
  YYSYMBOL_cond_not = 99,                  /* cond_not  */
  YYSYMBOL_comp = 100,                     /* comp  */
  YYSYMBOL_compound_assignment = 101,      /* compound_assignment  */
  YYSYMBOL_E = 102,                        /* E  */
  YYSYMBOL_ADD_SUB = 103,                  /* ADD_SUB  */
  YYSYMBOL_T = 104,                        /* T  */
  YYSYMBOL_P = 105,                        /* P  */
  YYSYMBOL_F = 106,                        /* F  */
  YYSYMBOL_str = 107,                      /* str  */
  YYSYMBOL_FUNC_CALL = 108,                /* FUNC_CALL  */
  YYSYMBOL_deref = 109,                    /* deref  */
  YYSYMBOL_fparams = 110,                  /* fparams  */
  YYSYMBOL_ac_params = 111,                /* ac_params  */
  YYSYMBOL_fparam = 112,                   /* fparam  */
  YYSYMBOL_arr_ref = 113,                  /* arr_ref  */
  YYSYMBOL_arr_init = 114,                 /* arr_init  */
  YYSYMBOL_arr_elems = 115,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 116,          /* arr_initializer  */
  YYSYMBOL_arr_index = 117                 /* arr_index  */
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
#define YYLAST   463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    69,    73,    80,    83,    87,    92,    99,
     104,   109,   113,   119,   123,   128,   131,   135,   141,   144,
     149,   153,   159,   163,   169,   172,   176,   182,   189,   195,
     211,   214,   217,   220,   223,   226,   229,   233,   236,   239,
     242,   245,   248,   251,   254,   257,   260,   263,   266,   270,
     274,   279,   282,   285,   289,   293,   297,   301,   306,   309,
     313,   318,   321,   325,   330,   333,   338,   341,   346,   349,
     354,   357,   360,   363,   366,   369,   372,   377,   382,   387,
     392,   397,   402,   407,   412,   420,   424,   427,   430,   433,
     438,   441,   444,   449,   452,   455,   458,   463,   466,   471,
     474,   477,   480,   483,   486,   490,   494,   501,   508,   515,
     522,   525,   528,   531,   534,   537,   540,   544,   549,   555,
     560,   563,   568,   571,   575,   579,   586,   590,   595,   598,
     601,   606,   609,   614,   618
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
  "PUTC", "GETC", "SEMI", "COLON", "PLUS", "MINUS", "INC", "DEC", "MULT",
  "DIV", "MOD", "POW", "ADDR", "DEREF", "NUMBER", "FLOAT", "IF", "ELSE",
  "WHILE", "DO", "FOR", "BREAK", "CONTINUE", "SWITCH", "CASE", "DEFAULT",
  "GOTO", "COLEQ", "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "POW_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN",
  "GE", "GT", "LE", "LT", "NE", "EQ", "AND", "OR", "NOT", "RETURN",
  "$accept", "program", "main", "fdecls", "fdecl", "fhead", "fid",
  "params", "body", "stmts", "decl_var", "var_inits", "var_init",
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
     -84,    33,    20,   -84,   -84,    -3,   -84,   -84,    -3,    24,
     213,   -84,    45,   -84,    49,    57,    74,   -84,    34,   -84,
     -84,   299,   -84,   396,   334,   -84,   396,   -84,   427,    86,
      93,   427,   427,   427,   -84,   299,   299,    -3,    89,    78,
      79,   396,   100,   365,   -84,   256,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,    84,   -11,   -22,   -84,    76,
     -84,    60,    61,   -84,    28,   -10,    -1,   -84,   -84,    48,
      14,   -84,   396,   396,   -84,   -84,   -84,   179,   396,   396,
     396,   396,   396,   396,   396,   396,    96,   116,   299,   101,
      55,    59,   -84,   -84,    35,    75,   102,   -84,   105,   106,
       2,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,    -3,
      -3,    92,   396,   -84,   -84,   126,   119,   -84,   122,   -84,
     -84,   -84,   427,   427,   427,   427,   427,   427,   396,   179,
     -84,   140,   112,   396,   132,    57,   -84,   396,    74,   -84,
     -84,   137,   141,   -84,   133,   -84,   179,   -84,   -84,   130,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   396,   396,
     -84,   -84,   299,   299,   396,   396,   396,   396,   396,   396,
     396,   -84,   -84,   -84,   117,   -84,   299,   151,   111,   -84,
     -84,   -22,   -22,   -84,   -84,   -84,   -84,   -84,   -84,   152,
     -84,   147,   -84,   142,   -84,   -84,   -84,   -84,   396,   -84,
     -84,   -84,    39,   -84,   -84,   159,    59,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,    -4,   155,   299,   396,    36,   -84,
     -84,   -84,   162,   -84,   179,   -84,   -84,   -84,   -84,   -84,
     157,    -3,    -3,   -84,   167,   -84,   -84,   396,   -84,   -84,
     -84,   171,    -3,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     3,     1,     9,     0,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,   112,    99,   104,
     105,     0,    14,     0,     0,   115,     0,   116,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    34,    35,    16,    38,
      39,    40,    41,    42,    88,     0,    89,    92,    96,    98,
     110,   102,   113,    11,     0,    20,     0,    19,    22,     0,
       0,    25,   120,     0,    48,   106,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,    99,     0,     0,
      63,    65,    67,    69,    76,   113,     0,    31,     0,     0,
      99,   100,   102,   113,   107,   109,   103,   101,   119,     0,
       0,     0,     0,    45,    46,     0,     0,    44,     0,    13,
      15,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,    27,     0,    17,     0,     0,    23,
     124,     0,   121,   123,     0,   117,   130,    85,   127,     0,
      77,    78,    79,    80,    81,    82,    83,    84,     0,     0,
      68,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    32,    33,    51,    54,     0,     0,     0,    49,
      43,    90,    91,    93,    94,    95,    97,    87,    86,     0,
      10,     0,    21,     0,    18,    26,    24,   118,     0,   133,
     131,   132,     0,   129,    36,     0,    64,    66,    71,    70,
      73,    72,    74,    75,     0,     0,     0,     0,    62,    59,
      37,    29,     0,   122,     0,   126,   134,    52,    53,    55,
       0,     0,     0,    58,     0,    28,   128,     0,    60,    61,
      57,     0,     0,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   182,   -84,   -84,   -84,   -84,    -5,   -84,
     -84,   -84,    58,   -84,   -84,    63,   -84,   -84,   150,   -18,
     -84,   -84,   -84,   -84,   -84,   -21,   -84,   -34,   -84,    41,
     -83,   -84,   -84,    -6,   -84,   -62,   -77,    37,   -84,   -84,
      -7,   -84,   -84,     0,    12,   -71,   -84,   -25,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    64,    44,    45,
      46,    66,    67,    47,    70,    71,    68,   134,    48,    49,
      50,    51,    52,    53,   218,   219,   234,    89,    90,    91,
      92,    93,    54,    94,    56,    57,    58,    59,   148,    60,
      61,   141,   142,   143,    95,   201,   202,   203,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,   109,   110,    13,    55,   160,   149,   132,   124,   125,
     126,    10,    10,   135,    72,   122,   123,    96,    98,    73,
      99,   102,    62,   136,   102,   102,   102,     4,   138,     5,
      75,    76,   111,     3,    35,   115,    14,   118,   139,    55,
     103,   130,   131,   103,   103,   103,    72,   183,   184,   185,
     186,    73,     4,   224,   133,   225,    63,    62,   189,    74,
     181,   182,    75,    76,    65,   101,   140,   144,   106,   107,
     108,   147,   150,   151,   152,   153,   154,   155,   156,   157,
     207,    69,   217,   232,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   104,   164,   165,   166,   167,   168,   169,
     105,   112,   113,   114,   174,   175,   177,   116,   121,   127,
     128,   129,   137,   158,   161,   102,   102,   102,   102,   102,
     102,   162,   187,   188,   163,   170,   171,   192,    72,   172,
     173,   195,   176,    73,   103,   103,   103,   103,   103,   103,
     200,   178,   215,   179,    75,    76,   180,   190,   191,   193,
     197,   199,   205,   147,   204,   198,   214,   217,   208,   209,
     210,   211,   212,   213,   188,   221,   159,    78,    79,    80,
      81,    82,    83,    84,    85,   216,   220,   226,   222,   229,
     235,   237,   230,   240,   242,    17,    87,   145,    12,    19,
      20,    21,   140,   194,   146,   120,   228,   233,   223,   236,
      25,   196,    27,   206,     0,     0,    28,    29,    30,   227,
       0,   231,    31,    32,    33,    34,    15,    16,   200,    17,
      18,     0,     0,    19,    20,    21,   238,   239,    10,    22,
       0,   241,    23,    24,    25,    26,    27,   243,     0,     0,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
       0,    35,     0,    36,    37,    38,    39,    40,    41,    15,
      16,    42,    17,    18,     0,     0,    19,    20,    21,     0,
       0,    10,   119,     0,     0,    23,    24,    25,    26,    27,
       0,    43,     0,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,     0,    35,     0,    36,    37,    38,    39,
      40,    41,     0,     0,    42,    17,    87,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    27,     0,    43,     0,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,     0,     0,     0,     0,
      17,    87,     0,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    27,    97,     0,
       0,    28,    29,    30,     0,     0,    88,    31,    32,    33,
      34,    17,    87,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,    27,   117,
       0,     0,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    17,    87,     0,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    27,
       0,     0,     0,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    17,   100,     0,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      27,     0,     0,     0,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34
};

static const yytype_int16 yycheck[] =
{
       5,    35,    36,     8,    10,    88,    77,    17,    30,    31,
      32,    15,    15,    14,    12,    26,    27,    23,    24,    17,
      26,    28,    10,    24,    31,    32,    33,     7,    14,     9,
      28,    29,    37,     0,    38,    41,    12,    43,    24,    45,
      28,    13,    14,    31,    32,    33,    12,   124,   125,   126,
     127,    17,     7,    14,    64,    16,     7,    45,   129,    25,
     122,   123,    28,    29,     7,    28,    72,    73,    31,    32,
      33,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     163,     7,    46,    47,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     7,    59,    60,    61,    62,    63,    64,
       7,    12,    24,    24,   109,   110,   112,     7,    24,    33,
      50,    50,    64,    17,    13,   122,   123,   124,   125,   126,
     127,    66,   128,   129,    65,    50,    24,   133,    12,    24,
      24,   137,    40,    17,   122,   123,   124,   125,   126,   127,
     146,    15,   176,    24,    28,    29,    24,     7,    36,    17,
      13,    18,   158,   159,    24,    14,    39,    46,   164,   165,
     166,   167,   168,   169,   170,    18,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    24,    24,    18,    36,    24,
      18,    24,   216,    16,    13,     6,     7,     8,     6,    10,
      11,    12,   198,   135,    15,    45,   214,   218,   198,   224,
      21,   138,    23,   162,    -1,    -1,    27,    28,    29,   214,
      -1,   217,    33,    34,    35,    36,     3,     4,   224,     6,
       7,    -1,    -1,    10,    11,    12,   231,   232,    15,    16,
      -1,   237,    19,    20,    21,    22,    23,   242,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,     3,
       4,    48,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    68,    -1,    27,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    23,    -1,    68,    -1,    27,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    29,    -1,    -1,    67,    33,    34,    35,
      36,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    24,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    36,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      23,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    70,    72,     0,     7,     9,    71,    73,    74,    75,
      15,    77,    72,    77,    12,     3,     4,     6,     7,    10,
      11,    12,    16,    19,    20,    21,    22,    23,    27,    28,
      29,    33,    34,    35,    36,    38,    40,    41,    42,    43,
      44,    45,    48,    68,    77,    78,    79,    82,    87,    88,
      89,    90,    91,    92,   101,   102,   103,   104,   105,   106,
     108,   109,   113,     7,    76,     7,    80,    81,    85,     7,
      83,    84,    12,    17,    25,    28,    29,    50,    51,    52,
      53,    54,    55,    56,    57,    58,   117,     7,    67,    96,
      97,    98,    99,   100,   102,   113,   102,    24,   102,   102,
       7,   106,   109,   113,     7,     7,   106,   106,   106,    96,
      96,    77,    12,    24,    24,   102,     7,    24,   102,    16,
      87,    24,    26,    27,    30,    31,    32,    33,    50,    50,
      13,    14,    17,    64,    86,    14,    24,    64,    14,    24,
     102,   110,   111,   112,   102,     8,    15,   102,   107,   114,
     102,   102,   102,   102,   102,   102,   102,   102,    17,    50,
      99,    13,    66,    65,    59,    60,    61,    62,    63,    64,
      50,    24,    24,    24,    77,    77,    40,   102,    15,    24,
      24,   104,   104,   105,   105,   105,   105,   102,   102,   114,
       7,    36,   102,    17,    81,   102,    84,    13,    14,    18,
     102,   114,   115,   116,    24,   102,    98,    99,   102,   102,
     102,   102,   102,   102,    39,    96,    24,    46,    93,    94,
      24,    18,    36,   112,    14,    16,    18,    77,    88,    24,
      96,   102,    47,    94,    95,    18,   116,    24,    77,    77,
      16,   102,    13,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    70,    71,    72,    72,    73,    74,    75,
      76,    76,    76,    77,    77,    78,    78,    79,    80,    80,
      81,    81,    81,    82,    83,    83,    84,    85,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    88,    89,    90,    91,    92,    93,    93,
      94,    95,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   108,   109,
     110,   110,   111,   111,   112,   113,   114,   114,   115,   115,
     115,   116,   116,   117,   117
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
       1,     1,     1,     1,     3,     1,     1,     1,     4,     2,
       0,     1,     3,     1,     1,     2,     3,     1,     3,     1,
       0,     1,     1,     3,     4
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
#line 1530 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 69 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1538 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 73 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->fbody = yyvsp[0].node;
}
#line 1548 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 80 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1556 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 83 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1564 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 87 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1573 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 92 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1584 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 99 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1592 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 104 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1602 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 109 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1611 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 113 "cmm.y"
          { /* epsilon */
	yyval.node = new_node(NK_NOTHING);
	yyval.node->ival = 0;
}
#line 1620 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 119 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1629 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 123 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1637 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 128 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1645 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 131 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1653 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 135 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1662 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 141 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1670 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 144 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1678 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 149 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1687 "y.tab.c"
    break;

  case 21: /* var_init: ID EQ E  */
#line 153 "cmm.y"
                  {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
	yyval.node = var;
}
#line 1698 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 159 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1706 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 163 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1715 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 169 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1723 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 172 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1731 "y.tab.c"
    break;

  case 26: /* const_init: ID EQ E  */
#line 176 "cmm.y"
                     {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1741 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 182 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1751 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 189 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1762 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 195 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1772 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 211 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1780 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 214 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1788 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 217 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1796 "y.tab.c"
    break;

  case 33: /* st: PUTC E SEMI  */
#line 220 "cmm.y"
                      {
	yyval.node = new_unary_node(NK_PUTC, yyvsp[-1].node);
}
#line 1804 "y.tab.c"
    break;

  case 34: /* st: decl_var  */
#line 223 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1812 "y.tab.c"
    break;

  case 35: /* st: decl_const  */
#line 226 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1820 "y.tab.c"
    break;

  case 36: /* st: ID ASSIGN arr_init SEMI  */
#line 229 "cmm.y"
                                  {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1829 "y.tab.c"
    break;

  case 37: /* st: arr_ref ASSIGN arr_init SEMI  */
#line 233 "cmm.y"
                                       {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1837 "y.tab.c"
    break;

  case 38: /* st: ifstmt  */
#line 236 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1845 "y.tab.c"
    break;

  case 39: /* st: whilestmt  */
#line 239 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1853 "y.tab.c"
    break;

  case 40: /* st: dowhilestmt  */
#line 242 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1861 "y.tab.c"
    break;

  case 41: /* st: forstmt  */
#line 245 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1869 "y.tab.c"
    break;

  case 42: /* st: switchstmt  */
#line 248 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1877 "y.tab.c"
    break;

  case 43: /* st: RETURN E SEMI  */
#line 251 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1885 "y.tab.c"
    break;

  case 44: /* st: RETURN SEMI  */
#line 254 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1893 "y.tab.c"
    break;

  case 45: /* st: BREAK SEMI  */
#line 257 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1901 "y.tab.c"
    break;

  case 46: /* st: CONTINUE SEMI  */
#line 260 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1909 "y.tab.c"
    break;

  case 47: /* st: body  */
#line 263 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1917 "y.tab.c"
    break;

  case 48: /* st: ID COLON  */
#line 266 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1926 "y.tab.c"
    break;

  case 49: /* st: GOTO ID SEMI  */
#line 270 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1935 "y.tab.c"
    break;

  case 50: /* st: E SEMI  */
#line 274 "cmm.y"
                 {
	yyval.node = yyvsp[-1].node;
}
#line 1943 "y.tab.c"
    break;

  case 51: /* ifstmt: IF cond body  */
#line 279 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1951 "y.tab.c"
    break;

  case 52: /* ifstmt: IF cond body ELSE body  */
#line 282 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1959 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body ELSE ifstmt  */
#line 285 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1967 "y.tab.c"
    break;

  case 54: /* whilestmt: WHILE cond body  */
#line 289 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1975 "y.tab.c"
    break;

  case 55: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 293 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1983 "y.tab.c"
    break;

  case 56: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 297 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1991 "y.tab.c"
    break;

  case 57: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 301 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1999 "y.tab.c"
    break;

  case 58: /* cases: cases case_item  */
#line 306 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2007 "y.tab.c"
    break;

  case 59: /* cases: case_item  */
#line 309 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2015 "y.tab.c"
    break;

  case 60: /* case_item: CASE E body  */
#line 313 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2023 "y.tab.c"
    break;

  case 61: /* case_default: DEFAULT body  */
#line 318 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 2031 "y.tab.c"
    break;

  case 62: /* case_default: %empty  */
#line 321 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2039 "y.tab.c"
    break;

  case 63: /* cond: cond_or  */
#line 325 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2047 "y.tab.c"
    break;

  case 64: /* cond_or: cond_or OR cond_and  */
#line 330 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2055 "y.tab.c"
    break;

  case 65: /* cond_or: cond_and  */
#line 333 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2063 "y.tab.c"
    break;

  case 66: /* cond_and: cond_and AND cond_not  */
#line 338 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2071 "y.tab.c"
    break;

  case 67: /* cond_and: cond_not  */
#line 341 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2079 "y.tab.c"
    break;

  case 68: /* cond_not: NOT cond_not  */
#line 346 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2087 "y.tab.c"
    break;

  case 69: /* cond_not: comp  */
#line 349 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2095 "y.tab.c"
    break;

  case 70: /* comp: E GT E  */
#line 354 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2103 "y.tab.c"
    break;

  case 71: /* comp: E GE E  */
#line 357 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2111 "y.tab.c"
    break;

  case 72: /* comp: E LT E  */
#line 360 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2119 "y.tab.c"
    break;

  case 73: /* comp: E LE E  */
#line 363 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2127 "y.tab.c"
    break;

  case 74: /* comp: E NE E  */
#line 366 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2135 "y.tab.c"
    break;

  case 75: /* comp: E EQ E  */
#line 369 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2143 "y.tab.c"
    break;

  case 76: /* comp: E  */
#line 372 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2151 "y.tab.c"
    break;

  case 77: /* compound_assignment: ID ADD_ASSIGN E  */
#line 377 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2161 "y.tab.c"
    break;

  case 78: /* compound_assignment: ID SUB_ASSIGN E  */
#line 382 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2171 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID MUL_ASSIGN E  */
#line 387 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2181 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID DIV_ASSIGN E  */
#line 392 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2191 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID POW_ASSIGN E  */
#line 397 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2201 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID MOD_ASSIGN E  */
#line 402 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2211 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID AND_ASSIGN E  */
#line 407 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2221 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID OR_ASSIGN E  */
#line 412 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2231 "y.tab.c"
    break;

  case 85: /* E: ID ASSIGN E  */
#line 420 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2240 "y.tab.c"
    break;

  case 86: /* E: arr_ref ASSIGN E  */
#line 424 "cmm.y"
                           {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2248 "y.tab.c"
    break;

  case 87: /* E: deref ASSIGN E  */
#line 427 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ASSIGN, yyvsp[-2].node, yyvsp[0].node);
}
#line 2256 "y.tab.c"
    break;

  case 88: /* E: compound_assignment  */
#line 430 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2264 "y.tab.c"
    break;

  case 89: /* E: ADD_SUB  */
#line 433 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2272 "y.tab.c"
    break;

  case 90: /* ADD_SUB: ADD_SUB PLUS T  */
#line 438 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2280 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB MINUS T  */
#line 441 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2288 "y.tab.c"
    break;

  case 92: /* ADD_SUB: T  */
#line 444 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2296 "y.tab.c"
    break;

  case 93: /* T: T MULT P  */
#line 449 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2304 "y.tab.c"
    break;

  case 94: /* T: T DIV P  */
#line 452 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2312 "y.tab.c"
    break;

  case 95: /* T: T MOD P  */
#line 455 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2320 "y.tab.c"
    break;

  case 96: /* T: P  */
#line 458 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2328 "y.tab.c"
    break;

  case 97: /* P: F POW P  */
#line 463 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2336 "y.tab.c"
    break;

  case 98: /* P: F  */
#line 466 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2344 "y.tab.c"
    break;

  case 99: /* F: ID  */
#line 471 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2352 "y.tab.c"
    break;

  case 100: /* F: MINUS F  */
#line 474 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2360 "y.tab.c"
    break;

  case 101: /* F: ADDR F  */
#line 477 "cmm.y"
                 {
	yyval.node = new_unary_node(NK_ADDR, yyvsp[0].node);
}
#line 2368 "y.tab.c"
    break;

  case 102: /* F: deref  */
#line 480 "cmm.y"
                {
	yyval.node = yyvsp[0].node;
}
#line 2376 "y.tab.c"
    break;

  case 103: /* F: POW F  */
#line 483 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2384 "y.tab.c"
    break;

  case 104: /* F: LIT_TRUE  */
#line 486 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2393 "y.tab.c"
    break;

  case 105: /* F: LIT_FALSE  */
#line 490 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2402 "y.tab.c"
    break;

  case 106: /* F: ID INC  */
#line 494 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2414 "y.tab.c"
    break;

  case 107: /* F: INC ID  */
#line 501 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2426 "y.tab.c"
    break;

  case 108: /* F: ID DEC  */
#line 508 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2438 "y.tab.c"
    break;

  case 109: /* F: DEC ID  */
#line 515 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2450 "y.tab.c"
    break;

  case 110: /* F: FUNC_CALL  */
#line 522 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2458 "y.tab.c"
    break;

  case 111: /* F: NUMBER  */
#line 525 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2466 "y.tab.c"
    break;

  case 112: /* F: CHAR  */
#line 528 "cmm.y"
               {
	yyval.node = new_char_node(yyvsp[0].name);
}
#line 2474 "y.tab.c"
    break;

  case 113: /* F: arr_ref  */
#line 531 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2482 "y.tab.c"
    break;

  case 114: /* F: LPAR cond RPAR  */
#line 534 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2490 "y.tab.c"
    break;

  case 115: /* F: READ  */
#line 537 "cmm.y"
               {
	yyval.node = new_node(NK_READ);
}
#line 2498 "y.tab.c"
    break;

  case 116: /* F: GETC  */
#line 540 "cmm.y"
               {
	yyval.node = new_node(NK_GETC);
}
#line 2506 "y.tab.c"
    break;

  case 117: /* str: STR  */
#line 544 "cmm.y"
          {
	yyval.node = new_node(NK_STR);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 2515 "y.tab.c"
    break;

  case 118: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 549 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2525 "y.tab.c"
    break;

  case 119: /* deref: DEREF F  */
#line 555 "cmm.y"
                {
	yyval.node = new_unary_node(NK_DEREF, yyvsp[0].node);
}
#line 2533 "y.tab.c"
    break;

  case 120: /* fparams: %empty  */
#line 560 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2541 "y.tab.c"
    break;

  case 121: /* fparams: ac_params  */
#line 563 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2549 "y.tab.c"
    break;

  case 122: /* ac_params: ac_params COMMA fparam  */
#line 568 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2557 "y.tab.c"
    break;

  case 123: /* ac_params: fparam  */
#line 571 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2565 "y.tab.c"
    break;

  case 124: /* fparam: E  */
#line 575 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2573 "y.tab.c"
    break;

  case 125: /* arr_ref: ID arr_index  */
#line 579 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2583 "y.tab.c"
    break;

  case 126: /* arr_init: LBRA arr_elems RBRA  */
#line 586 "cmm.y"
                             {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2592 "y.tab.c"
    break;

  case 127: /* arr_init: str  */
#line 590 "cmm.y"
              {
	yyval.node = yyvsp[0].node;
}
#line 2600 "y.tab.c"
    break;

  case 128: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 595 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2608 "y.tab.c"
    break;

  case 129: /* arr_elems: arr_initializer  */
#line 598 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2616 "y.tab.c"
    break;

  case 130: /* arr_elems: %empty  */
#line 601 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2624 "y.tab.c"
    break;

  case 131: /* arr_initializer: E  */
#line 606 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2632 "y.tab.c"
    break;

  case 132: /* arr_initializer: arr_init  */
#line 609 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2640 "y.tab.c"
    break;

  case 133: /* arr_index: LSQR E RSQR  */
#line 614 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2649 "y.tab.c"
    break;

  case 134: /* arr_index: arr_index LSQR E RSQR  */
#line 618 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2659 "y.tab.c"
    break;


#line 2663 "y.tab.c"

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

#line 624 "cmm.y"


#include "lex.yy.c"
