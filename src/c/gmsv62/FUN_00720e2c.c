/* FUN_00720e2c - 0x00720e2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00720e2c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x5f8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar2 != 0) {
    *(uint *)(extraout_ECX + 0x5f0) =
         (-(uint)(*(int *)(extraout_ECX + 0x5f0) != 0) & 0xfffffffe) + 2;
    FUN_004489f5(unaff_EBP + -0x10);
    iVar2 = *(int *)(extraout_ECX + 0x5f0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x18);
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)*piVar1;
      iVar2 = (**(code **)(*piVar1 + 0x90))
                        (piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x5f8) + 4) + 0x1c))(0);
    }
    else {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x1c);
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)*piVar1;
      iVar2 = *piVar1;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar2 = (**(code **)(iVar2 + 0x90))
                        (piVar1,0xff,0,*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      (**(code **)(*(int *)(*(int *)(iVar2 + 0x5f8) + 4) + 0x1c))(1);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
      iVar5 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar3 = FUN_00424ee1();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
      iVar5 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar3 = FUN_00424f08();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      FUN_004125d9();
      iVar4 = FUN_00720e0f(*(undefined4 *)(iVar2 + 0x5f0));
      iVar5 = (**(code **)(*(int *)(iVar2 + 4) + 0x2c))();
      iVar4 = iVar4 + iVar5;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00403191(&DAT_00980690);
      iVar5 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00424e27(iVar5);
      FUN_0042fb5e(iVar5);
      iVar5 = unaff_EBP + -0x30;
      iVar7 = unaff_EBP + -0x40;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar6 = iVar4;
      FUN_00424df4(iVar4,uVar3,iVar7,iVar5);
      FUN_00424f2f(iVar6,uVar3,iVar7,iVar5);
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      uVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x20) - iVar4);
      *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
      FUN_00424aee(&DAT_00980690);
      uVar3 = 3;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00424e27(3);
      iVar5 = FUN_0042a378();
      FUN_004295f1(iVar5 + *(int *)(unaff_EBP + -0x20),uVar3);
      iVar5 = unaff_EBP + -0x30;
      iVar7 = unaff_EBP + -0x40;
      iVar2 = *(int *)(iVar2 + 4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar3 = (**(code **)(iVar2 + 0x30))(iVar7,iVar5);
      FUN_00424e27(iVar4,uVar3);
      FUN_00424f2f(iVar4,uVar3,iVar7,iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_0071f61a();
    }
    FUN_00412600();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


