/*
PL/0　インタプリタ
  レベル差は無視し、すべてフラットに扱う
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "vm.h"

void exec_program(VM *vm) {
  Instr instr;
  int arg;
  int addr, pos;
  int left, right, val;
  int ret_addr, old_bp;
  char *buf = (char *)malloc(sizeof(char)*STACK_SIZE);

  while (true) {
    if (vm->pc<0 || vm->pc>=vm->prog_size) { break; }

    instr = vm->program[vm->pc++];
    arg = instr.arg;

    if (!true) {
      printf("( %s, %d, %d )\n", MnemonicMap[instr.opcode].iname, instr.level, instr.arg);
      printf("PC: %d\n", vm->pc);
      printf("SP: %d\n", vm->sp);
      printf("BP: %d\n", vm->bp);
      for (int i=0; i<vm->sp; i++) { printf("%d ", vm->stack[i]); }
      printf("\n\n");
    }

    switch (instr.opcode) {
      case INS_LOD:
        vm->stack[++vm->sp] = vm->stack[vm->bp+arg];
        break;

      case INS_LIT:
        vm->stack[++vm->sp] = arg;
        break;

      case INS_STO:
        vm->stack[vm->bp+arg] = vm->stack[vm->sp--];
        break;

      case INS_OPR:
        if (arg == 0) {
          vm->sp = vm->bp - 1;
          vm->pc = vm->stack[vm->bp+2];
          vm->bp = vm->stack[vm->bp+1];
        }
        else if (arg == 1) { vm->stack[vm->sp]*=-1; }
        else if (arg == 6) {
          if (vm->stack[vm->sp]%2 == 0) { vm->stack[vm->sp]=0; }
          else { vm->stack[vm->sp]=1; }
        }
        else if (arg != 7) { // 7は未使用
          right = vm->stack[vm->sp--];
          left = vm->stack[vm->sp];

          switch (arg) {
            case  2: val=left+right; break;
            case  3: val=left-right; break;
            case  4: val=left*right; break;
            case  5: val=left/right; break;
            case  8: val=(left==right)?1:0; break;
            case  9: val=(left!=right)?1:0; break;
            case 10: val=(left<right)?1:0; break;
            case 11: val=(left>=right)?1:0; break;
            case 12: val=(left>right)?1:0; break;
            case 13: val=(left<=right)?1:0; break;
          }
          vm->stack[vm->sp] = val;
        }
        break;

      case INS_INT:
        vm->sp += arg;
        break;

      case INS_JMP:
        vm->pc = arg;
        break;

      case INS_JPC:
        if (vm->stack[vm->sp--] == 0) {
          vm->pc = arg;
        }
        break;

      case INS_CAL:
        vm->stack[++vm->sp] = -1;
        vm->stack[++vm->sp] = vm->bp; // BPを保存
        vm->stack[++vm->sp] = vm->pc; // 戻り番地

        vm->bp = vm->sp - 2;
        vm->pc = arg;
        break;

      case INS_CSP:
        if (arg == 0) { scanf("%d", &(vm->stack[++vm->sp])); }
        else if (arg == 1) { printf("%d", vm->stack[vm->sp--]); }
        else if (arg == 2) { printf("\n"); }

        else if (arg == 10) { putchar((char)vm->stack[vm->sp--]); }
        else if (arg == 11) { vm->stack[++vm->sp]=(int)getchar(); }
        else if (arg == 12) {
          addr = vm->stack[vm->sp--];
          scanf("%s", buf);
          pos = 0;
          while ((val=(int)buf[pos])!= 0) { vm->stack[addr+pos++] = val; }
          vm->stack[addr+pos] = 0;
        }

        else if (arg == 20) { vm->stack[++vm->sp]=(int)time(NULL); }
        break;

      case INS_RET:
        val = vm->stack[vm->sp];

        old_bp = vm->stack[vm->bp+1];
        ret_addr = vm->stack[vm->bp+2];
        vm->sp = vm->bp - arg - 1;
        vm->bp = old_bp;
        vm->pc = ret_addr;

        vm->stack[++vm->sp] = val;
        break;

      case INS_LEA: // load effective address
        // 配列や変数の絶対アドレスを取得
        vm->stack[++vm->sp] = vm->bp+arg;
        break;

      case INS_LDI:
        // 配列等のアクセスに使用
        vm->stack[vm->sp] = vm->stack[vm->stack[vm->sp]];
        break;

      case INS_STI:
        // 配列等のアクセスに使用(書き込む)
        addr = vm->stack[vm->sp--];
        val = vm->stack[vm->sp--];
        vm->stack[addr] = val;
        break;

      case INS_LAB:
      case INS_UNK:
        break;
    }
  }
}

void run(VM *vm) {
  vm->pc = 0;
  vm->sp = 2;
  vm->bp = 0;

  vm->stack_size = STACK_SIZE;
  vm->stack = (int *)calloc(STACK_SIZE, sizeof(int));

  // 静的リンク(無視)、動的リンク、戻り番地
  vm->stack[0] = vm->stack[1] = vm->stack[2] = -1;

  exec_program(vm);
}
