/* ptr_00789ae8 - 0x00789ae8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789ae8(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  FUN_00776a8e(in_EAX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


