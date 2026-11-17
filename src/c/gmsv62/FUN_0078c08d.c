/* FUN_0078c08d - 0x0078c08d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0078c08d(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(param_1 + 4);
  if (param_2 < 1) {
    if (-1 < param_2) {
      uVar5 = 2;
      iVar2 = FUN_0043f545(2);
      iVar3 = (**(code **)(*piVar1 + 0x10))();
      iVar2 = *(int *)(iVar3 + 4) - iVar2;
      puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(iVar2);
      FUN_0042a3fc(*puVar4,iVar2,uVar5);
      return;
    }
    uVar5 = 2;
    param_2 = -param_2;
  }
  else {
    uVar5 = 1;
  }
  uVar6 = 0;
  iVar2 = FUN_0043f545(param_2,uVar5,0);
  iVar3 = (**(code **)(*piVar1 + 0x10))();
  iVar2 = *(int *)(iVar3 + 4) - iVar2;
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(iVar2);
  FUN_00429685(*puVar4,iVar2,param_2,uVar5,uVar6);
  return;
}


