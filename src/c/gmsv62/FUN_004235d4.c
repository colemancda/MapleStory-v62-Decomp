/* FUN_004235d4 - 0x004235d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004235d4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e89bc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[6] = &PTR_FUN_008e89c0;
  FUN_00425590();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008e89c4;
  FUN_004253aa();
  DAT_00978108 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


