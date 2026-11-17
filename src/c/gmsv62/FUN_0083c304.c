/* FUN_0083c304 - 0x0083c304 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083c304(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_007d1e08();
      iVar1 = iVar1 + 300;
    }
    FUN_004031b7(iVar1,3);
    iVar1 = *(int *)(extraout_ECX + 0x2ca8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar1 = *piVar2;
    *(int **)(unaff_EBP + 0xc) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2ca4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + 0xc);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar1 = (**(code **)(*piVar2 + 0x90))
                      (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar2,&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_007d1e08();
      iVar1 = iVar1 + 300;
    }
    FUN_004031b7(iVar1,3);
    iVar1 = *(int *)(extraout_ECX + 0x2ca4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004113e5(unaff_EBP + 8);
    iVar1 = unaff_EBP + -0x24;
    iVar5 = unaff_EBP + -0x34;
    uVar4 = 0;
    uVar3 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00424df4(0xff,0,iVar5,iVar1);
    FUN_00424f2f(uVar3,uVar4,iVar5,iVar1);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_00424aee(&DAT_00980690);
    iVar1 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424e27(iVar1);
    FUN_004113e5(iVar1);
    iVar1 = unaff_EBP + -0x54;
    iVar5 = unaff_EBP + -0x44;
    uVar4 = 0;
    uVar3 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424df4(0,0,iVar5,iVar1);
    FUN_00424f2f(uVar3,uVar4,iVar5,iVar1);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
  }
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


