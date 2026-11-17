/* FUN_00684df7 - 0x00684df7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00684df7(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x10);
  iVar1 = *(int *)(extraout_ECX + 0xc);
  if (iVar6 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int *)(unaff_EBP + -0x18) = iVar1 << 5;
    while( true ) {
      iVar1 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
      uVar2 = *(undefined4 *)(iVar6 + 4);
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
      FUN_006868e5();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191(&DAT_00980690);
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x28);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar6 = *(int *)(unaff_EBP + -0x24);
      if (*(int *)(iVar6 + 0x28) == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar6 + 0x28);
      iVar6 = *(int *)(unaff_EBP + -0x24);
      if (*(int *)(iVar6 + 0x28) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar6 + 0x28);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      iVar4 = FUN_0042fb34();
      iVar6 = *(int *)(unaff_EBP + -0x10);
      iVar1 = *(int *)(unaff_EBP + -0x18);
      iVar5 = FUN_0042fb0a();
      iVar6 = (**(code **)(*piVar3 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x14),
                         (0x20 - iVar5) / 2 + 0x18d + (iVar6 - iVar1),(0x20 - iVar4) / 2 + -0x115,
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x48);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191(&DAT_00980690);
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar6 = *(int *)(unaff_EBP + -0x24);
      if (*(int *)(iVar6 + 0x2c) == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar6 + 0x2c);
      iVar6 = *(int *)(unaff_EBP + -0x24);
      if (*(int *)(iVar6 + 0x2c) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar6 + 0x2c);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      iVar4 = FUN_0042fb34();
      iVar6 = *(int *)(unaff_EBP + -0x10);
      iVar1 = *(int *)(unaff_EBP + -0x18);
      iVar5 = FUN_0042fb0a();
      iVar6 = (**(code **)(*piVar3 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x14),
                         (0x20 - iVar5) / 2 + 0x18d + (iVar6 - iVar1),(0x20 - iVar4) / 2 + -0x115,
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                         *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x68);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_006868f7(0);
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x20;
      if (*(int *)(unaff_EBP + -0x1c) == 0) break;
      iVar6 = *(int *)(unaff_EBP + -0x1c);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


