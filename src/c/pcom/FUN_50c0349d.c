/* FUN_50c0349d - 0x50c0349d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c0349d(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_50c131f8;
  FUN_50c07810((int)this);
  if ((param_1 & 1) != 0) {
    FUN_50c02783(&DAT_50c21310,this);
  }
  return this;
}


