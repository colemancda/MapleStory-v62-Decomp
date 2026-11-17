/* FUN_007bcbcf - 0x007bcbcf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007bcbcf(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20 [2];
  int local_18;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_007b3bb4();
  if (((((iVar1 != 0) || (iVar1 = FUN_007a3f46(), iVar1 != 0)) || (param_2 == (int *)0x0)) ||
      ((iVar1 = FUN_0043f6fe(), -1 < iVar1 && (param_2[3] != 3)))) ||
     (*(int *)(param_1 + 0x1e94) != 0)) {
    return 0;
  }
  local_8 = DAT_00978138;
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x10))();
  iVar5 = *piVar2;
  iVar1 = piVar2[1];
  if (*param_2 == 0x4dfcde) {
    param_2 = (int *)0x0;
    do {
      iVar3 = iVar5 + -0x37;
      if ((*(byte *)(param_1 + 0x52c) & 1) == 0) {
        iVar3 = iVar5 + 0x37;
      }
      local_18 = iVar5;
      iVar3 = FUN_00861327(iVar3,iVar1,&local_c,iVar1 + 0x1e);
      iVar4 = FUN_0086123f(iVar5,iVar1,&local_10,iVar1 + -0x1e);
      if ((iVar3 == 0) && (iVar4 == 0)) {
        if (param_2 == (int *)0x0) {
          return 0;
        }
        break;
      }
      if ((*(byte *)(param_1 + 0x52c) & 1) == 0) {
        iVar5 = iVar5 + 0x37;
      }
      else {
        iVar5 = iVar5 + -0x37;
      }
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < 5);
  }
  else {
    iVar3 = FUN_006509a1(param_3);
    FUN_00411537(local_20,iVar3 + 0x16c);
    if (*param_2 == 0x40684f) {
      local_20[0] = local_20[0] / 2;
    }
    iVar5 = iVar5 + ((-(uint)((*(uint *)(param_1 + 0x52c) & 1) != 0) & 2) - 1) * local_20[0];
    iVar3 = FUN_00861327(iVar5,iVar1,&local_c,iVar1 + 0x50);
    iVar4 = FUN_0086123f(iVar5,iVar1,&local_10,iVar1 + -0x50);
    if (iVar3 == 0) {
      iVar3 = local_10;
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = local_c;
      if ((iVar4 != 0) && (iVar3 = local_10, local_c - iVar1 <= iVar1 - local_10)) {
        iVar1 = local_c + -1;
        goto LAB_007bcd5a;
      }
    }
    iVar1 = iVar3 + -1;
  }
LAB_007bcd5a:
  *param_4 = iVar5;
  param_4[1] = iVar1;
  return 1;
}


