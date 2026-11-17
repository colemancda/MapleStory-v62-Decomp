/* ptr_0078937e - 0x0078937e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078937e(void)

{
  int unaff_EBP;
  
  FUN_00772d62();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00770582();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


