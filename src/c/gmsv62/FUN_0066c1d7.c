/* FUN_0066c1d7 - 0x0066c1d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066c1d7(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int *param_12,int param_13,int param_14,int param_15,int param_16,int param_17,
                 int param_18,int param_19)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  int local_74;
  int local_70;
  uint local_6c [7];
  uint local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  int local_40;
  double local_3c;
  uint local_34;
  undefined8 local_30;
  code *local_28;
  double local_24;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  iVar4 = param_2;
  uVar6 = FUN_00650dae(param_1,0x3eba9a,&DAT_0097b150);
  local_8 = 0;
  puVar15 = local_6c;
  iVar14 = 7;
  do {
    uVar7 = FUN_004133f0();
    *puVar15 = uVar7;
    puVar15 = puVar15 + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  if (param_12 == (int *)0x0) {
    local_28 = (code *)0x0;
  }
  else {
    local_28 = (code *)*param_12;
  }
  local_4c = FUN_0044dddc(param_7);
  iVar14 = FUN_00413367(param_3 + 0xc0,*(undefined4 *)(param_3 + 200));
  iVar8 = FUN_00413367(param_3 + 0xcc);
  local_50 = iVar8 + iVar14;
  if ((int)local_50 < 1) {
    local_50 = 0;
  }
  if (0x3e6 < (int)local_50) {
    local_50 = 999;
  }
  param_2 = FUN_00413367(param_2 + 0xc,*(undefined4 *)(param_2 + 0x14));
  param_2 = *param_5 - param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  dVar1 = ((double)(int)local_50 * _DAT_008e9978) /
          ((double)param_2 * _DAT_008ecb38 + _DAT_008ed7b8);
  if (param_8 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_00554b40(param_8);
  }
  iVar14 = FUN_00413367(param_3,*(undefined4 *)(param_3 + 8));
  iVar8 = FUN_00662964(param_1);
  param_2 = iVar8 + iVar14 + param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  if (0x7ce < param_2) {
    param_2 = 1999;
  }
  iVar14 = FUN_00413367(param_3 + 0x768,*(undefined4 *)(param_3 + 0x770));
  if ((0 < iVar14) && (param_2 = (iVar14 * param_2) / 100 + param_2, 0x7ce < param_2)) {
    param_2 = 1999;
  }
  iVar8 = FUN_00652c29(param_1,param_7,param_9,local_28,0,0);
  iVar14 = param_13;
  local_3c = ((double)iVar8 * _DAT_008ecb30 + _DAT_008ecb38) * _DAT_008ed7b0;
  if (param_10 == 0x3a) {
    local_70 = param_13;
    iVar8 = FUN_006509a1(param_13);
    local_48 = FUN_00413367(iVar8 + 0xf4,*(undefined4 *)(iVar8 + 0xfc));
    iVar14 = FUN_006509a1(iVar14);
    local_40 = FUN_00413367(iVar14 + 0x1b0,*(undefined4 *)(iVar14 + 0x1b8));
  }
  else {
    local_70 = FUN_00653365(param_1,param_7,param_9,&local_48,&local_40);
  }
  iVar14 = param_3 + 0x5dc;
  iVar8 = FUN_00413367(iVar14,*(undefined4 *)(param_3 + 0x5e4));
  iVar8 = iVar8 >> 8;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  if (99 < iVar8) {
    iVar8 = 100;
  }
  local_48 = local_48 + iVar8;
  iVar8 = FUN_00413367(iVar14,*(undefined4 *)(param_3 + 0x5e4));
  if (0 < iVar8) {
    if (local_40 == 0) {
      uVar7 = FUN_00413367(iVar14,*(undefined4 *)(param_3 + 0x5e4));
      local_40 = local_40 + 100 + (uVar7 & 0xff);
    }
    else {
      uVar7 = FUN_00413367(iVar14,*(undefined4 *)(param_3 + 0x5e4));
      local_40 = local_40 + (uVar7 & 0xff);
    }
  }
  local_50 = 0;
  if (param_5[0x25] != 0) {
    param_7 = 0;
    iVar14 = FUN_00650dae(param_1,ptr_004df8f0,&param_7);
    local_50 = (uint)(0 < iVar14);
    if (0 < iVar14 != 0) {
      iVar8 = FUN_006509a1(iVar14);
      iVar8 = FUN_00413367(iVar8 + 0xf4,*(undefined4 *)(iVar8 + 0xfc));
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      if (99 < iVar8) {
        iVar8 = 100;
      }
      local_48 = local_48 + iVar8;
      iVar14 = FUN_006509a1(iVar14);
      iVar14 = FUN_00413367(iVar14 + 0xd0,*(undefined4 *)(iVar14 + 0xd8));
      local_40 = local_40 + iVar14;
    }
  }
  local_74 = 0;
  if (local_28 == (code *)0x3ee1b0) {
    iVar14 = FUN_006509a1(param_13);
    local_74 = FUN_00413367(iVar14 + 0xf4,*(undefined4 *)(iVar14 + 0xfc));
  }
  param_7 = 0;
  if (0 < param_6) {
    do {
      local_44 = (undefined4 *)(param_14 + param_7 * 4);
      *local_44 = 0;
      if ((param_19 == 0) && (param_5[0x68] != 0)) goto LAB_0066e317;
      iVar14 = local_8 % 7;
      local_8 = local_8 + 1;
      local_30 = (double)CONCAT44(local_6c[iVar14] % 100,(undefined4)local_30);
      if (param_5[0x48] != 0) {
        iVar14 = FUN_00413367(param_3 + 0x84c,*(undefined4 *)(param_3 + 0x854));
        if ((int)local_30._4_4_ <= iVar14) goto LAB_0066c573;
LAB_0066c6d0:
        *local_44 = 1;
        goto LAB_0066e317;
      }
LAB_0066c573:
      if (local_28 == (code *)0x31260f) {
        if (param_9 != 1) goto LAB_0066c678;
        local_18 = 0.0;
        local_10 = _DAT_008ed7a8;
        local_8 = local_8 + 1;
        FUN_00671963(&local_10,&local_18);
        uVar9 = __ftol();
        goto LAB_0066e312;
      }
      if (local_28 == (code *)0x3ee1b0) {
        local_18 = 0.0;
        local_10 = _DAT_008e9978;
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        local_30 = (double)CONCAT44(local_6c[iVar14],(undefined4)local_30);
        FUN_00671963(&local_10,&local_18);
        if ((double)local_74 <=
            (double)(local_30._4_4_ % 10000000) * (local_18 - local_10) * _DAT_008ed7a0 + local_10)
        {
          *local_44 = 0;
          goto LAB_0066e317;
        }
      }
LAB_0066c678:
      if (((param_9 != 3) && (local_28 != (code *)0x0)) &&
         (iVar14 = FUN_00413367(param_3 + 0x324,*(undefined4 *)(param_3 + 0x32c)), iVar14 != 0))
      goto LAB_0066e317;
      local_34 = param_5[0x1e] + param_5[0x1d];
      if ((int)local_34 < 1) {
        local_34 = 0;
      }
      if (0x3e6 < (int)local_34) {
        local_34 = 999;
      }
      if (param_12 != (int *)0x0) {
        if (*param_12 == 0x12a193) goto LAB_0066c6d0;
        iVar14 = FUN_006509a1(param_13);
        local_1c = iVar14 + 0xdc;
        iVar8 = FUN_00413367(local_1c,*(undefined4 *)(iVar14 + 0xe4));
        if (iVar8 == 0) goto LAB_0066c7ed;
        iVar8 = FUN_00413367(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
        local_30._4_4_ = iVar8;
        iVar8 = FUN_00413367();
        iVar8 = *param_5 - iVar8;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        dVar2 = (double)(int)local_30._4_4_;
        local_30 = (double)CONCAT44(iVar8 * 0x96,(undefined4)local_30);
        iVar13 = local_8 % 7;
        local_8 = local_8 + 1;
        dVar2 = (dVar2 * _DAT_008e9978) / ((double)(iVar8 * 0x96) + _DAT_008ed7b8);
        uVar7 = local_6c[iVar13];
        local_10 = dVar2 * _DAT_008ed6f8;
        dVar2 = dVar2 * _DAT_008ed790;
        local_18 = dVar2;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066c799;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066c799:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        if (dVar2 < (double)(int)local_34) goto LAB_0066e317;
        uVar9 = FUN_00413367(local_1c,*(undefined4 *)(iVar14 + 0xe4));
        goto LAB_0066e312;
      }
LAB_0066c7ed:
      local_10 = dVar1 * _DAT_008ed6f8;
      iVar14 = local_8 % 7;
      dVar2 = dVar1 * _DAT_008ed790;
      local_18 = dVar2;
      local_8 = local_8 + 1;
      uVar7 = local_6c[iVar14];
      if (dVar2 <= local_10) {
        if (dVar2 != local_10) goto LAB_0066c841;
      }
      else {
        FUN_00671963(&local_18,&local_10);
LAB_0066c841:
        dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
      }
      if ((param_19 == 0) && (dVar2 < (double)(int)local_34)) goto LAB_0066e317;
      iVar14 = FUN_00413367(param_3 + 0x348,*(undefined4 *)(param_3 + 0x350));
      if (iVar14 != 0) {
        local_18 = 0.0;
        local_10 = _DAT_008e9978;
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        FUN_00671963(&local_10,&local_18);
        if (_DAT_008ed788 <
            (double)(uVar7 % 10000000) * (local_18 - local_10) * _DAT_008ed7a0 + local_10) {
          local_8 = local_8 + 1;
          iVar14 = __ftol();
          local_8 = local_8 + iVar14;
          goto LAB_0066e317;
        }
      }
      local_34 = 0;
      if (((local_28 == (code *)0x111aee) || (local_28 == (code *)0x12a18f)) ||
         ((local_28 == (code *)0x14282b || (local_28 == (code *)0x12a191)))) {
        local_18 = 0.0;
        local_10 = _DAT_008ecb30;
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        FUN_00671963(&local_10,&local_18);
        if (_DAT_008ea308 <=
            (double)(uVar7 % 10000000) * (local_18 - local_10) * _DAT_008ed7a0 + local_10)
        goto LAB_0066c9e0;
LAB_0066c9ee:
        local_34 = 1;
      }
      else {
LAB_0066c9e0:
        if ((local_28 == (code *)0x111af0) && (param_7 == 1)) goto LAB_0066c9ee;
      }
      pcVar5 = local_28;
      local_24 = 0.0;
      if (((local_4c == 0x2d) || (local_4c == 0x2e)) &&
         (iVar14 = FUN_00670522(param_10), iVar14 == 0)) {
        if ((pcVar5 == (code *)0x30d7eb) || (pcVar5 == (code *)0x2f514b)) {
          local_34 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
          uVar9 = *(undefined4 *)(iVar4 + 0x38);
          iVar14 = iVar4 + 0x30;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          local_1c = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066cb51;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066cb51:
            dVar2 = (double)(local_1c % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18
            ;
          }
          local_24 = (dVar2 * _DAT_008ed778 + (double)(int)local_34) * (double)param_2 *
                     _DAT_008ed770;
          goto switchD_0066cf2b_caseD_22;
        }
        uVar10 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        local_18 = (double)CONCAT44(uVar10,(undefined4)local_18);
        iVar14 = iVar4 + 0x30;
        local_1c = FUN_00413367();
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        local_34 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_30 = (double)iVar14;
        local_10 = (double)(int)local_1c * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066caab;
        }
        else {
          FUN_00671963(&local_30,&local_10);
LAB_0066caab:
          dVar2 = (double)(local_34 % 10000000) * (local_10 - local_30) * _DAT_008ed7a0 + local_30;
        }
        dVar3 = (double)local_18._4_4_;
LAB_0066cef6:
        local_24 = (dVar3 + dVar2) * (double)param_2 * _DAT_008ecdf8;
        goto switchD_0066cf2b_caseD_22;
      }
      if (local_4c == 0x31) {
        iVar14 = FUN_00670522(param_10);
        if (((iVar14 != 0) || (param_10 == 0x5d)) ||
           ((param_10 == 0x5e ||
            ((((pcVar5 == ptr_004f5c6a || (pcVar5 == (code *)0x4faa8b)) ||
              (pcVar5 == (code *)0x4faa8f)) || (pcVar5 == (code *)0x4faa90)))))) goto LAB_0066ce4b;
        if ((param_10 == 0x4d) || (param_10 == 0x4c)) {
          local_34 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
          uVar9 = *(undefined4 *)(iVar4 + 0x38);
          iVar14 = iVar4 + 0x30;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          local_1c = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066cd15;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066cd15:
            dVar2 = (double)(local_1c % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18
            ;
          }
          dVar2 = dVar2 * _DAT_008ea340 + (double)(int)local_34;
          goto LAB_0066dcb9;
        }
        local_34 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        iVar14 = iVar4 + 0x30;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        local_1c = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066cc6f;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066cc6f:
          dVar2 = (double)(local_1c % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar3 = (double)(int)local_34;
        goto LAB_0066cef6;
      }
      if (((local_4c == 0x2f) && (iVar14 = FUN_00670522(param_10), iVar14 == 0)) &&
         ((pcVar5 != (code *)0x406849 && (pcVar5 != (code *)0x3ee1b0)))) {
        local_34 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        iVar14 = iVar4 + 0x30;
        local_1c = FUN_00413367();
        uVar9 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50),iVar14,uVar9);
        local_30 = (double)CONCAT44(uVar9,(undefined4)local_30);
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        iVar14 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50));
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066ce00;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066ce00:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        local_18 = (double)CONCAT44(local_1c + local_34,(undefined4)local_18);
        local_24 = ((double)(int)(local_1c + local_34) + dVar2) * (double)param_2 * _DAT_008ed770;
        goto switchD_0066cf2b_caseD_22;
      }
LAB_0066ce4b:
      if (param_10 == 0x20) {
        local_34 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
        uVar9 = *(undefined4 *)(iVar4 + 0x2c);
        iVar14 = iVar4 + 0x24;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        local_1c = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066ceca;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066ceca:
          dVar2 = (double)(local_1c % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar3 = (double)(int)local_34;
        goto LAB_0066cef6;
      }
      if (((4 < param_10) && (param_10 < 0x10)) || (bVar12 = false, local_34 != 0)) {
        bVar12 = true;
      }
      switch(local_4c) {
      case 0x1e:
      case 0x21:
        iVar14 = FUN_00413367(iVar4 + 0x18,*(undefined4 *)(iVar4 + 0x20));
        if ((iVar14 / 100 != 4) || (local_4c != 0x21)) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d764;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d764:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed758 + (double)(int)local_1c;
          break;
        }
        local_34 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
        uVar9 = *(undefined4 *)(iVar4 + 0x2c);
        iVar14 = iVar4 + 0x24;
        local_1c = FUN_00413367();
        uVar9 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50),iVar14,uVar9);
        local_30 = (double)CONCAT44(uVar9,(undefined4)local_30);
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        iVar14 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50));
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066d6b2;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066d6b2:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        iVar14 = local_1c + local_34;
        local_18 = (double)CONCAT44(iVar14,(undefined4)local_18);
        goto LAB_0066d9ea;
      case 0x1f:
      case 0x20:
      case 0x25:
      case 0x26:
        if (bVar12 == false) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d5cf;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d5cf:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed740 + (double)(int)local_1c;
        }
        else {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d529;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d529:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed748 + (double)(int)local_1c;
        }
        break;
      default:
        goto switchD_0066cf2b_caseD_22;
      case 0x27:
        iVar14 = FUN_00413367(iVar4 + 0x18,*(undefined4 *)(iVar4 + 0x20));
        if (iVar14 == 500) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066db30;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066db30:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ea308 + (double)(int)local_1c;
        }
        else {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066dbd6;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066dbd6:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed730 + (double)(int)local_1c;
        }
        break;
      case 0x28:
        local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
        uVar9 = *(undefined4 *)(iVar4 + 0x2c);
        iVar14 = iVar4 + 0x24;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066d474;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066d474:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar2 = dVar2 * _DAT_008ed750 + (double)(int)local_1c;
        break;
      case 0x29:
      case 0x2a:
        if (bVar12 == false) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d1ac;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d1ac:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed778 + (double)(int)local_1c;
        }
        else {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d106;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d106:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed760 + (double)(int)local_1c;
        }
        break;
      case 0x2b:
      case 0x2c:
        if (local_28 == (code *)0x14011e) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d266;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d266:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ed758 + (double)(int)local_1c;
        }
        else if ((local_4c == 0x2b) == bVar12) {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d3c7;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d3c7:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ea308 + (double)(int)local_1c;
        }
        else {
          local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
          uVar9 = *(undefined4 *)(iVar4 + 0x2c);
          iVar14 = iVar4 + 0x24;
          uVar10 = FUN_00413367();
          local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
          iVar8 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar8];
          iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * local_3c;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066d324;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066d324:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ecb30 + (double)(int)local_1c;
        }
        break;
      case 0x2d:
        local_1c = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        iVar14 = iVar4 + 0x30;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066cfa4;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066cfa4:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar2 = dVar2 * _DAT_008ed778 + (double)(int)local_1c;
        break;
      case 0x2e:
        local_1c = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        iVar14 = iVar4 + 0x30;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066d051;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066d051:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar2 = dVar2 * _DAT_008ed768 + (double)(int)local_1c;
        break;
      case 0x2f:
        if ((local_28 == (code *)0x3d0e40) || (local_28 == (code *)0x3ee1af)) {
          uVar9 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50));
          local_30 = (double)CONCAT44(uVar9,(undefined4)local_30);
          iVar14 = local_8 % 7;
          local_8 = local_8 + 1;
          uVar7 = local_6c[iVar14];
          iVar14 = FUN_00413367();
          dVar2 = (double)iVar14;
          local_18 = (double)iVar14;
          local_10 = (double)(int)local_30._4_4_ * _DAT_008e89d0;
          if (dVar2 <= local_10) {
            if (dVar2 != local_10) goto LAB_0066da6d;
          }
          else {
            FUN_00671963(&local_18,&local_10);
LAB_0066da6d:
            dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
          }
          dVar2 = dVar2 * _DAT_008ecb30;
          break;
        }
        if (local_28 == (code *)0x3eba9c) {
          iVar14 = FUN_006509a1(param_13);
          iVar8 = FUN_00413367(iVar14 + 0xac,*(undefined4 *)(iVar14 + 0xb4));
          local_18 = (double)CONCAT44(iVar8,(undefined4)local_18);
          local_10 = (double)iVar8 * _DAT_008ed708;
          iVar8 = FUN_00413367();
          local_18 = (double)iVar8 * _DAT_008e89d0;
          local_8 = local_8 + 1;
          if (local_10 < (double)iVar8 * _DAT_008e89d0) {
            FUN_00671963(&local_18,&local_10);
          }
          iVar8 = __ftol();
          local_24 = (double)(iVar8 * 10);
          iVar8 = local_8 % 7;
          local_18 = _DAT_008e9978;
          local_30 = 0.0;
          local_8 = local_8 + 1;
          local_10 = (double)(local_6c[iVar8] % 10000000) * _DAT_008ed738;
          iVar8 = FUN_00413367(iVar14 + 0xf4,*(undefined4 *)(iVar14 + 0xfc));
          local_18 = (double)CONCAT44(iVar8,(undefined4)local_18);
          if (local_10 < (double)iVar8) {
            iVar14 = FUN_00413367(iVar14 + 0x13c,*(undefined4 *)(iVar14 + 0x144));
            local_18 = (double)CONCAT44(iVar14 + 100,(undefined4)local_18);
            *(undefined4 *)(param_15 + param_7 * 4) = 1;
            local_24 = (double)(iVar14 + 100) * local_24 * _DAT_008e8cd0;
          }
          goto switchD_0066cf2b_caseD_22;
        }
        local_34 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
        uVar9 = *(undefined4 *)(iVar4 + 0x2c);
        iVar14 = iVar4 + 0x24;
        local_1c = FUN_00413367();
        uVar9 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50),iVar14,uVar9);
        local_30 = (double)CONCAT44(uVar9,(undefined4)local_30);
        iVar14 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        iVar14 = FUN_00413367(iVar4 + 0x48,*(undefined4 *)(iVar4 + 0x50));
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066d9af;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066d9af:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        iVar14 = local_1c + local_34;
        local_18 = (double)CONCAT44(iVar14,(undefined4)local_18);
LAB_0066d9ea:
        local_24 = (dVar2 * _DAT_008ed768 + (double)iVar14) * (double)param_2 * _DAT_008e8cd0;
        goto switchD_0066cf2b_caseD_22;
      case 0x30:
        local_1c = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38));
        uVar9 = *(undefined4 *)(iVar4 + 0x2c);
        iVar14 = iVar4 + 0x24;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066dc83;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066dc83:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        dVar2 = dVar2 * _DAT_008ed760 + (double)(int)local_1c;
        break;
      case 0x31:
        local_1c = FUN_00413367(iVar4 + 0x24,*(undefined4 *)(iVar4 + 0x2c));
        uVar9 = *(undefined4 *)(iVar4 + 0x38);
        iVar14 = iVar4 + 0x30;
        uVar10 = FUN_00413367();
        local_30 = (double)CONCAT44(uVar10,(undefined4)local_30);
        iVar8 = local_8 % 7;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar8];
        iVar14 = FUN_00413367(iVar4 + 0x30,*(undefined4 *)(iVar4 + 0x38),iVar14,uVar9);
        dVar2 = (double)iVar14;
        local_18 = (double)iVar14;
        local_10 = (double)(int)local_30._4_4_ * local_3c;
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066dd39;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066dd39:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        local_24 = (dVar2 * _DAT_008ed768 + (double)(int)local_1c) * (double)param_2 * _DAT_008e8cd0
        ;
        if (local_28 == (code *)0x4f837c) {
          if (param_8 / 1000 == 0x91b) goto switchD_0066cf2b_caseD_22;
          local_24 = local_24 * _DAT_008e89d0;
        }
        if ((local_28 == FUN_004f8376) && (param_8 / 1000 != 0x91c)) {
          local_24 = local_24 * _DAT_008e89d0;
        }
        goto switchD_0066cf2b_caseD_22;
      }
LAB_0066dcb9:
      local_24 = dVar2 * (double)param_2 * _DAT_008e8cd0;
switchD_0066cf2b_caseD_22:
      if (param_19 == 0) {
        iVar14 = FUN_00413367(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
        if (iVar14 < *param_5) {
          iVar14 = FUN_00413367(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
          local_18 = (double)CONCAT44(*param_5 - iVar14,(undefined4)local_18);
          local_24 = (_DAT_008e9978 - (double)(*param_5 - iVar14)) * local_24 * _DAT_008e8cd0;
        }
      }
      fVar16 = (float10)FUN_0066e37d(local_24,param_12,param_5 + 1,param_13);
      local_24 = (double)fVar16;
      fVar16 = (float10)FUN_0066e50b(local_24,param_5 + 1,param_3,param_1);
      local_24 = (double)fVar16;
      if ((((local_28 != (code *)0x14011d) && (local_28 != (code *)0x3eba9c)) &&
          (local_28 != (code *)0x40413a)) && (local_28 != ptr_004e23ec)) {
        local_34 = param_5[0xe] + param_5[0xd];
        if ((int)local_34 < 1) {
          local_34 = 0;
        }
        if (0x7ce < (int)local_34) {
          local_34 = 1999;
        }
        local_10 = (double)(int)local_34 * _DAT_008e89d0;
        iVar14 = local_8 % 7;
        dVar2 = (double)(int)local_34 * _DAT_008ecb60;
        local_18 = dVar2;
        local_8 = local_8 + 1;
        uVar7 = local_6c[iVar14];
        if (dVar2 <= local_10) {
          if (dVar2 != local_10) goto LAB_0066dee3;
        }
        else {
          FUN_00671963(&local_18,&local_10);
LAB_0066dee3:
          dVar2 = (double)(uVar7 % 10000000) * (local_10 - local_18) * _DAT_008ed7a0 + local_18;
        }
        local_24 = local_24 - dVar2;
      }
      uVar9 = __ftol();
      local_10 = (double)CONCAT44(uVar9,(undefined4)local_10);
      if (param_12 == (int *)0x0) {
        local_34 = 0;
      }
      else {
        iVar14 = FUN_006509a1(param_13);
        local_34 = FUN_00413367(iVar14 + 0xd0,*(undefined4 *)(iVar14 + 0xd8));
      }
      iVar14 = FUN_00413367(param_3 + 0x36c,*(undefined4 *)(param_3 + 0x374));
      uVar9 = FUN_0065361e(param_1,local_28,iVar14 + -1);
      local_30 = (double)CONCAT44(uVar9,(undefined4)local_30);
      if ((local_28 == (code *)0x4f837c) || (local_28 == FUN_004f8376)) {
        local_1c = 0;
        iVar14 = FUN_00650dae(param_1,0x4fa6a1,&local_1c);
        if ((iVar14 != 0) && (local_1c != 0)) {
          iVar14 = FUN_006509a1(iVar14);
          iVar14 = FUN_00413367(iVar14 + 0xd0,*(undefined4 *)(iVar14 + 0xd8));
          local_34 = local_34 + iVar14;
        }
      }
      if (((param_18 != 0) && (uVar7 = param_18, local_28 == (code *)0x127a7a)) ||
         (uVar7 = local_34, 0 < (int)local_34)) {
        local_24 = (double)(int)uVar7 * _DAT_008e8cd0 * local_24;
      }
      if (0 < (int)local_30._4_4_) {
        local_24 = (double)(int)local_30._4_4_ * _DAT_008e8cd0 * local_24;
      }
      if ((((((local_28 != (code *)0x30fefb) && (local_28 != (code *)0x3eba9c)) &&
            (local_28 != (code *)0x406849)) || (param_10 == 0x3a)) &&
          ((0 < local_48 && (0 < local_40)))) &&
         (((0 < local_70 ||
           ((iVar14 = FUN_00413367(param_3 + 0x5dc,*(undefined4 *)(param_3 + 0x5e4)), iVar14 != 0 ||
            (local_50 != 0)))) &&
          (iVar14 = local_8 % 7, local_8 = local_8 + 1,
          (double)(local_6c[iVar14] % 10000000) * _DAT_008ed738 < (double)local_48)))) {
        local_18 = (double)CONCAT44(local_40 + -100,(undefined4)local_18);
        *(undefined4 *)(param_15 + param_7 * 4) = 1;
        local_24 = (double)(local_40 + -100) * _DAT_008e8cd0 * (double)local_10._4_4_ + local_24;
      }
      if (local_28 != (code *)0x14011d) {
        iVar14 = param_5[0x3b];
        local_10 = (double)CONCAT44(iVar14,(undefined4)local_10);
        if (iVar14 != 0) {
          local_24 = (double)iVar14 * local_24 * _DAT_008e8cd0;
        }
      }
      if (((param_11 != 0) && (local_28 != (code *)0x3ee1ab)) &&
         (iVar14 = param_6 / 2, iVar14 <= param_7)) {
        if (param_12 == (int *)0x0) {
          iVar8 = FUN_006509a1(uVar6);
          iVar8 = FUN_00413367(iVar8 + 0x13c,*(undefined4 *)(iVar8 + 0x144));
          iVar13 = (param_7 - iVar14) * 4;
          iVar14 = (*(int *)(iVar13 + param_14) * iVar8) / 100;
          local_10 = (double)CONCAT44(iVar14,(undefined4)local_10);
        }
        else {
          iVar8 = FUN_006509a1(uVar6);
          iVar8 = FUN_00413367(iVar8 + 0x148,*(undefined4 *)(iVar8 + 0x150));
          iVar13 = (param_7 - iVar14) * 4;
          iVar14 = (*(int *)(iVar13 + param_14) * iVar8) / 100;
          local_10 = (double)CONCAT44(iVar14,(undefined4)local_10);
        }
        local_24 = (double)iVar14;
        *(undefined4 *)(param_15 + param_7 * 4) = *(undefined4 *)(iVar13 + param_15);
      }
      if (local_28 == (code *)0x406849) {
        iVar14 = FUN_00413367(param_3 + 0x1f8,*(undefined4 *)(param_3 + 0x200));
        if (iVar14 == 0) {
          local_24 = 0.0;
        }
        else {
          iVar14 = FUN_006509a1(param_13);
          iVar8 = FUN_00413367(iVar14 + 0xe8,*(undefined4 *)(iVar14 + 0xf0));
          iVar14 = FUN_00413367();
          DVar11 = timeGetTime();
          iVar14 = (int)(DVar11 - iVar14) / 1000;
          if (iVar8 <= iVar14) {
            iVar14 = iVar8;
          }
          iVar14 = iVar14 / 3 + 1;
          local_10 = (double)CONCAT44(iVar14,(undefined4)local_10);
          local_24 = (double)iVar14 * local_24;
        }
      }
      if (param_16 != 0) {
        if (local_28 == (code *)0x4dd5cc) {
          iVar14 = (param_16 * 0x5a) / 1000;
        }
        else {
          iVar14 = (param_16 * 0x5a) / 2000;
        }
        local_10 = (double)CONCAT44(iVar14 + 10,(undefined4)local_10);
        local_24 = (double)(iVar14 + 10) * local_24 * _DAT_008e8cd0;
      }
      if ((param_5[0x51] == 0) || (*(int *)(param_15 + param_7 * 4) != 0)) {
        if (param_17 != 0) {
          local_24 = ((double)param_17 + _DAT_008e9978) * local_24 * _DAT_008e8cd0;
        }
        FUN_0066c156();
        if (local_28 == ptr_004e23ec) {
          if (param_7 == 4) {
            local_24 = local_24 + local_24;
          }
          else if (param_7 == 5) {
            local_24 = local_24 * _DAT_008ed758;
          }
        }
        uVar9 = __ftol();
LAB_0066e312:
        *local_44 = uVar9;
      }
      else {
        *local_44 = 0;
      }
LAB_0066e317:
      param_7 = param_7 + 1;
    } while (param_7 < param_6);
  }
  return;
}


