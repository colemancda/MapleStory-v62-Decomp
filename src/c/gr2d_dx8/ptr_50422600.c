/* ptr_50422600 - 0x50422600 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50422600(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar3 [12];
  float fVar9;
  float fVar10;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_2 + 1);
  fVar7 = (float)*param_2;
  fVar9 = (float)((ulonglong)*param_2 >> 0x20);
  fVar8 = fVar7 - (float)*param_4;
  fVar10 = fVar9 - (float)((ulonglong)*param_4 >> 0x20);
  fVar11 = fVar7 - (float)*param_3;
  fVar12 = fVar9 - (float)((ulonglong)*param_3 >> 0x20);
  fVar2 = (fVar1 - *(float *)(param_4 + 1)) * fVar12 - (fVar1 - *(float *)(param_3 + 1)) * fVar10;
  fVar6 = fVar8 * (fVar1 - *(float *)(param_3 + 1)) - fVar11 * (fVar1 - *(float *)(param_4 + 1));
  fVar10 = fVar10 * fVar11 - fVar12 * fVar8;
  fVar8 = fVar10 * fVar10;
  fVar11 = fVar2 * fVar2 + fVar8;
  fVar12 = fVar6 * fVar6 + 0.0;
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar8 + fVar8;
  auVar4._0_4_ = fVar11 + fVar12;
  auVar4._4_8_ = auVar3._4_8_;
  auVar4._12_4_ = 0;
  auVar5 = rsqrtss(auVar4,auVar4);
  fVar8 = auVar5._0_4_;
  fVar8 = _DAT_504370d0 * fVar8 * (_DAT_504370c0 - auVar4._0_4_ * fVar8 * fVar8);
  *param_1 = fVar2 * fVar8;
  param_1[1] = fVar6 * fVar8;
  param_1[2] = fVar10 * fVar8;
  param_1[3] = fVar8 * 0.0;
  param_1[3] = (float)((uint)(fVar7 * fVar2 * fVar8 + fVar1 * fVar10 * fVar8 + fVar9 * fVar6 * fVar8
                             ) ^ _DAT_504370b0);
  return;
}


