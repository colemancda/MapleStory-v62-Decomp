/* ptr_00720063 - 0x00720063 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00720063(void)

{
  int unaff_EBP;
  undefined1 auStack_4 [4];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_4;
  FUN_00679d22(auStack_4,0xc96);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


