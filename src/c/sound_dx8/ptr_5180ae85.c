/* ptr_5180ae85 - 0x5180ae85 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall ptr_5180ae85(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x20) - *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
}


