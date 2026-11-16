/* FUN_50c097e7 - 0x50c097e7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c097e7(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_50c0957d((int)this);
  if (iVar1 == 0) {
    FUN_50c061b4(local_14,0x80070005,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50c14eb0);
  }
  iVar1 = FUN_50c09850();
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


