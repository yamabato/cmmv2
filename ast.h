#pragma once

#include "node.h"

Node *new_node(NodeKind);

Node *new_int_node(int);
Node *new_id_node(char *);
Node *new_char_node(char *);
Node *new_param_node(Node *, char *);
Node *new_type_name_node(char *);
Node *new_binary_node(NodeKind, Node *, Node *);
Node *new_unary_node(NodeKind, Node *);
Node *new_if_node(Node *, Node *, Node *);
Node *new_while_node(Node *, Node *);
Node *new_do_while_node(Node *, Node *);
Node *new_for_node(Node *, Node *, Node *, Node *);
Node *new_switch_node(Node *, Node *, Node *);
Node *new_case_node(Node *, Node *);

Node *append_node(Node *, Node *);
