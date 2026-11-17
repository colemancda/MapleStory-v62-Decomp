/* FUN_0041848b - 0x0041848b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041848b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004135e0();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0041927c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


