/* FUN_51401c2f - 0x51401c2f in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51401c2f(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = &PTR_FUN_5140c418;
  FUN_51409cf6(extraout_ECX + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


