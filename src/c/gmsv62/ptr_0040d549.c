/* ptr_0040d549 - 0x0040d549 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0040d549(void)

{
  undefined1 unaff_BL;
  int unaff_EBP;
  
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_00412bd3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412c22();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


