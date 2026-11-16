/* FUN_5041161f - 0x5041161f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5041161f(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = _DAT_5042e12c;
  fVar1 = param_6 * param_6;
  fVar2 = param_6 * fVar1;
  fVar5 = (fVar1 * _DAT_5042e164 - fVar2) - param_6;
  fVar4 = (fVar2 * _DAT_5042e158 - fVar1 * _DAT_5042e160) + _DAT_5042e164;
  fVar3 = (fVar1 * _DAT_5042e15c - fVar2 * _DAT_5042e158) + param_6;
  fVar2 = fVar2 - fVar1;
  *param_1 = (fVar2 * *param_5 + fVar3 * *param_4 + fVar4 * *param_3 + fVar5 * *param_2) *
             _DAT_5042e12c;
  param_1[1] = (fVar5 * param_2[1] + fVar4 * param_3[1] + fVar3 * param_4[1] + fVar2 * param_5[1]) *
               fVar6;
  param_1[2] = (fVar5 * param_2[2] + fVar4 * param_3[2] + fVar3 * param_4[2] + fVar2 * param_5[2]) *
               fVar6;
  param_1[3] = (fVar5 * param_2[3] + fVar4 * param_3[3] + fVar3 * param_4[3] + fVar2 * param_5[3]) *
               fVar6;
  return;
}


