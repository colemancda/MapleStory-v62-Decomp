/* FUN_514021f8 - 0x514021f8 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_514021f8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[0x10] = 0;
  if (extraout_ECX + 0x11 != (undefined4 *)0x0) {
    extraout_ECX[0x11] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51402243(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5140233a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xd] = 1;
  return extraout_ECX;
}


