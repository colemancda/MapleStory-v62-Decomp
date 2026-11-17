/* FUN_006bf558 - 0x006bf558 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006bf558(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if ((((param_2 < 0x4b) || (0x66 < param_2)) || (param_3 < 100)) || (0x7f < param_3)) {
    FUN_0074d6fb();
  }
  else {
    FUN_00455c59(&local_c);
    if (local_8 != (int *)0x0) {
      FUN_0045e7c2(0);
    }
    iVar1 = FUN_00458c4f(&local_c,param_1[0x15d],param_1[0x15e]);
    iVar1 = *(int *)(iVar1 + 4);
    if (local_8 != (int *)0x0) {
      FUN_00449913(0);
    }
    if (iVar1 != 0) {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      iVar2 = (**(code **)(*param_1 + 0x30))(iVar1,0,0,0);
      param_3 = iVar2 + 0x14 + param_3;
      iVar2 = (**(code **)(*param_1 + 0x2c))(param_3);
      FUN_00759767(iVar2 + param_2,param_3,iVar1,uVar3,uVar4,uVar5);
    }
  }
  return 0;
}


