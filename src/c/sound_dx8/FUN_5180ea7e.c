/* FUN_5180ea7e - 0x5180ea7e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __cdecl FUN_5180ea7e(_onexit_t param_1)

{
  if (DAT_5181ff28 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_5181ff28,&DAT_5181ff24);
  return;
}


