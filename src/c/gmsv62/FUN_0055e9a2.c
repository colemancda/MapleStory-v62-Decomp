/* FUN_0055e9a2 - 0x0055e9a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0055e9a2(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1[0x22] != 0) && (iVar1 = FUN_0055f1c8(param_2,param_3), iVar1 != 0)) {
    iVar1 = param_1[0x22];
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x30))(iVar1,0,0,0);
    param_3 = iVar2 + 0x14 + param_3;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_3);
    FUN_00759767(iVar2 + param_2,param_3,iVar1,uVar3,uVar4,uVar5);
    return 0;
  }
  FUN_0074d6fb();
  return 0;
}


