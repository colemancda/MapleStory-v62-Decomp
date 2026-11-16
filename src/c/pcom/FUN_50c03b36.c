/* FUN_50c03b36 - 0x50c03b36 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c03b36(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_50c03048();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_50c13454;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_50c13450;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_50c1344c;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_50c13440;
  InterlockedIncrement(&DAT_50c1ca34);
  return this;
}


