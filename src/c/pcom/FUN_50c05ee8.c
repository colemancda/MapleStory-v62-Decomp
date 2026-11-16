/* FUN_50c05ee8 - 0x50c05ee8 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * FUN_50c05ee8(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c05f4d();
  iVar1 = *(int *)(unaff_EBP + -0x10);
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      FUN_50c02a85(*(int **)(unaff_EBP + -0x10));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}


