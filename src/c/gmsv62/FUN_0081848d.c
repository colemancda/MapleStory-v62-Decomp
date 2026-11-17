/* FUN_0081848d - 0x0081848d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081848d(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x90) == 0) goto LAB_00818713;
  if (*(int **)(extraout_ECX + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x18))
              (0,*(int *)(extraout_ECX + 0x90),*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x90);
  FUN_00819583();
  uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  FUN_00424ed4();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  cVar1 = FUN_00433bfa(0);
  if (cVar1 == '\0') {
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x18);
    iVar3 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar3 = *piVar2;
    *(int **)(unaff_EBP + -0x14) = piVar2;
    iVar3 = (**(code **)(iVar3 + 0x90))
                      (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  FUN_00818724();
  if (*(int **)(extraout_ECX + 0x84) == (int *)0x0) {
    uVar4 = 0;
LAB_008185f9:
    FUN_00526a75(uVar4);
  }
  else {
    iVar3 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
    if (iVar3 != 0) {
      (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x14))(1);
      uVar4 = 0xffffffff;
      goto LAB_008185f9;
    }
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 4))
              (*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(extraout_ECX + 0x84),
               *(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  else {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + 0xc);
    iVar3 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x90))
                      (piVar2,0x80,0,*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar2,&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_008195d7(0);
  }
LAB_00818713:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


