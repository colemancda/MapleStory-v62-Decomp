/* ptr_50412968 - 0x50412968 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50412968(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int aiStack_20 [3];
  float afStack_14 [3];
  int iStack_8;
  
  pfVar4 = param_2;
  fVar3 = param_2[5] + *param_2 + param_2[10];
  if (fVar3 <= _DAT_5042e144) {
    aiStack_20[2] = 0;
    afStack_14[0] = (*param_2 - param_2[5]) - param_2[10];
    aiStack_20[0] = 1;
    aiStack_20[1] = 2;
    afStack_14[1] = (param_2[5] - *param_2) - param_2[10];
    afStack_14[2] = param_2[10] - (param_2[5] + *param_2);
    param_2 = (float *)(uint)(afStack_14[0] < afStack_14[1]);
    if (afStack_14[(int)param_2] < afStack_14[2]) {
      param_2 = (float *)0x2;
    }
    iStack_8 = aiStack_20[(int)param_2];
    fVar3 = SQRT(afStack_14[(int)param_2] + _DAT_5042e130) * _DAT_5042e12c;
    param_1[(int)param_2] = fVar3;
    fVar3 = _DAT_5042e16c / fVar3;
    iVar1 = aiStack_20[iStack_8];
    iVar5 = iVar1 * 4;
    iVar2 = aiStack_20[iStack_8];
    param_1[iStack_8] =
         (pfVar4[(int)param_2 + iStack_8 * 4] + pfVar4[iStack_8 + (int)param_2 * 4]) * fVar3;
    param_1[iVar1] = (pfVar4[(int)param_2 + iVar5] + pfVar4[(int)param_2 * 4 + iVar2]) * fVar3;
    param_1[3] = (pfVar4[iStack_8 * 4 + iVar2] - pfVar4[iVar5 + iStack_8]) * fVar3;
  }
  else {
    fVar3 = SQRT(fVar3 + _DAT_5042e130) * _DAT_5042e12c;
    param_1[3] = fVar3;
    fVar3 = _DAT_5042e16c / fVar3;
    *param_1 = (param_2[6] - param_2[9]) * fVar3;
    param_1[1] = (param_2[8] - param_2[2]) * fVar3;
    param_1[2] = (param_2[1] - param_2[4]) * fVar3;
  }
  return;
}


