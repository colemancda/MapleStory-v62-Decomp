/* FUN_5000b444 - 0x5000b444 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000b444(int param_1)

{
  int *piVar1;
  
  FUN_500024f7();
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  piVar1 = (int *)(param_1 + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


