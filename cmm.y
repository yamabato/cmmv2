%{
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
%}

%token VAR CONST
%token INT CHAR ID
%token MAIN
%token LIT_TRUE LIT_FALSE
%token LPAR RPAR
%token COMMA
%token LBRA RBRA
%token LSQR RSQR
%token WRITE WRITELN
%token READ
%token PUTC GETC
%token SEMI COLON
%token PLUS MINUS
%token INC DEC
%token MULT DIV MOD POW
%token ADDR
%token NUMBER FLOAT
%token IF ELSE
%token WHILE DO
%token FOR
%token BREAK CONTINUE
%token SWITCH CASE DEFAULT
%token GOTO
%token COLEQ ASSIGN
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%token POW_ASSIGN MOD_ASSIGN
%token AND_ASSIGN OR_ASSIGN
%token GE GT LE LT NE EQ
%token AND OR NOT
%token RETURN
%%

program
	: fdecls main fdecls {
	Node *node = append_node($1.node, $2.node);
	ast_root = append_node(node, $3.node);
}
	| fdecls {
	ast_root = $1.node;
};

main : MAIN body {
	$$.node = new_node(NK_FUNC);
	$$.node->cval = "main";
	$$.node->fbody = $2.node;
};

fdecls
	: fdecls fdecl {
	$$.node = append_node($1.node, $2.node);
}
	| /* epsilon */ {
	$$.node = NULL;
};

fdecl : fhead body {
	$$.node = $1.node;
	$$.node->fbody = $2.node;
};

fhead : fid LPAR params RPAR {
	$$.node = new_node(NK_FUNC);
	$$.node->cval = $1.node->cval;
	$$.node->params = $3.node;
	$$.node->ival = $3.node->ival;
};

fid : ID {
	$$.node = new_id_node($1.name);
};

params
	: params COMMA ID {
	Node *p = new_id_node($3.name);
	$$.node = append_node($1.node, p);
	$$.node->ival = $1.node->ival + 1;
}
	| ID {
	$$.node = new_id_node($1.name);
	$$.node->ival = 1;
}
	| { /* epsilon */
	$$.node = new_node(NK_NOTHING);
	$$.node->ival = 0;
};

body
	: LBRA stmts RBRA {
	$$.node = new_node(NK_BLOCK);
	$$.node->stmts = $2.node;
}
	| LBRA RBRA {
	$$.node = new_node(NK_BLOCK);
};

stmts
	: stmts st {
	$$.node = append_node($1.node, $2.node);
}
	| st {
	$$.node = $1.node;
};

decl_var: VAR var_inits SEMI {
	$$.node = new_node(NK_VAR);
	$$.node->decls = $2.node;
};

var_inits
	: var_inits COMMA var_init {
	$$.node = append_node($1.node, $3.node);
}
	| var_init {
	$$.node = $1.node;
};

var_init
	: ID {
	$$.node = new_node(NK_VAR_DECL);
	$$.node->cval = $1.name;
}
	| ID COLEQ E {
	Node *var = new_node(NK_VAR_DECL);
	var->cval = $1.name;
	var->right = $3.node;
	$$.node = var;
}
	| array_decl {
	$$.node = $1.node;
};

decl_const : CONST const_inits SEMI {
	$$.node = new_node(NK_CONST);
	$$.node->decls = $2.node;
};

const_inits
	: const_inits COMMA const_init {
	$$.node = append_node($1.node, $3.node);
}
	| const_init {
	$$.node = $1.node;
};

const_init : ID COLEQ E {
	$$.node = new_node(NK_CONST_DECL);
	$$.node->cval = $1.name;
	$$.node->right = $3.node;
};

array_decl : ID array_size {
	$$.node = new_node(NK_ARR_DECL);
	$$.node->cval = $1.name;
	$$.node->arr_size = $2.node;
};

array_size
	: array_size LSQR NUMBER RSQR {
	Node *arr_size = new_node(NK_ARR_SIZE);
	arr_size->ival = $3.val;
	$$.node = append_node($1.node, arr_size);
	$$.node->depth = $1.node->depth+1;
}
	| LSQR NUMBER RSQR {
	$$.node = new_node(NK_ARR_SIZE);
	$$.node->ival = $2.val;
	$$.node->depth = 1;
};

/*ids
	: ids COMMA ID {
	Node *id = new_id_node($3.name);
	$$.node = append_node($1.node, id);
}
	| ID {
	$$.node = new_id_node($1.name);
};*/

