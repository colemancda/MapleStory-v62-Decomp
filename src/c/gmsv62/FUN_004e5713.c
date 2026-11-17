/* FUN_004e5713 - 0x004e5713 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5713(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ea948;
  extraout_ECX[-2] = &PTR_FUN_008ea8fc;
  extraout_ECX[-1] = &PTR_FUN_008ea8f8;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea8f4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004e580d();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004e57a0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


