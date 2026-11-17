/* FUN_00463cba - 0x00463cba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00463cba(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  code *pcStack_1c;
  int iStack_18;
  undefined *puStack_14;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x490);
  puStack_14 = (undefined *)0x463cde;
  uVar2 = FUN_00424561();
  uVar2 = uVar2 & 0xffff;
  *(uint *)(extraout_ECX + 0x490) = uVar2;
  if ((iVar1 < (int)uVar2) && (uVar2 < 7)) {
    puStack_14 = (undefined *)0x463cf7;
    FUN_004933dc();
    puStack_14 = (undefined *)0x0;
    iStack_18 = 0;
    pcStack_1c = (code *)0x0;
    uStack_20 = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_24;
    FUN_00679d22(auStack_24,0x221);
    FUN_007db3ad();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0x22000008;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
  puStack_14 = &DAT_008f7260;
  iStack_18 = unaff_EBP + 8;
                    /* WARNING: Subroutine does not return */
  pcStack_1c = FUN_00463d49;
  __CxxThrowException_8();
}


