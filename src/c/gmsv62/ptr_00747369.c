/* ptr_00747369 - 0x00747369 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00747369(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar6;
  int unaff_EDI;
  int iVar7;
  
  uVar1 = FUN_00424ee1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  FUN_004125d9();
  if (*unaff_EBX == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_00424f08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  FUN_004125d9();
  if (*unaff_EBX == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar3 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004308ad(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  if (*unaff_EBX == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar3 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  *(undefined4 *)(unaff_EBP + -0x44) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb34;
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb3c;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  if (*unaff_EBX == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004125d9();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  iVar3 = *unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x1c) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x10),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(unaff_EBP + -0x24);
  iVar6 = (-(uint)(*(int *)(iVar3 + 0xc78) != 0) & 0xffffffb0) + 0x215;
  iVar4 = FUN_0087a90a(*(int *)(unaff_EBP + -0x10) - iVar6);
  *(int *)(unaff_EBP + -0x24) = iVar4 * 5;
  FUN_00403191(&DAT_00980690);
  iVar4 = *unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = 3;
  iVar4 = FUN_0042a378(3);
  FUN_004295f1(iVar4 + *(int *)(unaff_EBP + -0x24),uVar1);
  iVar4 = unaff_EBP + -0x34;
  iVar7 = unaff_EBP + -0x44;
  uVar1 = 0x287;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00424e27(0x287,iVar6,iVar7,iVar4);
  FUN_00424f2f(uVar1,iVar6,iVar7,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0071316b();
  if (*(int **)(iVar3 + 0xa70) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 0xa70) + 0xc))();
    FUN_00534e6a();
    iVar4 = *(int *)(iVar3 + 0xc78);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar4 == 0) {
      uVar1 = FUN_00679d86(unaff_EBP + -0x24,0x7ac);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00419192(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      uVar1 = FUN_00679d86(unaff_EBP + -0x24,0x7ad);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00419192(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x24) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar3 + 0xa70) + 0x20))(iVar3,0x3ee,0x300,0x203,2,unaff_EBP + -0x34);
    if (*(int *)(iVar3 + 0xc78) == 0) {
      puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x7bb);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00499493(uVar1,1,0);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x24,0x7bc);
      uVar1 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00499493(uVar1,1,0);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    FUN_00402676();
    FUN_008161f1(0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


