/* ptr_50420180 - 0x50420180 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_50420180(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((uint)param_3 & 0xf) == 0) {
    fVar6 = (float)*param_2;
    fVar7 = (float)((ulonglong)*param_2 >> 0x20);
    fVar1 = *(float *)(param_2 + 1);
    fVar8 = param_3[2];
    fVar9 = param_3[6];
    fVar5 = param_3[10];
    *param_1 = CONCAT44(fVar6 * param_3[1] + fVar7 * param_3[5] + fVar1 * param_3[9],
                        fVar6 * *param_3 + fVar7 * param_3[4] + fVar1 * param_3[8]);
    *(float *)(param_1 + 1) = fVar6 * fVar8 + fVar7 * fVar9 + fVar1 * fVar5;
    return;
  }
  uVar2 = *(undefined8 *)(param_3 + 2);
  fVar8 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  uVar3 = *(undefined8 *)(param_3 + 6);
  uVar4 = *(undefined8 *)(param_3 + 10);
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * fVar8 +
                      (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar9 +
                      (float)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar1,
                      (float)*(undefined8 *)param_3 * fVar8 +
                      (float)*(undefined8 *)(param_3 + 4) * fVar9 +
                      (float)*(undefined8 *)(param_3 + 8) * fVar1);
  *(float *)(param_1 + 1) = (float)uVar2 * fVar8 + (float)uVar3 * fVar9 + (float)uVar4 * fVar1;
  return;
}


