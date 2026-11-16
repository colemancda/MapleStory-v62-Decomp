/* FUN_50c0bf4f - 0x50c0bf4f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0bf4f(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_50c146c4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = &PTR_FUN_50c13334;
  FUN_50c04098((int)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


