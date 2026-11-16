/* FUN_514046cf - 0x514046cf in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514046cf(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5140c730;
  puVar1 = (undefined4 *)extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(extraout_ECX);
  }
  *extraout_ECX = &PTR_FUN_5140c7c0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_5140519b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_5140c788;
  return;
}


