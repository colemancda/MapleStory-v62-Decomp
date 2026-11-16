/* FUN_5080abb6 - 0x5080abb6 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080abb6(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  FUN_50803d00();
  iVar2 = *(int *)(unaff_EBP + 8);
  piVar1 = (int *)(iVar2 + 0x38);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 0xc) + 8));
  }
  FUN_508052b4(piVar1);
  piVar3 = *(int **)(unaff_EBP + 0xc);
  *piVar1 = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    FUN_508040b6(piVar3);
  }
  FUN_5080a81b(piVar1);
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  FUN_50803d5b((void *)(iVar2 + 0x3c),(int *)(unaff_EBP + 0xc));
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    FUN_508040b6(*(int **)(unaff_EBP + 0xc));
  }
  FUN_5080ac41();
  return;
}


