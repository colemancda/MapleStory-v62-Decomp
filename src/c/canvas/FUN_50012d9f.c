/* FUN_50012d9f - 0x50012d9f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


type_info * __thiscall FUN_50012d9f(void *this,byte param_1)

{
  type_info::~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_50002251(this);
  }
  return this;
}


