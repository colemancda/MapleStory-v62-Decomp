/* ptr_00835be8 - 0x00835be8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00835be8(void)

{
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  FUN_00457cda();
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffffc;
  FUN_00414f8b(unaff_ESI);
  FUN_00459cb5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0083e0c6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