st
	: WRITE E SEMI {
	$$.node = new_unary_node(NK_WRITE, $2.node);
}
	| WRITELN SEMI {
	$$.node = new_node(NK_WRITELN);
}
	| WRITELN E SEMI {
	$$.node = new_unary_node(NK_WRITELN, $2.node);
}
	| PUTC E SEMI {
	$$.node = new_unary_node(NK_PUTC, $2.node);
}
	| decl_var {
	$$.node = $1.node;
}
	| decl_const {
	$$.node = $1.node;
}
	| ID COLEQ E SEMI {
	Node *id = new_id_node($1.name);
	$$.node = new_binary_node(NK_ASSIGN_ST, id, $3.node);
}
	| ID COLEQ arr_init SEMI {
	Node *id = new_id_node($1.name);
	$$.node = new_binary_node(NK_ARR_INIT, id, $3.node);
}
	| arr_ref COLEQ arr_init SEMI {
	$$.node = new_binary_node(NK_ARR_INIT, $1.node, $3.node);
}
	| arr_ref COLEQ E SEMI {
	$$.node = new_binary_node(NK_ARR_ASSIGN, $1.node, $3.node);
}
	| ifstmt {
	$$.node = $1.node;
}
	| whilestmt {
	$$.node = $1.node;
}
	| dowhilestmt {
	$$.node = $1.node;
}
	| forstmt {
	$$.node = $1.node;
}
	| switchstmt {
	$$.node = $1.node;
}
	| RETURN E SEMI {
	$$.node = new_unary_node(NK_RETURN, $2.node);
}
	| RETURN SEMI {
	$$.node = new_node(NK_RETURN);
}
	| BREAK SEMI {
	$$.node = new_node(NK_BREAK);
}
	| CONTINUE SEMI {
	$$.node = new_node(NK_CONTINUE);
}
	| body {
	$$.node = $1.node;
}
	| ID COLON {
	$$.node = new_node(NK_LABEL);
	$$.node->cval = strdup($2.name);
}
	| GOTO ID SEMI {
	$$.node = new_node(NK_GOTO);
	$$.node->cval = strdup($2.name);
}
	| E SEMI {
	$$.node = $1.node;
};

ifstmt
	: IF cond body {
	$$.node = new_if_node($2.node, $3.node, NULL);
}
	| IF cond body ELSE body {
	$$.node = new_if_node($2.node, $3.node, $5.node);
}
	| IF cond body ELSE ifstmt {
	$$.node = new_if_node($2.node, $3.node, $5.node);
};

whilestmt : WHILE cond body {
	$$.node = new_while_node($2.node, $3.node);
};

dowhilestmt : DO body WHILE cond SEMI {
	$$.node = new_do_while_node($4.node, $2.node);
};

forstmt : FOR LPAR E SEMI cond SEMI E RPAR body {
	$$.node = new_for_node($3.node, $5.node, $7.node, $9.node);
}

switchstmt : SWITCH E LBRA cases case_default RBRA {
	$$.node = new_switch_node($2.node, $4.node, $5.node);
};

cases
	: cases case_item {
	$$.node = append_node($1.node, $2.node);
}
	| case_item {
	$$.node = $1.node;
};

case_item : CASE E body {
	$$.node = new_case_node($2.node, $3.node);
};

case_default
	: DEFAULT body {
	$$.node = $2.node;
}
	| {
	$$.node = NULL;
};

cond : cond_or {
	$$.node = $1.node;
};

cond_or
	: cond_or OR cond_and {
	$$.node = new_binary_node(NK_OR, $1.node, $3.node);
}
	| cond_and {
	$$.node = $1.node;
};

cond_and
	: cond_and AND cond_not {
	$$.node = new_binary_node(NK_AND, $1.node, $3.node);
}
	| cond_not {
	$$.node = $1.node;
};

cond_not
	: NOT cond_not {
	$$.node = new_unary_node(NK_NOT, $2.node);
}
	| comp {
	$$.node = $1.node;
};

comp
	: E GT E {
	$$.node = new_binary_node(NK_GT, $1.node, $3.node);
}
	| E GE E {
	$$.node = new_binary_node(NK_GE, $1.node, $3.node);
}
	| E LT E{
	$$.node = new_binary_node(NK_LT, $1.node, $3.node);
}
	| E LE E {
	$$.node = new_binary_node(NK_LE, $1.node, $3.node);
}
	| E NE E {
	$$.node = new_binary_node(NK_NE, $1.node, $3.node);
}
	| E EQ E {
	$$.node = new_binary_node(NK_EQ, $1.node, $3.node);
}
	| E {
	$$.node = $1.node;
};

