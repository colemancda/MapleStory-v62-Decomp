/* ptr_50413391 - 0x50413391 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_50413391(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  fVar7 = *param_2;
  fVar8 = *param_4;
  fVar9 = param_2[1];
  fVar10 = param_4[1];
  fVar11 = param_2[2];
  fVar12 = param_4[2];
  *param_1 = (fVar11 - fVar12) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar5 - fVar6);
  param_1[1] = (fVar5 - fVar6) * (fVar7 - fVar8) - (fVar11 - fVar12) * (fVar1 - fVar2);
  param_1[2] = (fVar9 - fVar10) * (fVar1 - fVar2) - (fVar7 - fVar8) * (fVar3 - fVar4);
  thunk_FUN_504110c9();
  param_1[3] = -(*param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2]);
  return;
}


