/* FUN_0077e7f8 - 0x0077e7f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077e7f8(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_00424f08();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004308ad(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb34;
    iVar4 = *piVar2;
    *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x34) = DAT_0097bb3c;
    uVar3 = *(undefined4 *)(unaff_EBP + -0x38);
    uVar8 = *(undefined4 *)(unaff_EBP + -0x34);
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       uVar3,uVar8);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar2,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    iVar4 = unaff_EBP + -0x1c;
    FUN_00424e27(iVar4);
    FUN_0042fb5e(iVar4);
    iVar4 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00424df4(iVar4);
    FUN_00429607(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00424aee(&DAT_00980690);
    iVar4 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar4);
    FUN_0042fb5e(iVar4);
    iVar4 = unaff_EBP + -0x40;
    iVar5 = unaff_EBP + -0x30;
    uVar6 = *(undefined4 *)(unaff_EBP + -0x20);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar7,uVar6,iVar5,iVar4);
    FUN_00424f2f(uVar7,uVar6,iVar5,iVar4);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
    iVar5 = (**(code **)(*piVar2 + 0x2c))();
    iVar5 = iVar5 + (-(uint)(**(int **)(unaff_EBP + 0xc) != 0) & 0xfffffec9) + 0x137;
    uVar6 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) - iVar5);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x784) = uVar6;
    FUN_00424aee(&DAT_00980690);
    uVar6 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e27(3);
    iVar4 = FUN_0042a378();
    FUN_004295f1(iVar4 + *(int *)(*(int *)(unaff_EBP + -0x10) + 0x784),uVar6);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar4 = (**(code **)(iVar4 + 0x30))(unaff_EBP + -0x40,unaff_EBP + -0x30);
    iVar4 = iVar4 + 0x56;
    FUN_00424e27(iVar5,iVar4);
    FUN_00424f2f(iVar5,iVar4,uVar3,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    uVar1 = **(uint **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    **(uint **)(unaff_EBP + 0xc) = (uint)(uVar1 == 0);
    iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


