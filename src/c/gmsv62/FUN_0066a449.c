/* FUN_0066a449 - 0x0066a449 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0066a449(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x1b0);
  do {
    piVar2 = piVar3;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)FUN_00671813();
      piVar3[1] = param_3;
      piVar3[2] = param_4;
      *piVar3 = param_5;
      piVar3[3] = param_6;
      return;
    }
    iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    piVar3 = (int *)(iVar1 + 0x10U & -(uint)(iVar1 != 0));
  } while (*piVar2 != param_5);
  piVar2[1] = param_3;
  piVar2[2] = param_4;
  *piVar2 = param_5;
  piVar2[3] = param_6;
  return;
}


