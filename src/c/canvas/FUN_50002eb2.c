/* FUN_50002eb2 - 0x50002eb2 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_50002eb2(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_500141dc;
  FUN_5000f634((int)this);
  if ((param_1 & 1) != 0) {
    FUN_5000257e(&DAT_50081f98,this);
  }
  return this;
}


