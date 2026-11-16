/* FUN_50012277 - 0x50012277 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50012277(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50015770;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_500125a7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_50015674;
  return;
}


