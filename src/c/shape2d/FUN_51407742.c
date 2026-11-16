/* FUN_51407742 - 0x51407742 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51407742(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x14);
  FUN_5140126a();
  piVar1 = *(int **)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  **(int **)(unaff_EBP + 8) = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = (int *)(extraout_ECX + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


