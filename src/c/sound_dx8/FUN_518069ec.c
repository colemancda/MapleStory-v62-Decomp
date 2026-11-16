/* FUN_518069ec - 0x518069ec in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518069ec(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_5180e990(0x80004003);
  }
  FUN_51806a09(*(int **)(param_1 + 0x1c));
  return;
}


