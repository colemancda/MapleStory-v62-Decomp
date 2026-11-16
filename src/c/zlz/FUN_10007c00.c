/* FUN_10007c00 - 0x10007c00 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl
FUN_10007c00(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
            uint *param_7,int param_8,uint *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint *local_f4;
  int local_f0;
  uint *local_e8;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_bc [47];
  
  uVar19 = 0;
  local_bc[0] = 0;
  local_bc[1] = 0;
  local_bc[2] = 0;
  local_bc[3] = 0;
  local_bc[4] = 0;
  local_bc[5] = 0;
  local_bc[6] = 0;
  local_bc[7] = 0;
  local_bc[8] = 0;
  local_bc[9] = 0;
  local_bc[10] = 0;
  local_bc[0xb] = 0;
  local_bc[0xc] = 0;
  local_bc[0xd] = 0;
  local_bc[0xe] = 0;
  local_bc[0xf] = 0;
  piVar9 = param_1;
  uVar14 = param_2;
  do {
    iVar18 = *piVar9;
    piVar9 = piVar9 + 1;
    uVar14 = uVar14 - 1;
    local_bc[iVar18] = local_bc[iVar18] + 1;
  } while (uVar14 != 0);
  if (local_bc[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_fc = 1;
    puVar8 = local_bc;
    do {
      puVar8 = puVar8 + 1;
      if (*puVar8 != 0) break;
      local_fc = local_fc + 1;
    } while (local_fc < 0x10);
    local_100 = *param_7;
    if (*param_7 < local_fc) {
      local_100 = local_fc;
    }
    uVar14 = 0xf;
    puVar8 = local_bc + 0xf;
    do {
      if (*puVar8 != 0) break;
      uVar14 = uVar14 - 1;
      puVar8 = puVar8 + -1;
    } while (uVar14 != 0);
    if (uVar14 < local_100) {
      local_100 = uVar14;
    }
    iVar18 = 1 << ((byte)local_fc & 0x1f);
    *param_7 = local_100;
    if (local_fc < uVar14) {
      puVar8 = local_bc + local_fc;
      uVar10 = local_fc;
      do {
        uVar7 = *puVar8;
        if ((int)(iVar18 - uVar7) < 0) {
          return 0xfffffffd;
        }
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 1;
        iVar18 = (iVar18 - uVar7) * 2;
      } while (uVar10 < uVar14);
    }
    iVar18 = iVar18 - local_bc[uVar14];
    if (iVar18 < 0) {
      return 0xfffffffd;
    }
    local_bc[uVar14] = local_bc[uVar14] + iVar18;
    iVar11 = 0;
    iVar15 = uVar14 - 1;
    local_bc[0x11] = 0;
    if (iVar15 != 0) {
      iVar5 = 0;
      do {
        iVar11 = iVar11 + *(int *)((int)local_bc + iVar5 + 4);
        iVar15 = iVar15 + -1;
        *(int *)((int)local_bc + iVar5 + 0x48) = iVar11;
        iVar5 = iVar5 + 4;
      } while (iVar15 != 0);
    }
    uVar10 = 0;
    do {
      iVar11 = *param_1;
      param_1 = param_1 + 1;
      if (iVar11 != 0) {
        uVar7 = local_bc[iVar11 + 0x10];
        param_10[uVar7] = uVar10;
        local_bc[iVar11 + 0x10] = uVar7 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
    uVar10 = local_bc[uVar14 + 0x10];
    local_f4 = param_10;
    iVar11 = -local_100;
    local_d8 = 0;
    local_bc[0x10] = 0;
    local_f8 = -1;
    local_bc[0x20] = 0;
    local_d0 = 0;
    local_d4 = 0;
    if ((int)local_fc <= (int)uVar14) {
      local_f0 = local_fc - 1;
      local_e8 = local_bc + local_fc;
      do {
        uVar7 = *local_e8;
        uVar2 = local_e0;
        while (uVar7 != 0) {
          uVar16 = uVar7 - 1;
          local_e0._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
          uVar3 = local_e0._2_2_;
          iVar15 = iVar11;
          while (local_e0 = uVar2, iVar15 = iVar15 + local_100, iVar15 < (int)local_fc) {
            iVar11 = iVar11 + local_100;
            uVar19 = uVar14 - iVar11;
            if (local_100 < uVar14 - iVar11) {
              uVar19 = local_100;
            }
            uVar12 = local_fc - iVar11;
            uVar4 = 1 << ((byte)uVar12 & 0x1f);
            if ((uVar7 < uVar4) &&
               (iVar5 = uVar4 + (-1 - uVar16), puVar8 = local_e8, uVar12 < uVar19)) {
              while (uVar12 = uVar12 + 1, uVar12 < uVar19) {
                uVar4 = puVar8[1];
                uVar6 = iVar5 * 2;
                if (uVar6 < uVar4 || uVar6 - uVar4 == 0) break;
                iVar5 = uVar6 - uVar4;
                puVar8 = puVar8 + 1;
              }
            }
            local_d4 = 1 << ((byte)uVar12 & 0x1f);
            uVar19 = local_d4 + *param_9;
            if (0x5a0 < uVar19) {
              return 0xfffffffc;
            }
            local_d0 = param_8 + *param_9 * 8;
            *param_9 = uVar19;
            local_bc[local_f8 + 0x21] = local_d0;
            if (local_f8 + 1 == 0) {
              *param_6 = local_d0;
            }
            else {
              local_e0._2_2_ = (undefined2)((uint)local_e0 >> 0x10);
              local_e0._0_2_ = CONCAT11((char)local_100,(byte)uVar12);
              local_bc[local_f8 + 0x11] = local_d8;
              uVar12 = local_d8 >> ((char)iVar11 - (char)local_100 & 0x1fU);
              uVar19 = local_bc[local_f8 + 0x20];
              local_dc = ((int)(local_d0 - uVar19) >> 3) - uVar12;
              *(undefined4 *)(uVar19 + uVar12 * 8) = local_e0;
              *(uint *)(uVar19 + 4 + uVar12 * 8) = local_dc;
            }
            uVar19 = local_d8;
            local_f8 = local_f8 + 1;
            uVar2 = local_e0;
            uVar3 = local_e0._2_2_;
          }
          bVar17 = (byte)iVar11;
          if (local_f4 < param_10 + uVar10) {
            local_dc = *local_f4;
            if (local_dc < param_3) {
              local_e0._0_1_ = (-(local_dc < 0x100) & 0xa0U) + 0x60;
            }
            else {
              iVar15 = (local_dc - param_3) * 4;
              local_dc = *(uint *)(iVar15 + param_4);
              local_e0._0_1_ = *(char *)(iVar15 + param_5) + 'P';
            }
            local_f4 = local_f4 + 1;
          }
          else {
            local_e0._0_1_ = -0x40;
          }
          local_e0 = CONCAT31(CONCAT21(uVar3,(char)local_fc - bVar17),(char)local_e0);
          iVar15 = 1 << ((char)local_fc - bVar17 & 0x1f);
          uVar7 = uVar19 >> (bVar17 & 0x1f);
          if (uVar7 < local_d4) {
            puVar13 = (undefined4 *)(local_d0 + uVar7 * 8);
            do {
              *puVar13 = local_e0;
              puVar13[1] = local_dc;
              puVar13 = puVar13 + iVar15 * 2;
              uVar7 = uVar7 + iVar15;
            } while (uVar7 < local_d4);
          }
          uVar12 = 1 << ((byte)local_f0 & 0x1f);
          uVar7 = uVar19 & uVar12;
          while (uVar7 != 0) {
            uVar19 = uVar19 ^ uVar12;
            uVar12 = uVar12 >> 1;
            uVar7 = uVar19 & uVar12;
          }
          uVar19 = uVar19 ^ uVar12;
          puVar8 = local_bc + local_f8 + 0x10;
          uVar7 = uVar16;
          uVar2 = local_e0;
          local_d8 = uVar19;
          if (((1 << (bVar17 & 0x1f)) - 1U & uVar19) != local_bc[local_f8 + 0x10]) {
            do {
              iVar11 = iVar11 - local_100;
              puVar1 = puVar8 + -1;
              puVar8 = puVar8 + -1;
              local_f8 = local_f8 + -1;
            } while (((1 << ((byte)iVar11 & 0x1f)) - 1U & uVar19) != *puVar1);
          }
        }
        local_e8 = local_e8 + 1;
        local_fc = local_fc + 1;
        local_f0 = local_f0 + 1;
        local_e0 = uVar2;
      } while ((int)local_fc <= (int)uVar14);
    }
    if ((iVar18 != 0) && (uVar14 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}


