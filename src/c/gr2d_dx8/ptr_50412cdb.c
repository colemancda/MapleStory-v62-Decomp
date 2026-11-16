/* ptr_50412cdb - 0x50412cdb in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50412cdb(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar2 = param_2[3] * param_2[3] +
          param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2;
  iVar3 = FUN_50410e65(fVar2,1.0);
  if (iVar3 == 0) {
    if (fVar2 <= _DAT_5042e168) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return;
    }
    fVar2 = _DAT_5042e130 / SQRT(fVar2);
    fStack_14 = fVar2 * *param_2;
    fStack_10 = fVar2 * param_2[1];
    fStack_c = fVar2 * param_2[2];
    pfVar1 = param_2 + 3;
    param_2 = &fStack_14;
    fStack_8 = fVar2 * *pfVar1;
  }
  else if (param_1 == param_2) {
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}


