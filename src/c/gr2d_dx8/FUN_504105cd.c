/* FUN_504105cd - 0x504105cd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504105cd(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_5042da7c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = &PTR_FUN_5042da78;
  FUN_504068bd((int)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


