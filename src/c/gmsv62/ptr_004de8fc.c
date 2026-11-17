/* ptr_004de8fc - 0x004de8fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004de8fc(void)

{
  undefined4 in_EAX;
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBX + 0xa8) = in_EAX;
  if (iVar1 == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar1 = *(int *)(unaff_EBX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar1 != 0) {
      *(int *)(unaff_EBX + 0xa8) = *(int *)(unaff_EBX + 0xa8) + iVar1;
      FUN_004031b7(*(undefined4 *)(unaff_EBX + 0xa8),3);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004dec0e(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
    }
    FUN_00403191(&DAT_00980690);
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar2 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    uVar3 = *(undefined4 *)(unaff_EBX + 0x98);
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(unaff_EBX + 0x94);
    *(int **)(unaff_EBP + 8) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar4,uVar3,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00424aee(&DAT_00980690);
    iVar1 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar1);
    FUN_004113e5(iVar1);
    iVar1 = unaff_EBP + -0x34;
    iVar5 = unaff_EBP + -0x24;
    uVar4 = 0;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x78);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00424df4(uVar3,0,iVar5,iVar1);
    FUN_00424f2f(uVar3,uVar4,iVar5,iVar1);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBX + 0xa4) = 1;
  }
  else {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iVar1 = *(int *)(unaff_EBX + 0x88);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 != 0) {
      *(int *)(unaff_EBX + 0xa8) = *(int *)(unaff_EBX + 0xa8) + iVar1;
      FUN_004031b7(*(undefined4 *)(unaff_EBX + 0xa8),3);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004dec0e(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
    }
    FUN_00403191(&DAT_00980690);
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar2 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar2 = *(int **)(unaff_EBP + -0x10);
    }
    uVar3 = *(undefined4 *)(unaff_EBX + 0xa0);
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(unaff_EBX + 0x9c);
    *(int **)(unaff_EBP + 8) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar4,uVar3,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x7c);
    iVar1 = *piVar2;
    *(int **)(unaff_EBP + 8) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar3,0,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBX + 0xa4) = 3;
  }
  iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


