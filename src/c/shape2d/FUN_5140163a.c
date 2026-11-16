/* FUN_5140163a - 0x5140163a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_5140163a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[4] = 0;
  if (extraout_ECX + 5 != (undefined4 *)0x0) {
    extraout_ECX[5] = 0;
  }
  *extraout_ECX = &PTR_LAB_5140c1c0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_LAB_5140c1ac;
  FUN_51401721();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[7] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  return extraout_ECX;
}


