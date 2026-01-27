#pragma once

typedef enum {
  INS_LOD,
  INS_LIT,
  INS_STO,
  INS_OPR,
  INS_INT,
  INS_JMP,
  INS_JPC,
  INS_CAL,
  INS_CSP,
  INS_LAB,
  INS_RET,

  INS_UNK,
} OpCode;

typedef struct MnemonicPair {
  char iname[8];
  OpCode opcode;
} MnemonicPair;

static const MnemonicPair MnemonicMap[] = {
    {"LIT", INS_LIT}, {"OPR", INS_OPR}, {"LOD", INS_LOD}, {"STO", INS_STO},
    {"CAL", INS_CAL}, {"INT", INS_INT}, {"JMP", INS_JMP}, {"JPC", INS_JPC},
    {"CSP", INS_CSP}, {"LAB", INS_LAB}, {"RET", INS_RET},
};

typedef struct Instr {
  OpCode opcode;
  int level;
  int arg;
  struct Instr *next;
} Instr;
