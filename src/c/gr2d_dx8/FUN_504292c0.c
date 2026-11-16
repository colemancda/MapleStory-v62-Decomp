/* FUN_504292c0 - 0x504292c0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_504292c0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  fVar6 = (float)(*param_1 & _DAT_50437500);
  fVar10 = (float)(param_1[1] & uRam50437504);
  fVar14 = (float)(param_1[2] & uRam50437508);
  fVar18 = (float)(param_1[3] & uRam5043750c);
  uVar22 = param_1[1] & uRam504374f4;
  uVar23 = param_1[2] & uRam504374f8;
  uVar24 = param_1[3] & uRam504374fc;
  fVar7 = fVar6 * _DAT_504374e0 + _DAT_50437490;
  fVar11 = fVar10 * fRam504374e4 + fRam50437494;
  fVar15 = fVar14 * fRam504374e8 + fRam50437498;
  fVar19 = fVar18 * fRam504374ec + fRam5043749c;
  fVar8 = fVar7 - _DAT_50437490;
  fVar12 = fVar11 - fRam50437494;
  fVar16 = fVar15 - fRam50437498;
  fVar20 = fVar19 - fRam5043749c;
  fVar6 = (((fVar6 - _DAT_504374d0 * fVar8) - _DAT_504374c0 * fVar8) - _DAT_504374b0 * fVar8) -
          _DAT_504374a0 * fVar8;
  fVar8 = (((fVar10 - fRam504374d4 * fVar12) - fRam504374c4 * fVar12) - fRam504374b4 * fVar12) -
          fRam504374a4 * fVar12;
  fVar10 = (((fVar14 - fRam504374d8 * fVar16) - fRam504374c8 * fVar16) - fRam504374b8 * fVar16) -
           fRam504374a8 * fVar16;
  fVar12 = (((fVar18 - fRam504374dc * fVar20) - fRam504374cc * fVar20) - fRam504374bc * fVar20) -
           fRam504374ac * fVar20;
  fVar14 = fVar6 * fVar6;
  fVar16 = fVar8 * fVar8;
  fVar18 = fVar10 * fVar10;
  fVar20 = fVar12 * fVar12;
  uVar25 = (uint)fVar7 & _DAT_50437460;
  uVar26 = (uint)fVar11 & uRam50437464;
  uVar27 = (uint)fVar15 & uRam50437468;
  uVar28 = (uint)fVar19 & uRam5043746c;
  uVar9 = uVar25 & _DAT_50437450;
  uVar13 = uVar26 & uRam50437454;
  uVar17 = uVar27 & uRam50437458;
  uVar21 = uVar28 & uRam5043745c;
  uVar1 = uVar26 - uVar13 & _DAT_50437440;
  uVar2 = uVar27 - uVar17 & _DAT_50437440;
  uVar3 = uVar28 - uVar21 & _DAT_50437440;
  uVar4 = uVar25 + uVar9 & _DAT_50437440;
  uVar26 = uVar26 + uVar13 & _DAT_50437440;
  uVar27 = uVar27 + uVar17 & _DAT_50437440;
  uVar28 = uVar28 + uVar21 & _DAT_50437440;
  uVar5 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar13 = -(uint)((float)(uVar13 << 0x1e) != 0.0);
  uVar17 = -(uint)((float)(uVar17 << 0x1e) != 0.0);
  uVar21 = -(uint)((float)(uVar21 << 0x1e) != 0.0);
  fVar6 = (((_DAT_50437480 * fVar14 + _DAT_50437430) * fVar14 + _DAT_50437410) * fVar14 +
          _DAT_504373f0) * fVar6;
  fVar8 = (((fRam50437484 * fVar16 + fRam50437434) * fVar16 + fRam50437414) * fVar16 + fRam504373f4)
          * fVar8;
  fVar10 = (((fRam50437488 * fVar18 + fRam50437438) * fVar18 + fRam50437418) * fVar18 + fRam504373f8
           ) * fVar10;
  fVar12 = (((fRam5043748c * fVar20 + fRam5043743c) * fVar20 + fRam5043741c) * fVar20 + fRam504373fc
           ) * fVar12;
  fVar7 = (((_DAT_50437470 * fVar14 + _DAT_50437420) * fVar14 + _DAT_50437400) * fVar14 +
          _DAT_504373e0) * fVar14 + _DAT_504373d0;
  fVar11 = (((fRam50437474 * fVar16 + fRam50437424) * fVar16 + fRam50437404) * fVar16 + fRam504373e4
           ) * fVar16 + fRam504373d4;
  fVar14 = (((fRam50437478 * fVar18 + fRam50437428) * fVar18 + fRam50437408) * fVar18 + fRam504373e8
           ) * fVar18 + fRam504373d8;
  fVar15 = (((fRam5043747c * fVar20 + fRam5043742c) * fVar20 + fRam5043740c) * fVar20 + fRam504373ec
           ) * fVar20 + fRam504373dc;
  *param_2 = (~uVar5 & (uint)fVar6 | uVar5 & (uint)fVar7) ^
             (uVar25 - uVar9 & _DAT_50437440) << 0x1e ^ *param_1 & _DAT_504374f0;
  param_2[1] = (~uVar13 & (uint)fVar8 | uVar13 & (uint)fVar11) ^ uVar1 << 0x1e ^ uVar22;
  param_2[2] = (~uVar17 & (uint)fVar10 | uVar17 & (uint)fVar14) ^ uVar2 << 0x1e ^ uVar23;
  param_2[3] = (~uVar21 & (uint)fVar12 | uVar21 & (uint)fVar15) ^ uVar3 << 0x1e ^ uVar24;
  *param_3 = (uVar5 & (uint)fVar6 | ~uVar5 & (uint)fVar7) ^ uVar4 << 0x1e;
  param_3[1] = (uVar13 & (uint)fVar8 | ~uVar13 & (uint)fVar11) ^ uVar26 << 0x1e;
  param_3[2] = (uVar17 & (uint)fVar10 | ~uVar17 & (uint)fVar14) ^ uVar27 << 0x1e;
  param_3[3] = (uVar21 & (uint)fVar12 | ~uVar21 & (uint)fVar15) ^ uVar28 << 0x1e;
  return;
}


