/* FUN_5180105d - 0x5180105d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_5180105d(void *this,byte param_1)

{
  FUN_5180107d();
  if ((param_1 & 1) != 0) {
    FUN_51801ac1(&DAT_5181fdb0,this);
  }
  return this;
}


