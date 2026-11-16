/* FUN_5140692e - 0x5140692e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140692e(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51401806();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


