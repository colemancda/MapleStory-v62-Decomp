/* FUN_5080cd5a - 0x5080cd5a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __thiscall FUN_5080cd5a(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_2;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar4 = *(uint *)((int)this + 0xc);
    uVar3 = *(uint *)((int)this + 8);
    if ((*(uint *)((int)this + 0x24) <= uVar4) &&
       ((*(uint *)((int)this + 0x24) < uVar4 || (*(uint *)((int)this + 0x20) <= uVar3)))) {
      uVar4 = uVar4 + CARRY4(param_2,uVar3);
      if ((uVar4 <= *(uint *)((int)this + 0x2c)) &&
         ((uVar4 < *(uint *)((int)this + 0x2c) || (param_2 + uVar3 <= *(uint *)((int)this + 0x28))))
         ) {
        memcpy(param_1,(void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x18)),param_2);
        puVar1 = (uint *)((int)this + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + param_2;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar2,param_2);
        return param_2;
      }
    }
  }
  while( true ) {
    if (uVar2 == 0) {
      return param_2;
    }
    iVar5 = (**(code **)(*(int *)this + 4))(param_1,uVar2);
    if (iVar5 == 0) break;
    param_1 = (void *)((int)param_1 + iVar5);
    uVar2 = uVar2 - iVar5;
  }
  return param_2 - uVar2;
}


