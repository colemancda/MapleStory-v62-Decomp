/* FUN_10007060 - 0x10007060 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl
FUN_10007060(uint param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  uVar7 = *(uint *)(param_5 + 0x20);
  local_10 = *(undefined1 **)(param_5 + 0x34);
  local_14 = param_6[1];
  pbVar9 = (byte *)*param_6;
  uVar3 = *(uint *)(param_5 + 0x1c);
  if (local_10 < *(undefined1 **)(param_5 + 0x30)) {
    local_c = *(undefined1 **)(param_5 + 0x30) + (-1 - (int)local_10);
  }
  else {
    local_c = (undefined1 *)(*(int *)(param_5 + 0x2c) - (int)local_10);
  }
  uVar6 = *(uint *)(&DAT_10011500 + param_1 * 4);
  uVar5 = *(uint *)(&DAT_10011500 + param_2 * 4);
  do {
    for (; uVar3 < 0x14; uVar3 = uVar3 + 8) {
      local_14 = local_14 - 1;
      uVar7 = uVar7 | (uint)*pbVar9 << ((byte)uVar3 & 0x1f);
      pbVar9 = pbVar9 + 1;
    }
    bVar2 = *(byte *)(param_3 + (uVar6 & uVar7) * 8);
    uVar8 = (uint)bVar2;
    iVar11 = param_3 + (uVar6 & uVar7) * 8;
    if (uVar8 == 0) {
LAB_1000728b:
      uVar7 = uVar7 >> (*(byte *)(iVar11 + 1) & 0x1f);
      uVar3 = uVar3 - *(byte *)(iVar11 + 1);
      *local_10 = *(undefined1 *)(iVar11 + 4);
      local_10 = local_10 + 1;
      local_c = local_c + -1;
    }
    else {
      uVar7 = uVar7 >> (*(byte *)(iVar11 + 1) & 0x1f);
      uVar3 = uVar3 - *(byte *)(iVar11 + 1);
      while ((bVar2 & 0x10) == 0) {
        if ((uVar8 & 0x40) != 0) {
          if ((uVar8 & 0x20) != 0) {
            uVar6 = param_6[1] - local_14;
            if (uVar3 >> 3 < param_6[1] - local_14) {
              uVar6 = uVar3 >> 3;
            }
            *(uint *)(param_5 + 0x20) = uVar7;
            *(uint *)(param_5 + 0x1c) = uVar3 + uVar6 * -8;
            param_6[1] = uVar6 + local_14;
            param_6[2] = param_6[2] + (((int)pbVar9 - uVar6) - *param_6);
            *param_6 = (int)pbVar9 - uVar6;
            *(undefined1 **)(param_5 + 0x34) = local_10;
            return 1;
          }
          uVar5 = param_6[1] - local_14;
          param_6[6] = (int)s_invalid_literal_length_code_10010278;
          uVar6 = uVar3 >> 3;
          if (uVar3 >> 3 < uVar5) goto LAB_100073a0;
          goto LAB_100073a2;
        }
        iVar4 = (*(uint *)(&DAT_10011500 + uVar8 * 4) & uVar7) + *(int *)(iVar11 + 4);
        bVar2 = *(byte *)(iVar11 + iVar4 * 8);
        uVar8 = (uint)bVar2;
        iVar11 = iVar11 + iVar4 * 8;
        if (uVar8 == 0) goto LAB_1000728b;
        uVar7 = uVar7 >> (*(byte *)(iVar11 + 1) & 0x1f);
        uVar3 = uVar3 - *(byte *)(iVar11 + 1);
      }
      uVar8 = uVar8 & 0xf;
      param_1 = (*(uint *)(&DAT_10011500 + uVar8 * 4) & uVar7) + *(int *)(iVar11 + 4);
      uVar7 = uVar7 >> (sbyte)uVar8;
      for (uVar3 = uVar3 - uVar8; uVar3 < 0xf; uVar3 = uVar3 + 8) {
        local_14 = local_14 - 1;
        uVar7 = uVar7 | (uint)*pbVar9 << ((byte)uVar3 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      pbVar1 = (byte *)(param_4 + (uVar5 & uVar7) * 8);
      uVar7 = uVar7 >> (pbVar1[1] & 0x1f);
      uVar3 = uVar3 - pbVar1[1];
      bVar2 = *pbVar1;
      while ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          uVar5 = param_6[1] - local_14;
          param_6[6] = (int)s_invalid_distance_code_10010260;
          uVar6 = uVar3 >> 3;
          if (uVar3 >> 3 < uVar5) {
LAB_100073a0:
            uVar5 = uVar6;
          }
LAB_100073a2:
          *(uint *)(param_5 + 0x20) = uVar7;
          *(uint *)(param_5 + 0x1c) = uVar3 + uVar5 * -8;
          param_6[1] = uVar5 + local_14;
          param_6[2] = param_6[2] + (((int)pbVar9 - uVar5) - *param_6);
          *param_6 = (int)pbVar9 - uVar5;
          *(undefined1 **)(param_5 + 0x34) = local_10;
          return 0xfffffffd;
        }
        pbVar1 = pbVar1 + ((*(uint *)(&DAT_10011500 + (uint)bVar2 * 4) & uVar7) +
                          *(int *)(pbVar1 + 4)) * 8;
        uVar7 = uVar7 >> (pbVar1[1] & 0x1f);
        uVar3 = uVar3 - pbVar1[1];
        bVar2 = *pbVar1;
      }
      uVar8 = bVar2 & 0xf;
      for (; uVar3 < uVar8; uVar3 = uVar3 + 8) {
        local_14 = local_14 - 1;
        uVar7 = uVar7 | (uint)*pbVar9 << ((byte)uVar3 & 0x1f);
        pbVar9 = pbVar9 + 1;
      }
      uVar12 = (*(uint *)(&DAT_10011500 + uVar8 * 4) & uVar7) + *(int *)(pbVar1 + 4);
      uVar7 = uVar7 >> (sbyte)uVar8;
      local_c = local_c + -param_1;
      uVar3 = uVar3 - uVar8;
      if ((uint)((int)local_10 - *(int *)(param_5 + 0x28)) < uVar12) {
        uVar12 = (*(int *)(param_5 + 0x28) - (int)local_10) + uVar12;
        puVar10 = (undefined1 *)(*(int *)(param_5 + 0x2c) - uVar12);
        if (uVar12 < param_1) {
          param_1 = param_1 - uVar12;
          do {
            *local_10 = *puVar10;
            local_10 = local_10 + 1;
            puVar10 = puVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          puVar10 = *(undefined1 **)(param_5 + 0x28);
        }
      }
      else {
        puVar10 = local_10 + -uVar12;
        *local_10 = *puVar10;
        local_10[1] = puVar10[1];
        local_10 = local_10 + 2;
        puVar10 = puVar10 + 2;
        param_1 = param_1 - 2;
      }
      do {
        *local_10 = *puVar10;
        local_10 = local_10 + 1;
        puVar10 = puVar10 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if ((local_c < (undefined1 *)0x102) || (local_14 < 10)) {
      uVar6 = param_6[1] - local_14;
      if (uVar3 >> 3 < param_6[1] - local_14) {
        uVar6 = uVar3 >> 3;
      }
      *(uint *)(param_5 + 0x20) = uVar7;
      *(uint *)(param_5 + 0x1c) = uVar3 + uVar6 * -8;
      param_6[1] = uVar6 + local_14;
      param_6[2] = param_6[2] + (((int)pbVar9 - uVar6) - *param_6);
      *param_6 = (int)pbVar9 - uVar6;
      *(undefined1 **)(param_5 + 0x34) = local_10;
      return 0;
    }
  } while( true );
}


