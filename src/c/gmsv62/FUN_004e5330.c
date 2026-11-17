/* FUN_004e5330 - 0x004e5330 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004e5330(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5bd6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004e53f9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008ea7d8;
  extraout_ECX[1] = &PTR_LAB_008ea78c;
  extraout_ECX[2] = &PTR_FUN_008ea788;
  extraout_ECX[3] = &PTR_FUN_008ea784;
  return extraout_ECX;
}


