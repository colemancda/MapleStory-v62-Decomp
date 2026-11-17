/* ptr_00855662 - 0x00855662 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855662(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00679d22(unaff_EBP + -0x7c,0x16c);
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  FUN_00471102(uVar1,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


