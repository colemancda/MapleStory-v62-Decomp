/* FUN_004e53a6 - 0x004e53a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e53a6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_LAB_008ea7d8;
  extraout_ECX[-2] = &PTR_LAB_008ea78c;
  extraout_ECX[-1] = &PTR_FUN_008ea788;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea784;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004e5425();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


