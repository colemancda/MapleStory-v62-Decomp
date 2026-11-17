/* ptr_00790061 - 0x00790061 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __fastcall ptr_00790061(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = *(int **)(unaff_EBP + 8);
  *piVar2 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return piVar2;
}


