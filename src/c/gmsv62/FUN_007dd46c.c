/* FUN_007dd46c - 0x007dd46c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007dd46c(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = 0xffffffff;
  FUN_0087b2f0(extraout_ECX + 0x22,4,3,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x25,4,3,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  *extraout_ECX = &PTR_FUN_008f1c38;
  extraout_ECX[1] = &PTR_FUN_008f1bec;
  extraout_ECX[2] = &PTR_FUN_008f1be8;
  extraout_ECX[0x1e] = *(undefined4 *)(DAT_00978368 + 0x204c);
  iVar1 = *(int *)(DAT_00978368 + 0x326c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  extraout_ECX[0x1f] = iVar1;
  iVar1 = (iVar1 / 6) * 0x15 + 0x7d;
  extraout_ECX[0x20] = iVar1;
  FUN_0081420c(0xb6,(600 - iVar1) / 2,0x1b4,iVar1,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


