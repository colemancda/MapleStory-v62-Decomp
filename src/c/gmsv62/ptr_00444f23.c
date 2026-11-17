/* ptr_00444f23 - 0x00444f23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00444f23(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int iVar6;
  undefined4 uVar7;
  
  FUN_00878dfb();
  piVar2 = *(int **)(unaff_EBX + 0xcbc);
  iVar1 = (**(code **)(*piVar2 + 0xe0))(piVar2);
  if (iVar1 < unaff_EDI) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  iVar1 = *(int *)(unaff_EBX + 0xcbc);
  *(int *)(unaff_EBP + -4) = unaff_EDI;
  if (iVar1 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + *(int *)(unaff_EBP + -0x10),3);
  iVar1 = *(int *)(unaff_EBX + 0xcbc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x18);
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar1 = *piVar2;
  uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar2,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  if (*(int *)(unaff_EBX + 0xcc0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0042503d();
  iVar1 = *(int *)(unaff_EBX + 0xcc0);
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(unaff_EBX + 0xcc0);
  iVar1 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffff);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  iVar1 = *(int *)(unaff_EBX + 0xcc0);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + *(int *)(unaff_EBP + -0x10),3);
  iVar1 = *(int *)(unaff_EBX + 0xcc0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x14);
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar1 = *piVar2;
  uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar2,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  if (*(int *)(unaff_EBX + 0xcc4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0042503d();
  iVar1 = *(int *)(unaff_EBX + 0xcc4);
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(unaff_EBX + 0xcc4);
  iVar1 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffff);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar2,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  iVar1 = *(int *)(unaff_EBX + 0xcc4);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_0042a378();
  FUN_004031b7(iVar1 + *(int *)(unaff_EBP + -0x10),3);
  iVar1 = *(int *)(unaff_EBX + 0xcc4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x14);
  iVar1 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar1 = *piVar2;
  uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(int **)(unaff_EBP + -0x18) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))
                    (piVar2,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  if (*(int *)(unaff_EBX + 0xcc8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0042503d();
  uVar7 = 0xffffff;
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  FUN_00424e27(0xffffff);
  FUN_00444e05(uVar7);
  FUN_00424aee(&DAT_00980690);
  uVar3 = 3;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_00424e27(3);
  iVar1 = FUN_0042a378();
  FUN_004295f1(iVar1 + *(int *)(unaff_EBP + -0x10),uVar3);
  iVar1 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00424e27(iVar1);
  FUN_004113e5(iVar1);
  iVar1 = unaff_EBP + -0x2c;
  iVar6 = unaff_EBP + -0x3c;
  uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar4 = uVar5;
  FUN_00424df4(uVar5,uVar5,iVar6,iVar1);
  FUN_00424f2f(uVar5,uVar4,iVar6,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00424e27();
  uVar3 = FUN_0042503d();
  uVar7 = 0xffffff;
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  FUN_00424e27(0xffffff);
  FUN_00444e05(uVar7);
  FUN_00424aee(&DAT_00980690);
  uVar3 = 3;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_00424e27(3);
  iVar1 = FUN_0042a378();
  FUN_004295f1(iVar1 + *(int *)(unaff_EBP + -0x10),uVar3);
  iVar1 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00424e27(iVar1);
  FUN_004113e5(iVar1);
  iVar1 = unaff_EBP + -0x2c;
  iVar6 = unaff_EBP + -0x3c;
  uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar4 = uVar5;
  FUN_00424df4(uVar5,uVar5,iVar6,iVar1);
  FUN_00424f2f(uVar5,uVar4,iVar6,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00424e27();
  uVar3 = FUN_0042503d();
  uVar7 = 0xffffff;
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  FUN_00424e27(0xffffff);
  FUN_00444e05(uVar7);
  FUN_00424aee(&DAT_00980690);
  uVar3 = 3;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_00424e27(3);
  iVar1 = FUN_0042a378();
  FUN_004295f1(iVar1 + *(int *)(unaff_EBP + -0x10),uVar3);
  iVar1 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424e27(iVar1);
  FUN_004113e5(iVar1);
  iVar1 = unaff_EBP + -0x5c;
  iVar6 = unaff_EBP + -0x4c;
  uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uVar4 = uVar5;
  FUN_00424df4(uVar5,uVar5,iVar6,iVar1);
  FUN_00424f2f(uVar5,uVar4,iVar6,iVar1);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


