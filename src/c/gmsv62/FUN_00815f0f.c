/* FUN_00815f0f - 0x00815f0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00815f0f(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x58);
  do {
    if (uVar4 == 0) {
      if ((((-1 < param_2) && (-1 < param_3)) && (param_2 < *(int *)(param_1 + 0x1c))) &&
         (param_3 < *(int *)(param_1 + 0x20))) {
        return 2;
      }
      return 0;
    }
    piVar1 = *(int **)(uVar4 + 4);
    iVar3 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 8);
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    if (piVar1[6] == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (piVar1[6] == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = *piVar1;
    iVar2 = FUN_00424f08();
    iVar2 = FUN_00424ee1(param_3 - iVar2);
    iVar3 = (**(code **)(iVar3 + 0x18))(param_2 - iVar2);
  } while (iVar3 == 0);
  if (param_4 != (int *)0x0) {
    *param_4 = (int)piVar1;
  }
  return 2;
}


