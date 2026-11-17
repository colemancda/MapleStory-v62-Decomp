/* FUN_0077cd18 - 0x0077cd18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077cd18(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &LAB_008f1554;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0078284d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 1,4,3,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


