/* FUN_00457518 - 0x00457518 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00457518(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3af);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040381b(uVar1,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  iVar3 = *(int *)(extraout_ECX + 0x78);
  *(undefined4 *)(extraout_ECX + 0x1c) = 0x11e;
  if (iVar3 == 0) {
    iVar3 = *(int *)(extraout_ECX + 0x80) * 0x28 + 0x9c;
  }
  else if (iVar3 == 1) {
    iVar3 = *(int *)(extraout_ECX + 0x80) * 0x28 + 0xaf;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(extraout_ECX + 0x20) = 0xaa;
      }
      goto LAB_004575c8;
    }
    iVar3 = *(int *)(extraout_ECX + 0x80) * 0x28 + 0xc2;
  }
  *(int *)(extraout_ECX + 0x20) = iVar3;
LAB_004575c8:
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00403191(&DAT_00980690);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar4 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x1c);
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + -0x18) = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x2c))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x14),uVar1,
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar4 + 0x70))(piVar4,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  iVar3 = (**(code **)(*piVar4 + 0x78))(piVar4,0);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar4,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar5 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x3c,
               unaff_EBP + -0x2c,unaff_EBP + -0x4c,unaff_EBP + -0x5c,unaff_EBP + -0x6c);
  iVar5 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar5 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0042fb5e(unaff_EBP + -0x1c);
  iVar5 = unaff_EBP + -0x5c;
  iVar7 = unaff_EBP + -0x6c;
  iVar6 = *(int *)(iVar3 + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar6 = (600 - iVar6) / 2;
  iVar3 = (800 - *(int *)(iVar3 + 0x1c)) / 2;
  FUN_00424df4(iVar3,iVar6,iVar7,iVar5);
  FUN_00424f2f(iVar3,iVar6,iVar7,iVar5);
  FUN_004125d9();
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  FUN_00456af5();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


