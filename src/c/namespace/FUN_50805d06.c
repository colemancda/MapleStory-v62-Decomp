/* FUN_50805d06 - 0x50805d06 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50805d06(void *this,byte param_1)

{
  FUN_50805d2b(this);
  if ((param_1 & 1) != 0) {
    FUN_508044b8(DAT_5081eb90,(undefined4 *)((int)this + -8));
  }
  return (undefined4 *)((int)this + -8);
}


