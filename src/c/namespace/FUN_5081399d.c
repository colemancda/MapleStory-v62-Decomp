/* FUN_5081399d - 0x5081399d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_5081399d(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint _Val;
  ulong uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  _Val = ~(iVar1 - param_2) * param_3 + 0xa7e3c093;
  uVar2 = _lrotl(_Val,_Val & 0x1f);
  param_4 = param_4 - param_2 ^ uVar2;
  iVar1 = (**(code **)(*param_1 + 0x18))(&param_4,4);
  if (iVar1 != 4) {
    param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5081ae30);
  }
  return;
}


