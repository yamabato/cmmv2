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
  YYSYMBOL_arr_index = 108                 /* arr_index  */
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
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

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
     567,   570,   575,   579
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
  "arr_init", "arr_elems", "arr_index", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -80,    14,    21,   -80,    -5,   -80,   -80,   -80,    -5,     0,
     112,   -80,    40,   -80,    44,    46,    57,   187,   -80,   236,
      70,     8,     8,    -5,    76,    69,    71,   236,    91,    95,
      99,   -80,   158,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,    85,    86,    77,   -80,    11,     6,    51,   -80,   -80,
      81,    53,   -80,   236,   236,   -80,   218,   236,   236,   236,
     236,   236,   236,   236,   236,   116,    10,   -80,   -80,     8,
     254,   120,   125,   -80,   -80,   114,    75,    41,   -80,   106,
     -80,   -80,   -80,   123,     8,    -5,    84,    92,   -80,   -80,
     160,    -5,   119,   236,   -80,   -80,   142,   137,   139,   -80,
     140,   -80,   -80,   -80,   -80,   147,   -80,   156,   135,   236,
     151,    46,   -80,   236,    57,   -80,   -80,   157,   155,   -80,
     153,   236,   154,   159,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   236,   -80,   -80,   236,   166,    61,   -80,   -80,
     -80,   -80,   244,   244,   254,   254,   254,   254,   -80,   -80,
     138,     8,     8,   236,   236,   236,   236,   236,   236,   -80,
       8,   161,   143,   -80,   -80,   -80,   165,   -80,   163,   -80,
     169,   -80,   -80,   -80,   -80,   236,   -80,   -80,    -1,   -80,
     -80,   171,   -80,   -80,    41,    41,   -80,   -80,   -80,   -80,
      -7,    92,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   182,
       8,   236,    43,   -80,   -80,   -80,   172,   -80,   236,   -80,
     -80,   -80,   -80,   -80,   185,    -5,    -5,   -80,   191,   -80,
     -80,   236,   -80,   -80,   -80,   174,    -5,   -80
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
       0,    18,    26,    24,   111,     0,   122,   120,     0,    37,
      38,     0,    87,   110,    90,    91,    93,    94,    95,    98,
       0,    66,    68,    73,    72,    75,    74,    76,    77,     0,
       0,     0,    64,    61,    39,    29,     0,   114,     0,   118,
     123,    54,    55,    57,     0,     0,     0,    60,     0,    28,
     119,     0,    62,    63,    59,     0,     0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   200,   -80,   -80,   -80,   -80,    -4,   -80,
     -80,   -80,    97,   -80,   -80,    96,   -80,   -80,   177,    29,
     -80,   -80,   -80,   -80,   -80,    19,   -80,   -19,   -80,    72,
     -79,   -80,    -3,   -18,   -80,   -42,   -34,   178,    16,   -80,
     -80,    49,    42,   124,   -80,   -80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     6,     2,     7,     8,     9,    45,    31,    32,
      33,    47,    48,    34,    51,    52,    49,   110,    35,    36,
      37,    38,    39,    40,   202,   203,   218,    85,    86,    87,
      88,    89,    74,    90,    76,    77,    78,    79,    80,   117,
     118,   119,    81,   123,   178,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    75,    83,    91,    13,   149,    10,    41,    10,    96,
      14,   208,   100,   209,     3,    66,    67,    68,    69,    92,
      53,   108,   106,   107,    21,    54,    42,     4,     5,    41,
      70,    71,    72,   133,   134,   116,   120,    73,   122,   124,
     125,   126,   127,   128,   129,   130,   131,     5,    42,   109,
     136,    44,    43,    46,   135,    57,    58,    59,    60,    61,
      62,    63,    64,   111,    50,   114,   144,   145,   146,    84,
     112,    53,   115,   192,    43,   161,    54,    66,    67,    68,
      69,   150,   201,   216,   133,   134,    93,   159,    94,    82,
      95,   169,    70,    71,    72,   172,   142,   143,    97,    73,
     184,   185,    98,   177,   103,   104,    66,    67,    68,    69,
     186,   187,   188,   189,   181,    15,    16,   182,    99,    17,
     105,    70,    71,    72,   113,    10,    18,   139,    73,    19,
      20,   132,   140,   141,   147,   193,   194,   195,   196,   197,
     198,   199,   148,    21,   151,    22,    23,    24,    25,    26,
      27,   152,   160,    28,    29,   162,   163,   116,   164,   165,
     121,    15,    16,   167,   168,    17,   170,   175,   174,   176,
     190,    10,   101,   179,    30,    19,    20,   183,   180,   205,
     200,   214,   201,   215,   204,   226,   211,   210,   219,    21,
     220,    22,    23,    24,    25,    26,    27,    53,   206,    28,
      29,   213,    54,   225,   221,   224,    12,    55,   171,   102,
     173,   222,   223,   153,   154,   155,   156,   157,   158,   212,
      30,   217,   227,   191,   207,    66,    67,    68,    69,   166,
      56,   121,    57,    58,    59,    60,    61,    62,    63,    64,
      70,    71,    72,    66,    67,    68,    69,    73,   138,     0,
       0,   137,    67,    68,    69,     0,     0,     0,    70,    71,
      72,   137,    67,    68,    69,    73,    70,    71,    72,     0,
       0,     0,     0,    73,     0,     0,     0,    71,    72,     0,
       0,     0,     0,    73
};

