/* FUN_006f6f60 - 0x006f6f60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f6f60(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xc);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar4,0,0,*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x14) = iVar2 + 4;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 0x10);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar4,0,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar1 + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iVar2 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x14) =
       *(int *)(unaff_EBP + -0x14) + ((uint)(iVar2 - *(int *)(unaff_EBP + -0x1c)) >> 1);
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar1 + 0x14);
  piVar4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + 8);
  }
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0x80))
                    (piVar4,3,*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004115d9();
  uVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  iVar5 = FUN_0040e53d();
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  iVar6 = *(int *)(unaff_EBP + -0x14);
  FUN_004115d9();
  iVar2 = FUN_0040e53d();
  iVar2 = (iVar6 - ((uint)(iVar5 - iVar1) >> 1)) + 5 + iVar2;
  FUN_00424aee(&DAT_00980690);
  uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18);
  iVar1 = unaff_EBP + -0x2c;
  uVar7 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar6 = iVar2;
  FUN_004115d9(3,iVar2,uVar3,iVar1);
  FUN_00470739(uVar7,iVar6,uVar3,iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004115d9();
  iVar6 = FUN_0040e53d();
  iVar6 = iVar2 + 5 + iVar6;
  FUN_00424aee(&DAT_00980690);
  uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
  iVar1 = unaff_EBP + -0x2c;
  uVar7 = 3;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004115d9(3,iVar6,uVar3,iVar1);
  FUN_00470739(uVar7,iVar6,uVar3,iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  FUN_004115d9();
  FUN_0040e53d();
  FUN_006f725a();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


