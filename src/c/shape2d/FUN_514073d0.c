/* FUN_514073d0 - 0x514073d0 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514073d0(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_5140ad20();
  iVar1 = *(int *)(unaff_EBP + 8) + -0x10;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 8) + -0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51406c64();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51409c2e(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


