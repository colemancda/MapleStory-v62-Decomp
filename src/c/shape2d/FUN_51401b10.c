/* FUN_51401b10 - 0x51401b10 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_51401b10(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_5140c418;
  FUN_51409cf6((int)this);
  if ((param_1 & 1) != 0) {
    FUN_5140256c(&DAT_51411a90,this);
  }
  return this;
}


