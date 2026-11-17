/* FUN_006bd9a6 - 0x006bd9a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd9a6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_006bdd81();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


