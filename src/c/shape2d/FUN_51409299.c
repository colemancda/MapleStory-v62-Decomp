/* FUN_51409299 - 0x51409299 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51409299(void)

{
  void *this;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  FUN_514092ec(this,*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10));
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
  FUN_514092db();
  return;
}


