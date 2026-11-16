/* FUN_5000a303 - 0x5000a303 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000a303(int param_1)

{
  if (*(int *)(param_1 + 0x2000) != 0) {
    FUN_5000257e(&DAT_50081f98,*(undefined4 **)(param_1 + 0x2004));
    FUN_5000257e(&DAT_50081f98,*(undefined4 **)(param_1 + 0x2008));
  }
  return;
}


