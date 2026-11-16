/* FUN_508051fc - 0x508051fc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * __thiscall FUN_508051fc(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  uVar1 = FUN_5080529f(param_1);
  uVar2 = FUN_5080529f(param_2);
  puVar3 = FUN_50803f7f(0,(uVar2 + uVar1) * 2);
  *(uint **)this = puVar3;
  if (puVar3 == (uint *)0x0) {
    if (uVar2 + uVar1 == 0) {
      return this;
    }
    FUN_5080dfed(0x8007000e);
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = *(void **)*param_1;
  }
  if (pvVar4 != (void *)0x0) {
    memcpy(*(void **)this,pvVar4,uVar1 * 2 + 2);
  }
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = *(void **)*param_2;
  }
  if (pvVar4 != (void *)0x0) {
    memcpy((void *)(*(int *)this + uVar1 * 2),pvVar4,uVar2 * 2 + 2);
  }
  return this;
}


