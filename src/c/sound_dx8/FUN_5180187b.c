/* FUN_5180187b - 0x5180187b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180187b(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_51801991(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


