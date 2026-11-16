/* FUN_50405c1d - 0x50405c1d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50405c1d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5042d39c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = &PTR_FUN_5042d37c;
  FUN_504068bd((int)(extraout_ECX + 3));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


