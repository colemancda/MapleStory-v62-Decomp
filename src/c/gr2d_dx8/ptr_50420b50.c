/* ptr_50420b50 - 0x50420b50 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * ptr_50420b50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_register_00001304 [12];
  float fVar6;
  undefined1 in_XMM5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  auVar7._4_12_ = in_XMM5._4_12_;
  auVar7._0_4_ = fVar2 * fVar2;
  fVar5 = fVar1 * fVar1 + auVar7._0_4_ + fVar3 * fVar3 + fVar4 * fVar4;
  auVar8._4_12_ = in_register_00001304;
  auVar8._0_4_ = fVar5;
  auVar8 = rsqrtss(auVar7,auVar8);
  fVar6 = auVar8._0_4_;
  fVar6 = (DAT_50436ec0 - fVar5 * fVar6 * fVar6) * _DAT_50436eb0 * fVar6;
  *param_1 = fVar1 * fVar6;
  param_1[1] = fVar2 * fVar6;
  param_1[2] = fVar3 * fVar6;
  param_1[3] = fVar4 * fVar6;
  return param_1;
}


