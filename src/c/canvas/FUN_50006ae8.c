/* FUN_50006ae8 - 0x50006ae8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50006ae8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_50006b41(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50006c4e();
  extraout_ECX[0xd] = 0;
  *extraout_ECX = &PTR_LAB_500144b4;
  extraout_ECX[0xb] = &PTR_LAB_500144b0;
  extraout_ECX[0xc] = &PTR_LAB_500144ac;
  InterlockedIncrement(&DAT_5001da54);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


