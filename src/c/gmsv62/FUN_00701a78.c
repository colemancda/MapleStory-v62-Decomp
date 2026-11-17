/* FUN_00701a78 - 0x00701a78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00701a78(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x5dc) != 0) {
    FUN_004489f5(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
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
    if (*(int *)(unaff_EBP + -0x10) == 0) {
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
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x18);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004308ad(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x20);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    *(undefined4 *)(unaff_EBP + -0x44) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x40) = DAT_0097bb34;
    iVar4 = *piVar2;
    *(undefined4 *)(unaff_EBP + -0x3c) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb3c;
    *(int **)(unaff_EBP + -0x1c) = piVar2;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    iVar4 = unaff_EBP + -0x20;
    FUN_00424e27(iVar4);
    FUN_0042fb5e(iVar4);
    iVar4 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00424df4(iVar4);
    FUN_00429607(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00424aee(&DAT_00980690);
    iVar4 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar4);
    FUN_0042fb5e(iVar4);
    iVar4 = unaff_EBP + -0x44;
    iVar6 = unaff_EBP + -0x34;
    uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar5 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar5,uVar3,iVar6,iVar4);
    FUN_00424f2f(uVar5,uVar3,iVar6,iVar4);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
    iVar4 = iVar4 + (-(uint)(*(int *)(extraout_ECX + 0x598) != 0) & 0xffffff10) + 0xf4;
    *(int *)(unaff_EBP + -0x24) = iVar4;
    uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) - iVar4);
    *(undefined4 *)(extraout_ECX + 0x590) = uVar3;
    FUN_00424aee(&DAT_00980690);
    uVar3 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e27(3);
    iVar4 = FUN_0042a378();
    FUN_004295f1(iVar4 + *(int *)(extraout_ECX + 0x590),uVar3);
    iVar4 = unaff_EBP + -0x34;
    iVar6 = unaff_EBP + -0x44;
    iVar1 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uVar5 = (**(code **)(iVar1 + 0x30))(iVar6,iVar4);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
    FUN_00424e27(uVar3,uVar5);
    FUN_00424f2f(uVar3,uVar5,iVar6,iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(extraout_ECX + 0x598);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(uint *)(extraout_ECX + 0x598) = (uint)(iVar4 == 0);
    iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00412600();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


