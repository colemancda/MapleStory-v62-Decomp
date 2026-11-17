/* FUN_005ea930 - 0x005ea930 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ea930(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x98) == 0) || (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x9c) == 0))
  {
    if (*(int *)(extraout_ECX + 0x124) != 0) {
      iVar4 = FUN_005eac7f(unaff_EBP + -0x18);
      iVar5 = *(int *)(*(int *)(extraout_ECX + 0xac) + 8 + iVar4 * 0x14);
      iVar3 = *(int *)(extraout_ECX + 0xac) + iVar4 * 0x14;
      *(int *)(unaff_EBP + -0x14) = iVar3;
      if ((iVar5 == 0) &&
         (FUN_0040b905(*(undefined4 *)(extraout_ECX + 0x98),iVar4,iVar3), *(int *)(iVar3 + 8) == 0))
      {
        *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
        *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
      }
      FUN_004031b7(0xfffffffe,3);
      iVar5 = *(int *)(extraout_ECX + 0xd4);
      *(undefined4 *)(unaff_EBP + -4) = 3;
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
      iVar5 = *(int *)(iVar3 + 0xc);
      if (iVar5 != 0) {
        while( true ) {
          iVar3 = *(int *)(iVar5 + 4);
          iVar5 = *(int *)((-(uint)(iVar5 != 0) & iVar5 - 0x10U) + 4);
          *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 4;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00403191(&DAT_00980690);
          uVar1 = *(undefined4 *)(iVar3 + 0x10);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004031b7(uVar1,3);
          iVar5 = *(int *)(extraout_ECX + 0xd4);
          uVar1 = *(undefined4 *)(iVar3 + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar5 == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x88,uVar1,unaff_EBP + -0x38,unaff_EBP + -0x48,unaff_EBP + -0x58
                       ,unaff_EBP + -0x68,unaff_EBP + -0x78);
          iVar3 = FUN_00402bc3(unaff_EBP + -0x88);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x68);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x78);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) break;
          iVar5 = *(int *)(unaff_EBP + -0x10);
        }
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(extraout_ECX + 0xa4) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(extraout_ECX + 0xa8) =
           *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xc) + 4) + 0x10);
      if (*(int *)(extraout_ECX + 0xd4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(extraout_ECX + 0xd4);
      iVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(int *)(unaff_EBP + -0x18) == 0);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
      }
      goto LAB_005eac70;
    }
    FUN_004031b7(0xfffffffe,3);
    iVar3 = *(int *)(extraout_ECX + 0xd4);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x28);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (*(int **)(extraout_ECX + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x10))(6,100,0);
      goto LAB_005eac70;
    }
    FUN_004031b7(0xfffffffe,3);
    iVar3 = *(int *)(extraout_ECX + 0xd4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x28);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
LAB_005eac70:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


