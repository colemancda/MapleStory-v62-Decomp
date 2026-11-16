/* FUN_504124e0 - 0x504124e0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_504124e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fcos((float10)param_3);
  fVar11 = (float10)fsin((float10)param_3);
  fVar1 = (float)fVar6;
  fVar2 = (float)fVar11;
  fVar7 = 1.0 - fVar1;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  thunk_FUN_504110c9();
  fVar8 = fVar4 * fVar3 * fVar7;
  fVar9 = fVar4 * fVar5 * fVar7;
  fVar10 = fVar5 * fVar3 * fVar7;
  *param_1 = fVar3 * fVar3 * fVar7 + fVar1;
  param_1[1] = fVar8 + fVar5 * fVar2;
  param_1[2] = fVar10 - fVar4 * fVar2;
  param_1[3] = 0.0;
  param_1[4] = fVar8 - fVar5 * fVar2;
  param_1[5] = fVar4 * fVar4 * fVar7 + fVar1;
  param_1[6] = fVar3 * fVar2 + fVar9;
  param_1[7] = 0.0;
  param_1[8] = fVar4 * fVar2 + fVar10;
  param_1[9] = fVar9 - fVar3 * fVar2;
  param_1[10] = fVar5 * fVar5 * fVar7 + fVar1;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}


