/* FUN_00481ac4 - 0x00481ac4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00481ac4(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0041352a();
  if (*extraout_ECX != 0) {
    FUN_004030b1();
    *extraout_ECX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


