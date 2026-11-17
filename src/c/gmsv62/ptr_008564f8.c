/* ptr_008564f8 - 0x008564f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_008564f8(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00679d22(unaff_EBP + -0xd0,0x177);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
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


