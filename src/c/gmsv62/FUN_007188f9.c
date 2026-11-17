/* FUN_007188f9 - 0x007188f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007188f9(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  int iVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = FUN_00424f08();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004308ad(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
    iVar5 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00429607(&DAT_0097bb30);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0042fb5e(unaff_EBP + -0x1c);
    iVar5 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00424df4(iVar5);
    FUN_00429607(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00424aee(&DAT_00980690);
    iVar5 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar5);
    FUN_0042fb5e(iVar5);
    iVar5 = unaff_EBP + -0x40;
    iVar8 = unaff_EBP + -0x30;
    uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar7,uVar4,iVar8,iVar5);
    FUN_00424f2f(uVar7,uVar4,iVar8,iVar5);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
    iVar6 = (**(code **)(*piVar3 + 0x2c))();
    iVar6 = iVar6 + (-(uint)(**(int **)(unaff_EBP + 0xc) != 0) & 0xffffff0d) + 0xf3;
    uVar4 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) - iVar6);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xe0) = uVar4;
    FUN_00424aee(&DAT_00980690);
    uVar4 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e27(3);
    iVar5 = FUN_0042a378();
    FUN_004295f1(iVar5 + *(int *)(*(int *)(unaff_EBP + -0x10) + 0xe0),uVar4);
    iVar5 = unaff_EBP + -0x30;
    iVar8 = unaff_EBP + -0x40;
    iVar1 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uVar4 = (**(code **)(iVar1 + 0x30))(iVar8,iVar5);
    FUN_00424e27(iVar6,uVar4);
    FUN_00424f2f(iVar6,uVar4,iVar8,iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    uVar2 = **(uint **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    **(uint **)(unaff_EBP + 0xc) = (uint)(uVar2 == 0);
    iVar5 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


