#include <string.h>
#include <stdlib.h>

#include "ast.h"

extern int yylineno;

Node *new_node(NodeKind kind) {
  Node *node = (Node *)malloc(sizeof(Node));

  node->kind = kind;
  node->left =
    node->right =
    node->params =
    node->body =
    node->stmts =
    node->if_cond =
    node->while_cond =
    node->for_cond =
    node->ids =
    node->next = NULL;

  node->cval = NULL;

  node->line = yylineno;

  return node;
}

Node *new_int_node(int val) {
  Node *node = new_node(NK_INT);
  node->ival = val;
  return node;
}

Node *new_id_node(char *name) {
  Node *node = new_node(NK_ID);
  node->cval = name;
  return node;
}

Node *new_param_node(Node *type, char *name) {
  Node *node = new_node(NK_PARAM);
  node->left = type;
  node->cval = strdup(name);
  return node;
}

Node *new_type_name_node(char *name) {
  Node *node =new_node(NK_TYPE);
  node->cval = strdup(name);
  return node;
}

Node *new_binary_node(NodeKind kind, Node *n1, Node *n2) {
  Node *node = new_node(kind);
  node->left = n1;
  node->right = n2;
  return node;
}

Node *new_unary_node(NodeKind kind, Node *n) {
  Node *node = new_node(kind);
  node->right = n;
  return node;
}

Node *new_if_node(Node *cond, Node *if_block, Node *else_block) {
  Node *node = new_node(NK_IF);
  node->if_cond = cond;
  node->if_block = if_block;
  node->else_block = else_block;
  return node;
}

Node *new_while_node(Node *cond, Node *body) {
  Node *node = new_node(NK_WHILE);
  node->while_cond = cond;
  node->body = body;
  return node;
}

Node *new_for_node(Node *init, Node *cond, Node *incr, Node *body) {
  Node *node = new_node(NK_FOR);
  node->init = init;
  node->for_cond = cond;
  node->incr = incr;
  node->body = body;
  return node;
}

Node *new_switch_node(Node *expr, Node *cases, Node *dflt) {
  Node *node = new_node(NK_SWITCH);
}

Node *new_case_node(Node *cond, Node *body) {

}

Node *append_node(Node *n1, Node *n2) {
  if (n1==NULL && n2==NULL) { return NULL; }
  if (n1 == NULL) {
    return n2;
  } else if (n2 == NULL) {
    return n1;
  }

  Node *n = n1;
  for (; n->next!=NULL; n=n->next) {}
  n->next = n2;
  return n1;
}
