/* FUN_0083c6d2 - 0x0083c6d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083c6d2(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_00433bfa(0);
  if (cVar1 == '\0') {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_007d1e08();
    FUN_004031b7(iVar2 + 400,3);
    iVar2 = *(int *)(extraout_ECX + 0x2ca4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,0,0xff,*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  if (*(int *)(extraout_ECX + 0x2ca8) != 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_007d1e08();
    FUN_004031b7(iVar2 + 400,3);
    iVar2 = *(int *)(extraout_ECX + 0x2ca8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x10);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
    *(int **)(unaff_EBP + -0x14) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar3,0,0xff,*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  if (*(int *)(extraout_ECX + 0x2ca0) != 0) {
    FUN_00815de9();
    FUN_0083dcab();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


