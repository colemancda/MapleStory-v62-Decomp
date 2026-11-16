/* FUN_50801ba4 - 0x50801ba4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * FUN_50801ba4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 4);
  FUN_508012a1();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar3 = FUN_5080504c();
  iVar2 = *piVar3;
  piVar3 = *(int **)(unaff_EBP + 8);
  *piVar3 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    FUN_508040b6(*(int **)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  piVar1 = (int *)(extraout_ECX + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return piVar3;
}


