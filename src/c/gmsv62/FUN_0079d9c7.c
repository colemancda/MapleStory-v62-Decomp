/* FUN_0079d9c7 - 0x0079d9c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0079d9c7(int param_1)

{
  int iVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 4;
  }
  LVar2 = InterlockedDecrement((LONG *)(iVar1 + 4));
  if (LVar2 == 0) {
    InterlockedIncrement
              ((LONG *)((-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) + 4U) + 4));
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 4) + 4;
    }
    FUN_0040294d(iVar1);
  }
  return;
}


