/* FUN_50419fa3 - 0x50419fa3 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_50419fa3(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ushort *extraout_EDX;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_5041841d(this,param_3);
  }
  iVar3 = *(int *)((int)this + 0x2c);
  FUN_50418baf(iVar3);
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar6 = 0;
    puVar5 = extraout_EDX;
    do {
      fVar2 = *(float *)(iVar3 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar7 & 3) * 4);
      pfVar4 = (float *)(param_3 + iVar6);
      iVar1 = iVar6 + 0xc;
      iVar6 = iVar6 + 0x10;
      *puVar5 = (ushort)(((int)ROUND(*(float *)(iVar1 + param_3) * _DAT_5042e1cc + fVar2) & 0xffU)
                        << 8) |
                (ushort)(int)ROUND((*pfVar4 * _DAT_5042e138 +
                                   pfVar4[1] * _DAT_5042e13c + pfVar4[2] * _DAT_5042e140) *
                                   _DAT_5042e1cc + fVar2);
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x1058));
  }
  return;
}


