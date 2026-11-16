/* FUN_50405027 - 0x50405027 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50405027(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_5040508d(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_50405895();
  *(undefined4 *)(iVar1 + 4) = 1;
  *(uint *)(param_1 + 4) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


