/* FUN_5041ab35 - 0x5041ab35 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041ab35(void *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined2 *extraout_EDX;
  undefined2 *puVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_5041841d(this,param_3);
  }
  iVar2 = *(int *)((int)this + 0x2c);
  FUN_50418baf(iVar2);
  uVar5 = 0;
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar3 = 0;
    puVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      *puVar4 = (short)(int)ROUND(*(float *)(iVar3 + 8 + param_3) * _DAT_5042e1e4 + fVar1);
      puVar4[1] = (short)(int)ROUND(*(float *)(iVar3 + 4 + param_3) * _DAT_5042e1e4 + fVar1);
      puVar4[2] = (short)(int)ROUND(*(float *)(iVar3 + param_3) * _DAT_5042e1e4 + fVar1);
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar5 < *(uint *)((int)this + 0x1058));
  }
  return;
}


