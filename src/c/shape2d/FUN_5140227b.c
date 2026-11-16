/* FUN_5140227b - 0x5140227b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * FUN_5140227b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  extraout_ECX[0x10] = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (extraout_ECX + 0x11 != (undefined4 *)0x0) {
    extraout_ECX[0x11] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51402243(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51402397();
  extraout_ECX[0xd] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


