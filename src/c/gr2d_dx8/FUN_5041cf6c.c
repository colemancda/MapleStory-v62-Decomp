/* FUN_5041cf6c - 0x5041cf6c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5041cf6c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_5042e230;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5041c015((int)extraout_ECX);
  if ((undefined4 *)extraout_ECX[0x41b] != (undefined4 *)0x0) {
    FUN_504018c9((undefined4 *)extraout_ECX[0x41b]);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50418407(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


