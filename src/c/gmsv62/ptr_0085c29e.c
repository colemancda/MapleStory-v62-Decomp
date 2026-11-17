/* ptr_0085c29e - 0x0085c29e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c29e(void)

{
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  FUN_0085cb93(unaff_EDI,1);
  if (DAT_0097bef4 != 0) {
    FUN_0077e45e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


