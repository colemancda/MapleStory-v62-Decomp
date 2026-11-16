/* FUN_50005acd - 0x50005acd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50005acd(int param_1)

{
  uint uVar1;
  
  FUN_50003649(param_1);
  uVar1 = FUN_50005ae2();
  *(uint *)(param_1 + 4) = uVar1;
  return;
}


