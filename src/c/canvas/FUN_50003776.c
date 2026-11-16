/* FUN_50003776 - 0x50003776 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_50003776(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_50002c30();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5001434c;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_50014348;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_50014344;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_50014338;
  InterlockedIncrement(&DAT_5001da54);
  return this;
}


