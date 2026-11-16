/* FUN_51404bba - 0x51404bba in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51404bba(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_5140c82c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = &PTR_FUN_5140c418;
  FUN_51409cf6((int)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


