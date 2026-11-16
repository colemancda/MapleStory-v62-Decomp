/* FUN_51811fb8 - 0x51811fb8 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51811fb8(void *this,byte param_1)

{
  FUN_51811fdd();
  if ((param_1 & 1) != 0) {
    FUN_518119b9(DAT_5181fec4,(undefined4 *)((int)this + -0xc));
  }
  return (int)this + -0xc;
}


