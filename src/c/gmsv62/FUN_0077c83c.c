/* FUN_0077c83c - 0x0077c83c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077c83c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1544;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0078253c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0078253c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0078253c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 1,4,0xe,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


