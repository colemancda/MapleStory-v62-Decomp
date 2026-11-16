/* FUN_51803348 - 0x51803348 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_51803348(void *this,byte param_1)

{
  FUN_5180336d(this);
  if ((param_1 & 1) != 0) {
    FUN_5180cffa(DAT_5181fef8,(undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}


