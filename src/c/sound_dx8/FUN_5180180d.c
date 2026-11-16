/* FUN_5180180d - 0x5180180d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_5180180d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_51818118;
  FUN_5180226a((int)this);
  if ((param_1 & 1) != 0) {
    FUN_51801ac1(&DAT_5181fdb0,this);
  }
  return this;
}


