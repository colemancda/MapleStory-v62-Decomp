/* FUN_50803619 - 0x50803619 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50803619(void *this,undefined4 param_1)

{
  FUN_508017a5();
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_508175f0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_508175c4;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_50817590;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_5081757c;
  *(undefined ***)((int)this + 0x44) = &PTR_FUN_50817578;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_50817574;
  return this;
}


