/* FUN_007212b5 - 0x007212b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007212b5(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_007229aa(param_2,param_3,0);
  if (iVar1 < 0) {
    FUN_0074d6fb();
    if (param_1[0x176] != -1) {
      param_1[0x176] = -1;
      FUN_008161f1(0);
    }
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00722abd(0);
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 8) + 4 + iVar1 * 8);
    uVar4 = 1;
    iVar2 = (**(code **)(*param_1 + 0x30))(uVar3,1);
    param_3 = iVar2 + 0x14 + param_3;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_3);
    FUN_00755feb(iVar2 + param_2,param_3,uVar3,uVar4);
    if (iVar1 != param_1[0x176]) {
      param_1[0x176] = iVar1;
      FUN_008161f1(0);
    }
    uVar3 = 1;
  }
  return uVar3;
}


