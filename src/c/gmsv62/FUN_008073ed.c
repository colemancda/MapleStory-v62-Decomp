/* FUN_008073ed - 0x008073ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_008073ed(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  float10 fVar11;
  
  iVar1 = FUN_00807bbc();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *(int *)(DAT_00973cd8 + 4);
  iVar8 = 0;
  uVar7 = 0;
  iVar2 = (*DAT_0097b5d8)();
  if (((iVar2 == iVar1) && (iVar1 = FUN_00816342(), uVar10 = DAT_009796d4, iVar1 != 0)) &&
     (DAT_00979178 == 0)) {
    if (DAT_009796d4 == 0) {
LAB_00807476:
      uVar10 = 0;
    }
    else {
      piVar9 = (int *)(DAT_009796d4 + 4);
      iVar1 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))();
      if (iVar1 == 0) goto LAB_00807476;
      iVar1 = (**(code **)(*piVar9 + 0x48))();
      uVar10 = -(uint)(iVar1 != 0) & uVar10;
    }
    uVar7 = FUN_0043f6fe();
    if ((uVar7 < 0x80000000) || ((uVar10 != 0 && (iVar1 = FUN_0045dc32(), iVar1 == 0)))) {
      iVar8 = 0;
      iVar1 = FUN_0043f6fe();
      uVar7 = (uint)(iVar1 == 0x20);
    }
    else {
      iVar1 = FUN_005265f8();
      iVar2 = FUN_005265f8();
      iVar8 = (uint)(iVar2 != 0) - (uint)(iVar1 != 0);
      iVar1 = FUN_005265f8();
      iVar2 = FUN_005265f8();
      uVar7 = (uint)(iVar2 != 0) - (uint)(iVar1 != 0);
    }
  }
  FUN_007f7fd3(iVar8,uVar7);
  iVar1 = FUN_0048bb31();
  if (iVar1 != 0) {
    FUN_00807a2c();
    return 1;
  }
  FUN_007f1845();
  if (param_1[0x44] == 0) {
    fVar11 = (float10)FUN_004f1993();
    if ((((float10)_DAT_008e8a80 < fVar11) && (iVar1 = FUN_0048bb31(), iVar1 == 0)) &&
       ((iVar1 = FUN_00413367(), iVar1 < 0 && (iVar1 = FUN_00807ba4(), iVar1 != 0)))) {
      FUN_004f1993(param_1 + 0xe);
      uVar3 = __ftol();
      FUN_004f1993(param_1 + 8);
      uVar4 = __ftol();
      FUN_004f1993(param_1 + 0x26);
      uVar5 = __ftol();
      FUN_004f1993(param_1 + 0x20);
      uVar6 = __ftol();
      iVar1 = FUN_008618a2(uVar6,uVar5,uVar4,uVar3);
      if (iVar1 != 0) {
        iVar2 = FUN_004f1a11(0);
        param_1[0x1e] = iVar2;
        iVar2 = FUN_004f1a11(0);
        param_1[0x18] = iVar2;
        iVar1 = FUN_004f1a11((double)*(int *)(iVar1 + 0xc));
        param_1[0xc] = iVar1;
        goto LAB_00807a16;
      }
    }
    if (param_1[0x44] == 0) {
      return 1;
    }
  }
  iVar1 = FUN_0048bb31();
  if (((iVar1 == 0) && (iVar1 = FUN_00413367(), iVar1 < 0)) && (iVar1 = FUN_00807ba4(), iVar1 != 0))
  {
    FUN_004f1993(param_1 + 0xe);
    uVar3 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar4 = __ftol();
    FUN_004f1993(param_1 + 0xe);
    iVar1 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar5 = __ftol();
    iVar1 = FUN_008618a2(uVar5,iVar1 + -0x14,uVar4,uVar3);
    if (iVar1 == 0) goto LAB_0080783b;
    iVar2 = FUN_004f1a11(0);
    param_1[0x1e] = iVar2;
    iVar2 = FUN_004f1a11(0);
    param_1[0x18] = iVar2;
    iVar2 = FUN_004f1a11((double)*(int *)(iVar1 + 0xc));
    param_1[0xc] = iVar2;
    FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    iVar8 = __ftol();
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar8 <= *(int *)(iVar1 + 0x14)) {
      iVar2 = iVar8;
    }
  }
  else {
LAB_0080783b:
    if (param_1[0x44] == 0) {
      return 1;
    }
    iVar1 = FUN_0048bb31();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00413367();
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = FUN_00807ba4();
    if (iVar1 == 0) {
      return 1;
    }
    FUN_004f1993(param_1 + 0xe);
    iVar1 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar3 = __ftol();
    FUN_004f1993(param_1 + 0xe);
    uVar4 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar5 = __ftol();
    iVar1 = FUN_008618a2(uVar5,uVar4,uVar3,iVar1 + 10);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_004f1993();
    iVar2 = __ftol();
    if (*(int *)(iVar1 + 0x10) < iVar2) {
      return 1;
    }
    FUN_004f1993();
    iVar2 = __ftol();
    if (iVar2 + 10 < *(int *)(iVar1 + 0x10)) {
      return 1;
    }
    iVar2 = FUN_004f1a11(0);
    param_1[0x1e] = iVar2;
    iVar2 = FUN_004f1a11(0);
    param_1[0x18] = iVar2;
    iVar2 = FUN_004f1a11((double)*(int *)(iVar1 + 0xc));
    param_1[0xc] = iVar2;
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  iVar1 = FUN_004f1a11((double)iVar2);
  param_1[0x12] = iVar1;
LAB_00807a16:
  (**(code **)(*param_1 + 0x10))(0);
  return 1;
}


