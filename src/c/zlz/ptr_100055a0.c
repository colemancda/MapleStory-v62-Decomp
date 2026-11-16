/* ptr_100055a0 - 0x100055a0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


byte ptr_100055a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = 0;
  do {
    uVar10 = param_1[0x1b];
    if (uVar10 < 0x106) {
      FUN_10004f70(param_1);
      uVar10 = param_1[0x1b];
      if ((uVar10 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar10 == 0) {
        if (param_1[0x18] != 0) {
          bVar9 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
          *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
          *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar9;
          param_1[0x5a6] = param_1[0x5a6] + 1;
          *(short *)(param_1 + bVar9 + 0x23) = (short)param_1[bVar9 + 0x23] + 1;
          param_1[0x18] = 0;
        }
        iVar7 = param_1[0x15];
        if (iVar7 < 0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          puVar8 = (undefined1 *)(param_1[0xc] + iVar7);
        }
        FUN_10009370(param_1,puVar8,param_1[0x19] - iVar7,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_10004aa0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1U & 2;
        }
        return ((param_2 != 4) - 1U & 2) + 1;
      }
    }
    if (2 < uVar10) {
      uVar11 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
               (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar11;
      uVar6 = *(ushort *)(param_1[0xf] + uVar11 * 2);
      uVar11 = (uint)uVar6;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar6;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    uVar10 = param_1[0x16];
    param_1[0x1c] = uVar10;
    param_1[0x17] = param_1[0x1a];
    param_1[0x16] = 2;
    if (((uVar11 != 0) && (uVar10 < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar11 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        iVar7 = func_0x10005440(param_1,uVar11);
        param_1[0x16] = iVar7;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    if (((uint)param_1[0x1c] < 3) || ((uint)param_1[0x1c] < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
      }
      else {
        bVar9 = *(byte *)(param_1[0x19] + -1 + param_1[0xc]);
        *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
        *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar9;
        param_1[0x5a6] = param_1[0x5a6] + 1;
        *(short *)(param_1 + bVar9 + 0x23) = (short)param_1[bVar9 + 0x23] + 1;
        if (param_1[0x5a6] == param_1[0x5a5] + -1) {
          iVar7 = param_1[0x15];
          if (iVar7 < 0) {
            puVar8 = (undefined1 *)0x0;
          }
          else {
            puVar8 = (undefined1 *)(iVar7 + param_1[0xc]);
          }
          FUN_10009370(param_1,puVar8,param_1[0x19] - iVar7,0);
          param_1[0x15] = param_1[0x19];
          FUN_10004aa0(*param_1);
        }
        param_1[0x19] = param_1[0x19] + 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar7 = param_1[0x19];
      iVar2 = param_1[0x1b];
      sVar5 = (short)iVar7 - (short)param_1[0x17];
      bVar9 = (char)param_1[0x1c] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar5 + -1;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar9;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar6 = sVar5 - 2;
      *(short *)(param_1 + (byte)(&DAT_1000ebe4)[bVar9] + 0x124) =
           (short)param_1[(byte)(&DAT_1000ebe4)[bVar9] + 0x124] + 1;
      if (uVar6 < 0x100) {
        bVar9 = (&UNK_1000e9e4)[uVar6];
      }
      else {
        bVar9 = (&DAT_1000eae4)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar9 + 0x260) = (short)param_1[bVar9 + 0x260] + 1;
      iVar3 = param_1[0x5a5];
      iVar4 = param_1[0x5a6];
      param_1[0x1b] = param_1[0x1b] + (1 - param_1[0x1c]);
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        uVar10 = param_1[0x19] + 1;
        param_1[0x19] = uVar10;
        if (uVar10 <= (uint)(iVar7 + -3 + iVar2)) {
          uVar11 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xc] + 2 + uVar10)) & param_1[0x13];
          param_1[0x10] = uVar11;
          uVar6 = *(ushort *)(param_1[0xf] + uVar11 * 2);
          uVar11 = (uint)uVar6;
          *(ushort *)(param_1[0xe] + (param_1[0xb] & uVar10) * 2) = uVar6;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
        }
        piVar1 = param_1 + 0x1c;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      iVar7 = param_1[0x19];
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = iVar7 + 1;
      if (iVar4 == iVar3 + -1) {
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          puVar8 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_10009370(param_1,puVar8,(iVar7 + 1) - iVar2,0);
        param_1[0x15] = param_1[0x19];
        FUN_10004aa0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}


