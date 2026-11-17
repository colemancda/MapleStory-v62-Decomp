/* FUN_00597516 - 0x00597516 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00597516(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x30) == 0) {
    *(undefined4 *)(extraout_ECX + 0x30) = 1;
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042a378();
    FUN_004031b7(iVar1 + 500,3);
    iVar1 = *(int *)(extraout_ECX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar1 = *piVar2;
    *(int **)(unaff_EBP + -0x10) = piVar2;
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar2,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  if ((0x5dc < *(uint *)(unaff_EBP + 8)) && (*(int *)(extraout_ECX + 0x34) == 0)) {
    *(undefined4 *)(extraout_ECX + 0x34) = 1;
    FUN_00403191(&DAT_00980690);
    iVar1 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042a378();
    FUN_004031b7(iVar1 + 500,3);
    iVar1 = *(int *)(extraout_ECX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
    iVar1 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar1 = (**(code **)(*piVar2 + 0x90))
                      (piVar2,0,0xff,*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar2,&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


