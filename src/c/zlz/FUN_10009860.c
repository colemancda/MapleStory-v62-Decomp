/* FUN_10009860 - 0x10009860 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10009860(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  ushort *puVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int local_1c;
  int local_14;
  
  piVar6 = param_1;
  iVar2 = param_2[1];
  iVar3 = *param_2;
  piVar14 = (int *)param_2[2];
  iVar8 = *piVar14;
  uVar17 = piVar14[4];
  iVar4 = piVar14[1];
  iVar5 = piVar14[2];
  piVar14 = param_1 + 0x2cd;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  local_1c = 0;
  *(undefined2 *)(iVar3 + 2 + param_1[param_1[0x513] + 0x2d5] * 4) = 0;
  iVar10 = param_1[0x513] + 1;
  if (iVar10 < 0x23d) {
    param_1 = param_1 + param_1[0x513] + 0x2d6;
    local_14 = 0x23d - iVar10;
    piVar14 = (int *)(iVar10 + local_14);
    do {
      iVar10 = *param_1;
      uVar7 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar10 * 4) * 4) + 1;
      if ((int)uVar17 < (int)uVar7) {
        local_1c = local_1c + 1;
        uVar7 = uVar17;
      }
      *(short *)(iVar3 + 2 + iVar10 * 4) = (short)uVar7;
      if (iVar10 <= iVar2) {
        psVar11 = (short *)((int)piVar6 + uVar7 * 2 + 0xb34);
        *psVar11 = *psVar11 + 1;
        iVar16 = 0;
        if (iVar5 <= iVar10) {
          iVar16 = *(int *)(iVar4 + (iVar10 - iVar5) * 4);
        }
        uVar15 = (uint)*(ushort *)(iVar3 + iVar10 * 4);
        piVar6[0x5a8] = piVar6[0x5a8] + (uVar7 + iVar16) * uVar15;
        if (iVar8 != 0) {
          piVar6[0x5a9] =
               piVar6[0x5a9] + ((uint)*(ushort *)(iVar8 + 2 + iVar10 * 4) + iVar16) * uVar15;
        }
      }
      param_1 = param_1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_1c != 0) {
      do {
        iVar8 = uVar17 - 1;
        psVar11 = (short *)((int)piVar6 + iVar8 * 2 + 0xb34);
        sVar1 = *(short *)((int)piVar6 + iVar8 * 2 + 0xb34);
        while (sVar1 == 0) {
          psVar11 = psVar11 + -1;
          iVar8 = iVar8 + -1;
          sVar1 = *psVar11;
        }
        psVar11 = (short *)((int)piVar6 + iVar8 * 2 + 0xb34);
        *psVar11 = *psVar11 + -1;
        psVar11 = (short *)((int)piVar6 + iVar8 * 2 + 0xb36);
        *psVar11 = *psVar11 + 2;
        psVar11 = (short *)((int)piVar6 + uVar17 * 2 + 0xb34);
        *psVar11 = *psVar11 + -1;
        local_1c = local_1c + -2;
      } while (0 < local_1c);
      if (uVar17 != 0) {
        puVar12 = (ushort *)((int)piVar6 + uVar17 * 2 + 0xb34);
        param_2 = piVar14;
        do {
          piVar9 = (int *)(uint)*puVar12;
          if (piVar9 != (int *)0x0) {
            piVar13 = piVar6 + (int)piVar14 + 0x2d5;
            param_1 = piVar9;
            do {
              iVar8 = piVar13[-1];
              piVar14 = (int *)((int)param_2 + -1);
              piVar13 = piVar13 + -1;
              if (iVar8 <= iVar2) {
                uVar7 = (uint)*(ushort *)(iVar3 + 2 + iVar8 * 4);
                if (uVar7 != uVar17) {
                  piVar6[0x5a8] =
                       piVar6[0x5a8] + (uVar17 - uVar7) * (uint)*(ushort *)(iVar3 + iVar8 * 4);
                  *(short *)(iVar3 + 2 + iVar8 * 4) = (short)uVar17;
                }
                piVar9 = (int *)((int)param_1 - 1);
                param_1 = piVar9;
              }
              param_2 = piVar14;
            } while (piVar9 != (int *)0x0);
          }
          uVar17 = uVar17 - 1;
          puVar12 = puVar12 + -1;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}


