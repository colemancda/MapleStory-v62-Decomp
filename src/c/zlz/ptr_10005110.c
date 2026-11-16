/* ptr_10005110 - 0x10005110 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


byte ptr_10005110(int *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = 0;
  do {
    uVar7 = param_1[0x1b];
    if (uVar7 < 0x106) {
      FUN_10004f70(param_1);
      uVar7 = param_1[0x1b];
      if ((uVar7 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar7 == 0) {
        iVar4 = param_1[0x15];
        if (iVar4 < 0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5 = (undefined1 *)(param_1[0xc] + iVar4);
        }
        FUN_10009370(param_1,puVar5,param_1[0x19] - iVar4,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        FUN_10004aa0(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return (param_2 != 4) - 1U & 2;
        }
        return ((param_2 != 4) - 1U & 2) + 1;
      }
    }
    if (2 < uVar7) {
      uVar9 = (param_1[0x10] << ((byte)param_1[0x14] & 0x1f) ^
              (uint)*(byte *)(param_1[0xc] + 2 + param_1[0x19])) & param_1[0x13];
      param_1[0x10] = uVar9;
      uVar3 = *(ushort *)(param_1[0xf] + uVar9 * 2);
      uVar9 = (uint)uVar3;
      *(ushort *)(param_1[0xe] + (param_1[0xb] & param_1[0x19]) * 2) = uVar3;
      *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
    }
    if (((uVar9 != 0) && (param_1[0x19] - uVar9 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2)) {
      iVar4 = func_0x10005440(param_1,uVar9);
      param_1[0x16] = iVar4;
    }
    if ((uint)param_1[0x16] < 3) {
      bVar6 = *(byte *)(param_1[0x19] + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar6;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + bVar6 + 0x23) = (short)param_1[bVar6 + 0x23] + 1;
      bVar10 = param_1[0x5a6] == param_1[0x5a5] + -1;
      param_1[0x1b] = param_1[0x1b] + -1;
LAB_1000537c:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      sVar2 = (short)param_1[0x19] - (short)param_1[0x1a];
      bVar6 = (char)param_1[0x16] - 3;
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = sVar2;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar6;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      uVar3 = sVar2 - 1;
      *(short *)(param_1 + (byte)(&DAT_1000ebe4)[bVar6] + 0x124) =
           (short)param_1[(byte)(&DAT_1000ebe4)[bVar6] + 0x124] + 1;
      if (uVar3 < 0x100) {
        bVar6 = (&UNK_1000e9e4)[uVar3];
      }
      else {
        bVar6 = (&DAT_1000eae4)[uVar3 >> 7];
      }
      *(short *)(param_1 + bVar6 + 0x260) = (short)param_1[bVar6 + 0x260] + 1;
      bVar10 = param_1[0x5a6] == param_1[0x5a5] + -1;
      uVar7 = param_1[0x16];
      iVar4 = param_1[0x1b];
      param_1[0x1b] = iVar4 - uVar7;
      if ((uVar7 <= (uint)param_1[0x1e]) && (2 < iVar4 - uVar7)) {
        param_1[0x16] = uVar7 - 1;
        do {
          iVar4 = param_1[0x19];
          uVar7 = iVar4 + 1;
          param_1[0x19] = uVar7;
          uVar9 = ((uint)*(byte *)(iVar4 + 3 + param_1[0xc]) ^
                  param_1[0x10] << ((byte)param_1[0x14] & 0x1f)) & param_1[0x13];
          param_1[0x10] = uVar9;
          uVar3 = *(ushort *)(param_1[0xf] + uVar9 * 2);
          uVar9 = (uint)uVar3;
          *(ushort *)(param_1[0xe] + (uVar7 & param_1[0xb]) * 2) = uVar3;
          *(short *)(param_1[0xf] + param_1[0x10] * 2) = (short)param_1[0x19];
          piVar1 = param_1 + 0x16;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        goto LAB_1000537c;
      }
      pbVar8 = (byte *)(param_1[0xc] + param_1[0x19] + uVar7);
      param_1[0x19] = param_1[0x19] + uVar7;
      param_1[0x16] = 0;
      uVar7 = (uint)*pbVar8;
      param_1[0x10] = uVar7;
      param_1[0x10] = (uVar7 << ((byte)param_1[0x14] & 0x1f) ^ (uint)pbVar8[1]) & param_1[0x13];
    }
    if (bVar10) {
      iVar4 = param_1[0x15];
      if (iVar4 < 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(iVar4 + param_1[0xc]);
      }
      FUN_10009370(param_1,puVar5,param_1[0x19] - iVar4,0);
      param_1[0x15] = param_1[0x19];
      FUN_10004aa0(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


