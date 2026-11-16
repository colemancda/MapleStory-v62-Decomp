/* FUN_5080b8f7 - 0x5080b8f7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_5080b8f7(void *this,byte param_1)

{
  FUN_5080b91c(this);
  if ((param_1 & 1) != 0) {
    FUN_508044b8(DAT_5081eb48,(undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}


