/* FUN_51807511 - 0x51807511 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51807511(void *this,int *param_1)

{
  int *piVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  undefined1 local_18 [16];
  uint local_8;
  
  this_00 = param_1;
  if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x18))(this,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    iVar2 = (**(code **)(*this_00 + 0x18))((int)this + 0x10,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    FUN_51807edd(this_00,*(int *)((int)this + 0x28));
    FUN_51807edd(this_00,-(uint)(*(int *)((int)this + 0x24) != 0) & 2 |
                         (uint)(*(int *)((int)this + 0x20) != 0));
    iVar2 = (**(code **)(*this_00 + 0x18))((int)this + 0x2c,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    iVar2 = memcmp((void *)((int)this + 0x2c),&DAT_51819de0,0x10);
    if (iVar2 != 0) {
      iVar2 = memcmp((void *)((int)this + 0x2c),&DAT_51819cf0,0x10);
      if (iVar2 != 0) {
        FUN_51807edd(this_00,*(int *)((int)this + 0x40));
        iVar2 = *(int *)((int)this + 0x40);
        iVar3 = (**(code **)(*this_00 + 0x18))(*(undefined4 *)((int)this + 0x44),iVar2);
        if (iVar2 != iVar3) {
          param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
        }
      }
    }
  }
  else {
    FUN_5180774f(this);
    iVar2 = (**(code **)(*this_00 + 0x14))(this,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    iVar2 = (**(code **)(*this_00 + 0x14))((int)this + 0x10,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    FUN_51807e75(this_00,(int *)((int)this + 0x28));
    FUN_51807e75(this_00,(int *)&local_8);
    *(uint *)((int)this + 0x24) = (int)local_8 >> 1 & 1;
    *(uint *)((int)this + 0x20) = local_8 & 1;
    iVar2 = (**(code **)(*this_00 + 0x14))((int)this + 0x2c,0x10);
    if (iVar2 != 0x10) {
      param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
    }
    iVar2 = memcmp((void *)((int)this + 0x2c),&DAT_51819de0,0x10);
    if (iVar2 != 0) {
      iVar2 = memcmp((void *)((int)this + 0x2c),&DAT_51819cf0,0x10);
      if (iVar2 != 0) {
        piVar1 = (int *)((int)this + 0x40);
        FUN_51807e75(this_00,piVar1);
        iVar2 = (*DAT_5181fc80)(*piVar1);
        *(int *)((int)this + 0x44) = iVar2;
        if (iVar2 == 0) {
          FUN_51802c9b(local_18,0x8007000e,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_18,(ThrowInfo *)&DAT_5181a2e0);
        }
        iVar3 = *piVar1;
        iVar2 = (**(code **)(*this_00 + 0x14))(iVar2,iVar3);
        if (iVar3 != iVar2) {
          param_1 = (int *)0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5181b518);
        }
      }
    }
  }
  return;
}


