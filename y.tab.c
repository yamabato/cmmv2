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
    MAIN = 263,                    /* MAIN  */
    LIT_TRUE = 264,                /* LIT_TRUE  */
    LIT_FALSE = 265,               /* LIT_FALSE  */
    LPAR = 266,                    /* LPAR  */
    RPAR = 267,                    /* RPAR  */
    COMMA = 268,                   /* COMMA  */
    LBRA = 269,                    /* LBRA  */
    RBRA = 270,                    /* RBRA  */
    LSQR = 271,                    /* LSQR  */
    RSQR = 272,                    /* RSQR  */
    WRITE = 273,                   /* WRITE  */
    WRITELN = 274,                 /* WRITELN  */
    READ = 275,                    /* READ  */
    PUTC = 276,                    /* PUTC  */
    GETC = 277,                    /* GETC  */
    SEMI = 278,                    /* SEMI  */
    COLON = 279,                   /* COLON  */
    PLUS = 280,                    /* PLUS  */
    MINUS = 281,                   /* MINUS  */
    INC = 282,                     /* INC  */
    DEC = 283,                     /* DEC  */
    MULT = 284,                    /* MULT  */
    DIV = 285,                     /* DIV  */
    MOD = 286,                     /* MOD  */
    POW = 287,                     /* POW  */
    NUMBER = 288,                  /* NUMBER  */
    FLOAT = 289,                   /* FLOAT  */
    IF = 290,                      /* IF  */
    ELSE = 291,                    /* ELSE  */
    WHILE = 292,                   /* WHILE  */
    DO = 293,                      /* DO  */
    FOR = 294,                     /* FOR  */
    BREAK = 295,                   /* BREAK  */
    CONTINUE = 296,                /* CONTINUE  */
    SWITCH = 297,                  /* SWITCH  */
    CASE = 298,                    /* CASE  */
    DEFAULT = 299,                 /* DEFAULT  */
    GOTO = 300,                    /* GOTO  */
    COLEQ = 301,                   /* COLEQ  */
    ASSIGN = 302,                  /* ASSIGN  */
    ADD_ASSIGN = 303,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 304,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 305,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 306,              /* DIV_ASSIGN  */
    POW_ASSIGN = 307,              /* POW_ASSIGN  */
    MOD_ASSIGN = 308,              /* MOD_ASSIGN  */
    AND_ASSIGN = 309,              /* AND_ASSIGN  */
    OR_ASSIGN = 310,               /* OR_ASSIGN  */
    GE = 311,                      /* GE  */
    GT = 312,                      /* GT  */
    LE = 313,                      /* LE  */
    LT = 314,                      /* LT  */
    NE = 315,                      /* NE  */
    EQ = 316,                      /* EQ  */
    AND = 317,                     /* AND  */
    OR = 318,                      /* OR  */
    NOT = 319,                     /* NOT  */
    RETURN = 320                   /* RETURN  */
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
  YYSYMBOL_MAIN = 8,                       /* MAIN  */
  YYSYMBOL_LIT_TRUE = 9,                   /* LIT_TRUE  */
  YYSYMBOL_LIT_FALSE = 10,                 /* LIT_FALSE  */
  YYSYMBOL_LPAR = 11,                      /* LPAR  */
  YYSYMBOL_RPAR = 12,                      /* RPAR  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_LBRA = 14,                      /* LBRA  */
  YYSYMBOL_RBRA = 15,                      /* RBRA  */
  YYSYMBOL_LSQR = 16,                      /* LSQR  */
  YYSYMBOL_RSQR = 17,                      /* RSQR  */
  YYSYMBOL_WRITE = 18,                     /* WRITE  */
  YYSYMBOL_WRITELN = 19,                   /* WRITELN  */
  YYSYMBOL_READ = 20,                      /* READ  */
  YYSYMBOL_PUTC = 21,                      /* PUTC  */
  YYSYMBOL_GETC = 22,                      /* GETC  */
  YYSYMBOL_SEMI = 23,                      /* SEMI  */
  YYSYMBOL_COLON = 24,                     /* COLON  */
  YYSYMBOL_PLUS = 25,                      /* PLUS  */
  YYSYMBOL_MINUS = 26,                     /* MINUS  */
  YYSYMBOL_INC = 27,                       /* INC  */
  YYSYMBOL_DEC = 28,                       /* DEC  */
  YYSYMBOL_MULT = 29,                      /* MULT  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_POW = 32,                       /* POW  */
  YYSYMBOL_NUMBER = 33,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 34,                     /* FLOAT  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_DO = 38,                        /* DO  */
  YYSYMBOL_FOR = 39,                       /* FOR  */
  YYSYMBOL_BREAK = 40,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 41,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 42,                    /* SWITCH  */
  YYSYMBOL_CASE = 43,                      /* CASE  */
  YYSYMBOL_DEFAULT = 44,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 45,                      /* GOTO  */
  YYSYMBOL_COLEQ = 46,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 47,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 48,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 49,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 50,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 51,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 52,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 53,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 54,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 55,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 56,                        /* GE  */
  YYSYMBOL_GT = 57,                        /* GT  */
  YYSYMBOL_LE = 58,                        /* LE  */
  YYSYMBOL_LT = 59,                        /* LT  */
  YYSYMBOL_NE = 60,                        /* NE  */
  YYSYMBOL_EQ = 61,                        /* EQ  */
  YYSYMBOL_AND = 62,                       /* AND  */
  YYSYMBOL_OR = 63,                        /* OR  */
  YYSYMBOL_NOT = 64,                       /* NOT  */
  YYSYMBOL_RETURN = 65,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_main = 68,                      /* main  */
  YYSYMBOL_fdecls = 69,                    /* fdecls  */
  YYSYMBOL_fdecl = 70,                     /* fdecl  */
  YYSYMBOL_fhead = 71,                     /* fhead  */
  YYSYMBOL_fid = 72,                       /* fid  */
  YYSYMBOL_params = 73,                    /* params  */
  YYSYMBOL_body = 74,                      /* body  */
  YYSYMBOL_stmts = 75,                     /* stmts  */
  YYSYMBOL_decl_var = 76,                  /* decl_var  */
  YYSYMBOL_var_inits = 77,                 /* var_inits  */
  YYSYMBOL_var_init = 78,                  /* var_init  */
  YYSYMBOL_decl_const = 79,                /* decl_const  */
  YYSYMBOL_const_inits = 80,               /* const_inits  */
  YYSYMBOL_const_init = 81,                /* const_init  */
  YYSYMBOL_array_decl = 82,                /* array_decl  */
  YYSYMBOL_array_size = 83,                /* array_size  */
  YYSYMBOL_st = 84,                        /* st  */
  YYSYMBOL_ifstmt = 85,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 86,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 87,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 88,                   /* forstmt  */
  YYSYMBOL_switchstmt = 89,                /* switchstmt  */
  YYSYMBOL_cases = 90,                     /* cases  */
  YYSYMBOL_case_item = 91,                 /* case_item  */
  YYSYMBOL_case_default = 92,              /* case_default  */
  YYSYMBOL_cond = 93,                      /* cond  */
  YYSYMBOL_cond_or = 94,                   /* cond_or  */
  YYSYMBOL_cond_and = 95,                  /* cond_and  */
  YYSYMBOL_cond_not = 96,                  /* cond_not  */
  YYSYMBOL_comp = 97,                      /* comp  */
  YYSYMBOL_compound_assignment = 98,       /* compound_assignment  */
  YYSYMBOL_E = 99,                         /* E  */
  YYSYMBOL_ADD_SUB = 100,                  /* ADD_SUB  */
  YYSYMBOL_T = 101,                        /* T  */
  YYSYMBOL_P = 102,                        /* P  */
  YYSYMBOL_F = 103,                        /* F  */
  YYSYMBOL_FUNC_CALL = 104,                /* FUNC_CALL  */
  YYSYMBOL_fparams = 105,                  /* fparams  */
  YYSYMBOL_ac_params = 106,                /* ac_params  */
  YYSYMBOL_fparam = 107,                   /* fparam  */
  YYSYMBOL_arr_ref = 108,                  /* arr_ref  */
  YYSYMBOL_arr_init = 109,                 /* arr_init  */
  YYSYMBOL_arr_elems = 110,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 111,          /* arr_initializer  */
  YYSYMBOL_arr_index = 112                 /* arr_index  */
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
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    68,    72,    79,    82,    86,    91,    98,
     103,   108,   112,   117,   121,   126,   129,   133,   139,   142,
     147,   151,   156,   160,   166,   169,   173,   179,   186,   192,
     208,   211,   214,   217,   220,   223,   226,   229,   233,   237,
     240,   243,   246,   249,   252,   255,   258,   261,   264,   267,
     270,   273,   276,   280,   286,   289,   292,   296,   300,   304,
     308,   313,   316,   320,   325,   328,   332,   337,   340,   345,
     348,   353,   356,   361,   364,   367,   370,   373,   376,   379,
     384,   389,   394,   399,   404,   409,   414,   419,   427,   431,
     434,   439,   442,   445,   450,   453,   456,   459,   462,   467,
     470,   475,   478,   482,   486,   493,   500,   507,   514,   517,
     520,   523,   526,   529,   532,   536,   543,   546,   551,   554,
     558,   562,   568,   574,   577,   580,   585,   588,   593,   597
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
  "CHAR", "ID", "MAIN", "LIT_TRUE", "LIT_FALSE", "LPAR", "RPAR", "COMMA",
  "LBRA", "RBRA", "LSQR", "RSQR", "WRITE", "WRITELN", "READ", "PUTC",
  "GETC", "SEMI", "COLON", "PLUS", "MINUS", "INC", "DEC", "MULT", "DIV",
  "MOD", "POW", "NUMBER", "FLOAT", "IF", "ELSE", "WHILE", "DO", "FOR",
  "BREAK", "CONTINUE", "SWITCH", "CASE", "DEFAULT", "GOTO", "COLEQ",
  "ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "POW_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "GE", "GT", "LE",
  "LT", "NE", "EQ", "AND", "OR", "NOT", "RETURN", "$accept", "program",
  "main", "fdecls", "fdecl", "fhead", "fid", "params", "body", "stmts",
  "decl_var", "var_inits", "var_init", "decl_const", "const_inits",
  "const_init", "array_decl", "array_size", "st", "ifstmt", "whilestmt",
  "dowhilestmt", "forstmt", "switchstmt", "cases", "case_item",
  "case_default", "cond", "cond_or", "cond_and", "cond_not", "comp",
  "compound_assignment", "E", "ADD_SUB", "T", "P", "F", "FUNC_CALL",
  "fparams", "ac_params", "fparam", "arr_ref", "arr_init", "arr_elems",
  "arr_initializer", "arr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -98,    28,    10,   -98,   -98,    16,   -98,   -98,    16,    25,
      73,   -98,    33,   -98,    74,    76,    82,    13,   -98,   291,
     216,   291,   160,   160,    16,    84,    75,    79,   291,    92,
     241,   -98,   118,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,    80,    81,    50,   -98,    43,   -14,    -3,   -98,   -98,
      60,     3,   -98,   291,   291,   -98,   266,   291,   291,   291,
     291,   291,   291,   291,   291,    91,   -98,   157,   -98,   -98,
     160,   -98,   -98,   341,   112,   117,   -98,   -98,   103,    32,
      -8,   -98,    95,   -98,   -98,   -98,   105,   106,   160,    16,
      67,    69,   -98,   -98,    14,    16,    97,   291,   -98,   -98,
     121,   126,   -98,   127,   -98,   -98,   -98,   -98,   266,   -98,
     133,   108,   291,   135,    76,   -98,   291,    82,   -98,   -98,
     140,   141,   -98,   144,   266,   139,   142,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   291,   -98,   -98,   291,   162,
      89,   -98,   -98,   -98,   -98,   316,   316,   341,   341,   341,
     341,   -98,   -98,   -98,   136,   160,   160,   291,   291,   291,
     291,   291,   291,   -98,   160,   152,   134,   -98,   -98,   153,
     155,   -98,   164,   -98,   146,   -98,   -98,   -98,   -98,   291,
     -98,   -98,   -98,    12,   -98,   -98,   -98,   172,   -98,   -98,
      -8,    -8,   -98,   -98,   -98,   -98,     0,    69,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   171,   160,   291,    35,   -98,
     -98,   -98,   -98,   178,   -98,   266,   -98,   -98,   -98,   -98,
     -98,   173,    16,    16,   -98,   182,   -98,   -98,   291,   -98,
     -98,   -98,   186,    16,   -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     3,     1,     9,     0,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    35,    36,    16,    42,    43,    44,    45,
      46,     0,     0,     0,    11,     0,    20,     0,    19,    22,
       0,     0,    25,   116,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   110,   101,   102,   103,
       0,   113,   114,     0,     0,     0,   109,    89,     0,    90,
      93,    98,   100,   108,   111,    31,     0,     0,     0,     0,
      66,    68,    70,    72,    79,     0,     0,     0,    49,    50,
       0,     0,    48,     0,    13,    15,    41,    34,     0,     8,
       0,     0,     0,    27,     0,    17,     0,     0,    23,   120,
       0,   117,   119,     0,   125,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,   104,   106,     0,     0,
     101,    97,   105,   107,    30,     0,     0,     0,     0,     0,
       0,    32,    33,    71,    54,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,    53,    47,     0,
       0,    10,     0,    21,     0,    18,    26,    24,   115,     0,
     128,   126,   127,     0,   124,    37,    38,     0,    88,   112,
      91,    92,    94,    95,    96,    99,     0,    67,    69,    74,
      73,    76,    75,    77,    78,     0,     0,     0,    65,    62,
      40,    39,    29,     0,   118,     0,   122,   129,    55,    56,
      58,     0,     0,     0,    61,     0,    28,   123,     0,    63,
      64,    60,     0,     0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   193,   -98,   -98,   -98,   -98,    -5,   -98,
     -98,   -98,    87,   -98,   -98,    85,   -98,   -98,   183,     7,
     -98,   -98,   -98,   -98,   -98,     6,   -98,   -16,   -98,    61,
     -87,   -98,    -1,   -15,   -98,   -60,   -97,   147,     1,   -98,
     -98,    40,     2,   -48,   -98,    15,   -98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    45,    31,    32,
      33,    47,    48,    34,    51,    52,    49,   113,    35,    36,
      37,    38,    39,    40,   208,   209,   225,    89,    90,    91,
      92,    93,    77,    94,    79,    80,    81,    82,    83,   120,
     121,   122,    84,   182,   183,   184,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,   153,   111,    13,    78,    86,    87,    95,   126,    41,
     114,    42,    43,   100,    10,   103,   117,     4,     5,    96,
     115,   147,   148,   149,    53,   215,   118,   216,     3,    54,
      10,    41,   112,    42,    43,    22,    14,    55,   119,   123,
       4,   125,   127,   128,   129,   130,   131,   132,   133,   134,
     192,   193,   194,   195,   139,   109,   110,   145,   146,    56,
     170,    57,    58,    59,    60,    61,    62,    63,    64,   198,
     157,   158,   159,   160,   161,   162,    15,    16,   207,   223,
      17,    44,   165,    46,   154,   190,   191,    10,    18,    50,
     163,    19,    20,   169,    21,    97,   108,   173,    98,   101,
      53,   176,    99,   106,   107,    54,   116,   135,    22,   181,
      23,    24,    25,    26,    27,    28,   136,   137,    29,   142,
     187,    15,    16,   188,   143,    17,   144,   150,   151,   152,
     155,   156,    10,   104,   164,   166,    19,    20,    30,    21,
     171,   172,   199,   200,   201,   202,   203,   204,   205,   167,
     168,   174,   178,    22,   179,    23,    24,    25,    26,    27,
      28,   180,   185,    29,   119,   186,    66,    67,    53,    68,
      69,    70,   196,    54,   189,   206,   210,   207,   211,   213,
      71,   212,    72,    30,   136,   137,    73,    74,    75,   217,
     221,   218,   222,    76,   220,   226,   228,   231,   233,    12,
     181,   175,   177,   219,   138,    57,    58,    59,    60,    61,
      62,    63,    64,   232,   224,   105,   197,   229,   230,   214,
     141,     0,    66,    67,    88,    68,    69,    70,   234,     0,
     227,     0,     0,     0,     0,     0,    71,     0,    72,    85,
       0,     0,    73,    74,    75,     0,     0,    66,    67,    76,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,    72,   102,     0,     0,    73,    74,    75,
       0,     0,    66,    67,    76,    68,    69,    70,     0,     0,
     124,     0,     0,     0,     0,     0,    71,     0,    72,     0,
       0,     0,    73,    74,    75,     0,     0,    66,    67,    76,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,    72,     0,     0,     0,    73,    74,    75,
       0,     0,    66,   140,    76,    68,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,    72,     0,
       0,     0,    73,    74,    75,     0,     0,    66,   140,    76,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,    72,     0,     0,     0,     0,    74,    75,
       0,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
       5,    88,    16,     8,    19,    20,    21,    23,    56,    10,
      13,    10,    10,    28,    14,    30,    13,     7,     8,    24,
      23,    29,    30,    31,    11,    13,    23,    15,     0,    16,
      14,    32,    46,    32,    32,    35,    11,    24,    53,    54,
       7,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     147,   148,   149,   150,    70,    12,    13,    25,    26,    46,
     108,    48,    49,    50,    51,    52,    53,    54,    55,   156,
      56,    57,    58,    59,    60,    61,     3,     4,    43,    44,
       7,     7,    97,     7,    89,   145,   146,    14,    15,     7,
      95,    18,    19,   108,    21,    11,    46,   112,    23,     7,
      11,   116,    23,    23,    23,    16,    46,    16,    35,   124,
      37,    38,    39,    40,    41,    42,    27,    28,    45,     7,
     135,     3,     4,   138,     7,     7,    23,    32,    23,    23,
      63,    62,    14,    15,    37,    14,    18,    19,    65,    21,
       7,    33,   157,   158,   159,   160,   161,   162,   164,    23,
      23,    16,    12,    35,    13,    37,    38,    39,    40,    41,
      42,    17,    23,    45,   179,    23,     6,     7,    11,     9,
      10,    11,    36,    16,    12,    23,    23,    43,    23,    33,
      20,    17,    22,    65,    27,    28,    26,    27,    28,    17,
     206,   196,   207,    33,    23,    17,    23,    15,    12,     6,
     215,   114,   117,   196,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   228,   208,    32,   155,   222,   223,   179,
      73,    -1,     6,     7,    64,     9,    10,    11,   233,    -1,
     215,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    26,    27,    28,    -1,    -1,     6,     7,    33,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    26,    27,    28,
      -1,    -1,     6,     7,    33,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,     6,     7,    33,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,     6,     7,    33,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,     6,     7,    33,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,    69,     0,     7,     8,    68,    70,    71,    72,
      14,    74,    69,    74,    11,     3,     4,     7,    15,    18,
      19,    21,    35,    37,    38,    39,    40,    41,    42,    45,
      65,    74,    75,    76,    79,    84,    85,    86,    87,    88,
      89,    98,   104,   108,     7,    73,     7,    77,    78,    82,
       7,    80,    81,    11,    16,    24,    46,    48,    49,    50,
      51,    52,    53,    54,    55,   112,     6,     7,     9,    10,
      11,    20,    22,    26,    27,    28,    33,    98,    99,   100,
     101,   102,   103,   104,   108,    23,    99,    99,    64,    93,
      94,    95,    96,    97,    99,    93,    74,    11,    23,    23,
      99,     7,    23,    99,    15,    84,    23,    23,    46,    12,
      13,    16,    46,    83,    13,    23,    46,    13,    23,    99,
     105,   106,   107,    99,    14,    99,   109,    99,    99,    99,
      99,    99,    99,    99,    99,    16,    27,    28,    47,    93,
       7,   103,     7,     7,    23,    25,    26,    29,    30,    31,
      32,    23,    23,    96,    74,    63,    62,    56,    57,    58,
      59,    60,    61,    74,    37,    99,    14,    23,    23,    99,
     109,     7,    33,    99,    16,    78,    99,    81,    12,    13,
      17,    99,   109,   110,   111,    23,    23,    99,    99,    12,
     101,   101,   102,   102,   102,   102,    36,    95,    96,    99,
      99,    99,    99,    99,    99,    93,    23,    43,    90,    91,
      23,    23,    17,    33,   107,    13,    15,    17,    74,    85,
      23,    93,    99,    44,    91,    92,    17,   111,    23,    74,
      74,    15,    99,    12,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    69,    69,    70,    71,    72,
      73,    73,    73,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    78,    79,    80,    80,    81,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    86,    87,    88,
      89,    90,    90,    91,    92,    92,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   105,   105,   106,   106,
     107,   108,   109,   110,   110,   110,   111,   111,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     4,     3,
       3,     2,     3,     3,     2,     1,     1,     4,     4,     4,
       4,     2,     1,     1,     1,     1,     1,     3,     2,     2,
       2,     1,     2,     3,     3,     5,     5,     3,     5,     9,
       6,     2,     1,     3,     2,     0,     1,     3,     1,     3,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     3,     1,     3,     3,     3,     2,     1,     3,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     1,     1,     4,     0,     1,     3,     1,
       1,     2,     3,     3,     1,     0,     1,     1,     3,     4
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
#line 64 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1498 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 68 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1506 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 72 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1516 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 79 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1524 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 82 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1532 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 86 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1541 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 91 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1552 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 98 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1560 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 103 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1570 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 108 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1579 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 112 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1587 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 117 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1596 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 121 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1604 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 126 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1612 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 129 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1620 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 133 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1629 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 139 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1637 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 142 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1645 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 147 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1654 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 151 "cmm.y"
                     {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
}
#line 1664 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 156 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1672 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 160 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1681 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 166 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1689 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 169 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1697 "y.tab.c"
    break;

  case 26: /* const_init: ID COLEQ E  */
