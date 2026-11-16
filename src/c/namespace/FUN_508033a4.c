/* FUN_508033a4 - 0x508033a4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_508033a4(void *this,byte param_1)

{
  FUN_508033c9();
  if ((param_1 & 1) != 0) {
    FUN_508044b8(DAT_5081ebcc,(undefined4 *)((int)this + -0x44));
  }
  return (int)this + -0x44;
}


