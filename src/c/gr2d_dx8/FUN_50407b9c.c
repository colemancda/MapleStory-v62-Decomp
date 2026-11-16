/* FUN_50407b9c - 0x50407b9c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50407b9c(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = extraout_ECX[3];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (iVar1 != 0) {
    (*(code *)extraout_ECX[4])();
  }
  FreeLibrary((HMODULE)*extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


