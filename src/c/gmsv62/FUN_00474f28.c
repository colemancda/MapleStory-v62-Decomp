/* FUN_00474f28 - 0x00474f28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00474f28(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (((*(int *)(extraout_ECX + 8) != 0) && (*(int *)(extraout_ECX + 8) != -1)) &&
     (*(int *)(extraout_ECX + 0x14) == 0)) {
    while( true ) {
      iVar4 = FUN_00474dfe(0x5b4,unaff_EBP + -0xd);
      *(int *)(unaff_EBP + -0x14) = iVar4;
      iVar5 = 0;
      if (iVar4 != 0) {
        InterlockedIncrement((LONG *)(iVar4 + 4));
        iVar5 = *(int *)(unaff_EBP + -0x14);
      }
      uVar1 = *(undefined4 *)(iVar5 + 0xc);
      uVar2 = *(undefined4 *)(iVar5 + 0x10);
      uVar3 = *(undefined4 *)(extraout_ECX + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar5 = (*DAT_0097b76c)(uVar3,uVar2,uVar1,0);
      if (iVar5 == 0) goto LAB_00475028;
      if (iVar5 == -1) break;
      iVar5 = FUN_00475053(0,iVar5,unaff_EBP + -0xe);
      *(int *)(unaff_EBP + -0x1c) = iVar5;
      if (iVar5 != 0) {
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004759d7(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00475b89(0);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00475b89(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    iVar5 = (*DAT_0097b738)();
    if (iVar5 == 0x2733) {
LAB_00475028:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00475b89(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      FUN_004753c4();
    }
    else {
      FUN_0047509a(iVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00475b89(0);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


