/* FUN_007f7f02 - 0x007f7f02 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f7f02(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x14) == (int *)0x0) {
LAB_007f7f2a:
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(&DAT_0097946c);
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x14) == 0)) goto LAB_007f7f2a;
    iVar2 = *(int *)(param_1 + 0x14) + -4;
  }
  if (iVar2 == 0) {
LAB_007f7f6a:
    iVar2 = *(int *)(param_1 + 0x238);
    if (iVar2 == 0) {
      FUN_007f8025();
    }
    else if (iVar2 == 1) {
      FUN_007f81c8();
    }
    else if (iVar2 == 2) {
      FUN_007f835e();
    }
    else if (iVar2 == 3) {
      FUN_007f8875();
    }
  }
  else {
    if (((*(int *)(iVar2 + 0x204) == 0) && (*(int *)(iVar2 + 0x210) == 0)) &&
       (*(int *)(iVar2 + 0x280) == 0)) {
      iVar2 = FUN_004cd670(iVar2 + 0x3d0,*(undefined4 *)(iVar2 + 0x3d8));
      if (iVar2 == 0) goto LAB_007f7f6a;
    }
    FUN_007f7fd3(0,0);
  }
  if ((*(int *)(param_1 + 0x240) != 0) && (*(int *)(param_1 + 0x244) == 0)) {
    piVar1 = (int *)(param_1 + 0x248);
    *piVar1 = *piVar1 - param_2;
    if (*piVar1 < 0) {
      FUN_007f73d8(0,0,0);
    }
  }
  FUN_007f1845(param_2);
  return;
}