compound_assignment
	: ID ADD_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_ADD, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID SUB_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_SUB, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID MUL_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_MUL, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID DIV_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_DIV, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID POW_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_POW, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID MOD_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_MOD, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID AND_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_AND, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}
	| ID OR_ASSIGN E {
	Node *id = new_id_node($1.name);
	Node *right = new_binary_node(NK_OR, id, $3.node);
	$$.node = new_binary_node(NK_ASSIGN, id, right);
}


E
	: ID ASSIGN E {
	Node *id = new_id_node($1.name);
	$$.node = new_binary_node(NK_ASSIGN, id, $3.node);
}
	| compound_assignment {
	$$.node = $1.node;
}
	| ADD_SUB {
	$$.node = $1.node;
};

ADD_SUB
	: ADD_SUB PLUS T {
	$$.node = new_binary_node(NK_ADD, $1.node, $3.node);
}
	| ADD_SUB MINUS T {
	$$.node = new_binary_node(NK_SUB, $1.node, $3.node);
}
	| T {
	$$.node = $1.node;
};

T
	: T MULT P {
	$$.node = new_binary_node(NK_MUL, $1.node, $3.node);
}
	| T DIV P {
	$$.node = new_binary_node(NK_DIV, $1.node, $3.node);
}
	 | T MOD P {
	 $$.node = new_binary_node(NK_MOD, $1.node, $3.node);
}
	| P {
	$$.node = $1.node;
};

P
	: F POW P {
	 $$.node = new_binary_node(NK_POW, $1.node, $3.node);
}
	| F {
	$$.node = $1.node;
}

F
	: ID {
	$$.node = new_id_node($1.name);
}
	| MINUS F {
	$$.node = new_unary_node(NK_MINUS, $2.node);
}
	| ADDR F {
	$$.node = new_unary_node(NK_ADDR, $2.node);
}
	| POW F {
	$$.node = new_unary_node(NK_DEREF, $2.node);
}
	| LIT_TRUE {
	$$.node = new_node(NK_INT);
	$$.node->ival = 1;
}
	| LIT_FALSE {
	$$.node = new_node(NK_INT);
	$$.node->ival = 0;
}
	| ID INC {
	Node *id  = new_id_node($1.name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	$$.node = new_binary_node(NK_SUB, inc, one);
}
	| INC ID {
	Node *id  = new_id_node($1.name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id, one);
	Node *inc = new_binary_node(NK_ASSIGN, id, add);
	$$.node = inc;
}
	| ID DEC {
	Node *id  = new_id_node($1.name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	$$.node = new_binary_node(NK_ADD, dec, one);
}
	| DEC ID {
	Node *id  = new_id_node($1.name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_SUB, id, one);
	Node *dec = new_binary_node(NK_ASSIGN, id, add);
	$$.node = dec;
}
	| FUNC_CALL {
	$$.node = $1.node;
}
	| NUMBER {
	$$.node = new_int_node(yylval.val);
}
	| CHAR {
	$$.node = new_char_node($1.name);
}
	| arr_ref {
	$$.node = $1.node;
}
	| LPAR cond RPAR {
	$$.node = $2.node;
}
	| READ {
	$$.node = new_node(NK_READ);
}
	| GETC {
	$$.node = new_node(NK_GETC);
};

FUNC_CALL : ID LPAR fparams RPAR {
	$$.node = new_node(NK_CALL);
	$$.node->cval = $1.name;
	$$.node->params = $3.node;
};

fparams
	: /* epsilon */ {
	$$.node = NULL;
}
	| ac_params {
	$$.node = $1.node;
};

ac_params
	: ac_params COMMA fparam {
	$$.node = append_node($1.node, $3.node);
}
	| fparam {
	$$.node = $1.node;
};

fparam : E {
	$$.node = $1.node;
};

arr_ref : ID arr_index {
	$$.node = new_node(NK_ARR_REF);
	$$.node->cval = $1.name; // NAME[][]...という形式のみ対応
	$$.node->right = $2.node;
};

arr_init : LBRA arr_elems RBRA {
	$$.node = new_node(NK_ARR_ELEMS);
	$$.node->right = $2.node;
};

arr_elems
	: arr_elems COMMA arr_initializer {
	$$.node = append_node($1.node, $3.node);
}
	| arr_initializer {
	$$.node = $1.node;
}
	| {
	$$.node = NULL;
};

arr_initializer
	: E {
	$$.node = $1.node;
}
	| arr_init {
	$$.node = $1.node->right;
};

arr_index
	: LSQR E RSQR {
	$$.node = new_node(NK_ARR_INDEX);
	$$.node->right = $2.node;
}
	| arr_index LSQR E RSQR {
	Node *ind = new_node(NK_ARR_INDEX);
	ind->right = $3.node;
	$$.node = append_node($1.node, ind);
};

%%

#include "lex.yy.c"
