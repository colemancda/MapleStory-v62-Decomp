/* FUN_007f9202 - 0x007f9202 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_007f9202(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  int iStack_10;
  
  iVar4 = DAT_00978138;
  if (*(int *)(param_1 + 0x238) == 2) {
    iVar7 = 0x7fffffff;
    iStack_10 = -0x80000000;
    if (*(int *)(param_1 + 0x114) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x114) + 0x20);
      iVar7 = *(int *)(*(int *)(DAT_00978138 + 0x34) + iVar6 * 8);
      iStack_10 = *(int *)(*(int *)(DAT_00978138 + 0x34) + 4 + iVar6 * 8);
    }
    iVar6 = *(int *)(*(int *)(DAT_00978138 + 0x34) + *(int *)(param_1 + 0x23c) * 8);
    iVar1 = *(int *)(*(int *)(DAT_00978138 + 0x34) + 4 + *(int *)(param_1 + 0x23c) * 8);
    if (iVar6 <= iVar7) {
      iVar7 = iVar6;
    }
    if (iStack_10 <= iVar1) {
      iStack_10 = iVar1;
    }
    if (0x28 < iStack_10 - iVar7) {
      iVar7 = iVar7 + 0x14;
      iStack_10 = iStack_10 + -0x14;
    }
    fVar8 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
    if ((float10)iVar7 <= fVar8) {
      fVar8 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
      if ((float10)iStack_10 < fVar8) {
        uVar5 = FUN_004f1a11((double)iStack_10);
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        if (*(int *)(param_1 + 0x474) != 0) {
          uVar9 = 0xffffffff;
          goto LAB_007f92f5;
        }
      }
    }
    else {
      uVar5 = FUN_004f1a11((double)iVar7);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      if (*(int *)(param_1 + 0x474) != 0) {
        uVar9 = 1;
LAB_007f92f5:
        FUN_007f7fd3(uVar9);
      }
    }
  }
  if (*(int *)(param_1 + 0x238) != 3) {
    uVar5 = FUN_007f3054(param_2,param_3,param_4);
    return uVar5;
  }
  bVar2 = false;
  bVar3 = false;
  iVar7 = param_1 + 0x20;
  fVar8 = (float10)FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
  iVar6 = *(int *)(iVar4 + 0x24);
  if ((float10)iVar6 <= fVar8) {
    fVar8 = (float10)FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
    iVar6 = *(int *)(iVar4 + 0x2c) + -1;
    if ((float10)iVar6 < fVar8) goto LAB_007f9355;
  }
  else {
LAB_007f9355:
    uVar5 = FUN_004f1a11((double)iVar6);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    bVar2 = true;
  }
  fVar8 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  iVar6 = *(int *)(iVar4 + 0x28);
  if ((float10)iVar6 <= fVar8) {
    fVar8 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    iVar6 = *(int *)(iVar4 + 0x30) + -1;
    if (fVar8 <= (float10)iVar6) goto LAB_007f93c9;
  }
  uVar5 = FUN_004f1a11((double)iVar6);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  bVar3 = true;
LAB_007f93c9:
  if (bVar2) {
    fVar8 = (float10)FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
    if (fVar8 == (float10)*(int *)(iVar4 + 0x24)) {
      FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
    }
    else {
      FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
    }
    uVar5 = __ftol();
    *(undefined4 *)(param_1 + 0x474) = uVar5;
  }
  if (bVar3) {
    fVar8 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    if (fVar8 == (float10)*(int *)(iVar4 + 0x28)) {
      FUN_004f1993(iVar7,*(undefined4 *)(param_1 + 0x30));
    }
    else {
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    }
    uVar5 = __ftol();
    *(undefined4 *)(param_1 + 0x478) = uVar5;
  }
  return 0;
}


