/* FUN_50808613 - 0x50808613 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_50808613(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  
  if (*(int *)this == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)this + -4);
  }
  if (param_1 == -1) {
    param_1 = local_8;
  }
  FUN_50808df5(this,local_8 + 1,2);
  iVar1 = param_1 * 8 + 8;
  iVar3 = param_1 * 8;
  memmove((void *)(*(int *)this + iVar1),(void *)(iVar3 + *(int *)this),
          (param_1 * 0x1fffffff + local_8) * 8);
  iVar2 = *(int *)this;
  for (puVar4 = (undefined4 *)(iVar3 + iVar2); puVar4 < (undefined4 *)(iVar1 + iVar2);
      puVar4 = puVar4 + 2) {
    FUN_508095bf(puVar4);
  }
  return iVar3 + *(int *)this;
}


