/* FUN_5080d23a - 0x5080d23a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * FUN_5080d23a(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50805128();
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      FUN_508040b6(*(int **)(unaff_EBP + -0x10));
    }
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return piVar2;
}


