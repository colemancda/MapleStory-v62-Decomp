/* FUN_51403676 - 0x51403676 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51403676(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_51403433((int)this);
  if (iVar1 == 0) {
    FUN_51405a7c(local_14,0x80070005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_5140e068);
  }
  iVar1 = FUN_514036df();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x20))(this,param_2);
  }
  else {
    if (param_2 == 0) {
      param_2 = (**(code **)(*(int *)this + 0x2c))();
    }
    (**(code **)(*param_1 + 0x18))(iVar1,param_2);
  }
  return;
}


