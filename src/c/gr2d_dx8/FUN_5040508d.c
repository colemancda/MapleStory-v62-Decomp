/* FUN_5040508d - 0x5040508d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_5040508d(int param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 0x10U);
  lpAddend = puVar2 + 1;
  LVar1 = InterlockedDecrement(lpAddend);
  if (LVar1 == 0) {
    InterlockedIncrement(lpAddend);
    FUN_504050bc(puVar2);
  }
  return;
}


