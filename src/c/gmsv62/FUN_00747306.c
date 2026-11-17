/* FUN_00747306 - 0x00747306 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00747306(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0xc2c);
  uVar2 = (uint)(*(int *)(extraout_ECX + 0xc78) == 0);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(uint *)(extraout_ECX + 0xc78) = uVar2;
  *(uint *)(DAT_00978134 + 0x50) = uVar2;
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x10);
  iVar5 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar4 = FUN_00424ee1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  FUN_004125d9();
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x14);
  iVar5 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar4 = FUN_00424f08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  FUN_004125d9();
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x14);
  iVar5 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004308ad(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
  iVar5 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb34;
  iVar5 = *piVar3;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb3c;
  *(int **)(unaff_EBP + -0x18) = piVar3;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
  iVar5 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar5 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar5 = (**(code **)(iVar5 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  iVar5 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
  iVar5 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar5 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar5 = (**(code **)(iVar5 + 0x90))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar5 < 0) {
    FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = *(int *)(unaff_EBP + -0x24);
  iVar8 = (-(uint)(*(int *)(iVar5 + 0xc78) != 0) & 0xffffffb0) + 0x215;
  iVar6 = FUN_0087a90a(*(int *)(unaff_EBP + -0x10) - iVar8);
  *(int *)(unaff_EBP + -0x24) = iVar6 * 5;
  FUN_00403191(&DAT_00980690);
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar4 = 3;
  iVar6 = FUN_0042a378(3);
  FUN_004295f1(iVar6 + *(int *)(unaff_EBP + -0x24),uVar4);
  iVar6 = unaff_EBP + -0x34;
  iVar9 = unaff_EBP + -0x44;
  uVar4 = 0x287;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00424e27(0x287,iVar8,iVar9,iVar6);
  FUN_00424f2f(uVar4,iVar8,iVar9,iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_0071316b();
  if (*(int **)(iVar5 + 0xa70) != (int *)0x0) {
    (**(code **)(**(int **)(iVar5 + 0xa70) + 0xc))();
    FUN_00534e6a();
    iVar6 = *(int *)(iVar5 + 0xc78);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar6 == 0) {
      uVar4 = FUN_00679d86(unaff_EBP + -0x24,0x7ac);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      uVar4 = FUN_00679d86(unaff_EBP + -0x24,0x7ad);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    FUN_00402676();
    iVar6 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x24) = iVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00450382(uVar4);
    (**(code **)(**(int **)(iVar5 + 0xa70) + 0x20))(iVar5,0x3ee,0x300,0x203,2,unaff_EBP + -0x34);
    if (*(int *)(iVar5 + 0xc78) == 0) {
      puVar7 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x7bb);
      uVar4 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00499493(uVar4,1,0);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      puVar7 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x7bc);
      uVar4 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00499493(uVar4,1,0);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    FUN_00402676();
    FUN_008161f1(0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


