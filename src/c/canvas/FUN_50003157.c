/* FUN_50003157 - 0x50003157 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50003157(int param_1)

{
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  if (*(int *)(param_1 + 0x24) < 1) {
    FUN_5000583a();
    *(undefined4 *)(param_1 + 0x24) = 0x80;
  }
  return;
}


