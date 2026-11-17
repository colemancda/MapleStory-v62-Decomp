/* ptr_007785e8 - 0x007785e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007785e8(void)

{
  int unaff_EBP;
  undefined1 auStack_4 [4];
  
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_4;
  FUN_00679d22(auStack_4,0xc96);
  FUN_007db3ad();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


