/* FUN_500031ec - 0x500031ec in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500031ec(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  piVar1 = *(int **)(unaff_EBP + 0x20);
  iVar2 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    FUN_50003257();
    return;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 0x1c) != 0) {
    FUN_5000d476();
    iVar2 = FUN_500051c4();
  }
  *piVar1 = iVar2;
  FUN_50003157(0x5001daa0);
  FUN_50003257();
  return;
}


