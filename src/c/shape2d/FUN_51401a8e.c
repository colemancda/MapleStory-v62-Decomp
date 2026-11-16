/* FUN_51401a8e - 0x51401a8e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51401a8e(void)

{
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_5140c418;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_514025fd((void *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + 8) + -0x2c,0,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_5140c418;
  FUN_51409cf6(unaff_EBP + -0x20);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


