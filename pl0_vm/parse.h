#pragma once

#include "vm.h"

OpCode str_to_opcode(char *);
int parse_line(char *, Instr *);
void parse(FILE *, Instr **, Instr **);
