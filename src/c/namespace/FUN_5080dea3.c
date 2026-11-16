/* FUN_5080dea3 - 0x5080dea3 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080dea3(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = param_1;
  if ((param_1 != -1) && (param_1 != 0)) {
    iVar2 = FUN_5080c740(this);
    if (iVar2 == 0) {
      param_1 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5081ae30);
    }
    *(int *)((int)this + 0x10) = iVar1;
    uVar3 = FUN_5080df14(iVar1);
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
    *(undefined8 *)((int)this + 8) = uVar3;
    if (param_2 != 0) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
    }
    return;
  }
  param_1 = 6;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_5081ae30);
}


