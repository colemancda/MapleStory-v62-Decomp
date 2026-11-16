/* FUN_50405895 - 0x50405895 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50405895(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar1 = (undefined4 *)FUN_50406218();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_50405bab(puVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


