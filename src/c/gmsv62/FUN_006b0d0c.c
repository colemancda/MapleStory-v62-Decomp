/* FUN_006b0d0c - 0x006b0d0c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006b0d0c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_00979198 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074b9b2();
  extraout_ECX[0x154] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x155,8,3,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x15c] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008ef810;
  extraout_ECX[1] = &PTR_LAB_008ef7c4;
  extraout_ECX[2] = &PTR_FUN_008ef7c0;
  FUN_0081420c(uVar2,uVar1,0xb1,0xb5,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


