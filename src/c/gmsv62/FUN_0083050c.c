/* FUN_0083050c - 0x0083050c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083050c(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00475195();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008e96d8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00475dfd();
  FUN_00473ba0(*(undefined4 *)(unaff_EBP + 8));
  FUN_00473c5a(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_008e96d8;
  FUN_00475e3b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


