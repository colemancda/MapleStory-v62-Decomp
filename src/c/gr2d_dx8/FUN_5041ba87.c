/* FUN_5041ba87 - 0x5041ba87 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5041ba87(void *this,int param_1,int param_2,float *param_3)

{
  short *psVar1;
  float fVar2;
  short *psVar3;
  
  fVar2 = _DAT_5042e224;
  psVar3 = (short *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                    + *(int *)((int)this + 0x18));
  psVar1 = psVar3 + *(int *)((int)this + 0x1058) * 2;
  for (; psVar3 < psVar1; psVar3 = psVar3 + 2) {
    *param_3 = (float)(int)*psVar3 * fVar2;
    param_3[1] = (float)(int)psVar3[1] * fVar2;
    param_3[2] = 0.0;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_50418f81(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}


