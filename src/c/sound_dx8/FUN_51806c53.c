/* FUN_51806c53 - 0x51806c53 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51806c53(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_5180e990(0x80004003);
  }
  FUN_518060d6(*(int **)(param_1 + 0x20));
  return;
}


