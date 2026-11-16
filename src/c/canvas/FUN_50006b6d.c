/* FUN_50006b6d - 0x50006b6d in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50006b6d(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50005b3c((int *)(extraout_ECX + 0x28));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


