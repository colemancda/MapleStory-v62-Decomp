/* FUN_005c5f49 - 0x005c5f49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c5f49(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_005c634c(unaff_EBP + -0x18);
  iVar5 = *(int *)(extraout_ECX + 0x3b4) + iVar2 * 0x14;
  iVar4 = *(int *)(iVar5 + 8);
  *(int *)(unaff_EBP + -0x14) = iVar5;
  if (iVar4 == 0) {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
      iVar4 = *(int *)(extraout_ECX + 0x15c);
    }
    uVar3 = FUN_004b8c9b(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
    FUN_0040a66d(uVar3,iVar2,iVar5);
    if (*(int *)(iVar5 + 8) == 0) {
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
        iVar4 = *(int *)(extraout_ECX + 0x15c);
      }
      uVar3 = FUN_004b8c9b(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
      FUN_0040a66d(uVar3,1,iVar5);
      if (*(int *)(iVar5 + 8) == 0) {
        if ((*(int *)(extraout_ECX + 0x274) == 0) ||
           (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
          iVar4 = *(int *)(extraout_ECX + 0x15c);
        }
        uVar3 = FUN_004b8c9b(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
        FUN_0040a66d(uVar3,3,iVar5);
        if (*(int *)(iVar5 + 8) == 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(unaff_EBP + -0x10,&DAT_008f7260);
        }
      }
    }
  }
  FUN_004031b7(0xfffffffe,3);
  iVar4 = *(int *)(extraout_ECX + 0x440);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x28);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar3 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x388) = uVar3;
  iVar4 = *(int *)(iVar5 + 0xc);
  if (iVar4 != 0) {
    while( true ) {
      uVar3 = *(undefined4 *)(extraout_ECX + 0x388);
      iVar5 = *(int *)(iVar4 + 4);
      iVar4 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      FUN_00413367(extraout_ECX + 0x380,uVar3);
      uVar3 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x388) = uVar3;
      iVar4 = FUN_005d04ff();
      if ((iVar4 != 0) && ((*(int *)(iVar5 + 0x50) != -1 || (*(int *)(iVar5 + 0x54) != -1)))) {
        *(undefined4 *)(iVar5 + 0x54) = 0;
        *(undefined4 *)(iVar5 + 0x50) = 0x80ffffff;
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00403191(&DAT_00980690);
      uVar3 = *(undefined4 *)(iVar5 + 0x54);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004031b7(uVar3,3);
      uVar3 = *(undefined4 *)(iVar5 + 0x50);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004031b7(uVar3,3);
      uVar3 = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004031b7(uVar3,3);
      iVar4 = *(int *)(extraout_ECX + 0x440);
      uVar3 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x88,uVar3,unaff_EBP + -0x38,unaff_EBP + -0x48,unaff_EBP + -0x58,
                   unaff_EBP + -0x68,unaff_EBP + -0x78);
      iVar5 = FUN_00402bc3(unaff_EBP + -0x88);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x48);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x68);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x78);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
    iVar5 = *(int *)(unaff_EBP + -0x14);
  }
  *(undefined4 *)(extraout_ECX + 0x364) = *(undefined4 *)(iVar5 + 0xc);
  if (((*(int *)(extraout_ECX + 0x274) == 0) &&
      (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x194) != 0)) ||
     (*(undefined4 *)(unaff_EBP + -0x10) = 1, *(int *)(unaff_EBP + -0x18) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int *)(extraout_ECX + 0x440) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x440);
  iVar4 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  if (*(int *)(extraout_ECX + 0x44c) != 0) {
    if (*(int *)(extraout_ECX + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(extraout_ECX + 0x44c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x440);
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x44c);
    uVar3 = FUN_0043210d();
    iVar4 = (**(code **)(*piVar1 + 0xd8))(piVar1,uVar3);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  FUN_005c6c22(iVar5,*(undefined4 *)(extraout_ECX + 0x364));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


