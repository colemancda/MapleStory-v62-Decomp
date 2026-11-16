/* FUN_5000bb6b - 0x5000bb6b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000bb6b(void)

{
  int *piVar1;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_5000bbde();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = FUN_5000d34b(*(int **)(unaff_EBP + 0x14));
  if ((0 < (int)piVar1) &&
     ((((int)piVar1 < 3 || (piVar1 == (int *)0x201)) || (piVar1 == (int *)0x402)))) {
    FUN_5000b5e3();
    FUN_5000bbde();
    return;
  }
  FUN_5000bbde();
  return;
}


