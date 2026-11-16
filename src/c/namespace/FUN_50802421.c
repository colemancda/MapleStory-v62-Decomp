/* FUN_50802421 - 0x50802421 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50802421(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_508171c0;
  FUN_50804352((int)this);
  if ((param_1 & 1) != 0) {
    FUN_50803c7e(&DAT_5081e9e0,this);
  }
  return this;
}


