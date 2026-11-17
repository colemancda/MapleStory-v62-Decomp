/* FUN_00449484 - 0x00449484 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00449484(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  uVar1 = FUN_0087a90a(0xe1);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar2,0x23f,0,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x20);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar3 = FUN_0042a378();
  FUN_004031b7(iVar3 + *(int *)(unaff_EBP + -0x1c),3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar2 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x90))
                    (piVar2,800,0,*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x54));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963de8);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


