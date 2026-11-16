/* FUN_10005af0 - 0x10005af0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10005af0(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar2 = param_1;
  local_34 = (uint *)*param_2;
  local_30 = param_2[1];
  local_2c = param_1[8];
  uVar6 = param_1[7];
  puVar8 = (uint *)param_1[0xd];
  if (puVar8 < (uint *)param_1[0xc]) {
    local_28 = (int)param_1[0xc] + (-1 - (int)puVar8);
    param_1 = puVar8;
  }
  else {
    local_28 = param_1[0xb] - (int)puVar8;
    param_1 = puVar8;
  }
switchD_10005ba1_default:
  uVar10 = local_2c;
  switch(*puVar2) {
  case 0:
    goto switchD_10005b3d_caseD_0;
  case 1:
    for (; uVar6 < 0x20; uVar6 = uVar6 + 8) {
      if (local_30 == 0) {
        puVar2[7] = uVar6;
        puVar2[8] = uVar10;
        iVar5 = *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_34;
        param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
        puVar2[0xd] = (uint)param_1;
        FUN_10008290((int)puVar2,(int)param_2,param_3);
        return;
      }
      param_3 = 0;
      local_30 = local_30 - 1;
      uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar6 & 0x1f);
      local_34 = (uint *)((int)local_34 + 1);
    }
    uVar4 = uVar10 & 0xffff;
    if (~uVar10 >> 0x10 != uVar4) {
      *puVar2 = 9;
      param_2[6] = (int)s_invalid_stored_block_lengths_1001022c;
      puVar2[7] = uVar6;
      puVar2[8] = uVar10;
      iVar5 = *param_2;
      *param_2 = (int)local_34;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,-3);
      return;
    }
    uVar6 = 0;
    puVar2[1] = uVar4;
    local_2c = 0;
    if (uVar4 != 0) {
      *puVar2 = 2;
      goto switchD_10005ba1_default;
    }
    break;
  case 2:
    if (local_30 == 0) {
      puVar2[8] = local_2c;
      puVar2[7] = uVar6;
      iVar5 = *param_2;
      *param_2 = (int)local_34;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,param_3);
      return;
    }
    if (local_28 == 0) {
      if (param_1 == (uint *)puVar2[0xb]) {
        puVar8 = (uint *)puVar2[0xc];
        puVar9 = (uint *)puVar2[10];
        if (puVar8 != puVar9) {
          if (puVar9 < puVar8) {
            local_28 = (int)puVar8 + (-1 - (int)puVar9);
          }
          else {
            local_28 = (int)puVar2[0xb] - (int)puVar9;
          }
          param_1 = puVar9;
          if (local_28 != 0) goto LAB_10005d66;
        }
      }
      puVar2[0xd] = (uint)param_1;
      iVar5 = FUN_10008290((int)puVar2,(int)param_2,param_3);
      param_1 = (uint *)puVar2[0xd];
      puVar8 = (uint *)puVar2[0xc];
      if (param_1 < puVar8) {
        local_28 = (int)puVar8 + (-1 - (int)param_1);
      }
      else {
        local_28 = puVar2[0xb] - (int)param_1;
      }
      local_24 = (uint *)puVar2[0xb];
      if ((param_1 == local_24) && (puVar9 = (uint *)puVar2[10], puVar8 != puVar9)) {
        param_1 = puVar9;
        if (puVar9 < puVar8) {
          local_28 = (int)puVar8 + (-1 - (int)puVar9);
        }
        else {
          local_28 = (int)local_24 - (int)puVar9;
        }
      }
      if (local_28 == 0) {
        puVar2[8] = local_2c;
        puVar2[7] = uVar6;
        param_2[1] = local_30;
        param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
        *param_2 = (int)local_34;
        puVar2[0xd] = (uint)param_1;
        FUN_10008290((int)puVar2,(int)param_2,iVar5);
        return;
      }
    }
LAB_10005d66:
    param_3 = 0;
    uVar10 = puVar2[1];
    if (local_30 < puVar2[1]) {
      uVar10 = local_30;
    }
    if (local_28 < uVar10) {
      uVar10 = local_28;
    }
    puVar8 = local_34;
    puVar9 = param_1;
    for (uVar4 = uVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar4 = uVar10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar9 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    local_34 = (uint *)((int)local_34 + uVar10);
    uVar4 = puVar2[1];
    local_30 = local_30 - uVar10;
    param_1 = (uint *)((int)param_1 + uVar10);
    local_28 = local_28 - uVar10;
    puVar2[1] = uVar4 - uVar10;
    if (uVar4 - uVar10 != 0) goto switchD_10005ba1_default;
    break;
  case 3:
    for (; uVar6 < 0xe; uVar6 = uVar6 + 8) {
      if (local_30 == 0) {
        puVar2[7] = uVar6;
        puVar2[8] = uVar10;
        iVar5 = *param_2;
        *param_2 = (int)local_34;
        param_2[1] = 0;
        param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
        puVar2[0xd] = (uint)param_1;
        FUN_10008290((int)puVar2,(int)param_2,param_3);
        return;
      }
      local_30 = local_30 - 1;
      param_3 = 0;
      uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar6 & 0x1f);
      local_34 = (uint *)((int)local_34 + 1);
    }
    puVar2[1] = uVar10 & 0x3fff;
    if ((0x1d < (uVar10 & 0x1f)) || (0x3a0 < (uVar10 & 0x3e0))) {
      *puVar2 = 9;
      param_2[6] = (int)s_too_many_length_or_distance_symb_10010208;
      puVar2[7] = uVar6;
      puVar2[8] = uVar10;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_34;
      param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,-3);
      return;
    }
    uVar4 = (*(code *)param_2[8])
                      (param_2[10],((uVar10 & 0x3fff) >> 5 & 0x1f) + 0x102 + (uVar10 & 0x1f),4);
    puVar2[3] = uVar4;
    if (uVar4 == 0) {
      puVar2[8] = uVar10;
      puVar2[7] = uVar6;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
      *param_2 = (int)local_34;
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,-4);
      return;
    }
    uVar10 = uVar10 >> 0xe;
    uVar6 = uVar6 - 0xe;
    puVar2[2] = 0;
    *puVar2 = 4;
    goto LAB_10005e8d;
  case 4:
LAB_10005e8d:
    if (puVar2[2] < (puVar2[1] >> 10) + 4) {
      do {
        for (; uVar6 < 3; uVar6 = uVar6 + 8) {
          if (local_30 == 0) {
            puVar2[8] = uVar10;
            puVar2[7] = uVar6;
            param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
            *param_2 = (int)local_34;
            param_2[1] = 0;
            puVar2[0xd] = (uint)param_1;
            FUN_10008290((int)puVar2,(int)param_2,param_3);
            return;
          }
          local_30 = local_30 - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar6 & 0x1f);
          local_34 = (uint *)((int)local_34 + 1);
        }
        *(uint *)(puVar2[3] + *(int *)(&DAT_1000d138 + puVar2[2] * 4) * 4) = uVar10 & 7;
        uVar4 = puVar2[2];
        puVar2[2] = uVar4 + 1;
        uVar10 = uVar10 >> 3;
        uVar6 = uVar6 - 3;
      } while (uVar4 + 1 < (puVar2[1] >> 10) + 4);
    }
    uVar4 = puVar2[2];
    while (uVar4 < 0x13) {
      *(undefined4 *)(puVar2[3] + *(int *)(&DAT_1000d138 + puVar2[2] * 4) * 4) = 0;
      uVar4 = puVar2[2] + 1;
      puVar2[2] = uVar4;
    }
    puVar2[4] = 7;
    local_28 = FUN_10007b50((int *)puVar2[3],puVar2 + 4,puVar2 + 5,puVar2[9],(int)param_2);
    if (local_28 == 0) {
      puVar2[2] = 0;
      *puVar2 = 5;
      local_28 = 0;
LAB_10005f76:
      if (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f)) {
        do {
          uVar4 = puVar2[4];
          uVar7 = uVar6;
          if (uVar6 < uVar4) {
            do {
              if (local_30 == 0) goto LAB_10006557;
              local_30 = local_30 - 1;
              uVar6 = uVar7 + 8;
              param_3 = 0;
              uVar4 = puVar2[4];
              uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar7 & 0x1f);
              local_34 = (uint *)((int)local_34 + 1);
              uVar7 = uVar6;
            } while (uVar6 < uVar4);
          }
          iVar5 = puVar2[5] + (*(uint *)(&DAT_10011500 + uVar4 * 4) & uVar10) * 8;
          bVar1 = *(byte *)(iVar5 + 1);
          local_28 = (uint)bVar1;
          local_c = *(uint *)(iVar5 + 4);
          if (local_c < 0x10) {
            uVar10 = uVar10 >> (bVar1 & 0x1f);
            uVar6 = uVar6 - local_28;
            *(uint *)(puVar2[3] + puVar2[2] * 4) = local_c;
            puVar2[2] = puVar2[2] + 1;
          }
          else {
            if (local_c == 0x12) {
              local_24 = (uint *)0x7;
            }
            else {
              local_24 = (uint *)(local_c - 0xe);
            }
            local_2c = ((local_c != 0x12) - 1 & 8) + 3;
            local_10 = local_28 + (int)local_24;
            for (uVar7 = uVar6; uVar7 < local_10; uVar7 = uVar7 + 8) {
              if (local_30 == 0) {
LAB_10006557:
                puVar2[8] = uVar10;
                puVar2[7] = uVar7;
                param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
                *param_2 = (int)local_34;
                param_2[1] = 0;
                puVar2[0xd] = (uint)param_1;
                FUN_10008290((int)puVar2,(int)param_2,param_3);
                return;
              }
              local_30 = local_30 - 1;
              param_3 = 0;
              uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar7 & 0x1f);
              local_34 = (uint *)((int)local_34 + 1);
            }
            uVar10 = uVar10 >> (bVar1 & 0x1f);
            local_2c = local_2c + (*(uint *)(&DAT_10011500 + (int)local_24 * 4) & uVar10);
            uVar10 = uVar10 >> ((byte)local_24 & 0x1f);
            uVar6 = uVar7 - ((int)local_24 + local_28);
            uVar4 = puVar2[2];
            if ((puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f) < local_2c + uVar4) {
LAB_10006596:
              (*(code *)param_2[9])(param_2[10],puVar2[3]);
              *puVar2 = 9;
              param_2[6] = (int)s_invalid_bit_length_repeat_100101ec;
              puVar2[8] = uVar10;
              puVar2[7] = uVar6;
              iVar5 = *param_2;
              param_2[1] = local_30;
              *param_2 = (int)local_34;
              param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
              puVar2[0xd] = (uint)param_1;
              FUN_10008290((int)puVar2,(int)param_2,-3);
              return;
            }
            if (local_c == 0x10) {
              if (uVar4 == 0) goto LAB_10006596;
              uVar3 = *(undefined4 *)((puVar2[3] - 4) + uVar4 * 4);
            }
            else {
              uVar3 = 0;
            }
            do {
              *(undefined4 *)(puVar2[3] + uVar4 * 4) = uVar3;
              uVar4 = uVar4 + 1;
              local_2c = local_2c - 1;
            } while (local_2c != 0);
            puVar2[2] = uVar4;
            local_2c = 0;
          }
        } while (puVar2[2] < (puVar2[1] >> 5 & 0x1f) + 0x102 + (puVar2[1] & 0x1f));
      }
      puVar2[5] = 0;
      local_2c = 9;
      local_24 = (uint *)0x6;
      local_28 = FUN_100080d0((puVar2[1] & 0x1f) + 0x101,(puVar2[1] >> 5 & 0x1f) + 1,
                              (int *)puVar2[3],&local_2c,(uint *)&local_24,&local_4,&local_8,
                              puVar2[9],(int)param_2);
      (*(code *)param_2[9])(param_2[10],puVar2[3]);
      if (local_28 == 0) {
        uVar4 = FUN_10006870((char)local_2c,(char)local_24,local_4,local_8,(int)param_2);
        if (uVar4 == 0) {
          puVar2[8] = uVar10;
          puVar2[7] = uVar6;
          param_2[1] = local_30;
          param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
          *param_2 = (int)local_34;
          puVar2[0xd] = (uint)param_1;
          FUN_10008290((int)puVar2,(int)param_2,-4);
          return;
        }
        puVar2[1] = uVar4;
        *puVar2 = 6;
LAB_100061c4:
        puVar2[8] = uVar10;
        puVar2[7] = uVar6;
        iVar5 = *param_2;
        param_2[1] = local_30;
        *param_2 = (int)local_34;
        param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
        puVar2[0xd] = (uint)param_1;
        iVar5 = FUN_100068b0((uint)puVar2,param_2,param_3);
        if (iVar5 == 1) {
          param_3 = 0;
          FUN_10007040(puVar2[1],(int)param_2);
          local_2c = puVar2[8];
          param_1 = (uint *)puVar2[0xd];
          local_34 = (uint *)*param_2;
          local_30 = param_2[1];
          uVar6 = puVar2[7];
          if (param_1 < (uint *)puVar2[0xc]) {
            local_28 = (int)puVar2[0xc] + (-1 - (int)param_1);
          }
          else {
            local_28 = puVar2[0xb] - (int)param_1;
          }
          if (puVar2[6] == 0) {
            *puVar2 = 0;
            goto switchD_10005ba1_default;
          }
          *puVar2 = 7;
LAB_10006686:
          puVar2[0xd] = (uint)param_1;
          iVar5 = FUN_10008290((int)puVar2,(int)param_2,param_3);
          param_1 = (uint *)puVar2[0xd];
          if ((uint *)puVar2[0xc] == param_1) {
            *puVar2 = 8;
LAB_100066e8:
            puVar2[8] = local_2c;
            puVar2[7] = uVar6;
            param_2[1] = local_30;
            param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
            *param_2 = (int)local_34;
            puVar2[0xd] = (uint)param_1;
            FUN_10008290((int)puVar2,(int)param_2,1);
            return;
          }
          puVar2[8] = local_2c;
          puVar2[7] = uVar6;
          param_2[1] = local_30;
          param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
          *param_2 = (int)local_34;
          puVar2[0xd] = (uint)param_1;
        }
        FUN_10008290((int)puVar2,(int)param_2,iVar5);
        return;
      }
    }
    else {
      (*(code *)param_2[9])(param_2[10],puVar2[3]);
    }
    if (local_28 == 0xfffffffd) {
      *puVar2 = 9;
    }
    puVar2[8] = uVar10;
    puVar2[7] = uVar6;
    param_2[1] = local_30;
    param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
    *param_2 = (int)local_34;
    puVar2[0xd] = (uint)param_1;
    FUN_10008290((int)puVar2,(int)param_2,local_28);
    return;
  case 5:
    goto LAB_10005f76;
  case 6:
    goto LAB_100061c4;
  case 7:
    goto LAB_10006686;
  case 8:
    goto LAB_100066e8;
  case 9:
    puVar2[8] = local_2c;
    puVar2[7] = uVar6;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_34;
    param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
    puVar2[0xd] = (uint)param_1;
    FUN_10008290((int)puVar2,(int)param_2,-3);
    return;
  default:
    puVar2[8] = local_2c;
    puVar2[7] = uVar6;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_34;
    param_2[2] = (int)((int)local_34 + (param_2[2] - iVar5));
    puVar2[0xd] = (uint)param_1;
    FUN_10008290((int)puVar2,(int)param_2,-2);
    return;
  }
  *puVar2 = -(uint)(puVar2[6] != 0) & 7;
  goto switchD_10005ba1_default;
switchD_10005b3d_caseD_0:
  for (; local_2c = uVar10, uVar6 < 3; uVar6 = uVar6 + 8) {
    if (local_30 == 0) {
      puVar2[7] = uVar6;
      puVar2[8] = uVar10;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
      *param_2 = (int)local_34;
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,param_3);
      return;
    }
    local_30 = local_30 - 1;
    param_3 = 0;
    uVar10 = uVar10 | (uint)(byte)*local_34 << ((byte)uVar6 & 0x1f);
    local_34 = (uint *)((int)local_34 + 1);
  }
  puVar2[6] = uVar10 & 1;
  switch((uVar10 & 7) >> 1) {
  case 0:
    uVar4 = uVar6 - 3 & 7;
    local_2c = (uVar10 >> 3) >> (sbyte)uVar4;
    uVar6 = (uVar6 - 3) - uVar4;
    *puVar2 = 1;
    break;
  case 1:
    FUN_10008260(&local_14,&local_18,&local_1c,&local_20);
    uVar4 = FUN_10006870((char)local_14,(char)local_18,local_1c,local_20,(int)param_2);
    puVar2[1] = uVar4;
    if (uVar4 == 0) {
      puVar2[7] = uVar6;
      puVar2[8] = uVar10;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
      *param_2 = (int)local_34;
      puVar2[0xd] = (uint)param_1;
      FUN_10008290((int)puVar2,(int)param_2,-4);
      return;
    }
    local_2c = uVar10 >> 3;
    uVar6 = uVar6 - 3;
    *puVar2 = 6;
    break;
  case 2:
    local_2c = uVar10 >> 3;
    uVar6 = uVar6 - 3;
    *puVar2 = 3;
    break;
  case 3:
    *puVar2 = 9;
    param_2[6] = (int)s_invalid_block_type_1001024c;
    puVar2[7] = uVar6 - 3;
    puVar2[8] = uVar10 >> 3;
    param_2[1] = local_30;
    param_2[2] = (int)((int)local_34 + (param_2[2] - *param_2));
    *param_2 = (int)local_34;
    puVar2[0xd] = (uint)param_1;
    FUN_10008290((int)puVar2,(int)param_2,-3);
    return;
  }
  goto switchD_10005ba1_default;
}


