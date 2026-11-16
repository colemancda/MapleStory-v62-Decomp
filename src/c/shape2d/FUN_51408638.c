/* FUN_51408638 - 0x51408638 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51408638(undefined4 *param_1)

{
  int *piVar1;
  int unaff_EBP;
  
  *(undefined4 **)(unaff_EBP + -0x10) = param_1;
  *param_1 = &PTR_FUN_5140d920;
  param_1[1] = &PTR_LAB_5140d91c;
  piVar1 = (int *)param_1[2];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 1)) = &PTR_LAB_5140d930;
  *param_1 = &PTR_LAB_5140d90c;
  return;
}


