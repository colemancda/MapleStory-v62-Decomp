/* FUN_508025a0 - 0x508025a0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_508025a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_50803619((void *)((int)this + 0x10),param_1);
  *(undefined ***)this = &PTR_FUN_508172b4;
  InterlockedIncrement(&DAT_5081e594);
  return this;
}


