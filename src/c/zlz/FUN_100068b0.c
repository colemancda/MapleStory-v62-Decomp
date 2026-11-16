/* FUN_100068b0 - 0x100068b0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_100068b0(uint param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 *local_c;
  byte *local_8;
  undefined1 *local_4;
  
  piVar6 = param_2;
  uVar5 = param_1;
  piVar3 = *(int **)(param_1 + 4);
  uVar11 = *(uint *)(param_1 + 0x1c);
  pbVar12 = (byte *)*param_2;
  puVar10 = *(undefined1 **)(param_1 + 0x34);
  if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
    local_c = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x20);
    param_2 = (int *)param_2[1];
  }
  else {
    local_c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x20);
    param_2 = (int *)param_2[1];
  }
  do {
    switch(*piVar3) {
    case 0:
      if (((undefined1 *)0x101 < local_c) && ((int *)0x9 < param_2)) {
        *(uint *)(uVar5 + 0x20) = param_1;
        *(uint *)(uVar5 + 0x1c) = uVar11;
        piVar6[1] = (int)param_2;
        piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
        *piVar6 = (int)pbVar12;
        *(undefined1 **)(uVar5 + 0x34) = puVar10;
        param_3 = FUN_10007060((uint)*(byte *)(piVar3 + 4),(uint)*(byte *)((int)piVar3 + 0x11),
                               piVar3[5],piVar3[6],uVar5,piVar6);
        param_2 = (int *)piVar6[1];
        param_1 = *(uint *)(uVar5 + 0x20);
        pbVar12 = (byte *)*piVar6;
        uVar11 = *(uint *)(uVar5 + 0x1c);
        puVar10 = *(undefined1 **)(uVar5 + 0x34);
        if (puVar10 < *(undefined1 **)(uVar5 + 0x30)) {
          local_c = *(undefined1 **)(uVar5 + 0x30) + (-1 - (int)puVar10);
        }
        else {
          local_c = (undefined1 *)(*(int *)(uVar5 + 0x2c) - (int)puVar10);
        }
        if (param_3 != 0) {
          *piVar3 = (-(uint)(param_3 != 1) & 2) + 7;
          break;
        }
      }
      *piVar3 = 1;
      piVar3[3] = (uint)*(byte *)(piVar3 + 4);
      piVar3[2] = piVar3[5];
    case 1:
      for (; uVar11 < (uint)piVar3[3]; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) {
LAB_10006e35:
          *(uint *)(uVar5 + 0x20) = param_1;
          *(uint *)(uVar5 + 0x1c) = uVar11;
          piVar6[1] = 0;
          piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
          *piVar6 = (int)pbVar12;
          *(undefined1 **)(uVar5 + 0x34) = puVar10;
          FUN_10008290(uVar5,(int)piVar6,param_3);
          return;
        }
        param_2 = (int *)((int)param_2 + -1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      local_8 = (byte *)(piVar3[2] + (*(uint *)(&DAT_10011500 + piVar3[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar11 = uVar11 - local_8[1];
      bVar2 = *local_8;
      uVar8 = (uint)bVar2;
      if (uVar8 == 0) {
        piVar3[2] = *(int *)(local_8 + 4);
        *piVar3 = 6;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
LAB_10006a7c:
          piVar3[3] = uVar8;
          piVar3[2] = (int)(local_8 + *(int *)(local_8 + 4) * 8);
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *piVar3 = 9;
            piVar6[6] = (int)s_invalid_literal_length_code_10010278;
LAB_10006e81:
            *(uint *)(uVar5 + 0x20) = param_1;
            *(uint *)(uVar5 + 0x1c) = uVar11;
            piVar6[1] = (int)param_2;
            piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
            *piVar6 = (int)pbVar12;
            *(undefined1 **)(uVar5 + 0x34) = puVar10;
            FUN_10008290(uVar5,(int)piVar6,-3);
            return;
          }
          *piVar3 = 7;
        }
      }
      else {
        piVar3[2] = bVar2 & 0xf;
        piVar3[1] = *(int *)(local_8 + 4);
        *piVar3 = 2;
      }
      break;
    case 2:
      uVar8 = piVar3[2];
      for (; uVar11 < uVar8; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_10006e35;
        param_2 = (int *)((int)param_2 + -1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      piVar3[1] = piVar3[1] + (*(uint *)(&DAT_10011500 + uVar8 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar8 & 0x1f);
      uVar11 = uVar11 - uVar8;
      *piVar3 = 3;
      piVar3[3] = (uint)*(byte *)((int)piVar3 + 0x11);
      piVar3[2] = piVar3[6];
    case 3:
      for (; uVar11 < (uint)piVar3[3]; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_10006e35;
        param_2 = (int *)((int)param_2 + -1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      local_8 = (byte *)(piVar3[2] + (*(uint *)(&DAT_10011500 + piVar3[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar11 = uVar11 - local_8[1];
      bVar2 = *local_8;
      uVar8 = (uint)bVar2;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          *piVar3 = 9;
          piVar6[6] = (int)s_invalid_distance_code_10010260;
          goto LAB_10006e81;
        }
        goto LAB_10006a7c;
      }
      piVar3[2] = bVar2 & 0xf;
      piVar3[3] = *(int *)(local_8 + 4);
      *piVar3 = 4;
      break;
    case 4:
      uVar8 = piVar3[2];
      for (; uVar11 < uVar8; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_10006e35;
        param_2 = (int *)((int)param_2 + -1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      piVar3[3] = piVar3[3] + (*(uint *)(&DAT_10011500 + uVar8 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar8 & 0x1f);
      uVar11 = uVar11 - uVar8;
      *piVar3 = 5;
    case 5:
      if ((uint)((int)puVar10 - *(int *)(uVar5 + 0x28)) < (uint)piVar3[3]) {
        iVar7 = (*(int *)(uVar5 + 0x2c) - *(int *)(uVar5 + 0x28)) - piVar3[3];
      }
      else {
        iVar7 = -piVar3[3];
      }
      local_4 = puVar10 + iVar7;
      iVar7 = piVar3[1];
      while (iVar7 != 0) {
        puVar9 = puVar10;
        if (local_c == (undefined1 *)0x0) {
          if (puVar10 == *(undefined1 **)(uVar5 + 0x2c)) {
            local_c = *(undefined1 **)(uVar5 + 0x30);
            puVar9 = *(undefined1 **)(uVar5 + 0x28);
            if (local_c != puVar9) {
              if (puVar9 < local_c) {
                local_c = local_c + (-1 - (int)puVar9);
              }
              else {
                local_c = *(undefined1 **)(uVar5 + 0x2c) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_c != (undefined1 *)0x0) goto LAB_10006d21;
            }
          }
          *(undefined1 **)(uVar5 + 0x34) = puVar10;
          param_3 = FUN_10008290(uVar5,(int)piVar6,param_3);
          puVar9 = *(undefined1 **)(uVar5 + 0x34);
          puVar10 = *(undefined1 **)(uVar5 + 0x30);
          if (puVar9 < puVar10) {
            local_c = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_c = (undefined1 *)(*(int *)(uVar5 + 0x2c) - (int)puVar9);
          }
          if ((puVar9 == *(undefined1 **)(uVar5 + 0x2c)) &&
             (puVar4 = *(undefined1 **)(uVar5 + 0x28), puVar10 != puVar4)) {
            puVar9 = puVar4;
            if (puVar4 < puVar10) {
              local_c = puVar10 + (-1 - (int)puVar4);
            }
            else {
              local_c = *(undefined1 **)(uVar5 + 0x2c) + -(int)puVar4;
            }
          }
          if (local_c == (undefined1 *)0x0) goto LAB_10006eb9;
        }
LAB_10006d21:
        *puVar9 = *local_4;
        puVar10 = puVar9 + 1;
        local_4 = local_4 + 1;
        local_c = local_c + -1;
        param_3 = 0;
        if (local_4 == *(undefined1 **)(uVar5 + 0x2c)) {
          local_4 = *(undefined1 **)(uVar5 + 0x28);
        }
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
      }
      *piVar3 = 0;
      break;
    case 6:
      puVar9 = puVar10;
      if (local_c == (undefined1 *)0x0) {
        if (puVar10 == *(undefined1 **)(uVar5 + 0x2c)) {
          local_c = *(undefined1 **)(uVar5 + 0x30);
          puVar9 = *(undefined1 **)(uVar5 + 0x28);
          if (local_c != puVar9) {
            if (puVar9 < local_c) {
              local_c = local_c + (-1 - (int)puVar9);
            }
            else {
              local_c = *(undefined1 **)(uVar5 + 0x2c) + -(int)puVar9;
            }
            puVar10 = puVar9;
            if (local_c != (undefined1 *)0x0) goto LAB_10006e04;
          }
        }
        *(undefined1 **)(uVar5 + 0x34) = puVar10;
        param_3 = FUN_10008290(uVar5,(int)piVar6,param_3);
        puVar9 = *(undefined1 **)(uVar5 + 0x34);
        puVar10 = *(undefined1 **)(uVar5 + 0x30);
        if (puVar9 < puVar10) {
          local_c = puVar10 + (-1 - (int)puVar9);
        }
        else {
          local_c = (undefined1 *)(*(int *)(uVar5 + 0x2c) - (int)puVar9);
        }
        if ((puVar9 == *(undefined1 **)(uVar5 + 0x2c)) &&
           (puVar4 = *(undefined1 **)(uVar5 + 0x28), puVar10 != puVar4)) {
          puVar9 = puVar4;
          if (puVar4 < puVar10) {
            local_c = puVar10 + (-1 - (int)puVar4);
          }
          else {
            local_c = *(undefined1 **)(uVar5 + 0x2c) + -(int)puVar4;
          }
        }
        if (local_c == (undefined1 *)0x0) {
LAB_10006eb9:
          *(uint *)(uVar5 + 0x20) = param_1;
          *(uint *)(uVar5 + 0x1c) = uVar11;
          piVar6[1] = (int)param_2;
          piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
          *piVar6 = (int)pbVar12;
          *(undefined1 **)(uVar5 + 0x34) = puVar9;
          FUN_10008290(uVar5,(int)piVar6,param_3);
          return;
        }
      }
LAB_10006e04:
      *puVar9 = (char)piVar3[2];
      puVar10 = puVar9 + 1;
      local_c = local_c + -1;
      param_3 = 0;
      *piVar3 = 0;
      break;
    case 7:
      if (7 < uVar11) {
        uVar11 = uVar11 - 8;
        param_2 = (int *)((int)param_2 + 1);
        pbVar12 = pbVar12 + -1;
      }
      *(undefined1 **)(uVar5 + 0x34) = puVar10;
      iVar7 = FUN_10008290(uVar5,(int)piVar6,param_3);
      puVar10 = *(undefined1 **)(uVar5 + 0x34);
      if (*(undefined1 **)(uVar5 + 0x30) != puVar10) {
        *(uint *)(uVar5 + 0x20) = param_1;
        *(uint *)(uVar5 + 0x1c) = uVar11;
        piVar6[1] = (int)param_2;
        piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
        *piVar6 = (int)pbVar12;
        *(undefined1 **)(uVar5 + 0x34) = puVar10;
        FUN_10008290(uVar5,(int)piVar6,iVar7);
        return;
      }
      *piVar3 = 8;
    case 8:
      goto switchD_100068fc_caseD_8;
    case 9:
      *(uint *)(uVar5 + 0x20) = param_1;
      *(uint *)(uVar5 + 0x1c) = uVar11;
      piVar6[1] = (int)param_2;
      piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
      *piVar6 = (int)pbVar12;
      *(undefined1 **)(uVar5 + 0x34) = puVar10;
      FUN_10008290(uVar5,(int)piVar6,-3);
      return;
    default:
      *(uint *)(uVar5 + 0x20) = param_1;
      *(uint *)(uVar5 + 0x1c) = uVar11;
      piVar6[1] = (int)param_2;
      piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
      *piVar6 = (int)pbVar12;
      *(undefined1 **)(uVar5 + 0x34) = puVar10;
      FUN_10008290(uVar5,(int)piVar6,-2);
      return;
    }
  } while( true );
switchD_100068fc_caseD_8:
  *(uint *)(uVar5 + 0x20) = param_1;
  *(uint *)(uVar5 + 0x1c) = uVar11;
  piVar6[1] = (int)param_2;
  piVar6[2] = (int)(pbVar12 + (piVar6[2] - *piVar6));
  *piVar6 = (int)pbVar12;
  *(undefined1 **)(uVar5 + 0x34) = puVar10;
  FUN_10008290(uVar5,(int)piVar6,1);
  return;
}


