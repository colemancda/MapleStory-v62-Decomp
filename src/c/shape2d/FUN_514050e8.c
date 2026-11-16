/* FUN_514050e8 - 0x514050e8 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514050e8(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(uint *)(extraout_ECX + 8) = *(uint *)(extraout_ECX + 8) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar1 = (int *)FUN_5140502f(extraout_ECX);
  (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


