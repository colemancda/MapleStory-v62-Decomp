/* FUN_51001516 - 0x51001516 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __thiscall FUN_51001516(void *this,byte param_1)

{
  FUN_510014d2();
  if ((param_1 & 1) != 0) {
    FUN_51001bce(&DAT_510097f0,this);
  }
  return this;
}


