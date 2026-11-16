/* FUN_50401589 - 0x50401589 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50401589(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_5042c154;
  extraout_ECX[1] = (int)&PTR_LAB_5042c140;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 1;
  FUN_50402e07(extraout_ECX);
  InterlockedDecrement(&DAT_50438a3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50402bbf();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


