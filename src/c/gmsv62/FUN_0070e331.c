/* FUN_0070e331 - 0x0070e331 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e331(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0984;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[9] = &PTR_FUN_008ea2e8;
  FUN_004cdbe3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = &PTR_FUN_008f0988;
  FUN_0070efff();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


