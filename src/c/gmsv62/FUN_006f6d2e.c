/* FUN_006f6d2e - 0x006f6d2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f6d2e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  piVar4 = *(int **)(unaff_EBP + 8);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,0,0,uVar1,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x14) = iVar2 + 4;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  iVar2 = (**(code **)(iVar3 + 0x80))
                    (piVar4,0,iVar2 + 4,*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)(iVar2 + 0x14);
  if (*piVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0040e53d();
  iVar3 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + ((uint)(iVar3 - iVar2) >> 1);
  FUN_00403191(&DAT_00980690);
  *(int *)(unaff_EBP + -0x1c) = *piVar4;
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0x80))
                    (piVar4,3,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004115d9();
  FUN_0040e53d();
  FUN_0040e53d();
  FUN_004115d9();
  FUN_0040e53d();
  FUN_006f725a();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


