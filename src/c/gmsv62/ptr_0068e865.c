/* ptr_0068e865 - 0x0068e865 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0068e865(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  FUN_00679d22(in_EAX);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


