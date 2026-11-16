/* FUN_5000ff4b - 0x5000ff4b in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000ff4b(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = &PTR_FUN_50015610;
  FUN_5000f634(extraout_ECX + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 4) = &PTR_FUN_50015614;
  FUN_5000f634(extraout_ECX + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


