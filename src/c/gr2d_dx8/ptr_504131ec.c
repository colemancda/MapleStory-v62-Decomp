/* ptr_504131ec - 0x504131ec in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_504131ec(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  iVar2 = FUN_50410e65(fVar1,1.0);
  if (iVar2 == 0) {
    if (fVar1 <= _DAT_5042e168) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      fVar1 = 0.0;
    }
    else {
      fVar1 = _DAT_5042e130 / SQRT(fVar1);
      *param_1 = fVar1 * *param_2;
      param_1[1] = fVar1 * param_2[1];
      param_1[2] = fVar1 * param_2[2];
      fVar1 = fVar1 * param_2[3];
    }
    param_1[3] = fVar1;
  }
  else if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}


