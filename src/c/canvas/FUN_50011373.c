/* FUN_50011373 - 0x50011373 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_50011373(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int unaff_EBP;
  uint uVar3;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0x10000;
  puVar1 = FUN_50011576((int *)(unaff_EBP + -0x10));
  iVar2 = FUN_50011428(this,*(int **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),puVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_500113ef((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


