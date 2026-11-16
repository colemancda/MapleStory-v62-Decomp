/* FUN_51808724 - 0x51808724 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51808724(void *this,uint param_1,uint param_2,int param_3)

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
  uVar2 = FUN_5180878f(*(undefined4 *)((int)this + 0x10),param_1,param_2,param_3);
  *(undefined8 *)((int)this + 8) = uVar2;
  return;
}


