/* FUN_00463d86 - 0x00463d86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00463d86(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_28;
  undefined *local_24;
  
  FUN_00879bb8();
  local_24 = (undefined *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  iStack_28 = 0x463dac;
  iVar1 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_24 = (undefined *)0x0;
    iStack_28 = 0x463dc0;
    FUN_0045e7c2();
  }
  local_24 = (undefined *)0x463dc8;
  uVar2 = FUN_00424561();
  local_24 = *(undefined **)(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x10) = uVar2 & 0xffff;
  iStack_28 = unaff_EBP + -0x20;
  FUN_004b57d7();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  while( true ) {
    iVar1 = *(int *)(extraout_ECX + 0x488);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar2)) goto LAB_00463e22;
    piVar3 = (int *)(iVar1 + *(int *)(unaff_EBP + 8));
    if ((*piVar3 == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x18)) &&
       (piVar3[1] == *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x1c))) break;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x37;
    uVar2 = uVar2 + 1;
  }
  local_24 = (undefined *)(uVar2 * 0x37 + *(int *)(extraout_ECX + 0x488));
  iStack_28 = 0x463e20;
  FUN_004657d7();
LAB_00463e22:
  local_24 = (undefined *)0x463e2d;
  iVar1 = FUN_0045e2eb();
  iStack_28 = 1000000;
  local_24 = *(undefined **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 8) = &iStack_28;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x1c) + 4));
  }
  iVar4 = FUN_00464816(iVar1 / 1000000,*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x22000008;
    *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
    local_24 = &DAT_008f7260;
    iStack_28 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  local_24 = (undefined *)(iVar1 / 1000000 + -1);
  iStack_28 = 0x463e91;
  FUN_004b2699();
  local_24 = *(undefined **)(unaff_EBP + -0x10);
  iStack_28 = 0x463ea1;
  FUN_0048b3d1();
  local_24 = (undefined *)0x0;
  iStack_28 = 0x463ead;
  FUN_008161f1();
  local_24 = (undefined *)0x0;
  iStack_28 = 0x463eb5;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    local_24 = (undefined *)0x0;
    iStack_28 = 0x463ec7;
    FUN_00449913();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


