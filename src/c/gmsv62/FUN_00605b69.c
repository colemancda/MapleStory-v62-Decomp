/* FUN_00605b69 - 0x00605b69 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00605b69(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((((*(int *)(param_1 + 4) == 0) || (param_2 < 0x79)) || (0x9b < param_2)) ||
     ((param_3 < 0xfc || (0x11e < param_3)))) {
    FUN_00526a75(0);
    FUN_0074d6fb();
  }
  else {
    FUN_00526a75(5);
    uVar3 = *(undefined4 *)(param_1 + 4);
    piVar1 = (int *)(*(int *)(param_1 + 0x24) + 4);
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x30))(uVar3,0,0,0);
    param_3 = iVar2 + 0x14 + param_3;
    iVar2 = (**(code **)(*piVar1 + 0x2c))(param_3);
    FUN_00759767(iVar2 + param_2,param_3,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


