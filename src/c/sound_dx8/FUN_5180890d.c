/* FUN_5180890d - 0x5180890d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint __thiscall FUN_5180890d(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_8;
  
  uVar2 = param_2;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar3 = *(uint *)((int)this + 0xc);
    uVar4 = *(uint *)((int)this + 8);
    if ((*(uint *)((int)this + 0x24) <= uVar3) &&
       ((*(uint *)((int)this + 0x24) < uVar3 || (*(uint *)((int)this + 0x20) <= uVar4)))) {
      uVar5 = *(uint *)((int)this + 0x2c);
      if ((uVar3 <= uVar5) && ((uVar3 < uVar5 || (uVar4 <= *(uint *)((int)this + 0x28))))) {
        uVar6 = uVar3 + CARRY4(param_2,uVar4);
        local_8 = this;
        if ((uVar6 <= uVar5) &&
           ((uVar6 < uVar5 || (param_2 + uVar4 <= *(uint *)((int)this + 0x28))))) {
          memcpy(param_1,(void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x18)),param_2);
          puVar1 = (uint *)((int)this + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar3,uVar2);
          return uVar2;
        }
        uVar8 = FUN_5180878f(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 8),uVar3,
                             0);
        *(undefined8 *)((int)this + 8) = uVar8;
      }
    }
  }
  local_8 = (void *)0x0;
  iVar7 = (*DAT_5181fa88)(*(undefined4 *)((int)this + 0x10),param_1,param_2,&local_8,0);
  if ((iVar7 == 0) && (iVar7 = (*DAT_5181fad4)(), iVar7 != 0x6d)) {
    param_2 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5181b518);
  }
  puVar1 = (uint *)((int)this + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (int)local_8;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar2,(uint)local_8);
  return (uint)local_8;
}


