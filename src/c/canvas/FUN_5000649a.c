/* FUN_5000649a - 0x5000649a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000649a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_50003649((int)(extraout_ECX + 6));
  if ((int *)extraout_ECX[2] != (int *)0x0) {
    FUN_500028a0((int *)extraout_ECX[2]);
    extraout_ECX[2] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_500144a8;
  return;
}


