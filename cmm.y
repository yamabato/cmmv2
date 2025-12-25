%{
/**
   The cmm compiler
   2004.08.18
   2005.06.13
   Hisashi Nakai, University of Tsukuba
**/

#include <stdio.h>
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

%token VAR
%token MAIN
%token ID
%token LPAR RPAR
%token COMMA
%token LBRA RBRA
%token WRITE
%token WRITELN
%token SEMI
%token PLUS MINUS
%token PLUS2 MINUS2
%token MULT DIV
%token NUMBER FLOAT
%token IF THEN ELSE ENDIF
%token WHILE DO
%token READ
%token COLEQ
%token GE GT LE LT NE EQ
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
	$$.node->body = $2.node;
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
	$$.node->body = $2.node->body;
};

fhead : fid LPAR params RPAR {
	$$.node = new_node(NK_FUNC);
	$$.node->cval = $1.node->cval;
	$$.node->params = $3.node;
};

fid : ID {
	$$.node = new_id_node($1.name);
};

params
	: params COMMA ID {
	Node *p = new_id_node($3.name);
	$$.node = append_node($1.node, p);
}
	| ID {
	$$.node = new_id_node($1.name);
}
	| { /* epsilon */
	$$.node = NULL;
};

body
	: LBRA stmts RBRA {
	$$.node = new_node(NK_BLOCK);
	$$.node->stmts = $2.node->stmts;
}
	| LBRA RBRA {
	$$.node = new_node(NK_BLOCK);
};

stmts
	: stmts st {
	$$.node = append_node($1.node, $2.node);
}
	| stmts vardecl {
	$$.node = append_node($1.node, $2.node);
}
	| st {
	$$.node = $1.node;
}
	| vardecl {
	$$.node = $1.node;
};

vardecl : VAR ids SEMI {
	$$.node = new_node(NK_VAR);
	$$.node->ids = $2.node->ids;
};

ids
	: ids COMMA ID {
	Node *id = new_id_node($3.name);
	$$.node = append_node($1.node, id);
}
	| ID {
	$$.node = new_id_node($1.name);
};

st
	: WRITE E SEMI {
	$$.node = new_unary_node(NK_WRITE, $2.node);
}
	| WRITELN SEMI {
	$$.node = new_node(NK_WRITELN);
}
	| READ ID SEMI {
	Node *id = new_id_node($2.name);
	$$.node = new_unary_node(NK_READ, id);
}
	| ID COLEQ E SEMI {
	Node *id = new_id_node($1.name);
	$$.node = new_binary_node(NK_ASSIGN, id, $3.node);
}
	| ifstmt{
	$$.node = $1.node;
}
	| whilestmt{
	$$.node = $1.node;
}
	| RETURN E SEMI {
	$$.node = new_unary_node(NK_RETURN, $2.node);
}
	| body {
	$$.node = $1.node;
};

ifstmt
	: IF cond body {
	$$.node = new_if_node($2.node, $3.node, NULL);
}
	| IF cond body ELSE body{
	$$.node = new_if_node($2.node, $3.node, $5.node);
};

whilestmt : WHILE cond body {
	$$.node = new_while_node($2.node, $3.node);
};

cond
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
};

E
	: E PLUS T {
	$$.node = new_binary_node(NK_ADD, $1.node, $3.node);
}
	| E MINUS T {
	$$.node = new_binary_node(NK_SUB, $1.node, $3.node);
}
	| T {
	$$.node = $1.node;
};

T
	: T MULT F {
	$$.node = new_binary_node(NK_MUL, $1.node, $3.node);
}
	| T DIV F {
	$$.node = new_binary_node(NK_DIV, $1.node, $3.node);
}
	| MINUS F {
	$$.node = new_unary_node(NK_MINUS, $2.node);
}
	| F {
	$$.node = $1.node;
};

F
	: ID {
	$$.node = new_id_node($1.name);
}
	| ID PLUS2 {
	Node *id  = new_id_node($1.name);
	Node *id_ = new_id_node($1.name);
	Node *one = new_int_node(1);
	Node *add = new_binary_node(NK_ADD, id_, one);
	$$.node = new_binary_node(NK_ASSIGN, id, add);
}
	| ID LPAR fparams RPAR {
	$$.node = new_node(NK_CALL);
	$$.node->cval = $1.name;
	$$.node->params = $3.node;
}
	| NUMBER {
	$$.node = new_int_node(yylval.val);
}
	| LPAR E RPAR {
	$$.node = $2.node;
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

%%

#include "lex.yy.c"
