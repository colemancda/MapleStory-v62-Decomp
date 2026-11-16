/* FUN_5180c938 - 0x5180c938 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180c938(void *this,int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_1 + 4) + 4));
  }
  if (*(int *)((int)this + 4) != 0) {
    FUN_51803161((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}