#line 173 "cmm.y"
                        {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1707 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 179 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1717 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 186 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1728 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 192 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1738 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 208 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1746 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 211 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1754 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 214 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1762 "y.tab.c"
    break;

  case 33: /* st: PUTC E SEMI  */
#line 217 "cmm.y"
                      {
	yyval.node = new_unary_node(NK_PUTC, yyvsp[-1].node);
}
#line 1770 "y.tab.c"
    break;

  case 34: /* st: FUNC_CALL SEMI  */
#line 220 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1778 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 223 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1786 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 226 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1794 "y.tab.c"
    break;

  case 37: /* st: ID COLEQ E SEMI  */
#line 229 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1803 "y.tab.c"
    break;

  case 38: /* st: ID COLEQ arr_init SEMI  */
#line 233 "cmm.y"
                                 {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1812 "y.tab.c"
    break;

  case 39: /* st: arr_ref COLEQ arr_init SEMI  */
#line 237 "cmm.y"
                                      {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1820 "y.tab.c"
    break;

  case 40: /* st: arr_ref COLEQ E SEMI  */
#line 240 "cmm.y"
                               {
	yyval.node = new_binary_node(NK_ARR_ASSIGN, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1828 "y.tab.c"
    break;

  case 41: /* st: compound_assignment SEMI  */
#line 243 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1836 "y.tab.c"
    break;

  case 42: /* st: ifstmt  */
#line 246 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1844 "y.tab.c"
    break;

  case 43: /* st: whilestmt  */
#line 249 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1852 "y.tab.c"
    break;

  case 44: /* st: dowhilestmt  */
#line 252 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1860 "y.tab.c"
    break;

  case 45: /* st: forstmt  */
#line 255 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1868 "y.tab.c"
    break;

  case 46: /* st: switchstmt  */
#line 258 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1876 "y.tab.c"
    break;

  case 47: /* st: RETURN E SEMI  */
#line 261 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1884 "y.tab.c"
    break;

  case 48: /* st: RETURN SEMI  */
#line 264 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1892 "y.tab.c"
    break;

  case 49: /* st: BREAK SEMI  */
#line 267 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1900 "y.tab.c"
    break;

  case 50: /* st: CONTINUE SEMI  */
#line 270 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1908 "y.tab.c"
    break;

  case 51: /* st: body  */
#line 273 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1916 "y.tab.c"
    break;

  case 52: /* st: ID COLON  */
#line 276 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1925 "y.tab.c"
    break;

  case 53: /* st: GOTO ID SEMI  */
#line 280 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1934 "y.tab.c"
    break;

  case 54: /* ifstmt: IF cond body  */
#line 286 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1942 "y.tab.c"
    break;

  case 55: /* ifstmt: IF cond body ELSE body  */
#line 289 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1950 "y.tab.c"
    break;

  case 56: /* ifstmt: IF cond body ELSE ifstmt  */
#line 292 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1958 "y.tab.c"
    break;

  case 57: /* whilestmt: WHILE cond body  */
#line 296 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1966 "y.tab.c"
    break;

  case 58: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 300 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1974 "y.tab.c"
    break;

  case 59: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 304 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1982 "y.tab.c"
    break;

  case 60: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 308 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1990 "y.tab.c"
    break;

  case 61: /* cases: cases case_item  */
#line 313 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1998 "y.tab.c"
    break;

  case 62: /* cases: case_item  */
#line 316 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2006 "y.tab.c"
    break;

  case 63: /* case_item: CASE E body  */
#line 320 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2014 "y.tab.c"
    break;

  case 64: /* case_default: DEFAULT body  */
#line 325 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 2022 "y.tab.c"
    break;

  case 65: /* case_default: %empty  */
#line 328 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2030 "y.tab.c"
    break;

  case 66: /* cond: cond_or  */
#line 332 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2038 "y.tab.c"
    break;

  case 67: /* cond_or: cond_or OR cond_and  */
#line 337 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2046 "y.tab.c"
    break;

  case 68: /* cond_or: cond_and  */
#line 340 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2054 "y.tab.c"
    break;

  case 69: /* cond_and: cond_and AND cond_not  */
#line 345 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2062 "y.tab.c"
    break;

  case 70: /* cond_and: cond_not  */
#line 348 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2070 "y.tab.c"
    break;

  case 71: /* cond_not: NOT cond_not  */
#line 353 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2078 "y.tab.c"
    break;

  case 72: /* cond_not: comp  */
#line 356 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2086 "y.tab.c"
    break;

  case 73: /* comp: E GT E  */
#line 361 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2094 "y.tab.c"
    break;

  case 74: /* comp: E GE E  */
#line 364 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2102 "y.tab.c"
    break;

  case 75: /* comp: E LT E  */
#line 367 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2110 "y.tab.c"
    break;

  case 76: /* comp: E LE E  */
#line 370 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2118 "y.tab.c"
    break;

  case 77: /* comp: E NE E  */
#line 373 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2126 "y.tab.c"
    break;

  case 78: /* comp: E EQ E  */
#line 376 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2134 "y.tab.c"
    break;

  case 79: /* comp: E  */
#line 379 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2142 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID ADD_ASSIGN E  */
#line 384 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2152 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID SUB_ASSIGN E  */
#line 389 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2162 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID MUL_ASSIGN E  */
#line 394 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2172 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID DIV_ASSIGN E  */
#line 399 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2182 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID POW_ASSIGN E  */
#line 404 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2192 "y.tab.c"
    break;

  case 85: /* compound_assignment: ID MOD_ASSIGN E  */
#line 409 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2202 "y.tab.c"
    break;

  case 86: /* compound_assignment: ID AND_ASSIGN E  */
#line 414 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2212 "y.tab.c"
    break;

  case 87: /* compound_assignment: ID OR_ASSIGN E  */
#line 419 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2222 "y.tab.c"
    break;

  case 88: /* E: ID ASSIGN E  */
#line 427 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2231 "y.tab.c"
    break;

  case 89: /* E: compound_assignment  */
#line 431 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2239 "y.tab.c"
    break;

  case 90: /* E: ADD_SUB  */
#line 434 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2247 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB PLUS T  */
#line 439 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2255 "y.tab.c"
    break;

  case 92: /* ADD_SUB: ADD_SUB MINUS T  */
#line 442 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2263 "y.tab.c"
    break;

  case 93: /* ADD_SUB: T  */
#line 445 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2271 "y.tab.c"
    break;

  case 94: /* T: T MULT P  */
#line 450 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2279 "y.tab.c"
    break;

  case 95: /* T: T DIV P  */
#line 453 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2287 "y.tab.c"
    break;

  case 96: /* T: T MOD P  */
#line 456 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2295 "y.tab.c"
    break;

  case 97: /* T: MINUS F  */
#line 459 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2303 "y.tab.c"
    break;

  case 98: /* T: P  */
#line 462 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2311 "y.tab.c"
    break;

  case 99: /* P: F POW P  */
#line 467 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2319 "y.tab.c"
    break;

  case 100: /* P: F  */
#line 470 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2327 "y.tab.c"
    break;

  case 101: /* F: ID  */
#line 475 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2335 "y.tab.c"
    break;

  case 102: /* F: LIT_TRUE  */
#line 478 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2344 "y.tab.c"
    break;

  case 103: /* F: LIT_FALSE  */
#line 482 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2353 "y.tab.c"
    break;

  case 104: /* F: ID INC  */
#line 486 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2365 "y.tab.c"
    break;

  case 105: /* F: INC ID  */
#line 493 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2377 "y.tab.c"
    break;

  case 106: /* F: ID DEC  */
#line 500 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2389 "y.tab.c"
    break;

  case 107: /* F: DEC ID  */
#line 507 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2401 "y.tab.c"
    break;

  case 108: /* F: FUNC_CALL  */
#line 514 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2409 "y.tab.c"
    break;

  case 109: /* F: NUMBER  */
#line 517 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2417 "y.tab.c"
    break;

  case 110: /* F: CHAR  */
#line 520 "cmm.y"
               {
	yyval.node = new_char_node(yyvsp[0].name);
}
#line 2425 "y.tab.c"
    break;

  case 111: /* F: arr_ref  */
#line 523 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2433 "y.tab.c"
    break;

  case 112: /* F: LPAR cond RPAR  */
#line 526 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2441 "y.tab.c"
    break;

  case 113: /* F: READ  */
#line 529 "cmm.y"
               {
	yyval.node = new_node(NK_READ);
}
#line 2449 "y.tab.c"
    break;

  case 114: /* F: GETC  */
#line 532 "cmm.y"
               {
	yyval.node = new_node(NK_GETC);
}
#line 2457 "y.tab.c"
    break;

  case 115: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 536 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2467 "y.tab.c"
    break;

  case 116: /* fparams: %empty  */
#line 543 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2475 "y.tab.c"
    break;

  case 117: /* fparams: ac_params  */
#line 546 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2483 "y.tab.c"
    break;

  case 118: /* ac_params: ac_params COMMA fparam  */
#line 551 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2491 "y.tab.c"
    break;

  case 119: /* ac_params: fparam  */
#line 554 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2499 "y.tab.c"
    break;

  case 120: /* fparam: E  */
#line 558 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2507 "y.tab.c"
    break;

  case 121: /* arr_ref: ID arr_index  */
#line 562 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2517 "y.tab.c"
    break;

  case 122: /* arr_init: LBRA arr_elems RBRA  */
#line 568 "cmm.y"
                               {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2526 "y.tab.c"
    break;

  case 123: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 574 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2534 "y.tab.c"
    break;

  case 124: /* arr_elems: arr_initializer  */
#line 577 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2542 "y.tab.c"
    break;

  case 125: /* arr_elems: %empty  */
#line 580 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2550 "y.tab.c"
    break;

  case 126: /* arr_initializer: E  */
#line 585 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2558 "y.tab.c"
    break;

  case 127: /* arr_initializer: arr_init  */
#line 588 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2566 "y.tab.c"
    break;

  case 128: /* arr_index: LSQR E RSQR  */
#line 593 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2575 "y.tab.c"
    break;

  case 129: /* arr_index: arr_index LSQR E RSQR  */
#line 597 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2585 "y.tab.c"
    break;


#line 2589 "y.tab.c"

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

#line 603 "cmm.y"


#include "lex.yy.c"
