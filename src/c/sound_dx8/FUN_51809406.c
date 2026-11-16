/* FUN_51809406 - 0x51809406 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __thiscall FUN_51809406(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_5180e990(0x80004003);
  }
  FUN_51809434(*(void **)((int)this + 0x1c),param_1);
  return param_1;
}


