/* FUN_006f03ed - 0x006f03ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f03ed(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_004031b7(0xfffffffe,3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x1c,unaff_EBP + -0x30);
  FUN_004125e6();
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = 0;
  if (((*(int *)(extraout_ECX + 0x5bc) != 0) &&
      (iVar3 = *(int *)(*(int *)(extraout_ECX + 0x5d0 + *(int *)(extraout_ECX + 0x5a8) * 4) + 8),
      iVar3 != 0)) && (iVar2 = *(int *)(iVar3 + -4), 0xc < iVar2)) {
    iVar2 = 0xc;
  }
  iVar3 = 0x80;
  if (*(int *)(extraout_ECX + 0x5bc) != 0) {
    iVar3 = (iVar2 + 0xe) * 0xd;
  }
  *(int *)(extraout_ECX + 0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3af);
  uVar6 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040381b(uVar6,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  uVar6 = *(undefined4 *)(extraout_ECX + 0x20);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (piVar1,0xa2,uVar6,*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x70))(piVar1,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x78))(piVar1,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004489f5(unaff_EBP + -0x20);
  iVar2 = unaff_EBP + -0x70;
  iVar3 = unaff_EBP + -0x60;
  iVar9 = unaff_EBP + -0x50;
  iVar8 = unaff_EBP + -0x80;
  iVar7 = unaff_EBP + -0x40;
  uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar5 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00424e27(iVar5,uVar6,iVar7,iVar8,iVar9,iVar3,iVar2);
  FUN_004250ac(iVar5,uVar6,iVar7,iVar8,iVar9,iVar3,iVar2);
  iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x80);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


