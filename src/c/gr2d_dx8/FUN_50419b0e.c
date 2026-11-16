/* FUN_50419b0e - 0x50419b0e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_50419b0e(void *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint *extraout_EDX;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_5041841d(this,param_3);
  }
  iVar6 = *(int *)((int)this + 0x2c);
  FUN_50418baf(iVar6);
  uVar9 = 0;
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar7 = 0;
    puVar8 = extraout_EDX;
    do {
      fVar5 = *(float *)(iVar6 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar9 & 3) * 4);
      pfVar1 = (float *)(iVar7 + param_3);
      iVar2 = iVar7 + 4;
      iVar3 = iVar7 + 8;
      iVar4 = iVar7 + 0xc;
      iVar7 = iVar7 + 0x10;
      *puVar8 = (((int)ROUND(*(float *)(iVar4 + param_3) * _DAT_5042e158 + fVar5) << 10 |
                 (int)ROUND(*(float *)(iVar3 + param_3) * _DAT_5042e1e0 + fVar5)) << 10 |
                (int)ROUND(*(float *)(iVar2 + param_3) * _DAT_5042e1e0 + fVar5)) << 10 |
                (int)ROUND(*pfVar1 * _DAT_5042e1e0 + fVar5);
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)((int)this + 0x1058));
  }
  return;
}


