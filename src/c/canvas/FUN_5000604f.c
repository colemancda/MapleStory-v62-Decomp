/* FUN_5000604f - 0x5000604f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000604f(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar1 = FUN_500068cd();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_5000468a();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


