/* FUN_005797f8 - 0x005797f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005797f8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  FUN_0087b2f0(extraout_ECX + 0x1e,0x10,3,FUN_00534e6a,FUN_0044f639);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x2a,8,3,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_008ec0c4;
  extraout_ECX[1] = &PTR_LAB_008ec078;
  extraout_ECX[2] = &PTR_FUN_008ec074;
  _OOBECompleteWnfWaitCallback_28(0,0x177,0x7d,0x68,0xd2,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


