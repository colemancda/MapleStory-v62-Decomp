/* FUN_004e5d16 - 0x004e5d16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5d16(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eac4c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004f1b19();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f1b19();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


