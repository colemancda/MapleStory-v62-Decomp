/* FUN_007f41cd - 0x007f41cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_007f41cd(int param_1,int param_2,int param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_8;
  
  iVar1 = param_1 + 0xe0;
  local_8 = param_3;
  fVar6 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0xf0));
  fVar7 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 0xc);
  dVar2 = *(double *)(*(int *)(param_1 + 0x110) + 0x30);
  fVar8 = (float10)FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0xf0));
  fVar8 = fVar8 * (float10)dVar2 + (float10)iVar3;
  if ((float10)*(int *)(param_1 + 0x130) <= fVar8) {
    if (fVar8 <= (float10)*(int *)(param_1 + 0x138)) {
      return param_3;
    }
    uVar5 = FUN_004f1a11((double)(*(int *)(param_1 + 0x138) -
                                 *(int *)(*(int *)(param_1 + 0x110) + 0xc)) /
                         *(double *)(*(int *)(param_1 + 0x110) + 0x30));
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
    uVar5 = FUN_004f1a11(0);
    bVar4 = (double)((float10)(double)fVar6 - fVar7) == _DAT_008e8a80;
    *(undefined4 *)(param_1 + 0x108) = uVar5;
    if (bVar4) goto LAB_007f432b;
    FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0xf0));
    FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  }
  else {
    uVar5 = FUN_004f1a11((double)(*(int *)(param_1 + 0x130) -
                                 *(int *)(*(int *)(param_1 + 0x110) + 0xc)) /
                         *(double *)(*(int *)(param_1 + 0x110) + 0x30));
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
    uVar5 = FUN_004f1a11(0);
    bVar4 = (double)((float10)(double)fVar6 - fVar7) == _DAT_008e8a80;
    *(undefined4 *)(param_1 + 0x108) = uVar5;
    if (bVar4) goto LAB_007f432b;
    FUN_004f1993(iVar1,*(undefined4 *)(param_1 + 0xf0));
    FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  }
  local_8 = __ftol();
LAB_007f432b:
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (param_3 < local_8) {
    local_8 = param_3;
  }
  return local_8;
}


