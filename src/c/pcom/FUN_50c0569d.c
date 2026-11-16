/* FUN_50c0569d - 0x50c0569d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0569d(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = FUN_50c05d19();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_50c058a6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


