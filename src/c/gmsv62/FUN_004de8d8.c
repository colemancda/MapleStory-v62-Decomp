/* FUN_004de8d8 - 0x004de8d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004de8d8(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00879bb8();
  FUN_004489f5(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_007d1e08();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0xa8) = uVar1;
  if (iVar2 == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar2 = *(int *)(extraout_ECX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar2 != 0) {
      *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + iVar2;
      FUN_004031b7(*(undefined4 *)(extraout_ECX + 0xa8),3);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004dec0e(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    uVar1 = *(undefined4 *)(extraout_ECX + 0x98);
    iVar2 = *piVar3;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x94);
    *(int **)(unaff_EBP + 8) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar4,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00424aee(&DAT_00980690);
    iVar2 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar2);
    FUN_004113e5(iVar2);
    iVar2 = unaff_EBP + -0x34;
    iVar5 = unaff_EBP + -0x24;
    uVar4 = 0;
    uVar1 = *(undefined4 *)(extraout_ECX + 0x78);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar1,0,iVar5,iVar2);
    FUN_00424f2f(uVar1,uVar4,iVar5,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(extraout_ECX + 0xa4) = 1;
  }
  else {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar2 = *(int *)(extraout_ECX + 0x88);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 != 0) {
      *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + iVar2;
      FUN_004031b7(*(undefined4 *)(extraout_ECX + 0xa8),3);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004dec0e(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
    FUN_00403191(&DAT_00980690);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    uVar1 = *(undefined4 *)(extraout_ECX + 0xa0);
    iVar2 = *piVar3;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x9c);
    *(int **)(unaff_EBP + 8) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar4,uVar1,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    uVar1 = *(undefined4 *)(extraout_ECX + 0x7c);
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + 8) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,uVar1,0,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(extraout_ECX + 0xa4) = 3;
  }
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


