/* FUN_00444e82 - 0x00444e82 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00444e82(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *extraout_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (extraout_ECX[0x11a] == iVar2) {
    uVar1 = 0;
  }
  else {
    extraout_ECX[0x11a] = iVar2;
    FUN_00441501(0);
    extraout_ECX[0x12e] = -1;
    FUN_00441501(1);
    (**(code **)(*extraout_ECX + 0x10))(6,100,0);
    if (extraout_ECX[0x11a] == 0) {
      FUN_0043f7b6(0,0xffffffff);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 500;
    if (iVar2 == 0x3ea) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    if (extraout_ECX[0x32f] == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar1 = FUN_0042503d();
    iVar2 = extraout_ECX[0x32f];
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)extraout_ECX[0x32f];
    iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    iVar2 = extraout_ECX[0x32f];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042a378();
    FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0x10),3);
    iVar2 = extraout_ECX[0x32f];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x18);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
    uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (extraout_ECX[0x330] == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar1 = FUN_0042503d();
    iVar2 = extraout_ECX[0x330];
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)extraout_ECX[0x330];
    iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    iVar2 = extraout_ECX[0x330];
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042a378();
    FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0x10),3);
    iVar2 = extraout_ECX[0x330];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
    uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (extraout_ECX[0x331] == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar1 = FUN_0042503d();
    iVar2 = extraout_ECX[0x331];
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)extraout_ECX[0x331];
    iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    iVar2 = extraout_ECX[0x331];
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0042a378();
    FUN_004031b7(iVar2 + *(int *)(unaff_EBP + -0x10),3);
    iVar2 = extraout_ECX[0x331];
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
    uVar4 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar4,uVar4,*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (extraout_ECX[0x332] == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar1 = FUN_0042503d();
    uVar7 = 0xffffff;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_00424e27(0xffffff);
    FUN_00444e05(uVar7);
    FUN_00424aee(&DAT_00980690);
    uVar1 = 3;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(3);
    iVar2 = FUN_0042a378();
    FUN_004295f1(iVar2 + *(int *)(unaff_EBP + -0x10),uVar1);
    iVar2 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424e27(iVar2);
    FUN_004113e5(iVar2);
    iVar2 = unaff_EBP + -0x2c;
    iVar6 = unaff_EBP + -0x3c;
    uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uVar4 = uVar5;
    FUN_00424df4(uVar5,uVar5,iVar6,iVar2);
    FUN_00424f2f(uVar5,uVar4,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00424e27();
    uVar1 = FUN_0042503d();
    uVar7 = 0xffffff;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_00424e27(0xffffff);
    FUN_00444e05(uVar7);
    FUN_00424aee(&DAT_00980690);
    uVar1 = 3;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_00424e27(3);
    iVar2 = FUN_0042a378();
    FUN_004295f1(iVar2 + *(int *)(unaff_EBP + -0x10),uVar1);
    iVar2 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00424e27(iVar2);
    FUN_004113e5(iVar2);
    iVar2 = unaff_EBP + -0x2c;
    iVar6 = unaff_EBP + -0x3c;
    uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uVar4 = uVar5;
    FUN_00424df4(uVar5,uVar5,iVar6,iVar2);
    FUN_00424f2f(uVar5,uVar4,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00424e27();
    uVar1 = FUN_0042503d();
    uVar7 = 0xffffff;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_00424e27(0xffffff);
    FUN_00444e05(uVar7);
    FUN_00424aee(&DAT_00980690);
    uVar1 = 3;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_00424e27(3);
    iVar2 = FUN_0042a378();
    FUN_004295f1(iVar2 + *(int *)(unaff_EBP + -0x10),uVar1);
    iVar2 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00424e27(iVar2);
    FUN_004113e5(iVar2);
    iVar2 = unaff_EBP + -0x5c;
    iVar6 = unaff_EBP + -0x4c;
    uVar5 = *(uint *)(unaff_EBP + 8) >> 0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar4 = uVar5;
    FUN_00424df4(uVar5,uVar5,iVar6,iVar2);
    FUN_00424f2f(uVar5,uVar4,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


