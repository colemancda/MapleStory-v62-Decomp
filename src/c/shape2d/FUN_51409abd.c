/* FUN_51409abd - 0x51409abd in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51409abd(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_51409c2e(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


