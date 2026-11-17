/* FUN_00818edc - 0x00818edc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00818edc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x74);
  }
  piVar4 = DAT_0097c278;
  local_8 = param_1;
  if (piVar3 == (int *)0x0) {
    do {
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3 = (int *)*piVar4;
      iVar1 = *piVar3;
      iVar2 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 8);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
      iVar2 = (**(code **)(piVar3[1] + 0x30))(&local_8);
      iVar2 = (**(code **)(piVar3[1] + 0x2c))(param_3 - iVar2);
      iVar1 = (**(code **)(iVar1 + 0x24))(param_2 - iVar2);
    } while (iVar1 == 0);
    if (local_8 == 0) {
      return (int *)(-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + 1));
    }
    iVar1 = (**(code **)(*(int *)(local_8 + 4) + 0x20))();
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*(int *)(local_8 + 4) + 0x28))();
  }
  else {
    iVar1 = (**(code **)(*piVar3 + 0x48))(&DAT_0097c228);
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + -1;
    }
    if (piVar4 == (int *)0x0) {
      return piVar3;
    }
    local_8 = 0;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar2 = (**(code **)(*piVar4 + 0x30))(&local_8);
    iVar2 = (**(code **)(*piVar4 + 0x2c))(param_3 - iVar2);
    iVar1 = (**(code **)(iVar1 + 0x24))(param_2 - iVar2);
    if (iVar1 == 0) {
      return piVar3;
    }
    if (local_8 == 0) {
      return piVar4;
    }
    iVar1 = (**(code **)(*(int *)(local_8 + 4) + 0x20))();
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*(int *)(local_8 + 4) + 0x28))();
  }
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  return (int *)(-(uint)(local_8 != 0) & local_8 + 4U);
}


