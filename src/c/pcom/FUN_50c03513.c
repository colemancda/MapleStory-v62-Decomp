/* FUN_50c03513 - 0x50c03513 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c03513(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_50c032b6();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_50c132b4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_50c132a0;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_50c1329c;
  *(undefined ***)((int)this + 0x18) = &PTR_FUN_50c13298;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined ***)this = &PTR_FUN_50c1328c;
  InterlockedIncrement(&DAT_50c1ca34);
  return this;
}


