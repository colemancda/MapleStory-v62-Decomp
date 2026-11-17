/* FUN_00474470 - 0x00474470 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00474470(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e96dc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004744d2();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00475967();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e9720;
  return;
}


