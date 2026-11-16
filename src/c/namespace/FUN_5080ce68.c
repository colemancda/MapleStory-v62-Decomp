/* FUN_5080ce68 - 0x5080ce68 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __thiscall FUN_5080ce68(void *this,int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = param_2;
  if (*(int *)((int)this + 0x18) == 0) {
LAB_5080ceec:
    if (param_2 != 0) {
      iVar5 = 0;
      goto LAB_5080cf07;
    }
  }
  else {
    uVar3 = *(uint *)((int)this + 0xc);
    uVar2 = *(uint *)((int)this + 8);
    if ((uVar3 < *(uint *)((int)this + 0x24)) ||
       ((uVar3 <= *(uint *)((int)this + 0x24) && (uVar2 < *(uint *)((int)this + 0x20)))))
    goto LAB_5080ceec;
    if (param_2 != 0) {
      iVar5 = 0;
      uVar3 = uVar3 + CARRY4(uVar2,param_2);
      if ((uVar3 <= *(uint *)((int)this + 0x2c)) &&
         ((uVar3 < *(uint *)((int)this + 0x2c) || (uVar2 + param_2 <= *(uint *)((int)this + 0x28))))
         ) goto LAB_5080ceba;
      goto LAB_5080ceec;
    }
    if ((*(byte *)((int)this + 0x34) & 4) != 0) {
      iVar5 = (*(int *)((int)this + 0x2c) - uVar3) - (uint)(*(uint *)((int)this + 0x28) < uVar2);
      uVar4 = *(uint *)((int)this + 0x28) - uVar2;
LAB_5080ceba:
      uVar3 = (**(code **)(*param_1 + 0x18))
                        (*(int *)((int)this + 8) + *(int *)((int)this + 0x18),uVar4);
      if (uVar4 == uVar3) {
        puVar1 = (uint *)((int)this + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar4;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar5 + (uint)CARRY4(uVar3,uVar4);
        return uVar4;
      }
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5081ae30);
    }
  }
  uVar6 = (**(code **)(*(int *)this + 0x3c))();
  iVar5 = ((int)((ulonglong)uVar6 >> 0x20) - *(int *)((int)this + 0xc)) -
          (uint)((uint)uVar6 < *(uint *)((int)this + 8));
LAB_5080cf07:
  if (iVar5 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x20))(this,uVar4);
    return uVar4;
  }
  param_1 = (int *)0x57;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5081ae30);
}


