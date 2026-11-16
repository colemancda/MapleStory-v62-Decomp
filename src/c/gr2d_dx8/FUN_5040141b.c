/* FUN_5040141b - 0x5040141b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040141b(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5042c204;
  iVar1 = extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 1;
  (**(code **)(iVar1 + 0x84))();
  InterlockedDecrement(&DAT_50438a3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50402bbf();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


