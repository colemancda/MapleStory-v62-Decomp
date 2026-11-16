/* ptr_50412da7 - 0x50412da7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * ptr_50412da7(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *extraout_ECX;
  
  fVar1 = param_2[3] * param_2[3] +
          param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  if (fVar1 <= _DAT_5042e170) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    fVar1 = 0.0;
  }
  else {
    *param_1 = -*param_2;
    param_1[1] = -param_2[1];
    param_1[2] = -param_2[2];
    param_1[3] = param_2[3];
    iVar2 = FUN_50410e65(fVar1,1.0);
    if (iVar2 != 0) {
      return extraout_ECX;
    }
    fVar1 = 1.0 / fVar1;
    *extraout_ECX = fVar1 * *extraout_ECX;
    extraout_ECX[1] = fVar1 * extraout_ECX[1];
    extraout_ECX[2] = fVar1 * extraout_ECX[2];
    fVar1 = fVar1 * extraout_ECX[3];
    param_1 = extraout_ECX;
  }
  param_1[3] = fVar1;
  return param_1;
}


