/* FUN_007f3fe4 - 0x007f3fe4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_007f3fe4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_8;
  
  iVar3 = param_1 + 0x20;
  local_8 = param_3;
  fVar4 = (float10)FUN_004f1993(iVar3,*(undefined4 *)(param_1 + 0x30));
  fVar5 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
  fVar6 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  fVar7 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
  fVar8 = (float10)FUN_004f1993(iVar3,*(undefined4 *)(param_1 + 0x30));
  if ((float10)*(int *)(param_1 + 0x130) <= fVar8) {
    fVar8 = (float10)FUN_004f1993(iVar3,*(undefined4 *)(param_1 + 0x30));
    if (fVar8 <= (float10)*(int *)(param_1 + 0x138)) goto LAB_007f4138;
    uVar2 = FUN_004f1a11((double)*(int *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_004f1a11(0);
    bVar1 = (double)((float10)(double)fVar4 - fVar5) != _DAT_008e8a80;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if (bVar1) {
      FUN_004f1993(iVar3,*(undefined4 *)(param_1 + 0x30));
      FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
      goto LAB_007f4113;
    }
  }
  else {
    uVar2 = FUN_004f1a11((double)*(int *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_004f1a11(0);
    bVar1 = (double)((float10)(double)fVar4 - fVar5) != _DAT_008e8a80;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if (bVar1) {
      FUN_004f1993(iVar3,*(undefined4 *)(param_1 + 0x30));
      FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
LAB_007f4113:
      local_8 = __ftol();
    }
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (param_3 < local_8) {
    local_8 = param_3;
  }
LAB_007f4138:
  fVar4 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  if (fVar4 < (float10)*(int *)(param_1 + 0x134)) {
    uVar2 = FUN_004f1a11((double)*(int *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    uVar2 = FUN_004f1a11(0);
    bVar1 = (double)((float10)(double)fVar6 - fVar7) != _DAT_008e8a80;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    if (bVar1) {
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
      iVar3 = __ftol();
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      if (iVar3 < local_8) {
        local_8 = iVar3;
      }
    }
  }
  return local_8;
}


