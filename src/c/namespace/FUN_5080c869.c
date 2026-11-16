/* FUN_5080c869 - 0x5080c869 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080c869(void *this,uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_3 == 1) {
    bVar1 = CARRY4(*(uint *)((int)this + 8),param_1);
    param_1 = *(uint *)((int)this + 8) + param_1;
    param_2 = *(int *)((int)this + 0xc) + param_2 + (uint)bVar1;
    param_3 = 0;
  }
  if (((*(int *)((int)this + 0x18) != 0) && (param_3 == 0)) &&
     (((*(uint *)((int)this + 0x24) < param_2 ||
       ((*(uint *)((int)this + 0x24) == param_2 && (*(uint *)((int)this + 0x20) <= param_1)))) ||
      ((*(uint *)((int)this + 0x2c) <= param_2 &&
       ((*(uint *)((int)this + 0x2c) < param_2 || (*(uint *)((int)this + 0x28) <= param_1)))))))) {
    *(uint *)((int)this + 8) = param_1;
    *(uint *)((int)this + 0xc) = param_2;
    return;
  }
  uVar2 = FUN_5080c8d4(*(undefined4 *)((int)this + 0x10),param_1,param_2,param_3);
  *(undefined8 *)((int)this + 8) = uVar2;
  return;
}


