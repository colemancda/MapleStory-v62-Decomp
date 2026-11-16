/* FUN_50c045c7 - 0x50c045c7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c045c7(void *this,byte param_1)

{
  if (*(int *)((int)this + 4) != 0) {
    FUN_50c045f3((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    FUN_50c02783(&DAT_50c21310,this);
  }
  return this;
}


