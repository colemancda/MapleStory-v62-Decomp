/* ptr_00463dc0 - 0x00463dc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00463dc0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_8;
  undefined *puStack_4;
  
  puStack_4 = (undefined *)0x463dc8;
  uVar1 = FUN_00424561();
  puStack_4 = *(undefined **)(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x10) = uVar1 & 0xffff;
  iStack_8 = unaff_EBP + -0x20;
  FUN_004b57d7();
  *(int *)(unaff_EBP + -4) = unaff_EDI;
  uVar1 = 0;
  *(int *)(unaff_EBP + 8) = unaff_EDI;
  while( true ) {
    iVar3 = *(int *)(unaff_ESI + 0x488);
    if ((iVar3 == unaff_EDI) || (*(uint *)(iVar3 + -4) <= uVar1)) goto LAB_00463e22;
    piVar2 = (int *)(iVar3 + *(int *)(unaff_EBP + 8));
    if ((*piVar2 == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x18)) &&
       (piVar2[1] == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x1c))) break;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x37;
    uVar1 = uVar1 + 1;
    unaff_EDI = 0;
  }
  puStack_4 = (undefined *)(uVar1 * 0x37 + *(int *)(unaff_ESI + 0x488));
  iStack_8 = 0x463e20;
  FUN_004657d7();
  unaff_EDI = 0;
LAB_00463e22:
  puStack_4 = (undefined *)0x463e2d;
  iVar3 = FUN_0045e2eb();
  iStack_8 = 1000000;
  puStack_4 = *(undefined **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 8) = &iStack_8;
  if (*(int *)(unaff_EBP + -0x1c) != unaff_EDI) {
    InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x1c) + 4));
  }
  iVar4 = FUN_00464816(iVar3 / 1000000,*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar4 == unaff_EDI) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x22000008;
    *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
    puStack_4 = &DAT_008f7260;
    iStack_8 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  puStack_4 = (undefined *)(iVar3 / 1000000 + -1);
  iStack_8 = 0x463e91;
  FUN_004b2699();
  puStack_4 = *(undefined **)(unaff_EBP + -0x10);
  iStack_8 = 0x463ea1;
  FUN_0048b3d1();
  iStack_8 = 0x463ead;
  puStack_4 = (undefined *)unaff_EDI;
  FUN_008161f1();
  iStack_8 = 0x463eb5;
  puStack_4 = (undefined *)unaff_EDI;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != unaff_EDI) {
    iStack_8 = 0x463ec7;
    puStack_4 = (undefined *)unaff_EDI;
    FUN_00449913();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


