/* FUN_00727d03 - 0x00727d03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00727d03(int param_1)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  byte local_5;
  
  iVar4 = FUN_00455c59(local_30);
  iVar4 = *(int *)(iVar4 + 4);
  if (local_2c != 0) {
    FUN_0045e7c2(0);
    local_2c = 0;
  }
  iVar1 = iVar4 + 0x39;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  sVar3 = FUN_0045f084(iVar1,*(undefined4 *)(iVar4 + 0x3d));
  local_24 = FUN_00483340((int)sVar3);
  piVar5 = *(int **)(iVar4 + 0x3ff);
  if (piVar5 != (int *)0x0) {
    piVar2 = piVar5 + *(int *)(iVar4 + 0x403);
    for (; piVar5 < piVar2; piVar5 = piVar5 + 1) {
      if (*piVar5 != 0) {
        local_20 = *piVar5;
        goto joined_r0x00727d84;
      }
    }
  }
  local_20 = 0;
joined_r0x00727d84:
  while (local_20 != 0) {
    piVar5 = (int *)FUN_004b9043(&local_20,&local_c);
    iVar6 = FUN_00483340(*piVar5 / 10000);
    if (iVar6 == 1) {
      local_1c = local_1c + local_c;
    }
    else if (iVar6 == 2) {
      local_10 = local_10 + local_c;
    }
    else if (iVar6 == 3) {
      local_14 = local_14 + local_c;
    }
    else if (iVar6 == 4) {
      local_18 = local_18 + local_c;
    }
  }
  if (local_24 == 4) {
    local_1c = 2;
  }
  else {
    local_1c = 0;
  }
  local_5 = FUN_0045f03e(iVar4 + 0x33,*(undefined4 *)(iVar4 + 0x35));
  local_c = FUN_0045f084(iVar1,*(undefined4 *)(iVar4 + 0x3d));
  local_28 = FUN_0045f084(iVar4 + 0x89,*(undefined4 *)(iVar4 + 0x8d));
  if (param_1 == 0) {
    sVar3 = FUN_0045f084(iVar1,*(undefined4 *)(iVar4 + 0x3d));
    local_24 = (((((((uint)local_5 - ((-(uint)((int)(short)local_c / 100 != 2) & 2) + 8)) * 3 -
                   ((-(uint)((int)sVar3 / 100 != 2) & 0xfffffffa) + 6)) - (int)(short)local_28) -
                 local_18) - local_14) - local_10) + local_1c + -0x3d + local_24;
  }
  else if (param_1 == 1) {
    local_24 = local_10 + -0x79;
  }
  else {
    local_24 = local_14 + -0x97;
  }
  return local_24;
}


