/* FUN_50003268 - 0x50003268 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50003268(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  piVar1 = *(int **)(unaff_EBP + 0x24);
  iVar2 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    FUN_500032d6();
    return;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 0x1c) != 0) {
    FUN_5000d476();
    iVar2 = FUN_5000526f();
  }
  *piVar1 = iVar2;
  FUN_50003157(0x5001daa0);
  FUN_500032d6();
  return;
}


