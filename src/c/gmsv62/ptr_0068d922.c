/* ptr_0068d922 - 0x0068d922 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0068d922(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0068e99d(param_2,param_3);
  if (iVar1 != 0) {
    if (iVar1 < 1) {
      iVar1 = param_1[0x6d] + (iVar1 + 1) * -0x10;
    }
    else {
      iVar1 = param_1[0x6c] + -0x10 + iVar1 * 0x10;
    }
    if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0xc))) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      iVar1 = (**(code **)(*param_1 + 0x30))(uVar2,0,0,0);
      param_3 = iVar1 + 0x14 + param_3;
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_3);
      FUN_00759767(iVar1 + param_2,param_3,uVar2,uVar3,uVar4,uVar5);
      return 1;
    }
  }
  FUN_0074d6fb();
  return 0;
}


