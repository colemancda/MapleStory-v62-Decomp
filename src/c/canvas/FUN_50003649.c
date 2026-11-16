/* FUN_50003649 - 0x50003649 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50003649(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_500036d3(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


