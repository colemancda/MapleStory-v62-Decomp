/* FUN_005798bc - 0x005798bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005798bc(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ec0c4;
  extraout_ECX[-1] = &PTR_LAB_008ec078;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec074;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x28,8,3,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x1c,0x10,3,FUN_0044f639);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


