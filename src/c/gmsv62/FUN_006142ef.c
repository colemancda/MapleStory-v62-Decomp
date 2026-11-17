/* FUN_006142ef - 0x006142ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006142ef(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x84) == 0) || (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x524) == 0)
     ) {
    iVar4 = FUN_0061425f(unaff_EBP + -0x1c);
    *(int *)(unaff_EBP + -0x18) = iVar4;
    if ((iVar4 == 8) &&
       ((*(int *)(extraout_ECX + 0x8c) == 0 &&
        (*(int *)(*(int *)(*(int *)(extraout_ECX + 0x84) + 0x1744) + 0xc) != 0)))) {
      if (*(int *)(extraout_ECX + 0x100) == 0) {
        FUN_0040c030(0,8,0,extraout_ECX + 0xf8);
        iVar4 = *(int *)(unaff_EBP + -0x18);
      }
      iVar6 = extraout_ECX + 0xf8;
      *(int *)(unaff_EBP + -0x10) = iVar6;
    }
    else {
      iVar6 = *(int *)(extraout_ECX + 0xf4) + iVar4 * 0x14;
      *(int *)(unaff_EBP + -0x10) = iVar6;
    }
    if (*(int *)(iVar6 + 8) == 0) {
      iVar1 = *(int *)(extraout_ECX + 0x8c);
      iVar2 = *(int *)(extraout_ECX + 0x84);
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0xcd);
      }
      else if (iVar1 == 1) {
        uVar5 = *(undefined4 *)(iVar2 + 0x10d);
      }
      else if (iVar1 == 2) {
        uVar5 = *(undefined4 *)(iVar2 + 0x12d);
      }
      else {
        uVar5 = 0;
      }
      FUN_0040c030(*(undefined4 *)(extraout_ECX + 0x78),iVar4,uVar5,iVar6);
    }
    if (*(int *)(iVar6 + 8) == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -0x18) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x18,&DAT_008f7260);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar4 = *(int *)(extraout_ECX + 0x114);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x14,unaff_EBP + -0x2c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(iVar6 + 0xc);
    if (iVar4 != 0) {
      while( true ) {
        iVar6 = *(int *)(iVar4 + 4);
        iVar4 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
        *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00403191(&DAT_00980690);
        uVar5 = *(undefined4 *)(iVar6 + 0x40);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_004031b7(uVar5,3);
        iVar4 = *(int *)(extraout_ECX + 0x114);
        uVar5 = *(undefined4 *)(iVar6 + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x8c,uVar5,unaff_EBP + -0x3c,unaff_EBP + -0x4c,unaff_EBP + -0x5c,
                     unaff_EBP + -0x6c,unaff_EBP + -0x7c);
        iVar4 = FUN_00402bc3(unaff_EBP + -0x8c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x6c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x7c);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) break;
        iVar4 = *(int *)(unaff_EBP + -0x14);
      }
      iVar6 = *(int *)(unaff_EBP + -0x10);
    }
    uVar5 = 0;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(extraout_ECX + 0xec) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(extraout_ECX + 0xf0) =
         *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xc) + 4) + 0x40);
    if ((iVar4 == 0) && (*(int *)(unaff_EBP + -0x18) != 8)) {
      uVar5 = 1;
    }
    if (*(int *)(extraout_ECX + 0x114) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(extraout_ECX + 0x114);
    iVar4 = (**(code **)(*piVar3 + 0xd8))(piVar3,uVar5);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar3,&DAT_00963df8);
    }
    FUN_00616b0d();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


