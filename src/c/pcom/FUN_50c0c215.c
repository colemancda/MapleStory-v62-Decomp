/* FUN_50c0c215 - 0x50c0c215 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0c215(void *this,uint param_1,uint param_2)

{
  int iVar1;
  void *local_c;
  undefined3 uStack_8;
  undefined1 local_5;
  
  uStack_8 = SUB43(this,0);
  local_c = this;
  if ((((int)param_2 < -1) ||
      (((0x7fffffff < param_2 && (param_1 < 0xffffff81)) || (0 < (int)param_2)))) ||
     ((-1 < (int)param_2 && (0x7f < param_1)))) {
    _uStack_8 = CONCAT13(0x80,uStack_8);
    iVar1 = (**(code **)(*(int *)this + 0x18))(&local_5,1);
    if (iVar1 != 1) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_50c15658);
    }
    iVar1 = (**(code **)(*(int *)this + 0x18))(&param_1,8);
    if (iVar1 != 8) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_50c15658);
    }
  }
  else {
    _uStack_8 = CONCAT13((char)param_1,uStack_8);
    iVar1 = (**(code **)(*(int *)this + 0x18))(&local_5,1);
    if (iVar1 != 1) {
      local_c = (void *)0x26;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_c,(ThrowInfo *)&DAT_50c15658);
    }
  }
  return;
}


