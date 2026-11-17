/* FUN_005a8930 - 0x005a8930 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a8930(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar10;
  int unaff_EBP;
  bool bVar11;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int *piStack_50;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_50 = (int *)0x5a894f;
  iVar5 = FUN_0043f545();
  if (iVar5 < 1) {
    piStack_50 = (int *)0x5a895b;
    FUN_004125e6();
    goto LAB_005a8f81;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0xce0);
  piStack_50 = (int *)0x5a8970;
  iVar5 = FUN_0043f545();
  iVar5 = *(int *)(iVar2 + 0xce4) - iVar5;
  piStack_50 = (int *)0x0;
  *(int *)(unaff_EBP + -0x18) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iStack_54 = 0x5a8989;
  iVar6 = FUN_0043f90a();
  iVar7 = *(int *)(iVar2 + 0x484) / 10000;
  *(int *)(unaff_EBP + 0xc) = iVar6;
  if ((iVar7 == 0xbe) || (iVar7 == 0xc1)) {
    uVar8 = *(uint *)(iVar2 + 0x498);
    *(uint *)(unaff_EBP + -0x14) = uVar8;
  }
  else {
    piStack_50 = (int *)0x5a89bc;
    uVar8 = FUN_0043f6fe();
    uVar8 = *(uint *)((uint)(uVar8 < 0x80000000) * 0x3f4 + 0x4bc + iVar2);
    *(uint *)(unaff_EBP + -0x14) = uVar8;
  }
  iVar7 = (&DAT_0097868c)[iVar6 * 6];
  *(undefined **)(unaff_EBP + -0x24) = &DAT_00978678 + iVar6 * 0x18;
  if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= uVar8)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(uVar8 * 0x20 + 0x10 + iVar7);
  }
  uVar3 = *(uint *)(iVar2 + 0x4b4);
  if ((uVar3 & 1) == uVar8) {
    if (*(int *)(iVar2 + 0x468) == 0) {
      iVar7 = *(int *)(unaff_EBP + 0xc);
      if (((iVar7 != 0x24) && (iVar7 != 0x25)) && (iVar7 != 0x69)) {
        bVar11 = iVar7 == 0x68;
        goto LAB_005a8a39;
      }
      goto LAB_005a8a41;
    }
    if (*(int *)(unaff_EBP + 0xc) == 9) goto LAB_005a8a41;
    bVar11 = *(int *)(unaff_EBP + 0xc) == 10;
LAB_005a8a39:
    if (bVar11) goto LAB_005a8a41;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
LAB_005a8a41:
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  iVar7 = (&DAT_0097868c)[iVar6 * 6];
  if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + -0x14))) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  else {
    iVar10 = *(uint *)(unaff_EBP + -0x14) * 0x20;
    iVar5 = *(int *)(iVar10 + 0x18 + iVar7);
    uVar4 = *(undefined4 *)(iVar10 + 0x1c + iVar7);
    *(int *)(unaff_EBP + -0x3c) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    if ((uVar3 & 1) == 0) {
      *(int *)(unaff_EBP + -0x3c) = -iVar5;
    }
    iVar5 = *(int *)(unaff_EBP + -0x18);
  }
  iVar7 = (&DAT_0097868c)[iVar6 * 6];
  if ((iVar7 == 0) || (uVar8 = *(uint *)(unaff_EBP + -0x14), *(uint *)(iVar7 + -4) <= uVar8)) {
    iStack_60 = 0;
  }
  else if ((uVar3 & 1) == 0) {
    iStack_60 = *(int *)(uVar8 * 0x20 + 0x18 + (&DAT_0097868c)[iVar6 * 6]);
  }
  else {
    iStack_60 = -*(int *)(uVar8 * 0x20 + 0x18 + iVar7);
  }
  iStack_60 = *(int *)(unaff_EBP + -0x1c) - iStack_60;
  iVar6 = *(int *)(iVar2 + 0x468);
  *(int *)(unaff_EBP + -0x34) = iStack_60;
  *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x38) + iVar5;
  if (iVar6 == 0) {
    piStack_50 = (int *)0x5a8ad2;
    FUN_0043f6fe();
    piStack_50 = (int *)0x5a8ad9;
    uVar8 = FUN_0043f6fe();
    iVar5 = (uint)(uVar8 < 0x80000000) * 0xfd + *(int *)(unaff_EBP + 0xc);
    piVar9 = (int *)(iVar2 + 0x4cc + iVar5 * 4);
    iVar5 = *(int *)(*(int *)(iVar2 + 0x4cc + iVar5 * 4) + 4 + *(int *)(unaff_EBP + -0x14) * 8);
    iVar6 = *(int *)(iVar5 + 0x14);
    uVar4 = *(undefined4 *)(iVar5 + 0x18);
    *(int *)(unaff_EBP + -0x2c) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      *(int *)(unaff_EBP + -0x2c) = -iVar6;
    }
    iStack_60 = 10000;
    iVar5 = *(int *)(iVar2 + 0x484) / 10000;
    if ((iVar5 == 0xbe) || (iVar5 == 0xc1)) {
      piStack_50 = (int *)0x5a8b3d;
      uVar8 = FUN_0043f6fe();
      piVar1 = (int *)(iVar2 + 0x684 +
                      ((uint)(uVar8 < 0x80000000) * 0xfd + *(int *)(unaff_EBP + 0xc)) * 4);
      *(int **)(unaff_EBP + -0x20) = piVar1;
      piStack_50 = (int *)0x5a8b5f;
      uVar8 = FUN_0043f6fe();
      iVar6 = *(int *)(*(int *)(*piVar1 + 4 +
                               *(int *)((uint)(uVar8 < 0x80000000) * 0x3f4 + 0x4bc + iVar2) * 8) +
                      0x28) - *(int *)(*(int *)(*piVar9 + 4 + *(int *)(iVar2 + 0x498) * 8) + 0x1c);
      piStack_50 = (int *)0x5a8b93;
      uVar8 = FUN_0043f6fe();
      iVar5 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4 +
                               *(int *)((uint)(uVar8 < 0x80000000) * 0x3f4 + 0x4bc + iVar2) * 8) +
                      0x2c) - *(int *)(*(int *)(*piVar9 + 4 + *(int *)(iVar2 + 0x498) * 8) + 0x20);
      if (*(int *)(iVar2 + 0xcd0) == 0) {
        piStack_50 = (int *)0x80004003;
        iStack_54 = 0x5a8bd6;
        FUN_00878dfb();
      }
      piStack_50 = (int *)0x5a8be1;
      iVar7 = FUN_0043210d();
      if (iVar7 != 0) {
        iVar6 = -iVar6;
      }
      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + iVar6;
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + iVar5;
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + iVar6;
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + iVar5;
      iStack_60 = extraout_ECX;
    }
  }
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x18);
  local_64 = iVar2 + 0xcd0;
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 0x10) = &iStack_60;
  iStack_54 = uVar4;
  FUN_0041160e();
  *(int **)(unaff_EBP + 0x10) = &local_64;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_005a8f92();
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  local_64 = iVar2 + 0xcc4;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_5c = *(int *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + 0x10) = &iStack_60;
  iStack_60 = extraout_ECX_00;
  iStack_54 = uVar4;
  FUN_0041160e();
  *(int **)(unaff_EBP + 0x10) = &local_64;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_005a8f92();
  piStack_50 = (int *)0x3;
  iStack_54 = 0;
  iStack_58 = 0x5a8c68;
  FUN_004031b7();
  iVar5 = *(int *)(iVar2 + 0xcbc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    piStack_50 = (int *)0x80004003;
    iStack_54 = 0x5a8c85;
    FUN_00878dfb();
  }
  piStack_50 = (int *)(unaff_EBP + -0x4c);
  iStack_54 = unaff_EBP + 0x10;
  iStack_58 = 0x5a8c94;
  piVar9 = (int *)FUN_00425067();
  if (*piVar9 == 0) {
LAB_005a8cf4:
    *(undefined1 *)(unaff_EBP + 0xf) = 0;
  }
  else {
    if (*(int *)(iVar2 + 0x468) == 0) {
      iVar5 = *(int *)(unaff_EBP + 0xc);
      if ((((iVar5 == 0x24) || (iVar5 == 0x25)) || (iVar5 == 0x69)) || (iVar5 == 0x68))
      goto LAB_005a8cef;
LAB_005a8cb5:
      bVar11 = false;
    }
    else {
      if ((*(int *)(unaff_EBP + 0xc) != 9) && (*(int *)(unaff_EBP + 0xc) != 10)) goto LAB_005a8cb5;
LAB_005a8cef:
      bVar11 = true;
    }
    if ((bVar11) ||
       (*(int *)(*(int *)(unaff_EBP + -0x14) * 0x20 + 0xc +
                *(int *)(*(int *)(unaff_EBP + -0x24) + 0x14)) == 0)) goto LAB_005a8cf4;
    *(undefined1 *)(unaff_EBP + 0xf) = 1;
  }
  piStack_50 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_50 != (int *)0x0) {
    iStack_54 = 0x5a8d09;
    (**(code **)(*piStack_50 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_50 = (int *)(unaff_EBP + -0x4c);
  iStack_54 = 0x5a8d16;
  piStack_50 = (int *)FUN_00402bc3();
  if ((int)piStack_50 < 0) {
    iStack_54 = 0x5a8d21;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + 0xf) != '\0') {
    piStack_50 = (int *)0x3;
    iStack_54 = 0;
    iStack_58 = 0x5a8d37;
    FUN_004031b7();
    piStack_50 = *(int **)(unaff_EBP + -0x10);
    iStack_58 = unaff_EBP + -0x4c;
    iStack_5c = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = 0x5a8d4e;
    iStack_54 = uVar4;
    FUN_00424e27();
    iStack_60 = 0x5a8d55;
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_58 = 0x5a8d60;
    FUN_004115d9();
    iStack_58 = 0x5a8d67;
    iVar5 = FUN_0040eed0();
    iStack_60 = ((*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x28)) - iVar5) +
                *(int *)(iVar2 + 0xce4);
    iStack_5c = *(int *)(iVar2 + 0xce0) + *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + 0x10) = &iStack_60;
    local_64 = iVar2 + 0xcbc;
    iStack_58 = iStack_60;
    FUN_0041160e();
    *(int **)(unaff_EBP + 0x10) = &local_64;
    FUN_0046fc23(unaff_EBP + 8);
    FUN_005a8f92();
    piStack_50 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_50 != (int *)0x0) {
      iStack_54 = 0x5a8db9;
      (**(code **)(*piStack_50 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_50 = (int *)(unaff_EBP + -0x4c);
    iStack_54 = 0x5a8dc6;
    piStack_50 = (int *)FUN_00402bc3();
    if ((int)piStack_50 < 0) {
      iStack_54 = 0x5a8dd1;
      FUN_00878dfb();
    }
  }
  piStack_50 = (int *)0x3;
  iStack_54 = 0;
  iStack_58 = 0x5a8ddd;
  FUN_004031b7();
  iVar5 = *(int *)(iVar2 + 0xccc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    piStack_50 = (int *)0x80004003;
    iStack_54 = 0x5a8dfa;
    FUN_00878dfb();
  }
  piStack_50 = (int *)(unaff_EBP + -0x4c);
  iStack_54 = unaff_EBP + 0x10;
  iStack_58 = 0x5a8e09;
  piVar9 = (int *)FUN_00425067();
  piStack_50 = *(int **)(unaff_EBP + 0x10);
  *(bool *)(unaff_EBP + 0xf) = *piVar9 != 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_50 != (int *)0x0) {
    iStack_54 = 0x5a8e21;
    (**(code **)(*piStack_50 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_50 = (int *)(unaff_EBP + -0x4c);
  iStack_54 = 0x5a8e2e;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_54 = 0x5a8e39;
    piStack_50 = (int *)iVar5;
    FUN_00878dfb();
    piStack_50 = (int *)extraout_ECX_01;
  }
  if (*(char *)(unaff_EBP + 0xf) != '\0') {
    piStack_50 = (int *)0x3;
    iStack_54 = 0;
    iStack_58 = 0x5a8e4f;
    FUN_004031b7();
    piStack_50 = *(int **)(unaff_EBP + -0x10);
    iStack_58 = unaff_EBP + -0x4c;
    iStack_5c = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_60 = 0x5a8e66;
    iStack_54 = uVar4;
    FUN_00424e27();
    iStack_60 = 0x5a8e6d;
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_58 = 0x5a8e78;
    FUN_004115d9();
    iStack_58 = 0x5a8e7f;
    iStack_60 = FUN_0040eed0();
    iStack_60 = *(int *)(iVar2 + 0xce4) - iStack_60;
    iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
    *(int **)(unaff_EBP + 0x10) = &iStack_60;
    local_64 = iVar2 + 0xccc;
    iStack_58 = iStack_60;
    FUN_0041160e();
    *(int **)(unaff_EBP + 0x10) = &local_64;
    FUN_0046fc23(unaff_EBP + 8);
    FUN_005a8f92();
    piStack_50 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piStack_50 != (int *)0x0) {
      iStack_54 = 0x5a8ebf;
      (**(code **)(*piStack_50 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_50 = (int *)(unaff_EBP + -0x4c);
    iStack_54 = 0x5a8ecc;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_54 = 0x5a8ed7;
      piStack_50 = (int *)iVar5;
      FUN_00878dfb();
      piStack_50 = (int *)extraout_ECX_02;
    }
  }
  local_64 = iVar2 + 0xcd4;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 0x10) = &iStack_60;
  iStack_60 = (int)piStack_50;
  iStack_54 = uVar4;
  piStack_50 = (int *)*(undefined4 *)(unaff_EBP + -0x10);
  FUN_0041160e();
  *(int **)(unaff_EBP + 0x10) = &local_64;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_005a8f92();
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  local_64 = iVar2 + 0xcd8;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 0x10) = &iStack_60;
  iStack_54 = uVar4;
  FUN_0041160e();
  *(int **)(unaff_EBP + 0x10) = &local_64;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_005a8f92();
  piStack_50 = *(int **)(unaff_EBP + -0x10);
  local_64 = iVar2 + 0xcc0;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + 0x10) = &iStack_60;
  iStack_54 = uVar4;
  FUN_0041160e();
  *(int **)(unaff_EBP + 0x10) = &local_64;
  FUN_0046fc23(unaff_EBP + 8);
  FUN_005a8f92();
  piStack_50 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_50 != (int *)0x0) {
    iStack_54 = 0x5a8f81;
    (**(code **)(*piStack_50 + 8))();
  }
LAB_005a8f81:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


