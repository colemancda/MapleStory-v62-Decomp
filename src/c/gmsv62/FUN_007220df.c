/* FUN_007220df - 0x007220df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007220df(int param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int aiStack_3c [3];
  int *piStack_30;
  int *piStack_2c;
  undefined1 local_1c [4];
  int local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x1f4;
  local_c = DAT_00978368;
  aiStack_3c[2] = 0x722102;
  iVar3 = FUN_004becbc();
  if (iVar3 == 0) {
    return;
  }
  piStack_2c = (int *)local_1c;
  piStack_30 = (int *)0x722115;
  iVar3 = FUN_00455c59();
  iVar3 = *(int *)(iVar3 + 4);
  if (local_18 != 0) {
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x722126;
    FUN_0045e7c2();
    local_18 = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x580) + 0x3c) != 0) {
    piStack_2c = *(int **)(iVar3 + 0x8d);
    piStack_30 = (int *)(iVar3 + 0x89);
    aiStack_3c[2] = 0x722146;
    sVar2 = FUN_0045f084();
    if (sVar2 < 1) {
      return;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x580) + 0x3c) == 0) {
    piStack_30 = (int *)0x722162;
    piStack_2c = (int *)iVar3;
    iVar4 = FUN_00653ddc();
    if (iVar4 < 1) {
      return;
    }
  }
  piStack_2c = (int *)0x0;
  puVar7 = (undefined1 *)((int)param_2 + *(int *)(*(int *)(param_1 + 0x588) + 0x38));
  piStack_30 = (int *)0x722182;
  iVar4 = FUN_00722abd();
  if (iVar4 == 0) {
    return;
  }
  if ((int)puVar7 < 0) {
    return;
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    return;
  }
  if (*(undefined1 **)(iVar4 + -4) <= puVar7) {
    return;
  }
  piVar5 = *(int **)(iVar4 + 4 + (int)puVar7 * 8);
  piStack_30 = (int *)0x7221b8;
  piStack_2c = piVar5;
  local_14 = piVar5;
  iVar4 = FUN_008345ae();
  if (iVar4 != 1) {
    return;
  }
  if ((*piVar5 / 10000) % 100 != 0) {
    iVar4 = (*piVar5 / 10000) % 10;
    if (iVar4 == 0) {
      piVar5 = *(int **)(iVar3 + 0x3ff);
      param_2 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        piVar1 = piVar5 + *(int *)(iVar3 + 0x403);
        for (; piVar5 < piVar1; piVar5 = piVar5 + 1) {
          if (*piVar5 != 0) {
            local_8 = *piVar5;
            goto joined_r0x0072236c;
          }
        }
      }
      local_8 = 0;
joined_r0x0072236c:
      while (local_8 != 0) {
        piStack_2c = &local_10;
        piStack_30 = &local_8;
        aiStack_3c[2] = 0x72237d;
        piVar5 = (int *)FUN_004b9043();
        if (((*piVar5 / 10000) % 100 != 0) && ((*piVar5 / 10000) % 10 == 0)) {
          param_2 = (int *)((int)param_2 + local_10);
        }
      }
      piStack_2c = *(int **)(iVar3 + 0x35);
      piStack_30 = (int *)(iVar3 + 0x33);
      aiStack_3c[2] = 0x7223b8;
      uVar6 = FUN_0045f03e();
      if ((int)((uVar6 & 0xff) * 3 + -0x59) <= (int)param_2) {
        param_2 = aiStack_3c;
        aiStack_3c[0] = (int)piStack_2c;
        uVar8 = 0xd71;
LAB_0072228a:
        piStack_2c = (int *)0x0;
        piStack_30 = (int *)0x0;
        aiStack_3c[2] = 0;
        aiStack_3c[1] = 0;
        FUN_00679d22(aiStack_3c,uVar8);
        FUN_007db3ad();
        return;
      }
    }
    else if (iVar4 == 1) {
      param_2 = *(int **)(iVar3 + 0x3ff);
      iVar4 = 0;
      if (param_2 != (int *)0x0) {
        piVar5 = param_2 + *(int *)(iVar3 + 0x403);
        for (; param_2 < piVar5; param_2 = param_2 + 1) {
          if (*param_2 != 0) {
            param_2 = (int *)*param_2;
            goto joined_r0x007222d3;
          }
        }
      }
      param_2 = (int *)0x0;
joined_r0x007222d3:
      while (param_2 != (int *)0x0) {
        piStack_2c = &local_8;
        piStack_30 = (int *)&param_2;
        aiStack_3c[2] = 0x7222e4;
        piVar5 = (int *)FUN_004b9043();
        if ((*piVar5 / 10000) % 10 == 1) {
          iVar4 = iVar4 + local_8;
        }
      }
      piStack_2c = *(int **)(iVar3 + 0x35);
      piStack_30 = (int *)(iVar3 + 0x33);
      aiStack_3c[2] = 0x72230e;
      uVar6 = FUN_0045f03e();
      aiStack_3c[0] = (int)piStack_2c;
      if ((int)((uVar6 & 0xff) * 3 + -0xd1) <= iVar4) {
        local_14 = aiStack_3c;
        uVar8 = 0xd70;
        goto LAB_0072228a;
      }
    }
    else if (iVar4 == 2) {
      param_2 = *(int **)(iVar3 + 0x3ff);
      iVar4 = 0;
      if (param_2 != (int *)0x0) {
        piVar5 = param_2 + *(int *)(iVar3 + 0x403);
        for (; param_2 < piVar5; param_2 = param_2 + 1) {
          if (*param_2 != 0) {
            param_2 = (int *)*param_2;
            goto joined_r0x0072222b;
          }
        }
      }
      param_2 = (int *)0x0;
joined_r0x0072222b:
      while (param_2 != (int *)0x0) {
        piStack_2c = &local_8;
        piStack_30 = (int *)&param_2;
        aiStack_3c[2] = 0x72223c;
        piVar5 = (int *)FUN_004b9043();
        if ((*piVar5 / 10000) % 10 == 2) {
          iVar4 = iVar4 + local_8;
        }
      }
      piStack_2c = *(int **)(iVar3 + 0x35);
      piStack_30 = (int *)(iVar3 + 0x33);
      aiStack_3c[2] = 0x722266;
      uVar6 = FUN_0045f03e();
      if ((int)(((uVar6 & 0xff) - 0x77) * 3) <= iVar4) {
        local_14 = aiStack_3c;
        aiStack_3c[0] = (int)piStack_2c;
        uVar8 = 0xd72;
        goto LAB_0072228a;
      }
    }
  }
  piStack_2c = (int *)*local_14;
  piStack_30 = (int *)0x7223e7;
  FUN_00848e82();
  return;
}


