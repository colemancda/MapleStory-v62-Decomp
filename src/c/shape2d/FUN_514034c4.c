/* FUN_514034c4 - 0x514034c4 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_514034c4(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_5140ac47(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x14))
                    (*(int **)((int)this + 0x1c),param_1,param_2,&local_8);
  if (iVar1 < 0) {
    FUN_51405a7c(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_5140e068);
  }
  return local_8;
}


