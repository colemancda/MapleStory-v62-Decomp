/* FUN_51806d98 - 0x51806d98 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51806d98(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_518069ec((int)this);
  if (iVar1 != 0) {
    FUN_51802c9b(local_14,0x80070005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5181a2e0);
  }
  iVar1 = FUN_51806d0d();
  if (iVar1 == 0) {
    FUN_51806305();
  }
  else {
    if (param_2 == 0) {
      param_2 = (**(code **)(*(int *)this + 0x2c))();
    }
    (**(code **)(*param_1 + 0x14))(iVar1,param_2);
  }
  return;
}


