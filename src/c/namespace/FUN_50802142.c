/* FUN_50802142 - 0x50802142 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50802142(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  FUN_50803d00();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + -0x18);
  FUN_508012a1();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_50805bf4((void *)(iVar2 + 0x10),(int *)(unaff_EBP + 0xc));
  piVar1 = (int *)(iVar2 + -0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(iVar2 + -0x18) = 0;
  }
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    FUN_508040b6(*(int **)(unaff_EBP + 0xc));
  }
  FUN_508021bf();
  return;
}


