/* FUN_50c0809f - 0x50c0809f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0809f(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_50c067ea();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50c07f77();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


