/* FUN_51408993 - 0x51408993 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51408993(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5140d938;
  extraout_ECX[1] = &PTR_LAB_5140d934;
  piVar1 = (int *)extraout_ECX[2];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 1)) =
       &PTR_LAB_5140d948;
  *extraout_ECX = &PTR_LAB_5140d90c;
  return;
}


