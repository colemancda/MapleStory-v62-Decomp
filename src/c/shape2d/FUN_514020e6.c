/* FUN_514020e6 - 0x514020e6 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_514020e6(void *this,byte param_1)

{
  FUN_5140210b(this);
  if ((param_1 & 1) != 0) {
    FUN_51402860(DAT_51411b84,(undefined4 *)((int)this + -8));
  }
  return (undefined4 *)((int)this + -8);
}


