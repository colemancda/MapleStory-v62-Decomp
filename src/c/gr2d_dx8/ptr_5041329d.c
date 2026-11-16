/* ptr_5041329d - 0x5041329d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * ptr_5041329d(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = param_3[2] * param_2[2] + param_2[1] * param_3[1] + *param_2 * *param_3;
  fVar2 = fVar1 - (param_2[1] * param_4[1] + param_4[2] * param_2[2] + *param_2 * *param_4);
  if (fVar2 != _DAT_5042e144) {
    fVar2 = (fVar1 + param_2[3]) / fVar2;
    iVar3 = _finite((double)fVar2);
    if (iVar3 != 0) {
      *param_1 = (*param_4 - *param_3) * fVar2 + *param_3;
      param_1[1] = (param_4[1] - param_3[1]) * fVar2 + param_3[1];
      param_1[2] = (param_4[2] - param_3[2]) * fVar2 + param_3[2];
      return param_1;
    }
  }
  return (float *)0x0;
}


