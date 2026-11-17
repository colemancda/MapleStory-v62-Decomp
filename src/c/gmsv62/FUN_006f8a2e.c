/* FUN_006f8a2e - 0x006f8a2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f8a2e(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f04cc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_006f9f77();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 3,4,5,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


