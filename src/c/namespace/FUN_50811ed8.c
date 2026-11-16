/* FUN_50811ed8 - 0x50811ed8 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __cdecl FUN_50811ed8(int *param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint _Val;
  ulong uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x24))();
  _Val = ~(iVar2 - param_2) * param_3 + 0xa7e3c093;
  uVar3 = _lrotl(_Val,_Val & 0x1f);
  puVar1 = param_4;
  iVar2 = (**(code **)(*param_1 + 0x14))(param_4,4);
  if (iVar2 != 4) {
    param_2 = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_5081ae30);
  }
  *puVar1 = (*puVar1 ^ uVar3) + param_2;
  return;
}


