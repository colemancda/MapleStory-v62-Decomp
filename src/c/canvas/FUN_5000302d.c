/* FUN_5000302d - 0x5000302d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000302d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x14) = 0;
  FUN_50003649(unaff_EBP + -0x14);
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 4U;
  uVar2 = -(uint)(uVar2 != 0) & uVar2 - 4;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 != 0) {
    InterlockedDecrement((LONG *)(uVar2 + 0x24));
    iVar1 = *(int *)(unaff_EBP + -0x10);
    uVar3 = (*DAT_50081bfc)();
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50003649(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


