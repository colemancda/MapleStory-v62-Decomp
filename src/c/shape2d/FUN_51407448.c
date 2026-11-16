/* FUN_51407448 - 0x51407448 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51407448(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5140d8f0;
  extraout_ECX[3] = &PTR_LAB_5140d8e8;
  extraout_ECX[4] = &PTR_FUN_5140d8ec;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_51406c64();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xc] = &PTR_FUN_5140d8f4;
  FUN_51409cf6((int)(extraout_ECX + 0xc));
  piVar1 = (int *)extraout_ECX[7];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_51409a41();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_5140c8b4;
  return;
}


