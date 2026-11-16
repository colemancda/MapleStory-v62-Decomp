/* FUN_518025e0 - 0x518025e0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_518025e0(void *this,byte param_1)

{
  FUN_51802601();
  if ((param_1 & 1) != 0) {
    FUN_5180cffa(DAT_5181ff14,this);
  }
  return this;
}


