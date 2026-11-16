/* FUN_508063c0 - 0x508063c0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_508063c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xc))(this,&local_8);
  if (iVar1 < 0) {
    FUN_5080450d(local_18,iVar1,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_50819008);
  }
  *param_1 = local_8;
  return;
}


