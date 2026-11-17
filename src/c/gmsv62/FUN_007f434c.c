/* FUN_007f434c - 0x007f434c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f434c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x14))(param_4);
  if (param_2 == 0) {
    iVar4 = param_1[0x4a];
    iVar1 = param_1[0x4b];
    if (param_3 == 0) goto LAB_007f43a4;
    param_1[0x46] = 0;
    iVar4 = *(int *)(param_3 + 0x18);
    iVar1 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x1c);
    iVar1 = *(int *)(param_2 + 0x20);
    param_1[0x46] = 0;
    param_1[0x45] = param_2;
  }
  param_1[0x5b] = 0;
LAB_007f43a4:
  if ((iVar4 != param_1[0x4a]) || (iVar1 != param_1[0x4b])) {
    param_1[0x4b] = iVar1;
    param_1[0x4a] = iVar4;
    (**(code **)(*(int *)param_1[5] + 8))(param_1);
  }
  param_1[0x44] = param_2;
  iVar1 = FUN_007f457a();
  iVar4 = param_1[0x50];
  param_1[0x49] = iVar1;
  uVar2 = FUN_00413367(param_1 + 0x54,param_1[0x56]);
  uVar3 = FUN_00413367(param_1 + 0x51,param_1[0x53]);
  iVar4 = (**(code **)(*(int *)param_1[5] + 4))(uVar3,uVar2,iVar4,param_1);
  param_1[0x50] = iVar4;
  FUN_007f442a();
  return;
}


