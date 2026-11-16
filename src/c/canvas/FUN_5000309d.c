/* FUN_5000309d - 0x5000309d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000309d(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar3 = *(int *)(iVar1 + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (iVar3 != 0) {
    FUN_50003146();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_500058fe();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5000362c(iVar3);
  FUN_50003649(iVar1 + 0x18);
  uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  FUN_50003649(unaff_EBP + 0x20);
  InterlockedIncrement((LONG *)(*(int *)(iVar1 + 0x1c) + 0x24));
  FUN_50003157(0x5001daa0);
  FUN_50003146();
  return;
}


