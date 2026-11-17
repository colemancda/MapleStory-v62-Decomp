/* ptr_0075f8c5 - 0x0075f8c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0075f8c5(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + *(int *)(param_1 + 0x9c) * 8);
  if ((iVar1 == 0) || (param_2 == 2000)) {
    FUN_0076309d();
  }
  else if (param_2 == 0x7d1) {
    piVar2 = *(int **)(iVar1 + 0x7c);
    piVar5 = piVar2;
    for (uVar4 = 0; (piVar2 != (int *)0x0 && (uVar4 < (uint)piVar2[-1])); uVar4 = uVar4 + 1) {
      if (*piVar5 == 0x7fffffff) {
        uVar6 = 0x7fffffff;
        goto LAB_0075f947;
      }
      piVar5 = piVar5 + 1;
    }
    FUN_0075fa3f(0x7fffffff);
  }
  else if (param_2 == 0x7d2) {
    if (*(int *)(param_1 + 0x90) == 0) {
      FUN_0075f966();
    }
  }
  else if ((param_2 == 0x7d3) && (uVar4 = *(uint *)(param_1 + 0x98), -1 < (int)uVar4)) {
    iVar1 = *(int *)(iVar1 + 0x7c);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar1 + -4);
    }
    if (uVar4 < uVar3) {
      uVar6 = *(undefined4 *)(iVar1 + uVar4 * 4);
LAB_0075f947:
      FUN_0075fc82(uVar6);
    }
  }
  return;
}


