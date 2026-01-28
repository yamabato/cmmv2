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
  YYSYMBOL_fparam = 104,                   /* fparam  */
  YYSYMBOL_arr_ref = 105,                  /* arr_ref  */
  YYSYMBOL_arr_init = 106,                 /* arr_init  */
  YYSYMBOL_arr_elems = 107,                /* arr_elems  */
  YYSYMBOL_arr_initializer = 108,          /* arr_initializer  */
  YYSYMBOL_arr_index = 109                 /* arr_index  */
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
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

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
     148,   152,   157,   161,   167,   170,   174,   180,   187,   193,
     209,   212,   215,   218,   222,   225,   228,   231,   235,   239,
     242,   245,   248,   251,   254,   257,   260,   263,   266,   269,
     272,   275,   279,   285,   288,   291,   295,   299,   303,   307,
     312,   315,   319,   324,   327,   331,   336,   339,   344,   347,
     352,   355,   360,   363,   366,   369,   372,   375,   378,   383,
     388,   393,   398,   403,   408,   413,   418,   426,   430,   433,
     438,   441,   444,   449,   452,   455,   458,   461,   466,   469,
     474,   477,   481,   485,   492,   499,   506,   513,   516,   519,
     522,   526,   533,   536,   541,   544,   548,   552,   558,   564,
     567,   570,   575,   578,   583,   587
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
  "T", "P", "F", "FUNC_CALL", "fparams", "ac_params", "fparam", "arr_ref",
  "arr_init", "arr_elems", "arr_initializer", "arr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -94,    10,   114,   -94,     9,   -94,   -94,   -94,     9,    14,
     112,   -94,    27,   -94,    50,    59,    63,    13,   -94,   230,
      70,     8,     8,     9,    58,    53,    67,   230,    83,    91,
     153,   -94,   194,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,    85,    99,    39,   -94,   111,     5,     2,   -94,   -94,
      81,    55,   -94,   230,   230,   -94,   157,   230,   230,   230,
     230,   230,   230,   230,   230,   127,    61,   -94,   -94,     8,
     186,   137,   144,   -94,   -94,   133,   106,    75,   -94,   128,
     -94,   -94,   -94,   136,     8,     9,    98,   100,   -94,   -94,
     163,     9,   135,   230,   -94,   -94,   156,   152,   154,   -94,
     159,   -94,   -94,   -94,   -94,   171,   -94,   180,   160,   230,
     175,    59,   -94,   230,    63,   -94,   -94,   188,   179,   -94,
     184,   157,   183,   185,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   230,   -94,   -94,   230,   192,    73,   -94,   -94,
     -94,   -94,   238,   238,   186,   186,   186,   186,   -94,   -94,
     174,     8,     8,   230,   230,   230,   230,   230,   230,   -94,
       8,   203,   187,   -94,   -94,   -94,   204,   -94,   217,   -94,
     205,   -94,   -94,   -94,   -94,   230,   -94,   -94,   -94,    -1,
     -94,   -94,   -94,   225,   -94,   -94,    75,    75,   -94,   -94,
     -94,   -94,    -5,   100,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   223,     8,   230,    92,   -94,   -94,   -94,   227,   -94,
     157,   -94,   -94,   -94,   -94,   -94,   231,     9,     9,   -94,
     235,   -94,   -94,   230,   -94,   -94,   -94,   233,     9,   -94
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     3,     1,     0,     9,     6,     5,     0,     0,
       0,     4,     2,     7,    12,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,    35,    36,    16,    41,    42,    43,    44,
      45,     0,     0,     0,    11,     0,    20,     0,    19,    22,
       0,     0,    25,   112,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   100,   101,   102,     0,
       0,     0,     0,   108,    88,     0,    89,    92,    97,    99,
     107,   109,    31,     0,     0,     0,    65,    67,    69,    71,
      78,     0,     0,     0,    48,    49,     0,     0,     0,    47,
       0,    13,    15,    40,    34,     0,     8,     0,     0,     0,
      27,     0,    17,     0,     0,    23,   116,     0,   113,   115,
       0,   121,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,     0,   103,   105,     0,     0,   100,    96,   104,
     106,    30,     0,     0,     0,     0,     0,     0,    32,    70,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,     0,     0,    52,    33,    46,     0,    10,     0,    21,
       0,    18,    26,    24,   111,     0,   124,   122,   123,     0,
     120,    37,    38,     0,    87,   110,    90,    91,    93,    94,
      95,    98,     0,    66,    68,    73,    72,    75,    74,    76,
      77,     0,     0,     0,    64,    61,    39,    29,     0,   114,
       0,   118,   125,    54,    55,    57,     0,     0,     0,    60,
       0,    28,   119,     0,    62,    63,    59,     0,     0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   245,   -94,   -94,   -94,   -94,    -4,   -94,
     -94,   -94,   146,   -94,   -94,   141,   -94,   -94,   226,    71,
     -94,   -94,   -94,   -94,   -94,    60,   -94,   -19,   -94,   115,
     -79,   -94,    -3,   -18,   -94,    -9,   -93,   195,    15,   -94,
     -94,    93,    17,   -50,   -94,    62,   -94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    45,    31,    32,
      33,    47,    48,    34,    51,    52,    49,   110,    35,    36,
      37,    38,    39,    40,   204,   205,   220,    85,    86,    87,
      88,    89,    74,    90,    76,    77,    78,    79,    80,   117,
     118,   119,    81,   178,   179,   180,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    75,    83,    91,    13,   149,   123,    41,    10,    96,
       3,   210,   100,   211,   111,    66,    67,    68,    69,    92,
     108,   112,    10,    53,    14,    42,    21,    43,    54,    41,
      70,    71,    72,    55,     5,   116,   120,    73,   122,   124,
     125,   126,   127,   128,   129,   130,   131,    42,   109,    43,
     136,   188,   189,   190,   191,   166,    56,    44,    57,    58,
      59,    60,    61,    62,    63,    64,    46,   114,    93,    84,
      50,    53,    94,   194,   115,   161,    54,    66,    67,    68,
      69,   150,   105,    53,   133,   134,    95,   159,    54,    82,
      97,   169,    70,    71,    72,   172,   133,   134,    98,    73,
     144,   145,   146,   177,   103,   135,    57,    58,    59,    60,
      61,    62,    63,    64,   183,    15,    16,   184,   104,    17,
       4,     5,   106,   107,   113,    10,    18,   142,   143,    19,
      20,   203,   218,   186,   187,   195,   196,   197,   198,   199,
     200,   201,   132,    21,   139,    22,    23,    24,    25,    26,
      27,   140,   141,    28,    29,   148,   147,   116,   151,   152,
      66,    67,    68,    69,    66,    67,    68,    69,   160,   162,
     121,   163,    99,   164,    30,    70,    71,    72,   165,    70,
      71,    72,    73,   216,   121,   217,    73,   167,   213,   168,
     170,   175,   177,   137,    67,    68,    69,    15,    16,   174,
     176,    17,   181,   185,   182,   227,   192,    10,   101,    71,
      72,    19,    20,   224,   225,    73,   153,   154,   155,   156,
     157,   158,   202,   206,   229,    21,   203,    22,    23,    24,
      25,    26,    27,   207,   208,    28,    29,    66,    67,    68,
      69,   212,   215,   221,   228,   137,    67,    68,    69,   226,
     223,    12,    70,    71,    72,   173,    30,   171,   102,    73,
      70,    71,    72,   214,   219,   138,   193,    73,   209,     0,
       0,     0,   222
};

