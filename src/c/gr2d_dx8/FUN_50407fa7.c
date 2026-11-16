/* FUN_50407fa7 - 0x50407fa7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __fastcall FUN_50407fa7(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}


