/* FUN_500036d3 - 0x500036d3 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_500036d3(int param_1)

{
  int iVar1;
  LONG LVar2;
  undefined4 *puVar3;
  
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
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
    }
    FUN_50003723(puVar3);
  }
  return;
}


