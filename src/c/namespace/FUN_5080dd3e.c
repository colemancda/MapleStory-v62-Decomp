/* FUN_5080dd3e - 0x5080dd3e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080dd3e(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_5080dfed(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x28))
                    (*(int **)((int)this + 0x1c),*param_1,param_1[1],param_1[2],param_1[3]);
  if (iVar1 < 0) {
    FUN_5080450d(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
  }
  return;
}


