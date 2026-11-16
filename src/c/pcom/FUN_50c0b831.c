/* FUN_50c0b831 - 0x50c0b831 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b831(void *this,undefined4 param_1)

{
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    FUN_50c0b854(this,param_1);
  }
  else {
    FUN_50c0b87f(this);
  }
  return;
}


