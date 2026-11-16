/* FUN_50c0b8ac - 0x50c0b8ac in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b8ac(void *this,int *param_1)

{
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    FUN_50c0c0ab(this,param_1);
  }
  else {
    FUN_50c0c113(this,*param_1);
  }
  return;
}


