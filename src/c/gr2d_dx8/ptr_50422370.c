/* ptr_50422370 - 0x50422370 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50422370(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  fVar9 = (float)*param_3;
  fVar10 = (float)((ulonglong)*param_3 >> 0x20);
  fVar11 = (float)param_3[1];
  fVar12 = (float)((ulonglong)param_3[1] >> 0x20);
  fVar5 = (float)*param_2;
  fVar6 = (float)((ulonglong)*param_2 >> 0x20);
  fVar7 = (float)param_2[1];
  fVar8 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar1 = (float)*param_4;
  fVar2 = (float)((ulonglong)*param_4 >> 0x20);
  fVar3 = (float)param_4[1];
  fVar4 = (float)((ulonglong)param_4[1] >> 0x20);
  uVar13 = (uint)(fVar7 * (fVar1 * fVar12 - fVar9 * fVar4) +
                  (fVar3 * fVar9 - fVar1 * fVar11) * fVar8 +
                 fVar5 * (fVar4 * fVar11 - fVar12 * fVar3)) ^ uRam504370a4;
  uVar14 = (uint)(fVar8 * (fVar2 * fVar9 - fVar10 * fVar1) +
                  (fVar4 * fVar10 - fVar2 * fVar12) * fVar5 +
                 fVar6 * (fVar1 * fVar12 - fVar9 * fVar4)) ^ uRam504370a8;
  uVar15 = (uint)(fVar5 * (fVar3 * fVar10 - fVar11 * fVar2) +
                  (fVar1 * fVar11 - fVar3 * fVar9) * fVar6 +
                 fVar7 * (fVar2 * fVar9 - fVar10 * fVar1)) ^ uRam504370ac;
  *param_1 = (uint)(fVar6 * (fVar4 * fVar11 - fVar12 * fVar3) +
                    (fVar2 * fVar12 - fVar4 * fVar10) * fVar7 +
                   fVar8 * (fVar3 * fVar10 - fVar11 * fVar2)) ^ _DAT_504370a0;
  param_1[1] = uVar13;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  return;
}


