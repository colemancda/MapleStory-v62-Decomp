/* FUN_51404245 - 0x51404245 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51404245(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int unaff_EBP;
  uint uVar3;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0x10000;
  puVar1 = FUN_5140435b((int *)(unaff_EBP + -0x10));
  iVar2 = FUN_514042a2(this,*(int **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),puVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_51404295((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


