/* FUN_007edc11 - 0x007edc11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007edc11(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_8;
  
  if ((param_2 != 0) && (param_1[0x18d] != 0)) {
    iVar2 = param_1[0x22];
    local_8 = param_1[0x21] + 3 + iVar2;
    if ((param_1[0x38] != 0) && (iVar1 = *(int *)(param_1[0x38] + -4), iVar1 != 0)) {
      iVar3 = *(int *)param_1[0x38];
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (param_1[0x21] < iVar3) {
          iVar3 = 0x32;
        }
        iVar2 = iVar2 + iVar3;
      }
      iVar1 = ((int *)param_1[0x38])[iVar1 + -1];
      if (iVar1 != 0) {
        iVar1 = (param_1[0x20] - *(int *)(iVar1 + 0x24)) - *(int *)(iVar1 + 0x1c);
        if (iVar1 < 0x33) {
          local_8 = local_8 - iVar1;
        }
        else {
          local_8 = local_8 + -0x32;
        }
      }
    }
    iVar1 = *(int *)(param_2 + 0x1c);
    if (iVar1 < iVar2) {
      iVar3 = *(int *)(param_1[0x18d] + 0x38);
      do {
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -8;
        if (iVar3 < 0) {
          iVar5 = 0;
          break;
        }
        iVar5 = iVar3;
      } while (iVar1 < iVar2);
      FUN_004acfe9(iVar5);
      iVar2 = *param_1;
      uVar4 = 300;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x24) + iVar1;
      if (iVar1 <= local_8) {
        return;
      }
      iVar3 = *(int *)(param_1[0x18d] + 0x38);
      iVar2 = *(int *)(param_1[0x18d] + 0x3c);
      do {
        local_8 = local_8 + 8;
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) {
          iVar5 = iVar2 + -1;
          break;
        }
        iVar5 = iVar3;
      } while (local_8 < iVar1);
      FUN_004acfe9(iVar5);
      iVar2 = *param_1;
      uVar4 = 0x12d;
    }
    (**(code **)(iVar2 + 0x1c))(0x3e9,uVar4,iVar3);
  }
  return;
}


