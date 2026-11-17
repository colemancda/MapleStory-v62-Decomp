/* FUN_0073023a - 0x0073023a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0073023a(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  int iVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x5b4) != 0) {
    FUN_004489f5(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_00424ee1();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
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
    piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
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
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar2,&DAT_00963de8);
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
    iVar8 = unaff_EBP + -0x34;
    uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar7,uVar3,iVar8,iVar4);
    FUN_00424f2f(uVar7,uVar3,iVar8,iVar4);
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
    piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
    iVar5 = (**(code **)(*piVar2 + 0x2c))();
    iVar5 = iVar5 + (-(uint)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x5d4) != 0) & 0xffffff56) +
                    0xaa;
    uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x18) - iVar5);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x5d8) = uVar3;
    FUN_00424aee(&DAT_00980690);
    uVar3 = 3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00424e27(3);
    iVar4 = FUN_0042a378();
    iVar1 = *(int *)(unaff_EBP + -0x14);
    FUN_004295f1(iVar4 + *(int *)(iVar1 + 0x5d8),uVar3);
    iVar4 = unaff_EBP + -0x34;
    iVar8 = unaff_EBP + -0x44;
    iVar6 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar6 = (**(code **)(iVar6 + 0x30))(iVar8,iVar4);
    iVar6 = iVar6 + 0x60;
    FUN_00424e27(iVar5,iVar6);
    FUN_00424f2f(iVar5,iVar6,iVar8,iVar4);
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
    iVar4 = *(int *)(iVar1 + 0x5d4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(uint *)(iVar1 + 0x5d4) = (uint)(iVar4 == 0);
    iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00412600();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


