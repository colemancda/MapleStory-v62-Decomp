/* FUN_5080ac52 - 0x5080ac52 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080ac52(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5080e090();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 0x20);
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_50803aab(*(short **)(unaff_EBP + 0xc),(short *)(iVar2 + 0x28));
    piVar1 = (int *)(iVar2 + 0x24);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


