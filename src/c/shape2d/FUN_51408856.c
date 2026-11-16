/* FUN_51408856 - 0x51408856 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_51408856(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_5140d944;
  extraout_ECX[2] = 0;
  extraout_ECX[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_5140d938;
  extraout_ECX[1] = &PTR_LAB_5140d934;
  (*DAT_51411750)(extraout_ECX + 3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


