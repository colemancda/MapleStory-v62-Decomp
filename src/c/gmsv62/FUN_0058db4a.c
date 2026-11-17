/* FUN_0058db4a - 0x0058db4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0058db4a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  DAT_0097942c = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x21,8,0x17,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x4f] = 0;
  extraout_ECX[0x50] = 0;
  extraout_ECX[0x52] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008ec568;
  extraout_ECX[1] = &PTR_LAB_008ec51c;
  extraout_ECX[2] = &PTR_FUN_008ec518;
  _OOBECompleteWnfWaitCallback_28(0xffffff74,0xfffffcdc,400,100,10,0,uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