static const yytype_int16 yycheck[] =
{
       4,    19,    20,    22,     8,    84,    56,    10,    13,    27,
       0,    12,    30,    14,    12,     7,     8,     9,    10,    23,
      15,    19,    13,    10,    10,    10,    31,    10,    15,    32,
      22,    23,    24,    20,     7,    53,    54,    29,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    32,    43,    32,
      69,   144,   145,   146,   147,   105,    43,     7,    45,    46,
      47,    48,    49,    50,    51,    52,     7,    12,    10,    61,
       7,    10,    19,   152,    19,    93,    15,     7,     8,     9,
      10,    85,    43,    10,    23,    24,    19,    91,    15,    19,
       7,   109,    22,    23,    24,   113,    23,    24,     7,    29,
      25,    26,    27,   121,    19,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   132,     3,     4,   135,    19,     7,
       6,     7,    11,    12,    43,    13,    14,    21,    22,    17,
      18,    39,    40,   142,   143,   153,   154,   155,   156,   157,
     158,   160,    15,    31,     7,    33,    34,    35,    36,    37,
      38,     7,    19,    41,    42,    19,    28,   175,    60,    59,
       7,     8,     9,    10,     7,     8,     9,    10,    33,    13,
      13,    19,    19,    19,    62,    22,    23,    24,    19,    22,
      23,    24,    29,   202,    13,   203,    29,     7,   192,    29,
      15,    12,   210,     7,     8,     9,    10,     3,     4,    11,
      16,     7,    19,    11,    19,   223,    32,    13,    14,    23,
      24,    17,    18,   217,   218,    29,    53,    54,    55,    56,
      57,    58,    19,    19,   228,    31,    39,    33,    34,    35,
      36,    37,    38,    16,    29,    41,    42,     7,     8,     9,
      10,    16,    19,    16,    11,     7,     8,     9,    10,    14,
      19,     6,    22,    23,    24,   114,    62,   111,    32,    29,
      22,    23,    24,   192,   204,    70,   151,    29,   175,    -1,
      -1,    -1,   210
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    64,    66,     0,     6,     7,    65,    67,    68,    69,
      13,    71,    66,    71,    10,     3,     4,     7,    14,    17,
      18,    31,    33,    34,    35,    36,    37,    38,    41,    42,
      62,    71,    72,    73,    76,    81,    82,    83,    84,    85,
      86,    95,   101,   105,     7,    70,     7,    74,    75,    79,
       7,    77,    78,    10,    15,    20,    43,    45,    46,    47,
      48,    49,    50,    51,    52,   109,     7,     8,     9,    10,
      22,    23,    24,    29,    95,    96,    97,    98,    99,   100,
     101,   105,    19,    96,    61,    90,    91,    92,    93,    94,
      96,    90,    71,    10,    19,    19,    96,     7,     7,    19,
      96,    14,    81,    19,    19,    43,    11,    12,    15,    43,
      80,    12,    19,    43,    12,    19,    96,   102,   103,   104,
      96,    13,    96,   106,    96,    96,    96,    96,    96,    96,
      96,    96,    15,    23,    24,    44,    90,     7,   100,     7,
       7,    19,    21,    22,    25,    26,    27,    28,    19,    93,
      71,    60,    59,    53,    54,    55,    56,    57,    58,    71,
      33,    96,    13,    19,    19,    19,   106,     7,    29,    96,
      15,    75,    96,    78,    11,    12,    16,    96,   106,   107,
     108,    19,    19,    96,    96,    11,    98,    98,    99,    99,
      99,    99,    32,    92,    93,    96,    96,    96,    96,    96,
      96,    90,    19,    39,    87,    88,    19,    16,    29,   104,
      12,    14,    16,    71,    82,    19,    90,    96,    40,    88,
      89,    16,   108,    19,    71,    71,    14,    96,    11,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    65,    66,    66,    67,    68,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    75,    76,    77,    77,    78,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    83,    84,    85,    86,
      87,    87,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   102,   102,   103,   103,   104,   105,   106,   107,
     107,   107,   108,   108,   109,   109
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     0,     2,     4,     1,
       3,     1,     0,     3,     2,     2,     1,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     3,     2,     4,     3,
       3,     2,     3,     3,     2,     1,     1,     4,     4,     4,
       2,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       1,     2,     3,     3,     5,     5,     3,     5,     9,     6,
       2,     1,     3,     2,     0,     1,     3,     1,     3,     1,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     1,     3,     3,     3,     2,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       3,     4,     0,     1,     3,     1,     1,     2,     3,     3,
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
#line 65 "cmm.y"
                             {
	Node *node = append_node(yyvsp[-2].node, yyvsp[-1].node);
	ast_root = append_node(node, yyvsp[0].node);
}
#line 1467 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 69 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1475 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 73 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1485 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 80 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1493 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 83 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1501 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 87 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1510 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 92 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1521 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 99 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1529 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 104 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1539 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 109 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1548 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 113 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1556 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 118 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1565 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 122 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1573 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 127 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1581 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 130 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1589 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 134 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1598 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 140 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1606 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 143 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1614 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 148 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1623 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 152 "cmm.y"
                     {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
}
#line 1633 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 157 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1641 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 161 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1650 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 167 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1658 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 170 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1666 "y.tab.c"
    break;

  case 26: /* const_init: ID COLEQ E  */
#line 174 "cmm.y"
                        {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1676 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 180 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1686 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 187 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1697 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 193 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1707 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 209 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1715 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 212 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1723 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 215 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1731 "y.tab.c"
    break;

  case 33: /* st: READ ID SEMI  */
#line 218 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1740 "y.tab.c"
    break;

  case 34: /* st: FUNC_CALL SEMI  */
#line 222 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1748 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 225 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1756 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 228 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1764 "y.tab.c"
    break;

  case 37: /* st: ID COLEQ E SEMI  */
#line 231 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1773 "y.tab.c"
    break;

  case 38: /* st: ID COLEQ arr_init SEMI  */
#line 235 "cmm.y"
                                 {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1782 "y.tab.c"
    break;

  case 39: /* st: arr_ref COLEQ arr_init SEMI  */
#line 239 "cmm.y"
                                      {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1790 "y.tab.c"
    break;

  case 40: /* st: compound_assignment SEMI  */
#line 242 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1798 "y.tab.c"
    break;

  case 41: /* st: ifstmt  */
#line 245 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1806 "y.tab.c"
    break;

  case 42: /* st: whilestmt  */
#line 248 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1814 "y.tab.c"
    break;

  case 43: /* st: dowhilestmt  */
#line 251 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1822 "y.tab.c"
    break;

  case 44: /* st: forstmt  */
#line 254 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1830 "y.tab.c"
    break;

  case 45: /* st: switchstmt  */
#line 257 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1838 "y.tab.c"
    break;

  case 46: /* st: RETURN E SEMI  */
#line 260 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1846 "y.tab.c"
    break;

  case 47: /* st: RETURN SEMI  */
#line 263 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1854 "y.tab.c"
    break;

  case 48: /* st: BREAK SEMI  */
#line 266 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1862 "y.tab.c"
    break;

  case 49: /* st: CONTINUE SEMI  */
#line 269 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1870 "y.tab.c"
    break;

  case 50: /* st: body  */
#line 272 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1878 "y.tab.c"
    break;

  case 51: /* st: ID COLON  */
#line 275 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1887 "y.tab.c"
    break;

  case 52: /* st: GOTO ID SEMI  */
#line 279 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1896 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body  */
#line 285 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1904 "y.tab.c"
    break;

  case 54: /* ifstmt: IF cond body ELSE body  */
#line 288 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1912 "y.tab.c"
    break;

  case 55: /* ifstmt: IF cond body ELSE ifstmt  */
#line 291 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1920 "y.tab.c"
    break;

  case 56: /* whilestmt: WHILE cond body  */
#line 295 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1928 "y.tab.c"
    break;

  case 57: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 299 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1936 "y.tab.c"
    break;

  case 58: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 303 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1944 "y.tab.c"
    break;

  case 59: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 307 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1952 "y.tab.c"
    break;

  case 60: /* cases: cases case_item  */
#line 312 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1960 "y.tab.c"
    break;

  case 61: /* cases: case_item  */
#line 315 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1968 "y.tab.c"
    break;

  case 62: /* case_item: CASE E body  */
#line 319 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1976 "y.tab.c"
    break;

  case 63: /* case_default: DEFAULT body  */
#line 324 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 1984 "y.tab.c"
    break;

  case 64: /* case_default: %empty  */
#line 327 "cmm.y"
          {
	yyval.node = NULL;
}
#line 1992 "y.tab.c"
    break;

  case 65: /* cond: cond_or  */
#line 331 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2000 "y.tab.c"
    break;

  case 66: /* cond_or: cond_or OR cond_and  */
#line 336 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2008 "y.tab.c"
    break;

  case 67: /* cond_or: cond_and  */
#line 339 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2016 "y.tab.c"
    break;

  case 68: /* cond_and: cond_and AND cond_not  */
#line 344 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2024 "y.tab.c"
    break;

  case 69: /* cond_and: cond_not  */
#line 347 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2032 "y.tab.c"
    break;

  case 70: /* cond_not: NOT cond_not  */
#line 352 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2040 "y.tab.c"
    break;

  case 71: /* cond_not: comp  */
#line 355 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2048 "y.tab.c"
    break;

  case 72: /* comp: E GT E  */
#line 360 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2056 "y.tab.c"
    break;

  case 73: /* comp: E GE E  */
#line 363 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2064 "y.tab.c"
    break;

  case 74: /* comp: E LT E  */
#line 366 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2072 "y.tab.c"
    break;

  case 75: /* comp: E LE E  */
#line 369 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2080 "y.tab.c"
    break;

  case 76: /* comp: E NE E  */
#line 372 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2088 "y.tab.c"
    break;

  case 77: /* comp: E EQ E  */
#line 375 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2096 "y.tab.c"
    break;

  case 78: /* comp: E  */
#line 378 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2104 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID ADD_ASSIGN E  */
#line 383 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2114 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID SUB_ASSIGN E  */
#line 388 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2124 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID MUL_ASSIGN E  */
#line 393 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2134 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID DIV_ASSIGN E  */
#line 398 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2144 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID POW_ASSIGN E  */
#line 403 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2154 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID MOD_ASSIGN E  */
#line 408 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2164 "y.tab.c"
    break;

  case 85: /* compound_assignment: ID AND_ASSIGN E  */
#line 413 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2174 "y.tab.c"
    break;

  case 86: /* compound_assignment: ID OR_ASSIGN E  */
#line 418 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2184 "y.tab.c"
    break;

  case 87: /* E: ID ASSIGN E  */
#line 426 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2193 "y.tab.c"
    break;

  case 88: /* E: compound_assignment  */
#line 430 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2201 "y.tab.c"
    break;

  case 89: /* E: ADD_SUB  */
#line 433 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2209 "y.tab.c"
    break;

  case 90: /* ADD_SUB: ADD_SUB PLUS T  */
#line 438 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2217 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB MINUS T  */
#line 441 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2225 "y.tab.c"
    break;

  case 92: /* ADD_SUB: T  */
#line 444 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2233 "y.tab.c"
    break;

  case 93: /* T: T MULT P  */
#line 449 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2241 "y.tab.c"
    break;

  case 94: /* T: T DIV P  */
#line 452 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2249 "y.tab.c"
    break;

  case 95: /* T: T MOD P  */
#line 455 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2257 "y.tab.c"
    break;

  case 96: /* T: MINUS F  */
#line 458 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2265 "y.tab.c"
    break;

  case 97: /* T: P  */
#line 461 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2273 "y.tab.c"
    break;

  case 98: /* P: F POW P  */
#line 466 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2281 "y.tab.c"
    break;

  case 99: /* P: F  */
#line 469 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2289 "y.tab.c"
    break;

  case 100: /* F: ID  */
#line 474 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2297 "y.tab.c"
    break;

  case 101: /* F: LIT_TRUE  */
#line 477 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2306 "y.tab.c"
    break;

  case 102: /* F: LIT_FALSE  */
#line 481 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2315 "y.tab.c"
    break;

  case 103: /* F: ID INC  */
#line 485 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_SUB, inc, one);
}
#line 2327 "y.tab.c"
    break;

  case 104: /* F: INC ID  */
#line 492 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = inc;
}
#line 2339 "y.tab.c"
    break;

  case 105: /* F: ID DEC  */
#line 499 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = new_binary_node(NK_ADD, dec, one);
}
#line 2351 "y.tab.c"
    break;

  case 106: /* F: DEC ID  */
#line 506 "cmm.y"
                 {
	Node *id  = new_id_node(yyvsp[-1].name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	yyval.node = dec;
}
#line 2363 "y.tab.c"
    break;

  case 107: /* F: FUNC_CALL  */
#line 513 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2371 "y.tab.c"
    break;

  case 108: /* F: NUMBER  */
#line 516 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2379 "y.tab.c"
    break;

  case 109: /* F: arr_ref  */
#line 519 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2387 "y.tab.c"
    break;

  case 110: /* F: LPAR cond RPAR  */
#line 522 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2395 "y.tab.c"
    break;

  case 111: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 526 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2405 "y.tab.c"
    break;

  case 112: /* fparams: %empty  */
#line 533 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2413 "y.tab.c"
    break;

  case 113: /* fparams: ac_params  */
#line 536 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2421 "y.tab.c"
    break;

  case 114: /* ac_params: ac_params COMMA fparam  */
#line 541 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2429 "y.tab.c"
    break;

  case 115: /* ac_params: fparam  */
#line 544 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2437 "y.tab.c"
    break;

  case 116: /* fparam: E  */
#line 548 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2445 "y.tab.c"
    break;

  case 117: /* arr_ref: ID arr_index  */
#line 552 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2455 "y.tab.c"
    break;

  case 118: /* arr_init: LBRA arr_elems RBRA  */
#line 558 "cmm.y"
                               {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2464 "y.tab.c"
    break;

  case 119: /* arr_elems: arr_elems COMMA arr_initializer  */
#line 564 "cmm.y"
                                          {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2472 "y.tab.c"
    break;

  case 120: /* arr_elems: arr_initializer  */
#line 567 "cmm.y"
                          {
	yyval.node = yyvsp[0].node;
}
#line 2480 "y.tab.c"
    break;

  case 121: /* arr_elems: %empty  */
#line 570 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2488 "y.tab.c"
    break;

  case 122: /* arr_initializer: E  */
#line 575 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2496 "y.tab.c"
    break;

  case 123: /* arr_initializer: arr_init  */
#line 578 "cmm.y"
                   {
	yyval.node = yyvsp[0].node->right;
}
#line 2504 "y.tab.c"
    break;

  case 124: /* arr_index: LSQR E RSQR  */
#line 583 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2513 "y.tab.c"
    break;

  case 125: /* arr_index: arr_index LSQR E RSQR  */
#line 587 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2523 "y.tab.c"
    break;


#line 2527 "y.tab.c"

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

#line 593 "cmm.y"


#include "lex.yy.c"
