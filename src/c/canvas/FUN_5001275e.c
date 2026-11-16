/* FUN_5001275e - 0x5001275e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5001275e(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_50012c97(0x80004003);
  }
  FUN_5001277b(*(int **)(param_1 + 0x1c));
  return;
}


