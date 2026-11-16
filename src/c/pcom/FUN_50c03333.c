/* FUN_50c03333 - 0x50c03333 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03333(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = *(int *)(unaff_EBP + 8);
  FUN_50c07810(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_50c131f4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c03ed7((void *)(unaff_EBP + -0x20),iVar1 + 0x30,0,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_50c131f4;
  FUN_50c04098(unaff_EBP + -0x20);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


