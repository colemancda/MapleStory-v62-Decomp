/* FUN_00475bb7 - 0x00475bb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00475bb7(int param_1)

{
  int iVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0xc;
  }
  LVar2 = InterlockedDecrement((LONG *)(iVar1 + 4));
  if (LVar2 == 0) {
    InterlockedIncrement
              ((LONG *)((-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) + 0xcU) + 4));
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 4) + 0xc;
    }
    FUN_0040294d(iVar1);
  }
  return;
}


