/* FUN_0046f8b1 - 0x0046f8b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046f8b1(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(int *)(extraout_ECX + 0x50) = iVar5;
  if (*(int *)(extraout_ECX + 4) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = *(int *)(extraout_ECX + 0x4c);
    piVar2 = *(int **)(extraout_ECX + 4);
    iVar3 = *piVar2;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x48);
    *(int **)(unaff_EBP + -0x10) = piVar2;
    iVar5 = (**(code **)(iVar3 + 0x90))
                      (piVar2,uVar4,(iVar1 - iVar5) + -5,*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  if (*(int *)(extraout_ECX + 8) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    iVar5 = *(int *)(extraout_ECX + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = *(int *)(extraout_ECX + 0x30);
    piVar2 = *(int **)(extraout_ECX + 8);
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x2c);
    *(int **)(unaff_EBP + -0x10) = piVar2;
    iVar5 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar4,(iVar5 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  if (*(int *)(extraout_ECX + 0x10) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar5 = *(int *)(extraout_ECX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = *(int *)(extraout_ECX + 0x4c);
    piVar2 = *(int **)(extraout_ECX + 0x10);
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x48);
    *(int **)(unaff_EBP + -0x10) = piVar2;
    iVar5 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar4,(iVar5 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  if (*(int *)(extraout_ECX + 0x14) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00403191(&DAT_00980690);
    iVar5 = *(int *)(extraout_ECX + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar5 = *(int *)(extraout_ECX + 0x4c);
    piVar2 = *(int **)(extraout_ECX + 0x14);
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(extraout_ECX + 0x48);
    *(int **)(unaff_EBP + -0x10) = piVar2;
    iVar5 = (**(code **)(iVar1 + 0x90))
                      (piVar2,uVar4,(iVar5 - *(int *)(unaff_EBP + 8)) + -5,
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  if (*(int *)(extraout_ECX + 0x18) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_00403191(&DAT_00980690);
    iVar5 = *(int *)(extraout_ECX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00424f2f(*(undefined4 *)(extraout_ECX + 0x48),
                 (*(int *)(extraout_ECX + 0x4c) - *(int *)(unaff_EBP + 8)) + -5,unaff_EBP + -0x40,
                 unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


