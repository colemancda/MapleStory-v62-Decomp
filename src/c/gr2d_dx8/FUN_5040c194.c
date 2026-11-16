/* FUN_5040c194 - 0x5040c194 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_5040c194(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4));
  }
  return;
}


