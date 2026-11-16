/* FUN_50804243 - 0x50804243 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50804243(void *this,undefined4 param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = (**(code **)(*(int *)this + 0xc))(this,&DAT_5081d210,param_1);
  if (((iVar1 < 0) && (iVar1 != -0x7fffbffe)) && (iVar1 != -0x7fffbffd)) {
    FUN_5080450d(local_14,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
  }
  return;
}


