/* FUN_51403625 - 0x51403625 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51403625(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_5140ac47(0x80004003);
  }
  FUN_51405cb2(*(int **)(param_1 + 0x20));
  return;
}


