/* FUN_5000c9c8 - 0x5000c9c8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_5000c9c8(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  if ((undefined4 *)(extraout_ECX + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_5000ca64();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  return extraout_ECX;
}


