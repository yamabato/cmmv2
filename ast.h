#pragma once

#include "node.h"

Node *new_node(NodeKind);

Node *new_int_node(int);
Node *new_id_node(char *);
Node *new_binary_node(NodeKind, Node *, Node *);
Node *new_unary_node(NodeKind, Node *);
Node *new_if_node(Node *, Node *, Node *);
Node *new_while_node(Node *, Node *);

Node *append_node(Node *, Node *);
