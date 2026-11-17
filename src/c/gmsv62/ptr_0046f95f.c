/* ptr_0046f95f - 0x0046f95f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046f95f(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBX + 8) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBX + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(unaff_EBX + 0x30);
    piVar1 = *(int **)(unaff_EBX + 8);
    iVar2 = *piVar1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x2c);
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar4 = (**(code **)(iVar2 + 0x90))
                      (piVar1,uVar3,(iVar4 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  if (*(int *)(unaff_EBX + 0x10) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(unaff_EBX + 0x4c);
    piVar1 = *(int **)(unaff_EBX + 0x10);
    iVar2 = *piVar1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x48);
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar4 = (**(code **)(iVar2 + 0x90))
                      (piVar1,uVar3,(iVar4 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  if (*(int *)(unaff_EBX + 0x14) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBX + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(unaff_EBX + 0x4c);
    piVar1 = *(int **)(unaff_EBX + 0x14);
    iVar2 = *piVar1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x48);
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar4 = (**(code **)(iVar2 + 0x90))
                      (piVar1,uVar3,(iVar4 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  if (*(int *)(unaff_EBX + 0x18) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00424f2f(*(undefined4 *)(unaff_EBX + 0x48),
                 (*(int *)(unaff_EBX + 0x4c) - *(int *)(unaff_EBP + 8)) + -5,unaff_EBP + -0x40,
                 unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


