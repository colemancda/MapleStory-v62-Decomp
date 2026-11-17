/* FUN_006913d0 - 0x006913d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006913d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_8;
  
  iVar3 = param_3;
  local_8 = param_1;
  iVar1 = FUN_0069265a(param_2,param_3,&local_8,&param_3);
  if (iVar1 == 0) {
    FUN_0074d6fb();
    uVar2 = 0;
  }
  else {
    if (local_8 == (int *)0x0) {
      iVar1 = param_1[0x33];
    }
    else {
      iVar1 = param_1[0x32];
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = *(undefined4 *)(iVar1 + param_3 * 0x1c + 0x18);
    uVar4 = 0;
    iVar1 = (**(code **)(*param_1 + 0x30))(uVar2,0,0,0);
    iVar3 = iVar1 + 0x14 + iVar3;
    iVar1 = (**(code **)(*param_1 + 0x2c))(iVar3);
    FUN_00759767(iVar1 + param_2,iVar3,uVar2,uVar4,uVar5,uVar6);
    uVar2 = 1;
  }
  return uVar2;
}


