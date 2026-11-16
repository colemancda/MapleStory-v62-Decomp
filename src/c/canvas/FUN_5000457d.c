/* FUN_5000457d - 0x5000457d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000457d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50014478;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = &PTR_FUN_5001447c;
  FUN_5001181d((int)(extraout_ECX + 3));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


