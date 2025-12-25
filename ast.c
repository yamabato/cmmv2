#include <stdlib.h>

#include "ast.h"

Node *new_node(NodeKind kind) {
  Node *node = (Node *)malloc(sizeof(Node));

  node->kind = kind;
  node->left = NULL;
  node->right = NULL;
  node->body = NULL;
  node->stmts = NULL;
  node->cond = NULL;
  node->ids = NULL;
  node->next = NULL;

  node->cval = NULL;

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
  node->cond = cond;
  node->if_block = if_block;
  node->else_block = else_block;
  return node;
}

Node *new_while_node(Node *cond, Node *body) {
  Node *node = new_node(NK_WHILE);
  node->cond = cond;
  node->body = body;
  return node;
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
