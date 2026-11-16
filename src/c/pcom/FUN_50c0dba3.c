/* FUN_50c0dba3 - 0x50c0dba3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c0dba3(void *this,int param_1)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_50c131f4;
  FUN_50c04098((int)this);
  FUN_50c0dc7d(this,param_1);
  return this;
}


