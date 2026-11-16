/* FUN_50c03584 - 0x50c03584 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03584(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(extraout_ECX + 0x34) = &PTR_FUN_50c131f4;
  FUN_50c04098(extraout_ECX + 0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(extraout_ECX + 0x1c) = &PTR_FUN_50c131f8;
  FUN_50c07810(extraout_ECX + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50c03421();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


