/* ptr_504203d0 - 0x504203d0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void ptr_504203d0(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (((uint)param_3 & 0xf) == 0) {
    fVar9 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    fVar12 = param_2[3];
    fVar13 = param_3[1];
    fVar14 = param_3[2];
    fVar15 = param_3[3];
    fVar16 = param_3[5];
    fVar17 = param_3[6];
    fVar18 = param_3[7];
    fVar19 = param_3[9];
    fVar20 = param_3[10];
    fVar21 = param_3[0xb];
    fVar22 = param_3[0xd];
    fVar23 = param_3[0xe];
    fVar24 = param_3[0xf];
    *param_1 = fVar9 * *param_3 + fVar10 * param_3[4] + fVar11 * param_3[8] + fVar12 * param_3[0xc];
    param_1[1] = fVar9 * fVar13 + fVar10 * fVar16 + fVar11 * fVar19 + fVar12 * fVar22;
    param_1[2] = fVar9 * fVar14 + fVar10 * fVar17 + fVar11 * fVar20 + fVar12 * fVar23;
    param_1[3] = fVar9 * fVar15 + fVar10 * fVar18 + fVar11 * fVar21 + fVar12 * fVar24;
    return;
  }
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 8);
  uVar6 = *(undefined8 *)(param_3 + 10);
  uVar7 = *(undefined8 *)(param_3 + 0xc);
  uVar8 = *(undefined8 *)(param_3 + 0xe);
  *param_1 = (float)uVar1 * fVar9 + (float)uVar3 * fVar10 +
             (float)uVar5 * fVar11 + (float)uVar7 * fVar12;
  param_1[1] = (float)((ulonglong)uVar1 >> 0x20) * fVar9 +
               (float)((ulonglong)uVar3 >> 0x20) * fVar10 +
               (float)((ulonglong)uVar5 >> 0x20) * fVar11 +
               (float)((ulonglong)uVar7 >> 0x20) * fVar12;
  param_1[2] = (float)uVar2 * fVar9 + (float)uVar4 * fVar10 +
               (float)uVar6 * fVar11 + (float)uVar8 * fVar12;
  param_1[3] = (float)((ulonglong)uVar2 >> 0x20) * fVar9 +
               (float)((ulonglong)uVar4 >> 0x20) * fVar10 +
               (float)((ulonglong)uVar6 >> 0x20) * fVar11 +
               (float)((ulonglong)uVar8 >> 0x20) * fVar12;
  return;
}


