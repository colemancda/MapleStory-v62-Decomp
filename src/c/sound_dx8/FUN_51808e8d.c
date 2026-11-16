/* FUN_51808e8d - 0x51808e8d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51808e8d(void *this,int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x18) != 0) {
    uVar4 = *(uint *)((int)this + 0xc);
    uVar2 = *(uint *)((int)this + 8);
    if ((*(uint *)((int)this + 0x24) <= uVar4) &&
       ((*(uint *)((int)this + 0x24) < uVar4 || (*(uint *)((int)this + 0x20) <= uVar2)))) {
      if (param_2 == 0) {
        if ((*(byte *)((int)this + 0x34) & 4) != 0) {
          param_2 = *(int *)((int)this + 0x28) - uVar2;
LAB_51808ee7:
          uVar2 = (**(code **)(*param_1 + 0x14))
                            (*(int *)((int)this + 8) + *(int *)((int)this + 0x18),param_2);
          puVar1 = (uint *)((int)this + 8);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar4,uVar2);
          return;
        }
      }
      else {
        uVar4 = uVar4 + CARRY4(uVar2,param_2);
        if ((uVar4 <= *(uint *)((int)this + 0x2c)) &&
           ((uVar4 < *(uint *)((int)this + 0x2c) || (uVar2 + param_2 <= *(uint *)((int)this + 0x28))
            ))) goto LAB_51808ee7;
      }
    }
  }
  uVar4 = 0x10000;
  puVar3 = FUN_51806362((int *)((int)this + 0x30));
  FUN_51806429(this,param_1,param_2,puVar3,uVar4);
  return;
}


