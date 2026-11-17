/* FUN_004a7b61 - 0x004a7b61 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a7b61(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  if (extraout_ECX[3] != 0) {
    iVar2 = (*DAT_0097b704)();
    extraout_ECX[2] = iVar2;
    if (extraout_ECX[6] == 0) {
      if (extraout_ECX[5] == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)extraout_ECX[5];
      iVar2 = *piVar3;
      uVar4 = 0xffffffff;
    }
    else {
      if (extraout_ECX[5] == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)extraout_ECX[5];
      iVar2 = *piVar3;
      uVar4 = 0;
    }
    iVar2 = (**(code **)(iVar2 + 0xe0))(piVar3,uVar4);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    iVar2 = extraout_ECX[5];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042fb5e(unaff_EBP + -0x14);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = extraout_ECX[1];
    iVar1 = *extraout_ECX;
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar2 = (**(code **)(*piVar3 + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x10),iVar1 + *(int *)(unaff_EBP + 8),
                       iVar2 + *(int *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x24),
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
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00403191(&DAT_00980690);
    iVar2 = extraout_ECX[5];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)FUN_0042bc90(unaff_EBP + 8);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar3;
    iVar2 = extraout_ECX[4];
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + 0xc) = piVar3;
    iVar2 = (**(code **)(iVar1 + 0x90))
                      (piVar3,*(undefined4 *)(unaff_EBP + 0x10),iVar2,
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
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
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


