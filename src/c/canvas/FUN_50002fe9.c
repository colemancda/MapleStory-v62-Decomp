/* FUN_50002fe9 - 0x50002fe9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50002fe9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  extraout_ECX[3] = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (extraout_ECX + 4 != (undefined4 *)0x0) {
    extraout_ECX[4] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_500142c8;
  FUN_5000351b();
  extraout_ECX[7] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


