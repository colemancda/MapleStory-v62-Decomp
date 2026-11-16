/* FUN_51004804 - 0x51004804 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51004804(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = (uint)(*(int *)((int)this + 8) * *(int *)((int)this + 0x10)) >> 7;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  return;
}


