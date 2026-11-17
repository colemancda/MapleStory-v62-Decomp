/* FUN_004e5f4c - 0x004e5f4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5f4c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


