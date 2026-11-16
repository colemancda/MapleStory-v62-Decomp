/* FUN_50413657 - 0x50413657 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50413657(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1];
  fVar2 = *param_2;
  fVar3 = param_3[5];
  fVar4 = param_2[1];
  *param_1 = *param_2 * *param_3 + param_3[4] * param_2[1];
  param_1[1] = fVar3 * fVar4 + fVar1 * fVar2;
  return;
}


