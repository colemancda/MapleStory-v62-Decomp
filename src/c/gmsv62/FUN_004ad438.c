/* FUN_004ad438 - 0x004ad438 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ad438(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (1 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 100) = param_3;
    FUN_004b3daf();
  }
  return;
}


