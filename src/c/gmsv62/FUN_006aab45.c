/* FUN_006aab45 - 0x006aab45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006aab45(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = param_1[0x20];
  if ((((iVar2 == 0) || (param_2 < 0x4b)) || (0x66 < param_2)) ||
     ((param_3 < 100 || (0x7f < param_3)))) {
    FUN_0074d6fb();
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    iVar1 = (**(code **)(*param_1 + 0x30))(iVar2,0,0,0);
    param_3 = iVar1 + 0x14 + param_3;
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_3);
    FUN_00759767(iVar1 + param_2,param_3,iVar2,uVar3,uVar4,uVar5);
  }
  return 0;
}


