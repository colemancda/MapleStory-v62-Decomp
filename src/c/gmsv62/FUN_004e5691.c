/* FUN_004e5691 - 0x004e5691 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004e5691(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5bd6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004e5778();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004e57e9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008ea948;
  extraout_ECX[1] = &PTR_FUN_008ea8fc;
  extraout_ECX[2] = &PTR_FUN_008ea8f8;
  extraout_ECX[3] = &PTR_FUN_008ea8f4;
  return extraout_ECX;
}


