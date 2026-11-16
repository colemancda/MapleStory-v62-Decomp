/* FUN_50003add - 0x50003add in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_50003add(void *this,byte param_1)

{
  FUN_50003b02(this);
  if ((param_1 & 1) != 0) {
    FUN_50003c6f(DAT_500864ec,(undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}


