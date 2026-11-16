/* FUN_518039c8 - 0x518039c8 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518039c8(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_518044f7();
    return;
  }
  return;
}


