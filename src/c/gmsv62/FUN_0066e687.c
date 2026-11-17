/* FUN_0066e687 - 0x0066e687 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066e687(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int *param_5
                 ,int param_6,undefined4 param_7,undefined4 param_8,int *param_9,undefined4 param_10
                 ,undefined4 *param_11,int param_12,int param_13,int param_14)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  float10 fVar13;
  uint local_90 [7];
  uint local_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 uStack_60;
  double local_5c;
  uint local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  uint local_44;
  undefined4 uStack_40;
  int local_3c;
  uint local_38;
  int local_34;
  double local_30;
  int local_28;
  double local_24;
  int local_1c;
  undefined8 local_18;
  double local_10;
  int local_8;
  
  piVar4 = param_5;
  iVar3 = (int)param_2;
  local_8 = 0;
  puVar11 = local_90;
  iVar12 = 7;
  do {
    uVar5 = FUN_004133f0();
    *puVar11 = uVar5;
    puVar11 = puVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = FUN_00413367(param_3 + 0x60,*(undefined4 *)(param_3 + 0x68));
  local_1c = FUN_00413367();
  local_1c = local_1c + iVar12;
  if (local_1c < 1) {
    local_1c = 0;
  }
  if (0x7ce < local_1c) {
    local_1c = 1999;
  }
  iVar12 = FUN_00413367(param_3 + 0x768,*(undefined4 *)(param_3 + 0x770));
  if ((0 < iVar12) && (local_1c = (iVar12 * local_1c) / 100 + local_1c, 0x7ce < local_1c)) {
    local_1c = 1999;
  }
  FUN_0044dddc(param_7);
  iVar12 = FUN_00413367((int)param_2 + 0x3c,*(undefined4 *)((int)param_2 + 0x44));
  iVar6 = FUN_00413367((int)param_2 + 0x48,*(undefined4 *)((int)param_2 + 0x50));
  local_28 = (iVar6 / 10 + iVar12 / 10) * 5;
  iVar12 = FUN_00413367((int)param_2 + 0xc,*(undefined4 *)((int)param_2 + 0x14));
  param_2 = (undefined4 *)(*param_5 - iVar12);
  if ((int)param_2 < 1) {
    param_2 = (undefined4 *)0x0;
  }
  local_5c = ((double)local_28 * _DAT_008e9978) /
             ((double)(int)param_2 * _DAT_008ecb38 + _DAT_008ed7b8);
  iVar12 = FUN_006509a1(param_10);
  iVar12 = FUN_00413367(iVar12 + 0x124,*(undefined4 *)(iVar12 + 300));
  dVar1 = ((double)iVar12 * _DAT_008ecb30 + _DAT_008ecb38) * _DAT_008ed7b0;
  local_3c = FUN_006538e8(param_1,0,0);
  local_28 = FUN_00413367(param_3 + 0x5dc,*(undefined4 *)(param_3 + 0x5e4));
  local_28 = local_28 >> 8;
  if (local_28 < 1) {
    local_28 = 0;
  }
  if (99 < local_28) {
    local_28 = 100;
  }
  uVar5 = FUN_00413367(param_3 + 0x5dc,*(undefined4 *)(param_3 + 0x5e4));
  local_38 = uVar5 & 0xff;
  if (0 < param_6) {
    param_12 = param_12 - (int)param_11;
    param_2 = param_11;
    param_11 = (undefined4 *)param_6;
    do {
      *param_2 = 0;
      if (piVar4[0x68] == 0) {
        uVar5 = local_90[local_8 % 7];
        local_8 = local_8 + 1;
        if ((piVar4[0x4b] == 0) ||
           (iVar12 = FUN_00413367(param_3 + 0x87c,*(undefined4 *)(param_3 + 0x884)),
           (int)(uVar5 % 100) <= iVar12)) {
          iVar12 = FUN_00413367(param_3 + 0x324,*(undefined4 *)(param_3 + 0x32c));
          if (iVar12 == 0) {
            param_5 = (int *)(piVar4[0x1e] + piVar4[0x1d]);
            if ((int)param_5 < 1) {
              param_5 = (int *)0x0;
            }
            if (0x3e6 < (int)param_5) {
              param_5 = (int *)0x3e7;
            }
            if (param_9 != (int *)0x0) {
              iVar12 = FUN_006509a1(param_10);
              local_34 = iVar12 + 0xdc;
              iVar6 = FUN_00413367(local_34,*(undefined4 *)(iVar12 + 0xe4));
              if (iVar6 != 0) {
                iVar6 = FUN_00413367(iVar3 + 0xc,*(undefined4 *)(iVar3 + 0x14));
                iVar7 = FUN_00413367();
                iVar7 = *piVar4 - iVar7;
                if (iVar7 < 1) {
                  iVar7 = 0;
                }
                iVar10 = local_8 % 7;
                local_8 = local_8 + 1;
                dVar2 = ((double)iVar6 * _DAT_008e9978) / ((double)(iVar7 * 0x96) + _DAT_008ed7b8);
                uVar5 = local_90[iVar10];
                local_18 = dVar2 * _DAT_008ed6f8;
                dVar2 = dVar2 * _DAT_008ed790;
                local_10 = dVar2;
                if (dVar2 <= local_18) {
                  if (dVar2 != local_18) goto LAB_0066e9a5;
                }
                else {
                  FUN_00671963(&local_10,&local_18);
LAB_0066e9a5:
                  uStack_40 = 0;
                  local_44 = uVar5 % 10000000;
                  dVar2 = (double)(uVar5 % 10000000) * (local_18 - local_10) * _DAT_008ed7a0 +
                          local_10;
                }
                if ((double)(int)param_5 <= dVar2) {
                  uVar8 = FUN_00413367(local_34,*(undefined4 *)(iVar12 + 0xe4));
                  *param_2 = uVar8;
                }
                goto LAB_0066ee40;
              }
            }
            local_18 = local_5c * _DAT_008e89d0;
            iVar12 = local_8 % 7;
            dVar2 = local_5c * _DAT_008ed2f0;
            local_10 = dVar2;
            local_8 = local_8 + 1;
            uVar5 = local_90[iVar12];
            if (dVar2 <= local_18) {
              if (dVar2 != local_18) goto LAB_0066ea47;
            }
            else {
              FUN_00671963(&local_10,&local_18);
LAB_0066ea47:
              uStack_68 = 0;
              local_6c = uVar5 % 10000000;
              dVar2 = (double)(uVar5 % 10000000) * (local_18 - local_10) * _DAT_008ed7a0 + local_10;
            }
            if ((double)(int)param_5 <= dVar2) {
              local_24 = 0.0;
              if (*param_9 == 0x231c4a) {
                iVar12 = FUN_006509a1(param_10);
                uVar9 = FUN_00413367(iVar12 + 4,*(undefined4 *)(iVar12 + 0xc));
                uVar8 = *(undefined4 *)(iVar3 + 0x50);
                local_18 = (double)CONCAT44(uVar9,(undefined4)local_18);
                iVar12 = iVar3 + 0x48;
                local_34 = FUN_00413367();
                iVar12 = FUN_00413367(iVar3 + 0x3c,*(undefined4 *)(iVar3 + 0x44),iVar12,uVar8);
                iVar6 = local_8 % 7;
                local_8 = local_8 + 1;
                uVar5 = local_90[iVar6];
                iVar6 = FUN_00413367(iVar3 + 0x3c,*(undefined4 *)(iVar3 + 0x44));
                local_30 = (double)iVar6 * _DAT_008e8d80;
                local_10 = (double)iVar12 * _DAT_008e89c8;
                if (local_30 <= local_10) {
                  dVar2 = local_30;
                  if (local_30 != local_10) goto LAB_0066eb2b;
                }
                else {
                  FUN_00671963(&local_30,&local_10);
LAB_0066eb2b:
                  local_74 = uVar5 % 10000000;
                  uStack_70 = 0;
                  dVar2 = (double)local_74 * (local_10 - local_30) * _DAT_008ed7a0 + local_30;
                }
                dVar2 = ((double)local_18._4_4_ * _DAT_008e8cd0 *
                         ((double)param_13 * _DAT_008ed700 + _DAT_008e8a78) *
                         (dVar2 * _DAT_008ed708 + (double)local_34) * (double)local_1c *
                        _DAT_008ecdf8) / (double)param_13;
              }
              else {
                iVar12 = FUN_006509a1(param_10);
                iVar12 = FUN_00413367(iVar12 + 0x34,*(undefined4 *)(iVar12 + 0x3c));
                iVar6 = FUN_00413367();
                dVar2 = (double)local_1c;
                local_18 = (double)local_1c;
                local_30 = (double)local_1c;
                local_10 = local_18 * dVar1;
                iVar7 = local_8 % 7;
                local_8 = local_8 + 1;
                uVar5 = local_90[iVar7];
                if (local_18 <= local_10) {
                  if (dVar2 != local_10) goto LAB_0066ebfc;
                }
                else {
                  FUN_00671963(&local_30,&local_10);
LAB_0066ebfc:
                  local_4c = uVar5 % 10000000;
                  uStack_48 = 0;
                  dVar2 = (double)local_4c * (local_10 - local_30) * _DAT_008ed7a0 + local_30;
                }
                dVar2 = (dVar2 * _DAT_008ed7c8 +
                        (double)iVar6 * _DAT_008e89d0 +
                        local_18 * _DAT_008ed7d0 * local_18 * _DAT_008ed7d0) * (double)iVar12 *
                        _DAT_008e8cd0;
              }
              local_24 = (double)local_3c * dVar2 * _DAT_008e8cd0;
              fVar13 = (float10)FUN_0066e37d(local_24,param_9,piVar4 + 1,param_10);
              local_24 = (double)fVar13;
              param_5 = (int *)(piVar4[0x16] + piVar4[0x15]);
              if ((int)param_5 < 1) {
                param_5 = (int *)0x0;
              }
              if (0x7ce < (int)param_5) {
                param_5 = (int *)0x7cf;
              }
              local_10 = (double)(int)param_5 * _DAT_008e89d0;
              iVar12 = local_8 % 7;
              dVar2 = (double)(int)param_5 * _DAT_008ecb60;
              local_30 = dVar2;
              local_8 = local_8 + 1;
              uVar5 = local_90[iVar12];
              if (dVar2 <= local_10) {
                if (dVar2 != local_10) goto LAB_0066ece7;
              }
              else {
                FUN_00671963(&local_30,&local_10);
LAB_0066ece7:
                uStack_50 = 0;
                local_54 = uVar5 % 10000000;
                dVar2 = (double)(uVar5 % 10000000) * (local_10 - local_30) * _DAT_008ed7a0 +
                        local_30;
              }
              local_24 = local_24 - dVar2;
              if (piVar4[0x3e] != 0) {
                local_24 = (double)piVar4[0x3e] * local_24 * _DAT_008e8cd0;
              }
              if ((0 < local_28) && (0 < (int)local_38)) {
                iVar12 = local_8 % 7;
                uStack_60 = 0;
                local_8 = local_8 + 1;
                local_64 = local_90[iVar12] % 10000000;
                if ((double)(local_90[iVar12] % 10000000) * _DAT_008ed738 < (double)local_28) {
                  *(undefined4 *)(param_12 + (int)param_2) = 1;
                  local_24 = ((double)(int)(local_38 - 100) * _DAT_008e8cd0 + _DAT_008e8a78) *
                             local_24;
                }
              }
              if (param_14 != 0) {
                local_24 = (double)((param_14 * 0x5a) / 2000 + 10) * local_24 * _DAT_008e8cd0;
              }
              uVar8 = 0;
              if ((piVar4[0x51] == 0) || (*(int *)(param_12 + (int)param_2) != 0)) {
                FUN_0066c156();
                iVar12 = FUN_00552e1d(param_7,param_9[4]);
                local_24 = (double)iVar12 * local_24 * _DAT_008e8cd0;
                uVar8 = __ftol();
              }
              *param_2 = uVar8;
            }
          }
        }
        else {
          *param_2 = 1;
        }
      }
LAB_0066ee40:
      param_2 = param_2 + 1;
      param_11 = (undefined4 *)((int)param_11 + -1);
    } while (param_11 != (undefined4 *)0x0);
  }
  return;
}


