/* ptr_50420df0 - 0x50420df0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
ptr_50420df0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_6 * param_6;
  fVar8 = param_6 * fVar7;
  fVar3 = param_6 * _DAT_50436f40 + _DAT_50436f20 + fVar7 * _DAT_50436f30 + fVar8 * _DAT_50436f10;
  fVar4 = param_6 * fRam50436f44 + fVar7 * fRam50436f34 + fVar8 * fRam50436f14;
  fVar5 = param_6 * fRam50436f48 + fVar7 * fRam50436f38 + fVar8 * fRam50436f18;
  fVar6 = param_6 * fRam50436f4c + fVar7 * fRam50436f3c + fVar8 * fRam50436f1c;
  fVar7 = *(float *)(param_2 + 1);
  fVar8 = *(float *)(param_3 + 1);
  fVar1 = *(float *)(param_4 + 1);
  fVar2 = *(float *)(param_5 + 1);
  *param_1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) * fVar3 +
                      (float)((ulonglong)*param_3 >> 0x20) * fVar4 +
                      (float)((ulonglong)*param_4 >> 0x20) * fVar5 +
                      (float)((ulonglong)*param_5 >> 0x20) * fVar6,
                      (float)*param_2 * fVar3 + (float)*param_3 * fVar4 + (float)*param_4 * fVar5 +
                      (float)*param_5 * fVar6);
  *(float *)(param_1 + 1) = fVar7 * fVar3 + fVar8 * fVar4 + fVar1 * fVar5 + fVar2 * fVar6;
  return param_1;
}


