/* FUN_5041a099 - 0x5041a099 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041a099(void *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  byte *extraout_EDX;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_5041841d(this,param_3);
  }
  iVar2 = *(int *)((int)this + 0x2c);
  FUN_50418baf(iVar2);
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar5 = 0;
    pbVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar6 & 3) * 4);
      pfVar3 = (float *)(param_3 + iVar5);
      *pbVar4 = (char)(int)ROUND(*(float *)(iVar5 + 0xc + param_3) * _DAT_5042e1d8 + fVar1) << 4 |
                (byte)(int)ROUND((*pfVar3 * _DAT_5042e138 +
                                 pfVar3[1] * _DAT_5042e13c + pfVar3[2] * _DAT_5042e140) *
                                 _DAT_5042e1d8 + fVar1);
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar6 < *(uint *)((int)this + 0x1058));
  }
  return;
}


