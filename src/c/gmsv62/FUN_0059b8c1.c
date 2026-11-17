/* FUN_0059b8c1 - 0x0059b8c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059b8c1(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &LAB_008ec6bc;
  extraout_ECX[10] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_0059c2ad();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008e89a0;
  FUN_0041f6a0();
  DAT_00979448 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


