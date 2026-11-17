/* FUN_007f81c8 - 0x007f81c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f81c8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  if (0 < *(int *)(param_1 + 0x478)) goto LAB_007f8353;
  if (*(int *)(param_1 + 0x240) == 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 1;
    uVar2 = FUN_004133f0();
    *(uint *)(param_1 + 0x478) = (uVar2 % 2000 + 1000) / 0x5a;
    uVar2 = FUN_004133f0();
    *(uint *)(param_1 + 0x2cc) = uVar2;
    *(undefined4 *)(param_1 + 0x2d4) = 1;
    iVar1 = uVar2 % 3 - 1;
    *(int *)(param_1 + 0x474) = iVar1;
    FUN_007f7fd3(iVar1,0);
    uVar3 = FUN_00413367(param_1 + 0x144,*(undefined4 *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x27c) = uVar3;
    goto LAB_007f8353;
  }
  uVar2 = FUN_004133f0();
  *(uint *)(param_1 + 0x478) = (uVar2 % 400 + 800) / 0x5a;
  if (*(int *)(param_1 + 0x474) == 0) {
LAB_007f829b:
    fVar6 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    if ((double)fVar6 <= (double)*piVar5) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x474) = uVar3;
  }
  else {
    iVar1 = param_1 + 0x20;
    FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    (**(code **)(**(int **)(param_1 + 0x240) + 0x10))();
    uVar3 = __ftol();
    iVar4 = FUN_0087a90a(uVar3);
    if (99 < iVar4) goto LAB_007f829b;
    fVar6 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
    if (fVar6 == (float10)*(int *)(param_1 + 0x130)) {
      *(undefined4 *)(param_1 + 0x474) = 1;
    }
    else {
      fVar6 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0x30));
      if (fVar6 == (float10)*(int *)(param_1 + 0x138)) {
        *(undefined4 *)(param_1 + 0x474) = 0xffffffff;
      }
    }
  }
  FUN_007f7fd3(*(undefined4 *)(param_1 + 0x474),0);
LAB_007f8353:
  *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + -1;
  return;
}


