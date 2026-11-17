/* FUN_0054969f - 0x0054969f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0054969f(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = FUN_00549749(param_2,param_3);
  if (local_8 != 0) {
    FUN_00455c59(local_10);
    if (local_c != 0) {
      FUN_0045e7c2(0);
    }
    iVar1 = FUN_00458c4f(local_10,param_1[0x15d],local_8);
    iVar1 = *(int *)(iVar1 + 4);
    if (local_c != 0) {
      FUN_00449913(0);
    }
    if (iVar1 == 0) {
      FUN_0074d6fb();
    }
    else {
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


