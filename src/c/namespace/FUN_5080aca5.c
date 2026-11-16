/* FUN_5080aca5 - 0x5080aca5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080aca5(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x20);
  FUN_508012a1();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50803aab((short *)(iVar2 + 0x28),(short *)(unaff_EBP + 0xc));
  piVar1 = (int *)(iVar2 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


