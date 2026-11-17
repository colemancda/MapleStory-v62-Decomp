/* FUN_00464045 - 0x00464045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00464045(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  iVar5 = FUN_00455c59(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar5 + 4);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  puVar6 = (undefined4 *)FUN_00465774(0xffffffff);
  FUN_004245d2(puVar6,0x37);
  iVar5 = puVar6[4];
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(unaff_EBP + -0x14) = iVar5 / 1000000;
  iVar5 = FUN_00458d57(iVar5 / 1000000,uVar2,uVar1);
  if (iVar5 < 1) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000008;
    *(undefined4 *)(unaff_EBP + 8) = 0x22000008;
    *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + 8,&DAT_008f7260);
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x3e3 + *(int *)(unaff_EBP + -0x14) * 4);
  iVar4 = *(int *)(iVar3 + 4 + iVar5 * 8);
  *(int *)(unaff_EBP + 8) = iVar3 + iVar5 * 8;
  if (iVar4 != 0) {
    FUN_00449913(0);
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4) = 0;
  }
  FUN_008161f1(0);
  FUN_00489a0e(0);
  FUN_008161f1(0);
  if (*(int *)(DAT_00978368 + 0x2b3c) == puVar6[4]) {
    *(undefined4 *)(DAT_00978368 + 0x2b3c) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


