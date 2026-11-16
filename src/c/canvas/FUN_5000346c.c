/* FUN_5000346c - 0x5000346c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000346c(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    FUN_50003505();
    return;
  }
  FUN_5000d476();
  FUN_5000d476();
  iVar1 = *(int *)(unaff_EBP + 8);
  FUN_5000502d();
  FUN_50003157(0x5001daa0);
  if (*(undefined4 **)(unaff_EBP + 0x3c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x3c) = *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x14);
  }
  FUN_50003505();
  return;
}


