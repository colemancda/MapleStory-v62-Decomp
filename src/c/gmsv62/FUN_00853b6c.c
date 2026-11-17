/* FUN_00853b6c - 0x00853b6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00853b6c(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x81,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


