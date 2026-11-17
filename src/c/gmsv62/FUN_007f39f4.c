/* FUN_007f39f4 - 0x007f39f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_007f39f4(int *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  int local_5c [4];
  undefined4 local_4c;
  undefined1 local_44 [16];
  undefined4 local_34;
  double local_2c;
  double local_24;
  double local_1c;
  undefined8 local_14;
  uint local_c;
  int local_8;
  
  local_c = FUN_007f41cd(param_2,*param_3);
  fVar6 = (float10)FUN_004f1993(param_2);
  if (((float10)_DAT_008e8a80 < fVar6) ||
     (fVar6 = (float10)FUN_004f1993(param_1 + 0x38), fVar6 <= (float10)_DAT_008e8a80)) {
    fVar6 = (float10)FUN_004f1993(param_2);
    if ((float10)*(double *)(param_1[0x44] + 0x40) <= fVar6) {
      fVar6 = (float10)FUN_004f1993(param_1 + 0x38);
      iVar2 = param_1[0x44];
      if ((((fVar6 < (float10)*(double *)(iVar2 + 0x40)) && (*(int *)(iVar2 + 0x50) != 0)) &&
          (iVar4 = *(int *)(*(int *)(iVar2 + 0x50) + 0x4c), iVar4 != 0)) && (iVar4 != iVar2)) {
        if (_DAT_008e8a80 < *(double *)(iVar4 + 0x30)) {
          uVar1 = *(undefined8 *)(iVar4 + 0x40);
          goto LAB_007f3a83;
        }
        iVar2 = FUN_004f1a11(*(undefined8 *)(iVar2 + 0x40));
        param_1[0x3c] = iVar2;
        iVar2 = FUN_004f1a11(0);
        param_1[0x42] = iVar2;
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1[0x44] + 0x4c);
    if (((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + 0x50), iVar4 != 0)) && (iVar4 != param_1[0x44]))
    {
      if (*(double *)(iVar4 + 0x30) <= _DAT_008e8a80) {
        iVar2 = FUN_004f1a11(0);
        param_1[0x42] = iVar2;
        iVar2 = FUN_004f1a11(0);
        param_1[0x3c] = iVar2;
      }
      else {
        uVar1 = 0;
LAB_007f3a83:
        iVar2 = FUN_004f1a11(uVar1);
        param_1[0x3c] = iVar2;
        FUN_007f14d1(param_1 + 0x38,iVar4);
        local_c = 0;
        (**(code **)(*param_1 + 0x10))(iVar4,0);
      }
    }
  }
  fVar6 = (float10)FUN_004f1993();
  if ((float10)_DAT_008e8a80 <= fVar6) {
    fVar6 = (float10)FUN_004f1993();
    if (fVar6 <= (float10)*(double *)(param_1[0x44] + 0x40)) {
      FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
      *param_3 = *param_3 - local_c;
      (**(code **)(*param_1 + 0x14))();
      return 0;
    }
  }
  piVar3 = param_1 + 0x38;
  piVar5 = local_5c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  fVar6 = (float10)FUN_004f1993(local_5c,local_4c);
  if ((float10)_DAT_008e8a80 <= fVar6) {
    local_1c = *(double *)(param_1[0x44] + 0x40);
    local_8 = 0;
    fVar6 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
    local_14 = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(local_5c,local_4c);
    local_24 = (double)fVar6;
    local_1c = local_1c - local_14;
    fVar6 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
    iVar2 = *(int *)(param_1[0x44] + 0x50);
    fVar6 = (float10)local_1c / ((float10)local_24 - fVar6);
    local_14 = (double)CONCAT44(iVar2,(undefined4)local_14);
  }
  else {
    local_8 = 1;
    fVar6 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
    local_14 = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(param_2,*(undefined4 *)(param_2 + 0x10));
    local_1c = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(local_5c,local_4c);
    iVar2 = *(int *)(param_1[0x44] + 0x4c);
    fVar6 = (float10)local_14 / ((float10)local_1c - fVar6);
    local_14 = (double)CONCAT44(iVar2,(undefined4)local_14);
  }
  local_1c = (double)fVar6;
  local_c = __ftol();
  *param_3 = *param_3 - local_c;
  if (iVar2 == 0) {
    if (local_8 == 0) {
      uVar1 = *(undefined8 *)(param_1[0x44] + 0x40);
    }
    else {
      uVar1 = 0;
    }
    iVar2 = FUN_004f1a11(uVar1);
    param_1[0x3c] = iVar2;
    fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
    local_24 = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(local_44,local_34);
    local_2c = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
    fVar6 = ((float10)local_2c - fVar6) * (float10)local_1c + (float10)local_24;
  }
  else {
    if (_DAT_008e8a80 < *(double *)(iVar2 + 0x30)) {
      if (local_8 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(iVar2 + 0x40);
      }
      iVar2 = FUN_004f1a11(uVar1);
      param_1[0x3c] = iVar2;
      fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
      local_2c = (double)fVar6;
      fVar6 = (float10)FUN_004f1993(local_44,local_34);
      local_24 = (double)fVar6;
      fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
      iVar2 = FUN_004f1a11((double)(((float10)local_24 - fVar6) * (float10)local_1c +
                                   (float10)local_2c));
      param_1[0x42] = iVar2;
      if (local_8 == 0) {
        fVar6 = (float10)FUN_004f1993(param_1 + 0x3e);
        if (fVar6 < (float10)_DAT_008e8a80) goto LAB_007f3e21;
      }
      else {
        fVar6 = (float10)FUN_004f1993(param_1 + 0x3e);
        if ((float10)_DAT_008e8a80 < fVar6) {
LAB_007f3e21:
          iVar2 = FUN_004f1a11(0);
          param_1[0x42] = iVar2;
        }
      }
      FUN_007f14d1(param_1 + 0x38,(int)((ulonglong)local_14 >> 0x20));
      iVar2 = *param_1;
      uVar7 = local_14._4_4_;
      goto LAB_007f3ed7;
    }
    if (local_8 == 0) {
      if (*(double *)(iVar2 + 0x38) <= _DAT_008e8a80) {
        uVar1 = *(undefined8 *)(param_1[0x44] + 0x40);
        goto LAB_007f3d40;
      }
    }
    else if (_DAT_008e8a80 <= *(double *)(iVar2 + 0x38)) {
      uVar1 = 0;
LAB_007f3d40:
      iVar2 = FUN_004f1a11(uVar1);
      param_1[0x3c] = iVar2;
      iVar2 = FUN_004f1a11(0);
      param_1[0x42] = iVar2;
      FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
      (**(code **)(*param_1 + 0x14))();
      return 1;
    }
    if (local_8 == 0) {
      uVar1 = *(undefined8 *)(param_1[0x44] + 0x40);
    }
    else {
      uVar1 = 0;
    }
    iVar2 = FUN_004f1a11(uVar1);
    param_1[0x3c] = iVar2;
    fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
    local_14 = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(local_44,local_34);
    local_24 = (double)fVar6;
    fVar6 = (float10)FUN_004f1993(param_2 + 0x18,*(undefined4 *)(param_2 + 0x28));
    fVar6 = ((float10)local_24 - fVar6) * (float10)local_1c + (float10)local_14;
  }
  iVar2 = FUN_004f1a11((double)fVar6);
  param_1[0x42] = iVar2;
  FUN_007f14d1(param_1 + 0x38,param_1[0x44]);
  iVar2 = *param_1;
  uVar7 = 0;
LAB_007f3ed7:
  (**(code **)(iVar2 + 0x10))(uVar7,(ulonglong)local_c << 0x20);
  return 1;
}


