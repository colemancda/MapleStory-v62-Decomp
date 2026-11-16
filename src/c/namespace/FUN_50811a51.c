/* FUN_50811a51 - 0x50811a51 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50811a51(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_508122ab((int)this + 0x44);
  while (local_8 != (void *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    iVar2 = FUN_508122cc((void *)((int)this + 0x44),(int *)&local_8,(void *)0x0);
    (*(code *)*puVar1)(param_1,iVar2);
  }
  return;
}


