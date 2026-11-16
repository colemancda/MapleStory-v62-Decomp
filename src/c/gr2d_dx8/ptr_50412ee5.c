/* ptr_50412ee5 - 0x50412ee5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


float * ptr_50412ee5(float *param_1,float *param_2)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  float *extraout_ECX;
  float10 fVar4;
  
  fVar2 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  fVar4 = (float10)fVar2;
  fVar1 = (float10)fcos(fVar4);
  fVar4 = (float10)fsin(fVar4);
  param_1[3] = (float)fVar1;
  iVar3 = FUN_50410e65((float)fVar4,0.0);
  if (iVar3 == 0) {
    fVar2 = (float)fVar4 / fVar2;
    *param_1 = fVar2 * *extraout_ECX;
    param_1[1] = fVar2 * extraout_ECX[1];
    param_1[2] = fVar2 * extraout_ECX[2];
  }
  else if (param_1 != extraout_ECX) {
    *param_1 = *extraout_ECX;
    param_1[1] = extraout_ECX[1];
    param_1[2] = extraout_ECX[2];
  }
  return param_1;
}


