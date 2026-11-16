/* FUN_508031f9 - 0x508031f9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_508031f9(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_508016d1((undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = &PTR_FUN_50817554;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined ***)this = &PTR_FUN_50817548;
  InterlockedIncrement(&DAT_5081e594);
  return this;
}


