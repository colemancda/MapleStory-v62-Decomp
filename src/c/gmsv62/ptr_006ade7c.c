/* ptr_006ade7c - 0x006ade7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006ade7c(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  
  FUN_00878dfb();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004027eb();
  FUN_004027eb();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


