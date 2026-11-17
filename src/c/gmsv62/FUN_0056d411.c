/* FUN_0056d411 - 0x0056d411 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0056d411(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_00979424 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  extraout_ECX[0x19] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1a] = uVar1;
  FUN_0087b2f0(extraout_ECX + 0x1c,8,3,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008ebd70;
  extraout_ECX[1] = &PTR_LAB_008ebd24;
  extraout_ECX[2] = &PTR_FUN_008ebd20;
  FUN_0081420c(200,0xfffffab1,0x65,0x83,10,0,uVar1,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