static const yytype_int16 yycheck[] =
{
       4,    19,    20,    22,     8,    84,    13,    10,    13,    27,
      10,    12,    30,    14,     0,     7,     8,     9,    10,    23,
      10,    15,    11,    12,    31,    15,    10,     6,     7,    32,
      22,    23,    24,    23,    24,    53,    54,    29,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     7,    32,    43,
      69,     7,    10,     7,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    12,     7,    12,    25,    26,    27,    61,
      19,    10,    19,   152,    32,    93,    15,     7,     8,     9,
      10,    85,    39,    40,    23,    24,    10,    91,    19,    19,
      19,   109,    22,    23,    24,   113,    21,    22,     7,    29,
     142,   143,     7,   121,    19,    19,     7,     8,     9,    10,
     144,   145,   146,   147,   132,     3,     4,   135,    19,     7,
      43,    22,    23,    24,    43,    13,    14,     7,    29,    17,
      18,    15,     7,    19,    28,   153,   154,   155,   156,   157,
     158,   160,    19,    31,    60,    33,    34,    35,    36,    37,
      38,    59,    33,    41,    42,    13,    19,   175,    19,    19,
      13,     3,     4,     7,    29,     7,    15,    12,    11,    16,
      32,    13,    14,    19,    62,    17,    18,    11,    19,    16,
      19,   200,    39,   201,    19,    11,   190,    16,    16,    31,
     208,    33,    34,    35,    36,    37,    38,    10,    29,    41,
      42,    19,    15,   221,    19,    14,     6,    20,   111,    32,
     114,   215,   216,    53,    54,    55,    56,    57,    58,   190,
      62,   202,   226,   151,   175,     7,     8,     9,    10,   105,
      43,    13,    45,    46,    47,    48,    49,    50,    51,    52,
      22,    23,    24,     7,     8,     9,    10,    29,    70,    -1,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    22,    23,
      24,     7,     8,     9,    10,    29,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    -1,    29
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
      48,    49,    50,    51,    52,   108,     7,     8,     9,    10,
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
      15,    75,    96,    78,    11,    12,    16,    96,   107,    19,
      19,    96,    96,    11,    98,    98,    99,    99,    99,    99,
      32,    92,    93,    96,    96,    96,    96,    96,    96,    90,
      19,    39,    87,    88,    19,    16,    29,   104,    12,    14,
      16,    71,    82,    19,    90,    96,    40,    88,    89,    16,
      96,    19,    71,    71,    14,    96,    11,    71
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
     107,   107,   108,   108
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
       1,     0,     3,     4
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
#line 1468 "y.tab.c"
    break;

  case 3: /* program: fdecls  */
#line 69 "cmm.y"
                 {
	ast_root = yyvsp[0].node;
}
#line 1476 "y.tab.c"
    break;

  case 4: /* main: MAIN body  */
#line 73 "cmm.y"
                 {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = "main";
	yyval.node->body = yyvsp[0].node;
}
#line 1486 "y.tab.c"
    break;

  case 5: /* fdecls: fdecls fdecl  */
#line 80 "cmm.y"
                       {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1494 "y.tab.c"
    break;

  case 6: /* fdecls: %empty  */
#line 83 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 1502 "y.tab.c"
    break;

  case 7: /* fdecl: fhead body  */
#line 87 "cmm.y"
                   {
	yyval.node = yyvsp[-1].node;
	yyval.node->fbody = yyvsp[0].node;
}
#line 1511 "y.tab.c"
    break;

  case 8: /* fhead: fid LPAR params RPAR  */
#line 92 "cmm.y"
                             {
	yyval.node = new_node(NK_FUNC);
	yyval.node->cval = yyvsp[-3].node->cval;
	yyval.node->params = yyvsp[-1].node;
	yyval.node->ival = yyvsp[-1].node->ival;
}
#line 1522 "y.tab.c"
    break;

  case 9: /* fid: ID  */
#line 99 "cmm.y"
         {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 1530 "y.tab.c"
    break;

  case 10: /* params: params COMMA ID  */
#line 104 "cmm.y"
                          {
	Node *p = new_id_node(yyvsp[0].name);
	yyval.node = append_node(yyvsp[-2].node, p);
	yyval.node->ival = yyvsp[-2].node->ival + 1;
}
#line 1540 "y.tab.c"
    break;

  case 11: /* params: ID  */
#line 109 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
	yyval.node->ival = 1;
}
#line 1549 "y.tab.c"
    break;

  case 12: /* params: %empty  */
#line 113 "cmm.y"
          { /* epsilon */
	yyval.node = NULL;
}
#line 1557 "y.tab.c"
    break;

  case 13: /* body: LBRA stmts RBRA  */
#line 118 "cmm.y"
                          {
	yyval.node = new_node(NK_BLOCK);
	yyval.node->stmts = yyvsp[-1].node;
}
#line 1566 "y.tab.c"
    break;

  case 14: /* body: LBRA RBRA  */
#line 122 "cmm.y"
                    {
	yyval.node = new_node(NK_BLOCK);
}
#line 1574 "y.tab.c"
    break;

  case 15: /* stmts: stmts st  */
#line 127 "cmm.y"
                   {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1582 "y.tab.c"
    break;

  case 16: /* stmts: st  */
#line 130 "cmm.y"
             {
	yyval.node = yyvsp[0].node;
}
#line 1590 "y.tab.c"
    break;

  case 17: /* decl_var: VAR var_inits SEMI  */
#line 134 "cmm.y"
                             {
	yyval.node = new_node(NK_VAR);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1599 "y.tab.c"
    break;

  case 18: /* var_inits: var_inits COMMA var_init  */
#line 140 "cmm.y"
                                   {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1607 "y.tab.c"
    break;

  case 19: /* var_inits: var_init  */
#line 143 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1615 "y.tab.c"
    break;

  case 20: /* var_init: ID  */
#line 148 "cmm.y"
             {
	yyval.node = new_node(NK_VAR_DECL);
	yyval.node->cval = yyvsp[0].name;
}
#line 1624 "y.tab.c"
    break;

  case 21: /* var_init: ID COLEQ E  */
#line 152 "cmm.y"
                     {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = yyvsp[-2].name;
	var->right = yyvsp[0].node;
}
#line 1634 "y.tab.c"
    break;

  case 22: /* var_init: array_decl  */
#line 157 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1642 "y.tab.c"
    break;

  case 23: /* decl_const: CONST const_inits SEMI  */
#line 161 "cmm.y"
                                    {
	yyval.node = new_node(NK_CONST);
	yyval.node->decls = yyvsp[-1].node;
}
#line 1651 "y.tab.c"
    break;

  case 24: /* const_inits: const_inits COMMA const_init  */
#line 167 "cmm.y"
                                       {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 1659 "y.tab.c"
    break;

  case 25: /* const_inits: const_init  */
#line 170 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1667 "y.tab.c"
    break;

  case 26: /* const_init: ID COLEQ E  */
#line 174 "cmm.y"
                        {
	yyval.node = new_node(NK_CONST_DECL);
	yyval.node->cval = yyvsp[-2].name;
	yyval.node->right = yyvsp[0].node;
}
#line 1677 "y.tab.c"
    break;

  case 27: /* array_decl: ID array_size  */
#line 180 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_DECL);
	yyval.node->cval = yyvsp[-1].name;
	yyval.node->arr_size = yyvsp[0].node;
}
#line 1687 "y.tab.c"
    break;

  case 28: /* array_size: array_size LSQR NUMBER RSQR  */
#line 187 "cmm.y"
                                      {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = yyvsp[-1].val;
	yyval.node = append_node(yyvsp[-3].node, arr_size);
	yyval.node->depth = yyvsp[-3].node->depth+1;
}
#line 1698 "y.tab.c"
    break;

  case 29: /* array_size: LSQR NUMBER RSQR  */
#line 193 "cmm.y"
                           {
	yyval.node = new_node(NK_ARR_SIZE);
	yyval.node->ival = yyvsp[-1].val;
	yyval.node->depth = 1;
}
#line 1708 "y.tab.c"
    break;

  case 30: /* st: WRITE E SEMI  */
#line 209 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_WRITE, yyvsp[-1].node);
}
#line 1716 "y.tab.c"
    break;

  case 31: /* st: WRITELN SEMI  */
#line 212 "cmm.y"
                       {
	yyval.node = new_node(NK_WRITELN);
}
#line 1724 "y.tab.c"
    break;

  case 32: /* st: WRITELN E SEMI  */
#line 215 "cmm.y"
                         {
	yyval.node = new_unary_node(NK_WRITELN, yyvsp[-1].node);
}
#line 1732 "y.tab.c"
    break;

  case 33: /* st: READ ID SEMI  */
#line 218 "cmm.y"
                       {
	Node *id = new_id_node(yyvsp[-1].name);
	yyval.node = new_unary_node(NK_READ, id);
}
#line 1741 "y.tab.c"
    break;

  case 34: /* st: FUNC_CALL SEMI  */
#line 222 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 1749 "y.tab.c"
    break;

  case 35: /* st: decl_var  */
#line 225 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 1757 "y.tab.c"
    break;

  case 36: /* st: decl_const  */
#line 228 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1765 "y.tab.c"
    break;

  case 37: /* st: ID COLEQ E SEMI  */
#line 231 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ASSIGN_ST, id, yyvsp[-1].node);
}
#line 1774 "y.tab.c"
    break;

  case 38: /* st: ID COLEQ arr_init SEMI  */
#line 235 "cmm.y"
                                 {
	Node *id = new_id_node(yyvsp[-3].name);
	yyval.node = new_binary_node(NK_ARR_INIT, id, yyvsp[-1].node);
}
#line 1783 "y.tab.c"
    break;

  case 39: /* st: arr_ref COLEQ arr_init SEMI  */
#line 239 "cmm.y"
                                      {
	yyval.node = new_binary_node(NK_ARR_INIT, yyvsp[-3].node, yyvsp[-1].node);
}
#line 1791 "y.tab.c"
    break;

  case 40: /* st: compound_assignment SEMI  */
#line 242 "cmm.y"
                                   {
	yyval.node = yyvsp[-1].node;
}
#line 1799 "y.tab.c"
    break;

  case 41: /* st: ifstmt  */
#line 245 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 1807 "y.tab.c"
    break;

  case 42: /* st: whilestmt  */
#line 248 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1815 "y.tab.c"
    break;

  case 43: /* st: dowhilestmt  */
#line 251 "cmm.y"
                      {
	yyval.node = yyvsp[0].node;
}
#line 1823 "y.tab.c"
    break;

  case 44: /* st: forstmt  */
#line 254 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 1831 "y.tab.c"
    break;

  case 45: /* st: switchstmt  */
#line 257 "cmm.y"
                     {
	yyval.node = yyvsp[0].node;
}
#line 1839 "y.tab.c"
    break;

  case 46: /* st: RETURN E SEMI  */
#line 260 "cmm.y"
                        {
	yyval.node = new_unary_node(NK_RETURN, yyvsp[-1].node);
}
#line 1847 "y.tab.c"
    break;

  case 47: /* st: RETURN SEMI  */
#line 263 "cmm.y"
                      {
	yyval.node = new_node(NK_RETURN);
}
#line 1855 "y.tab.c"
    break;

  case 48: /* st: BREAK SEMI  */
#line 266 "cmm.y"
                     {
	yyval.node = new_node(NK_BREAK);
}
#line 1863 "y.tab.c"
    break;

  case 49: /* st: CONTINUE SEMI  */
#line 269 "cmm.y"
                        {
	yyval.node = new_node(NK_CONTINUE);
}
#line 1871 "y.tab.c"
    break;

  case 50: /* st: body  */
#line 272 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 1879 "y.tab.c"
    break;

  case 51: /* st: ID COLON  */
#line 275 "cmm.y"
                   {
	yyval.node = new_node(NK_LABEL);
	yyval.node->cval = strdup(yyvsp[0].name);
}
#line 1888 "y.tab.c"
    break;

  case 52: /* st: GOTO ID SEMI  */
#line 279 "cmm.y"
                       {
	yyval.node = new_node(NK_GOTO);
	yyval.node->cval = strdup(yyvsp[-1].name);
}
#line 1897 "y.tab.c"
    break;

  case 53: /* ifstmt: IF cond body  */
#line 285 "cmm.y"
                       {
	yyval.node = new_if_node(yyvsp[-1].node, yyvsp[0].node, NULL);
}
#line 1905 "y.tab.c"
    break;

  case 54: /* ifstmt: IF cond body ELSE body  */
#line 288 "cmm.y"
                                 {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1913 "y.tab.c"
    break;

  case 55: /* ifstmt: IF cond body ELSE ifstmt  */
#line 291 "cmm.y"
                                   {
	yyval.node = new_if_node(yyvsp[-3].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1921 "y.tab.c"
    break;

  case 56: /* whilestmt: WHILE cond body  */
#line 295 "cmm.y"
                            {
	yyval.node = new_while_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1929 "y.tab.c"
    break;

  case 57: /* dowhilestmt: DO body WHILE cond SEMI  */
#line 299 "cmm.y"
                                      {
	yyval.node = new_do_while_node(yyvsp[-1].node, yyvsp[-3].node);
}
#line 1937 "y.tab.c"
    break;

  case 58: /* forstmt: FOR LPAR E SEMI cond SEMI E RPAR body  */
#line 303 "cmm.y"
                                                {
	yyval.node = new_for_node(yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
}
#line 1945 "y.tab.c"
    break;

  case 59: /* switchstmt: SWITCH E LBRA cases case_default RBRA  */
#line 307 "cmm.y"
                                                   {
	yyval.node = new_switch_node(yyvsp[-4].node, yyvsp[-2].node, yyvsp[-1].node);
}
#line 1953 "y.tab.c"
    break;

  case 60: /* cases: cases case_item  */
#line 312 "cmm.y"
                          {
	yyval.node = append_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1961 "y.tab.c"
    break;

  case 61: /* cases: case_item  */
#line 315 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 1969 "y.tab.c"
    break;

  case 62: /* case_item: CASE E body  */
#line 319 "cmm.y"
                        {
	yyval.node = new_case_node(yyvsp[-1].node, yyvsp[0].node);
}
#line 1977 "y.tab.c"
    break;

  case 63: /* case_default: DEFAULT body  */
#line 324 "cmm.y"
                       {
	yyval.node = yyvsp[0].node;
}
#line 1985 "y.tab.c"
    break;

  case 64: /* case_default: %empty  */
#line 327 "cmm.y"
          {
	yyval.node = NULL;
}
#line 1993 "y.tab.c"
    break;

  case 65: /* cond: cond_or  */
#line 331 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2001 "y.tab.c"
    break;

  case 66: /* cond_or: cond_or OR cond_and  */
#line 336 "cmm.y"
                              {
	yyval.node = new_binary_node(NK_OR, yyvsp[-2].node, yyvsp[0].node);
}
#line 2009 "y.tab.c"
    break;

  case 67: /* cond_or: cond_and  */
#line 339 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2017 "y.tab.c"
    break;

  case 68: /* cond_and: cond_and AND cond_not  */
#line 344 "cmm.y"
                                {
	yyval.node = new_binary_node(NK_AND, yyvsp[-2].node, yyvsp[0].node);
}
#line 2025 "y.tab.c"
    break;

  case 69: /* cond_and: cond_not  */
#line 347 "cmm.y"
                   {
	yyval.node = yyvsp[0].node;
}
#line 2033 "y.tab.c"
    break;

  case 70: /* cond_not: NOT cond_not  */
#line 352 "cmm.y"
                       {
	yyval.node = new_unary_node(NK_NOT, yyvsp[0].node);
}
#line 2041 "y.tab.c"
    break;

  case 71: /* cond_not: comp  */
#line 355 "cmm.y"
               {
	yyval.node = yyvsp[0].node;
}
#line 2049 "y.tab.c"
    break;

  case 72: /* comp: E GT E  */
#line 360 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2057 "y.tab.c"
    break;

  case 73: /* comp: E GE E  */
#line 363 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_GE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2065 "y.tab.c"
    break;

  case 74: /* comp: E LT E  */
#line 366 "cmm.y"
                {
	yyval.node = new_binary_node(NK_LT, yyvsp[-2].node, yyvsp[0].node);
}
#line 2073 "y.tab.c"
    break;

  case 75: /* comp: E LE E  */
#line 369 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_LE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2081 "y.tab.c"
    break;

  case 76: /* comp: E NE E  */
#line 372 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_NE, yyvsp[-2].node, yyvsp[0].node);
}
#line 2089 "y.tab.c"
    break;

  case 77: /* comp: E EQ E  */
#line 375 "cmm.y"
                 {
	yyval.node = new_binary_node(NK_EQ, yyvsp[-2].node, yyvsp[0].node);
}
#line 2097 "y.tab.c"
    break;

  case 78: /* comp: E  */
#line 378 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2105 "y.tab.c"
    break;

  case 79: /* compound_assignment: ID ADD_ASSIGN E  */
#line 383 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_ADD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2115 "y.tab.c"
    break;

  case 80: /* compound_assignment: ID SUB_ASSIGN E  */
#line 388 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_SUB, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2125 "y.tab.c"
    break;

  case 81: /* compound_assignment: ID MUL_ASSIGN E  */
#line 393 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MUL, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2135 "y.tab.c"
    break;

  case 82: /* compound_assignment: ID DIV_ASSIGN E  */
#line 398 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_DIV, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2145 "y.tab.c"
    break;

  case 83: /* compound_assignment: ID POW_ASSIGN E  */
#line 403 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_POW, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2155 "y.tab.c"
    break;

  case 84: /* compound_assignment: ID MOD_ASSIGN E  */
#line 408 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_MOD, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2165 "y.tab.c"
    break;

  case 85: /* compound_assignment: ID AND_ASSIGN E  */
#line 413 "cmm.y"
                          {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_AND, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2175 "y.tab.c"
    break;

  case 86: /* compound_assignment: ID OR_ASSIGN E  */
#line 418 "cmm.y"
                         {
	Node *id = new_id_node(yyvsp[-2].name);
	Node *right = new_binary_node(NK_OR, id, yyvsp[0].node);
	yyval.node = new_binary_node(NK_ASSIGN, id, right);
}
#line 2185 "y.tab.c"
    break;

  case 87: /* E: ID ASSIGN E  */
#line 426 "cmm.y"
                      {
	Node *id = new_id_node(yyvsp[-2].name);
	yyval.node = new_binary_node(NK_ASSIGN, id, yyvsp[0].node);
}
#line 2194 "y.tab.c"
    break;

  case 88: /* E: compound_assignment  */
#line 430 "cmm.y"
                              {
	yyval.node = yyvsp[0].node;
}
#line 2202 "y.tab.c"
    break;

  case 89: /* E: ADD_SUB  */
#line 433 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2210 "y.tab.c"
    break;

  case 90: /* ADD_SUB: ADD_SUB PLUS T  */
#line 438 "cmm.y"
                         {
	yyval.node = new_binary_node(NK_ADD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2218 "y.tab.c"
    break;

  case 91: /* ADD_SUB: ADD_SUB MINUS T  */
#line 441 "cmm.y"
                          {
	yyval.node = new_binary_node(NK_SUB, yyvsp[-2].node, yyvsp[0].node);
}
#line 2226 "y.tab.c"
    break;

  case 92: /* ADD_SUB: T  */
#line 444 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2234 "y.tab.c"
    break;

  case 93: /* T: T MULT P  */
#line 449 "cmm.y"
                   {
	yyval.node = new_binary_node(NK_MUL, yyvsp[-2].node, yyvsp[0].node);
}
#line 2242 "y.tab.c"
    break;

  case 94: /* T: T DIV P  */
#line 452 "cmm.y"
                  {
	yyval.node = new_binary_node(NK_DIV, yyvsp[-2].node, yyvsp[0].node);
}
#line 2250 "y.tab.c"
    break;

  case 95: /* T: T MOD P  */
#line 455 "cmm.y"
                   {
	 yyval.node = new_binary_node(NK_MOD, yyvsp[-2].node, yyvsp[0].node);
}
#line 2258 "y.tab.c"
    break;

  case 96: /* T: MINUS F  */
#line 458 "cmm.y"
                  {
	yyval.node = new_unary_node(NK_MINUS, yyvsp[0].node);
}
#line 2266 "y.tab.c"
    break;

  case 97: /* T: P  */
#line 461 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2274 "y.tab.c"
    break;

  case 98: /* P: F POW P  */
#line 466 "cmm.y"
                  {
	 yyval.node = new_binary_node(NK_POW, yyvsp[-2].node, yyvsp[0].node);
}
#line 2282 "y.tab.c"
    break;

  case 99: /* P: F  */
#line 469 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2290 "y.tab.c"
    break;

  case 100: /* F: ID  */
#line 474 "cmm.y"
             {
	yyval.node = new_id_node(yyvsp[0].name);
}
#line 2298 "y.tab.c"
    break;

  case 101: /* F: LIT_TRUE  */
#line 477 "cmm.y"
                   {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 1;
}
#line 2307 "y.tab.c"
    break;

  case 102: /* F: LIT_FALSE  */
#line 481 "cmm.y"
                    {
	yyval.node = new_node(NK_INT);
	yyval.node->ival = 0;
}
#line 2316 "y.tab.c"
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
#line 2328 "y.tab.c"
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
#line 2340 "y.tab.c"
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
#line 2352 "y.tab.c"
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
#line 2364 "y.tab.c"
    break;

  case 107: /* F: FUNC_CALL  */
#line 513 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2372 "y.tab.c"
    break;

  case 108: /* F: NUMBER  */
#line 516 "cmm.y"
                 {
	yyval.node = new_int_node(yylval.val);
}
#line 2380 "y.tab.c"
    break;

  case 109: /* F: arr_ref  */
#line 519 "cmm.y"
                  {
	yyval.node = yyvsp[0].node;
}
#line 2388 "y.tab.c"
    break;

  case 110: /* F: LPAR cond RPAR  */
#line 522 "cmm.y"
                         {
	yyval.node = yyvsp[-1].node;
}
#line 2396 "y.tab.c"
    break;

  case 111: /* FUNC_CALL: ID LPAR fparams RPAR  */
#line 526 "cmm.y"
                                 {
	yyval.node = new_node(NK_CALL);
	yyval.node->cval = yyvsp[-3].name;
	yyval.node->params = yyvsp[-1].node;
}
#line 2406 "y.tab.c"
    break;

  case 112: /* fparams: %empty  */
#line 533 "cmm.y"
                        {
	yyval.node = NULL;
}
#line 2414 "y.tab.c"
    break;

  case 113: /* fparams: ac_params  */
#line 536 "cmm.y"
                    {
	yyval.node = yyvsp[0].node;
}
#line 2422 "y.tab.c"
    break;

  case 114: /* ac_params: ac_params COMMA fparam  */
#line 541 "cmm.y"
                                 {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2430 "y.tab.c"
    break;

  case 115: /* ac_params: fparam  */
#line 544 "cmm.y"
                 {
	yyval.node = yyvsp[0].node;
}
#line 2438 "y.tab.c"
    break;

  case 116: /* fparam: E  */
#line 548 "cmm.y"
           {
	yyval.node = yyvsp[0].node;
}
#line 2446 "y.tab.c"
    break;

  case 117: /* arr_ref: ID arr_index  */
#line 552 "cmm.y"
                       {
	yyval.node = new_node(NK_ARR_REF);
	yyval.node->cval = yyvsp[-1].name; // NAME[][]...という形式のみ対応
	yyval.node->right = yyvsp[0].node;
}
#line 2456 "y.tab.c"
    break;

  case 118: /* arr_init: LBRA arr_elems RBRA  */
#line 558 "cmm.y"
                               {
	yyval.node = new_node(NK_ARR_ELEMS);
	yyval.node->right = yyvsp[-1].node;
}
#line 2465 "y.tab.c"
    break;

  case 119: /* arr_elems: arr_elems COMMA E  */
#line 564 "cmm.y"
                            {
	yyval.node = append_node(yyvsp[-2].node, yyvsp[0].node);
}
#line 2473 "y.tab.c"
    break;

  case 120: /* arr_elems: E  */
#line 567 "cmm.y"
            {
	yyval.node = yyvsp[0].node;
}
#line 2481 "y.tab.c"
    break;

  case 121: /* arr_elems: %empty  */
#line 570 "cmm.y"
          {
	yyval.node = NULL;
}
#line 2489 "y.tab.c"
    break;

  case 122: /* arr_index: LSQR E RSQR  */
#line 575 "cmm.y"
                      {
	yyval.node = new_node(NK_ARR_INDEX);
	yyval.node->right = yyvsp[-1].node;
}
#line 2498 "y.tab.c"
    break;

  case 123: /* arr_index: arr_index LSQR E RSQR  */
#line 579 "cmm.y"
                                {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = yyvsp[-1].node;
	yyval.node = append_node(yyvsp[-3].node, ind);
}
#line 2508 "y.tab.c"
    break;


#line 2512 "y.tab.c"

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

#line 585 "cmm.y"


#include "lex.yy.c"
