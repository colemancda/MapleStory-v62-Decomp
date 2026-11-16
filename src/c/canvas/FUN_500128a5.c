/* FUN_500128a5 - 0x500128a5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall FUN_500128a5(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_50012c97(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x14))
                    (*(int **)((int)this + 0x1c),param_1,param_2,&local_8);
  if (iVar1 < 0) {
    FUN_50007006(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50015eb8);
  }
  return local_8;
}


