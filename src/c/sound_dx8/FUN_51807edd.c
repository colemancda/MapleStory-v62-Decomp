/* FUN_51807edd - 0x51807edd in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51807edd(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined3 uStack_8;
  undefined1 local_5;
  
  uStack_8 = SUB43(this,0);
  local_c = this;
  if ((param_1 < -0x7f) || (0x7f < param_1)) {
    _uStack_8 = CONCAT13(0x80,uStack_8);
    iVar1 = (**(code **)(*(int *)this + 0x18))(&local_5,1);
    if (iVar1 != 1) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_5181b518);
    }
    iVar1 = (**(code **)(*(int *)this + 0x18))(&param_1,4);
    if (iVar1 != 4) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_5181b518);
    }
  }
  else {
    _uStack_8 = CONCAT13((char)param_1,uStack_8);
    iVar1 = (**(code **)(*(int *)this + 0x18))(&local_5,1);
    if (iVar1 != 1) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_5181b518);
    }
  }
  return;
}


