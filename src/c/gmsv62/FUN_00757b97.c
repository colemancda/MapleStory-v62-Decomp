/* FUN_00757b97 - 0x00757b97 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00757b97(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_004031b7(0,3);
    iVar7 = *(int *)(extraout_ECX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -0x30);
    iVar7 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    iVar7 = *(int *)(unaff_EBP + 8);
    iVar2 = (**(code **)(*piVar1 + 0x8c))
                      (piVar1,iVar7,*(undefined4 *)(unaff_EBP + 0xc),0x44,0x44,0xa0ffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004031b7(0,3);
    iVar2 = *(int *)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
      iVar2 = *(int *)(unaff_EBP + 0x10);
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
        iVar2 = *(int *)(unaff_EBP + 0x10);
      }
    }
    *(int *)(unaff_EBP + 8) = iVar2;
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
      iVar2 = *(int *)(unaff_EBP + 0x10);
    }
    *(int *)(unaff_EBP + -0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
      iVar2 = *(int *)(unaff_EBP + 0x10);
    }
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_00425067(unaff_EBP + -0x20,unaff_EBP + -0x30);
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = unaff_EBP + -0x40;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    iVar3 = FUN_0040e53d(0,0,0,0,iVar2);
    iVar3 = iVar3 << 1;
    iVar4 = FUN_0040e48b(iVar3);
    iVar4 = iVar4 << 1;
    uVar9 = 0xff;
    uVar8 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar5 = FUN_0040eed0(uVar8,0xff,iVar4);
    iVar5 = *(int *)(unaff_EBP + 0xc) + (0x21 - iVar5) * 2;
    iVar6 = FUN_0040eea9(iVar5);
    FUN_00503995(iVar7 + iVar6 * -2 + 2,iVar5,uVar8,uVar9,iVar4,iVar3,uVar10,uVar11,uVar12,uVar13,
                 iVar2);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar7 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar7 < 0) {
      FUN_00878dfb(iVar7);
    }
  }
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


