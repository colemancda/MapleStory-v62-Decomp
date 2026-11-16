/* FUN_50c0f340 - 0x50c0f340 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0f340(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x18);
  FUN_50c026fc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c10184((void *)(iVar2 + 0x28),*(undefined4 **)(unaff_EBP + 0xc));
  piVar1 = (int *)(iVar2 + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


