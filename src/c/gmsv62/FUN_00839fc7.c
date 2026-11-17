/* FUN_00839fc7 - 0x00839fc7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00839fc7(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x22,8,4,ptr_0045e147,thunk_FUN_00450463);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  *extraout_ECX = &PTR_FUN_008f31ec;
  extraout_ECX[1] = &PTR_LAB_008f31a0;
  extraout_ECX[2] = &PTR_FUN_008f319c;
  return extraout_ECX;
}


