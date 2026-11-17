/* ptr_0060d972 - 0x0060d972 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0060d972(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_0060f860(param_2,param_3);
  if ((((iVar2 < 0) || (piVar1 = (int *)(param_1[0x62] + iVar2 * 0x14), piVar1 == (int *)0x0)) ||
      (*piVar1 < 0)) || ((*piVar1 == 0 && (piVar1[4] == 0)))) {
    FUN_0074d6fb();
    uVar4 = 0;
  }
  else {
    iVar2 = piVar1[4];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    iVar3 = (**(code **)(*param_1 + 0x30))(iVar2,0,0,0);
    param_3 = iVar3 + 0x14 + param_3;
    iVar3 = (**(code **)(*param_1 + 0x2c))(param_3);
    FUN_00759767(iVar3 + param_2,param_3,iVar2,uVar4,uVar5,uVar6);
    uVar4 = 1;
  }
  return uVar4;
}


