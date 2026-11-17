/* ptr_0085658e - 0x0085658e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085658e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00679d22(unaff_EBP + -0xe0,0x179);
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
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


