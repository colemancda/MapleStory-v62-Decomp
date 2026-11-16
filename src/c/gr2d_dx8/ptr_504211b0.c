/* ptr_504211b0 - 0x504211b0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


float10 ptr_504211b0(undefined8 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar8;
  undefined8 uVar11;
  
  if (((uint)param_1 & 0xf) == 0) {
    uVar19 = *param_1;
    uVar20 = param_1[1];
    uVar14 = param_1[2];
    uVar17 = param_1[3];
    uVar8 = param_1[4];
    uVar11 = param_1[5];
    uVar2 = param_1[6];
    uVar5 = param_1[7];
  }
  else {
    uVar19 = *param_1;
    uVar20 = param_1[1];
    uVar14 = param_1[2];
    uVar17 = param_1[3];
    uVar8 = param_1[4];
    uVar11 = param_1[5];
    uVar2 = param_1[6];
    uVar5 = param_1[7];
  }
  fVar7 = (float)uVar8;
  fVar9 = (float)((ulonglong)uVar8 >> 0x20);
  fVar10 = (float)uVar11;
  fVar12 = (float)((ulonglong)uVar11 >> 0x20);
  fVar1 = (float)uVar2;
  fVar3 = (float)((ulonglong)uVar2 >> 0x20);
  fVar4 = (float)uVar5;
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  fVar13 = (float)uVar14;
  fVar15 = (float)((ulonglong)uVar14 >> 0x20);
  fVar16 = (float)uVar17;
  fVar18 = (float)((ulonglong)uVar17 >> 0x20);
  return (float10)((((fVar10 * fVar6 - fVar12 * fVar4) * fVar15 +
                     (fVar12 * fVar3 - fVar9 * fVar6) * fVar16 +
                    fVar18 * (fVar9 * fVar4 - fVar10 * fVar3)) * (float)uVar19 +
                   ((fVar7 * fVar3 - fVar9 * fVar1) * fVar18 +
                    (fVar9 * fVar6 - fVar12 * fVar3) * fVar13 +
                   fVar15 * (fVar12 * fVar1 - fVar7 * fVar6)) * (float)uVar20) -
                  (((fVar12 * fVar1 - fVar7 * fVar6) * fVar16 +
                    (fVar7 * fVar4 - fVar10 * fVar1) * fVar18 +
                   fVar13 * (fVar10 * fVar6 - fVar12 * fVar4)) * (float)((ulonglong)uVar19 >> 0x20)
                  + ((fVar9 * fVar4 - fVar10 * fVar3) * fVar13 +
                     (fVar10 * fVar1 - fVar7 * fVar4) * fVar15 +
                    fVar16 * (fVar7 * fVar3 - fVar9 * fVar1)) * (float)((ulonglong)uVar20 >> 0x20)))
  ;
}


