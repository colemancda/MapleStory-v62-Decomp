/* FUN_004d1b24 - 0x004d1b24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d1b24(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = *(int *)(extraout_ECX + 0x94);
  uVar4 = FUN_004133f0();
  iVar6 = *(int *)(extraout_ECX + 0xa4) + iVar5 * 0x14;
  iVar1 = *(int *)(iVar6 + 8);
  *(int *)(unaff_EBP + -0x14) = iVar6;
  *(uint *)(unaff_EBP + -0x18) = uVar4 % 0x32 & 1;
  if (iVar1 == 0) {
    FUN_0040d36c(*(undefined4 *)(extraout_ECX + 0x7c),iVar5,iVar6);
  }
  if (*(int *)(iVar6 + 8) != 0) {
    FUN_004031b7(0xfffffffe,3);
    iVar5 = *(int *)(extraout_ECX + 0x8c);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x28);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    iVar5 = *(int *)(iVar6 + 0xc);
    if (iVar5 != 0) {
      while( true ) {
        iVar6 = *(int *)(iVar5 + 4);
        iVar5 = *(int *)((-(uint)(iVar5 != 0) & iVar5 - 0x10U) + 4);
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00403191(&DAT_00980690);
        uVar2 = *(undefined4 *)(iVar6 + 0x40);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_004031b7(uVar2,3);
        iVar5 = *(int *)(extraout_ECX + 0x8c);
        uVar2 = *(undefined4 *)(iVar6 + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x88,uVar2,unaff_EBP + -0x38,unaff_EBP + -0x48,unaff_EBP + -0x58,
                     unaff_EBP + -0x68,unaff_EBP + -0x78);
        iVar6 = FUN_00402bc3(unaff_EBP + -0x88);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x68);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x78);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        iVar5 = *(int *)(unaff_EBP + -0x10);
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(extraout_ECX + 0x9c) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(extraout_ECX + 0xa0) =
         *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xc) + 4) + 0x40);
    if (*(int *)(extraout_ECX + 0x8c) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(extraout_ECX + 0x8c);
    iVar6 = (**(code **)(*piVar3 + 0xd8))(piVar3,*(int *)(unaff_EBP + -0x18) == 0);
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0x22000006;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
}


