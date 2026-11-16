/* ptr_50412b4c - 0x50412b4c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50412b4c(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar3 = (float10)fcos((float10)(param_4 * _DAT_5042e12c));
  fVar6 = (float10)fsin((float10)(param_4 * _DAT_5042e12c));
  fVar1 = (float)fVar3;
  fVar2 = (float)fVar6;
  fVar3 = (float10)fcos((float10)(param_3 * _DAT_5042e12c));
  fVar7 = (float10)fsin((float10)(param_3 * _DAT_5042e12c));
  fVar6 = (float10)fcos((float10)(param_2 * _DAT_5042e12c));
  fVar8 = (float10)fsin((float10)(param_2 * _DAT_5042e12c));
  fVar4 = (float)fVar8 * (float)fVar3;
  fVar5 = (float)fVar6 * (float)fVar7;
  *param_1 = fVar4 * fVar2 + fVar1 * fVar5;
  param_1[1] = fVar4 * fVar1 - fVar5 * fVar2;
  fVar4 = (float)fVar6 * (float)fVar3;
  fVar5 = (float)fVar8 * (float)fVar7;
  param_1[2] = fVar4 * fVar2 - fVar5 * fVar1;
  param_1[3] = fVar4 * fVar1 + fVar5 * fVar2;
  return;
}


