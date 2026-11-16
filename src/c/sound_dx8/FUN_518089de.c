/* FUN_518089de - 0x518089de in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint __thiscall FUN_518089de(void *this,DWORD param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  DWORD DVar7;
  int iVar8;
  undefined8 uVar9;
  void *local_8;
  
  uVar2 = param_3;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar3 = *(uint *)((int)this + 0xc);
    uVar4 = *(uint *)((int)this + 8);
    if ((*(uint *)((int)this + 0x24) <= uVar3) &&
       ((*(uint *)((int)this + 0x24) < uVar3 || (*(uint *)((int)this + 0x20) <= uVar4)))) {
      uVar5 = *(uint *)((int)this + 0x2c);
      if ((uVar3 <= uVar5) && ((uVar3 < uVar5 || (uVar4 <= *(uint *)((int)this + 0x28))))) {
        uVar6 = uVar3 + CARRY4(param_3,uVar4);
        local_8 = this;
        if ((uVar6 <= uVar5) &&
           ((uVar6 < uVar5 || (param_3 + uVar4 <= *(uint *)((int)this + 0x28))))) {
          memcpy(param_2,(void *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x18)),param_3);
          puVar1 = (uint *)((int)this + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar3,uVar2);
          return uVar2;
        }
        uVar9 = FUN_5180878f(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 8),uVar3,
                             0);
        *(undefined8 *)((int)this + 8) = uVar9;
      }
    }
  }
  local_8 = (void *)0x0;
  DVar7 = SetFilePointer(*(HANDLE *)((int)this + 0x10),0,(PLONG)0x0,1);
  if ((DVar7 != param_1) &&
     (DVar7 = (*DAT_5181fa98)(*(undefined4 *)((int)this + 0x10),param_1,0,0), DVar7 != param_1)) {
    param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
  }
  iVar8 = (*DAT_5181fa88)(*(undefined4 *)((int)this + 0x10),param_2,param_3,&local_8,0);
  if ((iVar8 == 0) && (iVar8 = (*DAT_5181fad4)(), iVar8 != 0x6d)) {
    param_1 = (*DAT_5181fad4)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
  }
  puVar1 = (uint *)((int)this + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (int)local_8;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)CARRY4(uVar2,(uint)local_8);
  return (uint)local_8;
}


