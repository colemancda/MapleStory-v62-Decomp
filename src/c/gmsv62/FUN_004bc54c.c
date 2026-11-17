/* FUN_004bc54c - 0x004bc54c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bc54c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ea1c8;
  extraout_ECX[-1] = &PTR_FUN_008ea17c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea178;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045e621();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


