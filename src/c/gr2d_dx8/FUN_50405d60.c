/* FUN_50405d60 - 0x50405d60 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50405d60(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 4;
  extraout_ECX[4] = &PTR_FUN_5042d39c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[7] = &PTR_FUN_5042d37c;
  FUN_504068bd((int)(extraout_ECX + 7));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_5042d3a0;
  *extraout_ECX = &PTR_LAB_5042d3a4;
  return;
}


