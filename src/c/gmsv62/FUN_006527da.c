/* FUN_006527da - 0x006527da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_006527da(int param_1,int param_2,int param_3,code *param_4)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [3];
  
  iVar2 = param_1;
  if ((((((int)param_4 / 1000) % 10 == 0) && (param_4 != (code *)0x4f7f90)) &&
      (param_4 != ptr_004fa6a2)) && (param_4 != (code *)0x4fa6ab)) {
    return 0;
  }
  local_10[1] = 0;
  iVar4 = FUN_00650dae(param_1,param_4,local_10 + 1);
  if (iVar4 < 1) {
    return 0;
  }
  if ((param_4 == (code *)0x111af2) &&
     (iVar5 = FUN_00413367(param_3 + 0x36c,*(undefined4 *)(param_3 + 0x374)), iVar5 < 10)) {
    return 0;
  }
  iVar4 = FUN_006509a1(iVar4);
  FUN_006538e8(param_1,param_4,local_10);
  local_10[2] = FUN_00413367(iVar4 + 0x94,*(undefined4 *)(iVar4 + 0x9c));
  if (param_4 == (code *)0x14011e) {
    iVar5 = FUN_00413367(param_2 + 0x60,*(undefined4 *)(param_2 + 0x68));
    sVar3 = FUN_0045f084(param_1 + 0x61,*(undefined4 *)(param_1 + 0x65));
    if ((int)sVar3 < iVar5 / 2) {
      return 2;
    }
    iVar5 = FUN_00413367(param_2 + 0x60,*(undefined4 *)(param_2 + 0x68));
    iVar6 = FUN_00413367(iVar4 + 0x13c,*(undefined4 *)(iVar4 + 0x144));
    local_10[2] = (iVar6 * iVar5) / 100;
  }
  iVar5 = FUN_00413367(iVar4 + 0xa0,*(undefined4 *)(iVar4 + 0xa8));
  param_1 = (iVar5 * local_10[0]) / 100;
  iVar5 = FUN_00413367(param_3 + 0x684,*(undefined4 *)(param_3 + 0x68c));
  if (iVar5 != 0) {
    param_1 = 0;
  }
  iVar5 = FUN_00413367(param_3 + 0x714,*(undefined4 *)(param_3 + 0x71c));
  if (iVar5 != 0) {
    FUN_00413367(param_3 + 0x714,*(undefined4 *)(param_3 + 0x71c));
    param_1 = __ftol();
  }
  if ((local_10[2] != 0) &&
     (sVar3 = FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65)), sVar3 <= local_10[2])) {
    return 2;
  }
  if ((param_1 != 0) &&
     (sVar3 = FUN_0045f084(iVar2 + 0x71,*(undefined4 *)(iVar2 + 0x75)), sVar3 < param_1)) {
    return 3;
  }
  iVar5 = FUN_00413367(iVar4 + 0xac,*(undefined4 *)(iVar4 + 0xb4));
  if ((param_4 == (code *)0x3eba9c) &&
     (iVar6 = FUN_00413367(param_3 + 0x42c,*(undefined4 *)(param_3 + 0x434)), iVar6 != 0)) {
    uVar7 = FUN_00650dae(iVar2,0x3eba9a,&DAT_009796c4);
    iVar6 = FUN_006509a1(uVar7);
    iVar6 = FUN_00413367(iVar6 + 0x148,*(undefined4 *)(iVar6 + 0x150));
    iVar5 = iVar5 + (iVar6 * iVar5) / 100;
  }
  if ((iVar5 != 0) &&
     (iVar6 = FUN_00413367(iVar2 + 0xa5,*(undefined4 *)(iVar2 + 0xad)), iVar6 < iVar5)) {
    return 4;
  }
  iVar5 = iVar4 + 0xb8;
  iVar6 = FUN_00413367(iVar5,*(undefined4 *)(iVar4 + 0xc0));
  if ((iVar6 != 0) && (iVar6 = FUN_00413367(iVar4 + 0xc4,*(undefined4 *)(iVar4 + 0xcc)), 0 < iVar6))
  {
    local_14 = FUN_00413367(iVar5,*(undefined4 *)(iVar4 + 0xc0));
    local_14 = local_14 / 1000000;
    if ((0 < local_14) && (local_14 < 6)) {
      iVar6 = *(int *)(iVar2 + 0x3e3 + local_14 * 4);
      param_4 = (code *)0x0;
      local_1c = 0;
      if (iVar6 != 0) {
        local_1c = *(int *)(iVar6 + -4);
      }
      local_1c = local_1c + -1;
      param_3 = 1;
      if (0 < local_1c) {
        do {
          iVar6 = FUN_00458c4f(local_24,local_14,param_3);
          piVar1 = *(int **)(iVar6 + 4);
          if (local_20 != 0) {
            FUN_00449913(0);
            local_20 = 0;
          }
          if (piVar1 != (int *)0x0) {
            local_18 = FUN_00413367(iVar5,*(undefined4 *)(iVar4 + 0xc0));
            iVar6 = FUN_0045e2eb();
            if (iVar6 == local_18) {
              iVar6 = (**(code **)(*piVar1 + 0x18))();
              param_4 = (code *)((int)param_4 + iVar6);
            }
          }
          param_3 = param_3 + 1;
        } while (param_3 <= local_1c);
      }
      iVar6 = FUN_00413367(iVar4 + 0xc4,*(undefined4 *)(iVar4 + 0xcc));
      if (iVar6 <= (int)param_4) goto LAB_00652be5;
    }
    uVar7 = FUN_00413367(iVar5,*(undefined4 *)(iVar4 + 0xc0));
    return uVar7;
  }
LAB_00652be5:
  FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65));
  uVar7 = FUN_004b8c34();
  *(undefined4 *)(iVar2 + 0x65) = uVar7;
  FUN_0045f084(iVar2 + 0x71,*(undefined4 *)(iVar2 + 0x75));
  uVar7 = FUN_004b8c34();
  *(undefined4 *)(iVar2 + 0x75) = uVar7;
  return 1;
}


