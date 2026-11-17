/* FUN_0067e864 - 0x0067e864 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0067e864(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(param_1 + 4);
  if (param_2 < 1) {
    uVar5 = 2;
    iVar2 = (**(code **)(*piVar1 + 0x10))(2);
    iVar3 = FUN_0067b3bf();
    iVar3 = *(int *)(iVar2 + 4) - iVar3;
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(iVar3);
    FUN_0042a3fc(*puVar4,iVar3,uVar5);
  }
  else {
    uVar6 = 0;
    uVar5 = 2;
    iVar2 = (**(code **)(*piVar1 + 0x10))(param_2,2,0);
    iVar3 = FUN_0067b3bf();
    iVar3 = *(int *)(iVar2 + 4) - iVar3;
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(iVar3);
    FUN_00429685(*puVar4,iVar3,param_2,uVar5,uVar6);
  }
  return;
}


