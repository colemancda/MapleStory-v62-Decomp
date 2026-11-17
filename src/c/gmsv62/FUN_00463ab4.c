/* FUN_00463ab4 - 0x00463ab4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00463ab4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  code *pcStack_24;
  int iStack_20;
  undefined *puStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_1c = (undefined *)0x463acf;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  puStack_1c = (undefined *)0x463ada;
  uVar1 = FUN_00424561();
  puStack_1c = (undefined *)(unaff_EBP + -0x18);
  iStack_20 = 0x463aee;
  iVar3 = FUN_00455c59();
  iVar3 = *(int *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_1c = (undefined *)0x0;
    iStack_20 = 0x463b01;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  iVar3 = *(int *)(iVar3 + 0x3e3 + uVar2 * 4);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if ((((uVar2 != 0) && (uVar2 < 6)) && (iVar4 + -1 < (int)(uint)uVar1)) && (uVar1 < 0x51)) {
    puStack_1c = (undefined *)(unaff_EBP + 0xb);
    iStack_20 = 0;
    pcStack_24 = (code *)(uVar1 + 1);
    uStack_28 = 0x463b3b;
    FUN_00465664();
    puStack_1c = (undefined *)0x463b49;
    FUN_0048ab76();
    puStack_1c = (undefined *)0x463b54;
    FUN_004933dc();
    puStack_1c = (undefined *)0x0;
    iStack_20 = 0;
    pcStack_24 = (code *)0x0;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_2c;
    FUN_00679d22(auStack_2c,0x220);
    FUN_007db3ad();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0x22000008;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
  puStack_1c = &DAT_008f7260;
  iStack_20 = unaff_EBP + 8;
                    /* WARNING: Subroutine does not return */
  pcStack_24 = FUN_00463ba6;
  __CxxThrowException_8();
}


