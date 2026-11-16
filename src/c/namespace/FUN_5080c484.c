/* FUN_5080c484 - 0x5080c484 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080c484(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  if ((*(byte *)((int)this + 8) & 0xf) != 0) {
    param_2 = 5;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5081ae30);
  }
  piVar1 = (int *)FUN_5080c4b8((int)this);
  (**(code **)(*piVar1 + 4))(param_1,param_2);
  return;
}


