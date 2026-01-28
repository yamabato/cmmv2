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
    READ = 274,                    /* READ  */
    PUTC = 275,                    /* PUTC  */
    GETC = 276,                    /* GETC  */
    SEMI = 277,                    /* SEMI  */
    COLON = 278,                   /* COLON  */
    PLUS = 279,                    /* PLUS  */
    MINUS = 280,                   /* MINUS  */
    INC = 281,                     /* INC  */
    DEC = 282,                     /* DEC  */
    MULT = 283,                    /* MULT  */
    DIV = 284,                     /* DIV  */
    MOD = 285,                     /* MOD  */
    POW = 286,                     /* POW  */
    NUMBER = 287,                  /* NUMBER  */
    FLOAT = 288,                   /* FLOAT  */
    IF = 289,                      /* IF  */
    ELSE = 290,                    /* ELSE  */
    WHILE = 291,                   /* WHILE  */
    DO = 292,                      /* DO  */
    FOR = 293,                     /* FOR  */
    BREAK = 294,                   /* BREAK  */
    CONTINUE = 295,                /* CONTINUE  */
    SWITCH = 296,                  /* SWITCH  */
    CASE = 297,                    /* CASE  */
    DEFAULT = 298,                 /* DEFAULT  */
    GOTO = 299,                    /* GOTO  */
    COLEQ = 300,                   /* COLEQ  */
    ASSIGN = 301,                  /* ASSIGN  */
    ADD_ASSIGN = 302,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 303,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 304,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 305,              /* DIV_ASSIGN  */
    POW_ASSIGN = 306,              /* POW_ASSIGN  */
    MOD_ASSIGN = 307,              /* MOD_ASSIGN  */
    AND_ASSIGN = 308,              /* AND_ASSIGN  */
    OR_ASSIGN = 309,               /* OR_ASSIGN  */
    GE = 310,                      /* GE  */
    GT = 311,                      /* GT  */
    LE = 312,                      /* LE  */
    LT = 313,                      /* LT  */
    NE = 314,                      /* NE  */
    EQ = 315,                      /* EQ  */
    AND = 316,                     /* AND  */
    OR = 317,                      /* OR  */
    NOT = 318,                     /* NOT  */
    RETURN = 319                   /* RETURN  */
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
  YYSYMBOL_READ = 19,                      /* READ  */
  YYSYMBOL_PUTC = 20,                      /* PUTC  */
  YYSYMBOL_GETC = 21,                      /* GETC  */
  YYSYMBOL_SEMI = 22,                      /* SEMI  */
  YYSYMBOL_COLON = 23,                     /* COLON  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_INC = 26,                       /* INC  */
  YYSYMBOL_DEC = 27,                       /* DEC  */
  YYSYMBOL_MULT = 28,                      /* MULT  */
  YYSYMBOL_DIV = 29,                       /* DIV  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_POW = 31,                       /* POW  */
  YYSYMBOL_NUMBER = 32,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 33,                     /* FLOAT  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_FOR = 38,                       /* FOR  */
  YYSYMBOL_BREAK = 39,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 41,                    /* SWITCH  */
  YYSYMBOL_CASE = 42,                      /* CASE  */
  YYSYMBOL_DEFAULT = 43,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 44,                      /* GOTO  */
  YYSYMBOL_COLEQ = 45,                     /* COLEQ  */
  YYSYMBOL_ASSIGN = 46,                    /* ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 47,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 48,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 49,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 50,                /* DIV_ASSIGN  */
  YYSYMBOL_POW_ASSIGN = 51,                /* POW_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 52,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 53,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 54,                 /* OR_ASSIGN  */
  YYSYMBOL_GE = 55,                        /* GE  */
  YYSYMBOL_GT = 56,                        /* GT  */
  YYSYMBOL_LE = 57,                        /* LE  */
  YYSYMBOL_LT = 58,                        /* LT  */
  YYSYMBOL_NE = 59,                        /* NE  */
  YYSYMBOL_EQ = 60,                        /* EQ  */
  YYSYMBOL_AND = 61,                       /* AND  */
  YYSYMBOL_OR = 62,                        /* OR  */
  YYSYMBOL_NOT = 63,                       /* NOT  */
  YYSYMBOL_RETURN = 64,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_main = 67,                      /* main  */
  YYSYMBOL_fdecls = 68,                    /* fdecls  */
  YYSYMBOL_fdecl = 69,                     /* fdecl  */
  YYSYMBOL_fhead = 70,                     /* fhead  */
  YYSYMBOL_fid = 71,                       /* fid  */
  YYSYMBOL_params = 72,                    /* params  */
  YYSYMBOL_body = 73,                      /* body  */
  YYSYMBOL_stmts = 74,                     /* stmts  */
  YYSYMBOL_decl_var = 75,                  /* decl_var  */
  YYSYMBOL_var_inits = 76,                 /* var_inits  */
  YYSYMBOL_var_init = 77,                  /* var_init  */
  YYSYMBOL_decl_const = 78,                /* decl_const  */
  YYSYMBOL_const_inits = 79,               /* const_inits  */
  YYSYMBOL_const_init = 80,                /* const_init  */
  YYSYMBOL_array_decl = 81,                /* array_decl  */
  YYSYMBOL_array_size = 82,                /* array_size  */
  YYSYMBOL_st = 83,                        /* st  */
  YYSYMBOL_ifstmt = 84,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 85,                 /* whilestmt  */
  YYSYMBOL_dowhilestmt = 86,               /* dowhilestmt  */
  YYSYMBOL_forstmt = 87,                   /* forstmt  */
  YYSYMBOL_switchstmt = 88,                /* switchstmt  */
  YYSYMBOL_cases = 89,                     /* cases  */
  YYSYMBOL_case_item = 90,                 /* case_item  */
  YYSYMBOL_case_default = 91,              /* case_default  */
  YYSYMBOL_cond = 92,                      /* cond  */
  YYSYMBOL_cond_or = 93,                   /* cond_or  */
  YYSYMBOL_cond_and = 94,                  /* cond_and  */
  YYSYMBOL_cond_not = 95,                  /* cond_not  */
  YYSYMBOL_comp = 96,                      /* comp  */
  YYSYMBOL_compound_assignment = 97,       /* compound_assignment  */
  YYSYMBOL_E = 98,                         /* E  */
  YYSYMBOL_ADD_SUB = 99,                   /* ADD_SUB  */
  YYSYMBOL_T = 100,                        /* T  */
  YYSYMBOL_P = 101,                        /* P  */
  YYSYMBOL_F = 102,                        /* F  */
  YYSYMBOL_FUNC_CALL = 103,                /* FUNC_CALL  */
  YYSYMBOL_fparams = 104,                  /* fparams  */
  YYSYMBOL_ac_params = 105,                /* ac_params  */
  YYSYMBOL_fparam = 106,                   /* fparam  */
  YYSYMBOL_arr_ref = 107,                  /* arr_ref  */
  YYSYMBOL_arr_init = 108,                 /* arr_init  */
  YYSYMBOL_arr_elems = 109,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 110,          /* arr_initializer  */
  YYSYMBOL_arr_index = 111                 /* arr_index  */
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
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    69,    73,    80,    83,    87,    92,    99,
     104,   109,   113,   118,   122,   127,   130,   134,   140,   143,
     148,   152,   157,   161,   167,   170,   174,   180,   187,   193,
     209,   212,   215,   218,   221,   224,   227,   230,   234,   238,
     241,   244,   247,   250,   253,   256,   259,   262,   265,   268,
     271,   274,   277,   281,   287,   290,   293,   297,   301,   305,
     309,   314,   317,   321,   326,   329,   333,   338,   341,   346,
     349,   354,   357,   362,   365,   368,   371,   374,   377,   380,
     385,   390,   395,   400,   405,   410,   415,   420,   428,   432,
     435,   440,   443,   446,   451,   454,   457,   460,   463,   468,
     471,   476,   479,   483,   487,   494,   501,   508,   515,   518,
     521,   524,   527,   530,   534,   541,   544,   549,   552,   556,
     560,   566,   572,   575,   578,   583,   586,   591,   595
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
  "RBRA", "LSQR", "RSQR", "WRITE", "WRITELN", "READ", "PUTC", "GETC",
  "SEMI", "COLON", "PLUS", "MINUS", "INC", "DEC", "MULT", "DIV", "MOD",
  "POW", "NUMBER", "FLOAT", "IF", "ELSE", "WHILE", "DO", "FOR", "BREAK",
  "CONTINUE", "SWITCH", "CASE", "DEFAULT", "GOTO", "COLEQ", "ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "POW_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "GE", "GT", "LE", "LT", "NE",
  "EQ", "AND", "OR", "NOT", "RETURN", "$accept", "program", "main",
  "fdecls", "fdecl", "fhead", "fid", "params", "body", "stmts", "decl_var",
  "var_inits", "var_init", "decl_const", "const_inits", "const_init",
  "array_decl", "array_size", "st", "ifstmt", "whilestmt", "dowhilestmt",
  "forstmt", "switchstmt", "cases", "case_item", "case_default", "cond",
  "cond_or", "cond_and", "cond_not", "comp", "compound_assignment", "E",
  "ADD_SUB", "T", "P", "F", "FUNC_CALL", "fparams", "ac_params", "fparam",
  "arr_ref", "arr_init", "arr_elems", "arr_initializer", "arr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,    14,    12,  -126,    49,  -126,  -126,  -126,    49,    42,
      62,  -126,    21,  -126,    60,    61,    63,   200,  -126,   311,
     248,   311,   158,   158,    49,    64,    50,    55,   311,    74,
     269,  -126,   114,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,    65,    66,    38,  -126,    39,     2,     3,  -126,  -126,
      40,     4,  -126,   311,   311,  -126,   290,   311,   311,   311,
     311,   311,   311,   311,   311,    56,   154,  -126,  -126,   158,
    -126,  -126,   103,    79,    84,  -126,  -126,    70,    34,    26,
    -126,    73,  -126,  -126,  -126,    72,    85,   158,    49,    33,
      47,  -126,  -126,   115,    49,    78,   311,  -126,  -126,    96,
      93,  -126,    98,  -126,  -126,  -126,  -126,   290,  -126,   116,
     101,   311,   110,    61,  -126,   311,    63,  -126,  -126,   125,
     132,  -126,   121,   290,   123,   124,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   311,  -126,  -126,   311,   138,    22,
    -126,  -126,  -126,  -126,   332,   332,   103,   103,   103,   103,
    -126,  -126,  -126,   122,   158,   158,   311,   311,   311,   311,
     311,   311,  -126,   158,   134,   117,  -126,  -126,   139,   140,
    -126,   147,  -126,   144,  -126,  -126,  -126,  -126,   311,  -126,
    -126,  -126,    15,  -126,  -126,  -126,   166,  -126,  -126,    26,
      26,  -126,  -126,  -126,  -126,     0,    47,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   164,   158,   311,    18,  -126,  -126,
    -126,  -126,   171,  -126,   290,  -126,  -126,  -126,  -126,  -126,
     170,    49,    49,  -126,   179,  -126,  -126,   311,  -126,  -126,
    -126,   183,    49,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    35,    36,    16,    42,    43,    44,    45,
      46,     0,     0,     0,    11,     0,    20,     0,    19,    22,
       0,     0,    25,   115,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   101,   102,   103,     0,
     112,   113,     0,     0,     0,   109,    89,     0,    90,    93,
      98,   100,   108,   110,    31,     0,     0,     0,     0,    66,
      68,    70,    72,    79,     0,     0,     0,    49,    50,     0,
       0,    48,     0,    13,    15,    41,    34,     0,     8,     0,
       0,     0,    27,     0,    17,     0,     0,    23,   119,     0,
     116,   118,     0,   124,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,     0,   104,   106,     0,     0,   101,
      97,   105,   107,    30,     0,     0,     0,     0,     0,     0,
      32,    33,    71,    54,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,    53,    47,     0,     0,
      10,     0,    21,     0,    18,    26,    24,   114,     0,   127,
     125,   126,     0,   123,    37,    38,     0,    88,   111,    91,
      92,    94,    95,    96,    99,     0,    67,    69,    74,    73,
      76,    75,    77,    78,     0,     0,     0,    65,    62,    40,
      39,    29,     0,   117,     0,   121,   128,    55,    56,    58,
       0,     0,     0,    61,     0,    28,   122,     0,    63,    64,
      60,     0,     0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   189,  -126,  -126,  -126,  -126,    -4,  -126,
    -126,  -126,    86,  -126,  -126,    81,  -126,  -126,   180,    16,
    -126,  -126,  -126,  -126,  -126,    -9,  -126,   -16,  -126,    59,
     -82,  -126,    -2,   -18,  -126,   -81,  -125,   142,    -1,  -126,
    -126,    41,     1,   -50,  -126,     6,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    45,    31,    32,
      33,    47,    48,    34,    51,    52,    49,   112,    35,    36,
      37,    38,    39,    40,   207,   208,   224,    88,    89,    90,
      91,    92,    76,    93,    78,    79,    80,    81,    82,   119,
     120,   121,    83,   181,   182,   183,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    77,    85,    86,    13,   152,   125,    94,    41,    42,
      99,    43,   102,    10,     3,   113,   116,   110,     4,     5,
      95,   191,   192,   193,   194,   114,   117,   214,     5,   215,
      41,    42,    53,    43,    22,   118,   122,    54,   124,   126,
     127,   128,   129,   130,   131,   132,   133,   111,   135,   136,
     108,   109,    14,   138,   146,   147,   148,   169,   144,   145,
     206,   222,    10,   189,   190,    15,    16,    44,    46,    17,
      50,   134,    97,   197,    96,    10,    18,    98,   164,    19,
      20,   100,    21,   107,   153,   115,   141,   105,   106,   168,
     162,   142,   143,   172,   150,   154,    22,   175,    23,    24,
      25,    26,    27,    28,   149,   180,    29,   151,   155,   165,
     139,    67,    68,    69,   163,   166,   186,    15,    16,   187,
     167,    17,    70,   170,    71,   173,    30,    10,   103,    73,
      74,    19,    20,   171,    21,    75,   177,   179,   198,   199,
     200,   201,   202,   203,   178,   184,   185,   204,    22,   188,
      23,    24,    25,    26,    27,    28,   205,   195,    29,   206,
     118,   209,   210,   211,    53,    66,    67,    68,    69,    54,
     156,   157,   158,   159,   160,   161,   212,    70,    30,    71,
     135,   136,   216,    72,    73,    74,   219,   225,   221,   220,
      75,   217,   227,   230,   232,    12,   180,   176,   223,   174,
     137,    57,    58,    59,    60,    61,    62,    63,    64,   231,
      53,   218,   104,   196,   140,    54,     0,   228,   229,   213,
     226,    87,     0,    55,     0,     0,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,    71,
      84,     0,     0,    72,    73,    74,    66,    67,    68,    69,
      75,     0,     0,     0,     0,     0,     0,     0,    70,     0,
      71,   101,     0,     0,    72,    73,    74,    66,    67,    68,
      69,    75,     0,   123,     0,     0,     0,     0,     0,    70,
       0,    71,     0,     0,     0,    72,    73,    74,    66,    67,
      68,    69,    75,     0,     0,     0,     0,     0,     0,     0,
      70,     0,    71,     0,     0,     0,    72,    73,    74,   139,
      67,    68,    69,    75,     0,     0,     0,     0,     0,     0,
       0,    70,     0,    71,     0,     0,     0,    72,    73,    74,
       0,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
       4,    19,    20,    21,     8,    87,    56,    23,    10,    10,
      28,    10,    30,    13,     0,    12,    12,    15,     6,     7,
      24,   146,   147,   148,   149,    22,    22,    12,     7,    14,
      32,    32,    10,    32,    34,    53,    54,    15,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    45,    26,    27,
      11,    12,    10,    69,    28,    29,    30,   107,    24,    25,
      42,    43,    13,   144,   145,     3,     4,     7,     7,     7,
       7,    15,    22,   155,    10,    13,    14,    22,    96,    17,
      18,     7,    20,    45,    88,    45,     7,    22,    22,   107,
      94,     7,    22,   111,    22,    62,    34,   115,    36,    37,
      38,    39,    40,    41,    31,   123,    44,    22,    61,    13,
       7,     8,     9,    10,    36,    22,   134,     3,     4,   137,
      22,     7,    19,     7,    21,    15,    64,    13,    14,    26,
      27,    17,    18,    32,    20,    32,    11,    16,   156,   157,
     158,   159,   160,   161,    12,    22,    22,   163,    34,    11,
      36,    37,    38,    39,    40,    41,    22,    35,    44,    42,
     178,    22,    22,    16,    10,     7,     8,     9,    10,    15,
      55,    56,    57,    58,    59,    60,    32,    19,    64,    21,
      26,    27,    16,    25,    26,    27,    22,    16,   206,   205,
      32,   195,    22,    14,    11,     6,   214,   116,   207,   113,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   227,
      10,   195,    32,   154,    72,    15,    -1,   221,   222,   178,
     214,    63,    -1,    23,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    27,     7,     8,     9,    10,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    27,     7,     8,     9,
      10,    32,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    -1,    25,    26,    27,     7,     8,
       9,    10,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    -1,    25,    26,    27,     7,
       8,     9,    10,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,    68,     0,     6,     7,    67,    69,    70,    71,
      13,    73,    68,    73,    10,     3,     4,     7,    14,    17,
      18,    20,    34,    36,    37,    38,    39,    40,    41,    44,
      64,    73,    74,    75,    78,    83,    84,    85,    86,    87,
      88,    97,   103,   107,     7,    72,     7,    76,    77,    81,
       7,    79,    80,    10,    15,    23,    45,    47,    48,    49,
      50,    51,    52,    53,    54,   111,     7,     8,     9,    10,
      19,    21,    25,    26,    27,    32,    97,    98,    99,   100,
     101,   102,   103,   107,    22,    98,    98,    63,    92,    93,
      94,    95,    96,    98,    92,    73,    10,    22,    22,    98,
       7,    22,    98,    14,    83,    22,    22,    45,    11,    12,
      15,    45,    82,    12,    22,    45,    12,    22,    98,   104,
     105,   106,    98,    13,    98,   108,    98,    98,    98,    98,
      98,    98,    98,    98,    15,    26,    27,    46,    92,     7,
     102,     7,     7,    22,    24,    25,    28,    29,    30,    31,
      22,    22,    95,    73,    62,    61,    55,    56,    57,    58,
      59,    60,    73,    36,    98,    13,    22,    22,    98,   108,
       7,    32,    98,    15,    77,    98,    80,    11,    12,    16,
      98,   108,   109,   110,    22,    22,    98,    98,    11,   100,
     100,   101,   101,   101,   101,    35,    94,    95,    98,    98,
      98,    98,    98,    98,    92,    22,    42,    89,    90,    22,
      22,    16,    32,   106,    12,    14,    16,    73,    84,    22,
      92,    98,    43,    90,    91,    16,   110,    22,    73,    73,
      14,    98,    11,    73
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    67,    68,    68,    69,    70,    71,
      72,    72,    72,    73,    73,    74,    74,    75,    76,    76,
      77,    77,    77,    78,    79,    79,    80,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    85,    86,    87,
      88,    89,    89,    90,    91,    91,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   104,   104,   105,   105,   106,
     107,   108,   109,   109,   109,   110,   110,   111,   111
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
       1,     3,     1,     1,     4,     0,     1,     3,     1,     1,
       2,     3,     3,     1,     0,     1,     1,     3,     4
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
#line 1492 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 69 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1500 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 73 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1510 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 80 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1518 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 83 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1526 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 87 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1535 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 92 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1546 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 99 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1554 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 104 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1564 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 109 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1573 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 113 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1581 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 118 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1590 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 122 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1598 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 127 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1606 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 130 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1614 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 134 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1623 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 140 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1631 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 143 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1639 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 148 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1648 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 152 "cmm.y"
                     {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
}
#line 1658 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 157 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1666 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 161 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1675 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 167 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1683 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 170 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1691 "y.tab.c"
    break;

  case 26: /* const_init: ID COLEQ E  */
