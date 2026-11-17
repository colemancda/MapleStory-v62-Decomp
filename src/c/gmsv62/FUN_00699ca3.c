/* FUN_00699ca3 - 0x00699ca3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00699ca3(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(extraout_ECX + 0x3e0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x3e0);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar1,0xc,0x22,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(iVar3 + 1000);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar3 + 1000);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar1,10,4,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(iVar3 + 0x3ec);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar3 + 0x3ec);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar1,10,4,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(iVar3 + 0x3e4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar3 + 0x3e4);
  iVar3 = (**(code **)(*piVar1 + 0x90))
                    (piVar1,10,0xfffffffa,*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00699f78();
  FUN_0069a63b();
  FUN_0069a63a();
  FUN_0069a80f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


