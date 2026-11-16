/* FUN_50c03d37 - 0x50c03d37 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c03d37(void *this,byte param_1)

{
  FUN_50c03d5c(this);
  if ((param_1 & 1) != 0) {
    FUN_50c0c9f1(DAT_50c214dc,(undefined4 *)((int)this + -8));
  }
  return (undefined4 *)((int)this + -8);
}