#line 174 "cmm.y"
                        {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1701 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 180 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1711 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 187 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1722 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 193 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1732 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 209 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1740 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 212 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1748 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 215 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1756 "y.tab.c"
    break;

  case 33: /* st: PUTC E SEMI  */
#line 218 "cmm.y"
                      {
	yyval.node = new_unary_node(NK_PUTC, yyvsp[-1].node);
}
#line 1764 "y.tab.c"
    break;

  case 34: /* st: FUNC_CALL SEMI  */
#line 221 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1772 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 224 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1780 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 227 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1788 "y.tab.c"
    break;

  case 37: /* st: ID COLEQ E SEMI  */
#line 230 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1797 "y.tab.c"
    break;

  case 38: /* st: ID COLEQ arr_init SEMI  */
#line 234 "cmm.y"
                                 {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1806 "y.tab.c"
    break;

  case 39: /* st: arr_ref COLEQ arr_init SEMI  */
#line 238 "cmm.y"
                                      {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1814 "y.tab.c"
    break;

  case 40: /* st: arr_ref COLEQ E SEMI  */
#line 241 "cmm.y"
                               {
	yyval.node = new_binary_node(NK_ARR_ASSIGN, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1822 "y.tab.c"
    break;

  case 41: /* st: compound_assignment SEMI  */
#line 244 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1830 "y.tab.c"
    break;

  case 42: /* st: ifstmt  */
#line 247 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1838 "y.tab.c"
    break;

  case 43: /* st: whilestmt  */
#line 250 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1846 "y.tab.c"
    break;

  case 44: /* st: dowhilestmt  */
#line 253 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1854 "y.tab.c"
    break;

  case 45: /* st: forstmt  */
#line 256 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1862 "y.tab.c"
    break;

  case 46: /* st: switchstmt  */
#line 259 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1870 "y.tab.c"
    break;

  case 47: /* st: RETURN E SEMI  */
#line 262 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1878 "y.tab.c"
    break;

  case 48: /* st: RETURN SEMI  */
#line 265 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1886 "y.tab.c"
    break;

  case 49: /* st: BREAK SEMI  */
#line 268 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1894 "y.tab.c"
    break;

  case 50: /* st: CONTINUE SEMI  */
#line 271 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1902 "y.tab.c"
    break;

  case 51: /* st: body  */
#line 274 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1910 "y.tab.c"
    break;

  case 52: /* st: ID COLON  */
#line 277 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1919 "y.tab.c"
    break;

  case 53: /* st: GOTO ID SEMI  */
#line 281 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1928 "y.tab.c"
    break;

  case 54: /* ifstmt: IF cond body  */
#line 287 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1936 "y.tab.c"
    break;

  case 55: /* ifstmt: IF cond body ELSE body  */
#line 290 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1944 "y.tab.c"
    break;

  case 56: /* ifstmt: IF cond body ELSE ifstmt  */
#line 293 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1952 "y.tab.c"
    break;

  case 57: /* whilestmt: WHILE cond body  */
#line 297 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1960 "y.tab.c"
    break;

  case 58: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 301 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1968 "y.tab.c"
    break;

  case 59: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 305 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1976 "y.tab.c"
    break;

  case 60: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 309 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1984 "y.tab.c"
    break;

  case 61: /* cases: cases case_item  */
#line 314 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1992 "y.tab.c"
    break;

  case 62: /* cases: case_item  */
#line 317 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2000 "y.tab.c"
    break;

  case 63: /* case_item: CASE E body  */
#line 321 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 2008 "y.tab.c"
    break;

  case 64: /* case_default: DEFAULT body  */
#line 326 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 2016 "y.tab.c"
    break;

  case 65: /* case_default: %empty  */
#line 329 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2024 "y.tab.c"
    break;

  case 66: /* cond: cond_or  */
#line 333 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2032 "y.tab.c"
    break;

  case 67: /* cond_or: cond_or OR cond_and  */
#line 338 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2040 "y.tab.c"
    break;

  case 68: /* cond_or: cond_and  */
#line 341 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2048 "y.tab.c"
    break;

  case 69: /* cond_and: cond_and AND cond_not  */
#line 346 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2056 "y.tab.c"
    break;

  case 70: /* cond_and: cond_not  */
#line 349 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2064 "y.tab.c"
    break;

  case 71: /* cond_not: NOT cond_not  */
#line 354 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2072 "y.tab.c"
    break;

  case 72: /* cond_not: comp  */
#line 357 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2080 "y.tab.c"
    break;

  case 73: /* comp: E GT E  */
#line 362 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2088 "y.tab.c"
    break;

  case 74: /* comp: E GE E  */
#line 365 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2096 "y.tab.c"
    break;

  case 75: /* comp: E LT E  */
#line 368 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2104 "y.tab.c"
    break;

  case 76: /* comp: E LE E  */
#line 371 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2112 "y.tab.c"
    break;

  case 77: /* comp: E NE E  */
#line 374 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2120 "y.tab.c"
    break;

  case 78: /* comp: E EQ E  */
#line 377 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2128 "y.tab.c"
    break;

  case 79: /* comp: E  */
#line 380 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2136 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID ADD_ASSIGN E  */
#line 385 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2146 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID SUB_ASSIGN E  */
#line 390 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2156 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID MUL_ASSIGN E  */
#line 395 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2166 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID DIV_ASSIGN E  */
#line 400 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2176 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID POW_ASSIGN E  */
#line 405 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2186 "y.tab.c"
    break;

  case 85: /* compound_assignment: ID MOD_ASSIGN E  */
#line 410 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2196 "y.tab.c"
    break;

  case 86: /* compound_assignment: ID AND_ASSIGN E  */
#line 415 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2206 "y.tab.c"
    break;

  case 87: /* compound_assignment: ID OR_ASSIGN E  */
#line 420 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2216 "y.tab.c"
    break;

  case 88: /* E: ID ASSIGN E  */
#line 428 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2225 "y.tab.c"
    break;

  case 89: /* E: compound_assignment  */
#line 432 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2233 "y.tab.c"
    break;

  case 90: /* E: ADD_SUB  */
#line 435 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2241 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB PLUS T  */
#line 440 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2249 "y.tab.c"
    break;

  case 92: /* ADD_SUB: ADD_SUB MINUS T  */
#line 443 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2257 "y.tab.c"
    break;

  case 93: /* ADD_SUB: T  */
#line 446 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2265 "y.tab.c"
    break;

  case 94: /* T: T MULT P  */
#line 451 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2273 "y.tab.c"
    break;

  case 95: /* T: T DIV P  */
#line 454 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2281 "y.tab.c"
    break;

  case 96: /* T: T MOD P  */
#line 457 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2289 "y.tab.c"
    break;

  case 97: /* T: MINUS F  */
#line 460 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2297 "y.tab.c"
    break;

  case 98: /* T: P  */
#line 463 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2305 "y.tab.c"
    break;

  case 99: /* P: F POW P  */
#line 468 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2313 "y.tab.c"
    break;

  case 100: /* P: F  */
#line 471 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2321 "y.tab.c"
    break;

  case 101: /* F: ID  */
#line 476 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2329 "y.tab.c"
    break;

  case 102: /* F: LIT_TRUE  */
#line 479 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2338 "y.tab.c"
    break;

  case 103: /* F: LIT_FALSE  */
#line 483 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2347 "y.tab.c"
    break;

  case 104: /* F: ID INC  */
#line 487 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2359 "y.tab.c"
    break;

  case 105: /* F: INC ID  */
#line 494 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2371 "y.tab.c"
    break;

  case 106: /* F: ID DEC  */
#line 501 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2383 "y.tab.c"
    break;

  case 107: /* F: DEC ID  */
#line 508 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2395 "y.tab.c"
    break;

  case 108: /* F: FUNC_CALL  */
#line 515 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2403 "y.tab.c"
    break;

  case 109: /* F: NUMBER  */
#line 518 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2411 "y.tab.c"
    break;

  case 110: /* F: arr_ref  */
#line 521 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2419 "y.tab.c"
    break;

  case 111: /* F: LPAR cond RPAR  */
#line 524 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2427 "y.tab.c"
    break;

  case 112: /* F: READ  */
#line 527 "cmm.y"
               {
	yyval.node = new_node(NK_READ);
}
#line 2435 "y.tab.c"
    break;

  case 113: /* F: GETC  */
#line 530 "cmm.y"
               {
	yyval.node = new_node(NK_GETC);
}
#line 2443 "y.tab.c"
    break;

  case 114: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 534 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2453 "y.tab.c"
    break;

  case 115: /* fparams: %empty  */
#line 541 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2461 "y.tab.c"
    break;

  case 116: /* fparams: ac_params  */
#line 544 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2469 "y.tab.c"
    break;

  case 117: /* ac_params: ac_params COMMA fparam  */
#line 549 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2477 "y.tab.c"
    break;

  case 118: /* ac_params: fparam  */
#line 552 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2485 "y.tab.c"
    break;

  case 119: /* fparam: E  */
#line 556 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2493 "y.tab.c"
    break;

  case 120: /* arr_ref: ID arr_index  */
#line 560 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2503 "y.tab.c"
    break;

  case 121: /* arr_init: LBRA arr_elems RBRA  */
#line 566 "cmm.y"
                               {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2512 "y.tab.c"
    break;

  case 122: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 572 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2520 "y.tab.c"
    break;

  case 123: /* arr_elems: arr_initializer  */
#line 575 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2528 "y.tab.c"
    break;

  case 124: /* arr_elems: %empty  */
#line 578 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2536 "y.tab.c"
    break;

  case 125: /* arr_initializer: E  */
#line 583 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2544 "y.tab.c"
    break;

  case 126: /* arr_initializer: arr_init  */
#line 586 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2552 "y.tab.c"
    break;

  case 127: /* arr_index: LSQR E RSQR  */
#line 591 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2561 "y.tab.c"
    break;

  case 128: /* arr_index: arr_index LSQR E RSQR  */
#line 595 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2571 "y.tab.c"
    break;


#line 2575 "y.tab.c"

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

#line 601 "cmm.y"


#include "lex.yy.c"
