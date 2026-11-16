/* FUN_51409905 - 0x51409905 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51409905(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_5140d988;
  extraout_ECX[1] = &PTR_LAB_5140d984;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[2] = &PTR_FUN_5140d994;
  FUN_51409cf6((int)(extraout_ECX + 2));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 1)) =
       &PTR_LAB_5140d9a8;
  *extraout_ECX = &PTR_LAB_5140d90c;
  return;
}


