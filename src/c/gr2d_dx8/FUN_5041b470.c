/* FUN_5041b470 - 0x5041b470 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041b470(void *this,int param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  byte *pbVar3;
  
  fVar2 = _DAT_5042e218;
  pbVar3 = (byte *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  pbVar1 = pbVar3 + *(int *)((int)this + 0x1058) * 2;
  for (; pbVar3 < pbVar1; pbVar3 = pbVar3 + 2) {
    *param_3 = (float)(*pbVar3 >> 5) * fVar2;
    param_3[1] = (float)(*pbVar3 >> 2 & 7) * fVar2;
    param_3[2] = (float)(*pbVar3 & 3) * _DAT_5042e20c;
    param_3[3] = (float)pbVar3[1] * _DAT_5042e1b8;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


