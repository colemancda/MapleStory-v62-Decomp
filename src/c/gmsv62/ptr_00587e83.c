/* ptr_00587e83 - 0x00587e83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00587e83(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00587ed0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


