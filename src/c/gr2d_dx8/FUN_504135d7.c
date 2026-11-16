/* FUN_504135d7 - 0x504135d7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504135d7(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  fVar1 = *param_2;
  fVar2 = param_3[1];
  fVar3 = param_2[1];
  fVar4 = param_3[5];
  fVar5 = param_3[0xd];
  fVar6 = param_3[0xf] + param_2[1] * param_3[7] + *param_2 * param_3[3];
  *param_1 = param_3[0xc] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar5 + fVar3 * fVar4 + fVar1 * fVar2;
  iVar7 = FUN_50410e65(fVar6,1.0);
  if (iVar7 == 0) {
    fVar6 = 1.0 / fVar6;
    *param_1 = fVar6 * *param_1;
    param_1[1] = fVar6 * param_1[1];
  }
  return;
}


