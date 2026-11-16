/* FUN_51801833 - 0x51801833 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51801833(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = this;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = local_8;
  if (iVar1 != 0) {
    local_8 = iVar1;
    FUN_51803161((int)&local_c);
  }
  return (int)this;
}


