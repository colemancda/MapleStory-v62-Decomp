/* FUN_008044eb - 0x008044eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_008044eb(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_c;
  int local_8;
  
  piVar1 = DAT_00978358;
  iVar2 = FUN_007b3bb4();
  if (iVar2 != 0) {
    FUN_005e497b(1,1,1,1);
    FUN_007f7fd3(0,0);
    FUN_007f1845();
    return 1;
  }
  local_c = 0;
  local_8 = 0;
  iVar2 = FUN_007a3f46();
  if (iVar2 == 0) {
    iVar2 = *(int *)(DAT_00973cd8 + 4);
    iVar7 = (*DAT_0097b5d8)();
    if (((iVar7 == iVar2) && (iVar2 = FUN_00816342(), iVar2 != 0)) && (DAT_00979178 == 0)) {
      iVar2 = FUN_0043f6fe();
      if (iVar2 < 0) {
        iVar2 = FUN_005265f8();
        iVar7 = FUN_005265f8();
        local_c = (uint)(iVar7 != 0) - (uint)(iVar2 != 0);
        iVar2 = FUN_005265f8();
        iVar7 = FUN_005265f8();
        local_8 = (uint)(iVar7 != 0) - (uint)(iVar2 != 0);
        iVar2 = (**(code **)(*piVar1 + 4))();
        iVar2 = FUN_00413367(iVar2 + 0x7b0);
        if (iVar2 != 0) {
          local_c = -local_c;
          local_8 = -local_8;
        }
      }
      else {
        local_c = 0;
        if (piVar1[0x138] == 0) {
LAB_008045c4:
          iVar2 = FUN_0043f6fe();
          if (iVar2 != 0x20) {
LAB_008045dd:
            local_8 = 0;
            goto LAB_00804672;
          }
        }
        else {
          iVar2 = FUN_0043f6fe();
          if (iVar2 != 0x10) {
            if (piVar1[0x138] == 0) goto LAB_008045c4;
            goto LAB_008045dd;
          }
        }
        local_8 = 1;
      }
    }
  }
  else {
    FUN_007b1952(&local_c,&local_8);
  }
LAB_00804672:
  FUN_005e497b(local_c < 0,0 < local_c,local_8 < 0,0 < local_8);
  FUN_007f7fd3(local_c,local_8);
  iVar2 = FUN_0048bb31();
  if (iVar2 != 0) {
    FUN_00804bea();
    return 1;
  }
  FUN_007f1845();
  (**(code **)(*piVar1 + 4))();
  iVar2 = FUN_00793618();
  if (iVar2 != 0) {
    return 1;
  }
  if (param_1[0x44] == 0) {
    fVar9 = (float10)FUN_004f1993();
    if ((((float10)_DAT_008e8a80 < fVar9) && (iVar2 = FUN_0048bb31(), iVar2 == 0)) &&
       ((iVar2 = FUN_00413367(), iVar2 < 0 && (iVar2 = FUN_00804da9(), iVar2 != 0)))) {
      FUN_004f1993(param_1 + 0xe);
      uVar3 = __ftol();
      FUN_004f1993(param_1 + 8);
      uVar4 = __ftol();
      FUN_004f1993(param_1 + 0x26);
      uVar5 = __ftol();
      FUN_004f1993(param_1 + 0x20);
      uVar6 = __ftol();
      iVar2 = FUN_008618a2(uVar6,uVar5,uVar4,uVar3);
      if (iVar2 != 0) {
        iVar7 = FUN_004f1a11(0);
        param_1[0x1e] = iVar7;
        iVar7 = FUN_004f1a11(0);
        param_1[0x18] = iVar7;
        iVar2 = FUN_004f1a11((double)*(int *)(iVar2 + 0xc));
        param_1[0xc] = iVar2;
        goto LAB_00804bd4;
      }
    }
    if (param_1[0x44] == 0) {
      return 1;
    }
  }
  iVar2 = FUN_0048bb31();
  if (((iVar2 == 0) && (iVar2 = FUN_00413367(), iVar2 < 0)) && (iVar2 = FUN_00804da9(), iVar2 != 0))
  {
    FUN_004f1993(param_1 + 0xe);
    uVar3 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar4 = __ftol();
    FUN_004f1993(param_1 + 0xe);
    iVar2 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar5 = __ftol();
    iVar2 = FUN_008618a2(uVar5,iVar2 + -0x14,uVar4,uVar3);
    if (iVar2 == 0) goto LAB_008049f9;
    iVar7 = FUN_004f1a11(0);
    param_1[0x1e] = iVar7;
    iVar7 = FUN_004f1a11(0);
    param_1[0x18] = iVar7;
    iVar7 = FUN_004f1a11((double)*(int *)(iVar2 + 0xc));
    param_1[0xc] = iVar7;
    FUN_004f1993(param_1 + 0xe,param_1[0x12]);
    iVar8 = __ftol();
    iVar7 = *(int *)(iVar2 + 0x14);
    if (iVar8 <= *(int *)(iVar2 + 0x14)) {
      iVar7 = iVar8;
    }
  }
  else {
LAB_008049f9:
    if (param_1[0x44] == 0) {
      return 1;
    }
    iVar2 = FUN_0048bb31();
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00413367();
    if (iVar2 < 1) {
      return 1;
    }
    iVar2 = FUN_00804da9();
    if (iVar2 == 0) {
      return 1;
    }
    FUN_004f1993(param_1 + 0xe);
    iVar2 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar3 = __ftol();
    FUN_004f1993(param_1 + 0xe);
    uVar4 = __ftol();
    FUN_004f1993(param_1 + 8);
    uVar5 = __ftol();
    iVar2 = FUN_008618a2(uVar5,uVar4,uVar3,iVar2 + 10);
    if (iVar2 == 0) {
      return 1;
    }
    FUN_004f1993();
    iVar7 = __ftol();
    if (*(int *)(iVar2 + 0x10) < iVar7) {
      return 1;
    }
    FUN_004f1993();
    iVar7 = __ftol();
    if (iVar7 + 10 < *(int *)(iVar2 + 0x10)) {
      return 1;
    }
    iVar7 = FUN_004f1a11(0);
    param_1[0x1e] = iVar7;
    iVar7 = FUN_004f1a11(0);
    param_1[0x18] = iVar7;
    iVar7 = FUN_004f1a11((double)*(int *)(iVar2 + 0xc));
    param_1[0xc] = iVar7;
    iVar7 = *(int *)(iVar2 + 0x10);
  }
  iVar2 = FUN_004f1a11((double)iVar7);
  param_1[0x12] = iVar2;
LAB_00804bd4:
  (**(code **)(*param_1 + 0x10))(0);
  return 1;
}


