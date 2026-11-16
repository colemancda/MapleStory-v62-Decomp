/* FUN_51401bea - 0x51401bea in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51401bea(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_51401c5b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(extraout_ECX + 0x10) = &PTR_FUN_5140c418;
  FUN_51409cf6(extraout_ECX + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


