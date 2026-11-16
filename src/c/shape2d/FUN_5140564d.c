/* FUN_5140564d - 0x5140564d in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140564d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_5140ad20();
  puVar1 = (undefined4 *)FUN_5140577f();
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_51405692(puVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


