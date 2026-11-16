/* FUN_5001186e - 0x5001186e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5001186e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar1 = uVar2 + *(int *)(uVar2 - 4) * 0x24;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 0x24) {
      FUN_500118ab();
    }
    FUN_5000257e(&DAT_50081f98,(undefined4 *)(*param_1 - 4));
    *param_1 = 0;
  }
  return;
}


