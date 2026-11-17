/* FUN_007771b4 - 0x007771b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007771b4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_0097bef0 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x19,8,2,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x1d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x1e,4,5,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x24,4,5,FUN_00483ba7,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x29,4,5,FUN_00483ba7,FUN_00414ebb);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008f13f8;
  extraout_ECX[1] = &PTR_LAB_008f13ac;
  extraout_ECX[2] = &PTR_FUN_008f13a8;
  extraout_ECX[0x23] = uVar1;
  FUN_0081420c(uVar3,uVar2,0xe9,0x130,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


