/* FUN_50c0dbf1 - 0x50c0dbf1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __thiscall FUN_50c0dbf1(void *this,int param_1)

{
  FUN_50c0dc53(param_1);
  if (*(int *)((int)this + 4) != 0) {
    FUN_50c045f3((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}


