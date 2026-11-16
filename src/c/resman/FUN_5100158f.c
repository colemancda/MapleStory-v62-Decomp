/* FUN_5100158f - 0x5100158f in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __thiscall FUN_5100158f(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_51006108;
  FUN_51001cf0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_51001bce(&DAT_510097f0,this);
  }
  return this;
}


