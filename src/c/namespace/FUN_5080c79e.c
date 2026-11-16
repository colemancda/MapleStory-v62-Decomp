/* FUN_5080c79e - 0x5080c79e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall
FUN_5080c79e(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_5080c740(this);
  if (iVar1 == 0) {
    param_5 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_5,(ThrowInfo *)&DAT_5081ae30);
  }
  iVar1 = (*DAT_5081e6b4)(param_1,param_5,param_4,param_6,param_2,param_3,param_7);
  *(int *)((int)this + 0x10) = iVar1;
  if (iVar1 == -1) {
    param_5 = (*DAT_5081e704)();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_5,(ThrowInfo *)&DAT_5081ae30);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_5 & 0x40000000) != 0) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  }
  return;
}


