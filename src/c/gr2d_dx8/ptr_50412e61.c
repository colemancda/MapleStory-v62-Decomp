/* ptr_50412e61 - 0x50412e61 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50412e61(float *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2[3] < _DAT_5042e130) {
    fVar3 = (float10)_CIacos();
    fVar4 = (float10)fsin(fVar3);
    iVar2 = FUN_50410e65((float)fVar4,0.0);
    if (iVar2 == 0) {
      fVar1 = (float)fVar3 / (float)fVar4;
      *param_1 = fVar1 * *param_2;
      param_1[1] = fVar1 * param_2[1];
      param_1[2] = fVar1 * param_2[2];
      goto LAB_50412ed5;
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
LAB_50412ed5:
  param_1[3] = 0.0;
  return;
}


