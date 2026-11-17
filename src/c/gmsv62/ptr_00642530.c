/* ptr_00642530 - 0x00642530 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00642530(void)

{
  undefined1 unaff_BL;
  int unaff_EBP;
  
  FUN_004751b2();
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2848();
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


