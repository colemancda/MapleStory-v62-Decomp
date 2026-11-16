/* FUN_50012a54 - 0x50012a54 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50012a54(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_50012c97(0x80004003);
  }
  FUN_50012a2d(*(int **)(param_1 + 0x20));
  return;
}


