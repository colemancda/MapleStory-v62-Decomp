/* FUN_50002745 - 0x50002745 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_50002745(void *this,byte param_1)

{
  FUN_50002765(this);
  if ((param_1 & 1) != 0) {
    FUN_5000257e(&DAT_50081f98,this);
  }
  return this;
}


