/* ptr_504128be - 0x504128be in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_504128be(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_1[3] * param_1[3] +
          param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar1 <= _DAT_5042e168) {
    if (param_2 != (float *)0x0) {
      *param_2 = 1.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      fVar1 = _DAT_5042e130 / SQRT(fVar1);
      *param_2 = fVar1 * *param_1;
      param_2[1] = fVar1 * param_1[1];
      param_2[2] = fVar1 * param_1[2];
    }
    if (param_3 != (float *)0x0) {
      fVar2 = (float10)_CIacos();
      *param_3 = (float)(fVar2 + fVar2);
    }
  }
  return;
}


