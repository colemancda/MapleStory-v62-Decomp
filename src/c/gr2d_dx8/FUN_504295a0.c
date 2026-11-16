/* FUN_504295a0 - 0x504295a0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_504295a0(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  
  fVar16 = (float)(*param_1 & _DAT_50437720);
  fVar17 = (float)(param_1[1] & uRam50437724);
  fVar25 = (float)(param_1[2] & uRam50437728);
  fVar26 = (float)(param_1[3] & uRam5043772c);
  uVar13 = param_1[1] & uRam50437714;
  uVar14 = param_1[2] & uRam50437718;
  uVar15 = param_1[3] & uRam5043771c;
  fVar1 = fVar16 * _DAT_50437700 + _DAT_504376b0;
  fVar4 = fVar17 * fRam50437704 + fRam504376b4;
  fVar7 = fVar25 * fRam50437708 + fRam504376b8;
  fVar10 = fVar26 * fRam5043770c + fRam504376bc;
  fVar2 = fVar1 - _DAT_504376b0;
  fVar5 = fVar4 - fRam504376b4;
  fVar8 = fVar7 - fRam504376b8;
  fVar11 = fVar10 - fRam504376bc;
  fVar16 = (((fVar16 - _DAT_504376f0 * fVar2) - _DAT_504376e0 * fVar2) - _DAT_504376d0 * fVar2) -
           _DAT_504376c0 * fVar2;
  fVar2 = (((fVar17 - fRam504376f4 * fVar5) - fRam504376e4 * fVar5) - fRam504376d4 * fVar5) -
          fRam504376c4 * fVar5;
  fVar17 = (((fVar25 - fRam504376f8 * fVar8) - fRam504376e8 * fVar8) - fRam504376d8 * fVar8) -
           fRam504376c8 * fVar8;
  fVar5 = (((fVar26 - fRam504376fc * fVar11) - fRam504376ec * fVar11) - fRam504376dc * fVar11) -
          fRam504376cc * fVar11;
  fVar25 = fVar16 * fVar16;
  fVar8 = fVar2 * fVar2;
  fVar26 = fVar17 * fVar17;
  fVar11 = fVar5 * fVar5;
  uVar18 = (uint)fVar1 & _DAT_50437680;
  uVar19 = (uint)fVar4 & uRam50437684;
  uVar21 = (uint)fVar7 & uRam50437688;
  uVar23 = (uint)fVar10 & uRam5043768c;
  uVar3 = uVar18 & _DAT_50437670;
  uVar6 = uVar19 & uRam50437674;
  uVar9 = uVar21 & uRam50437678;
  uVar12 = uVar23 & uRam5043767c;
  uVar20 = uVar19 - uVar6 & uRam50437664;
  uVar22 = uVar21 - uVar9 & uRam50437668;
  uVar24 = uVar23 - uVar12 & uRam5043766c;
  uVar27 = uVar18 + uVar3 & _DAT_50437660;
  uVar28 = uVar19 + uVar6 & uRam50437664;
  uVar21 = uVar21 + uVar9 & uRam50437668;
  uVar23 = uVar23 + uVar12 & uRam5043766c;
  uVar19 = -(uint)((float)(uVar3 << 0x1e) != 0.0);
  uVar6 = -(uint)((float)(uVar6 << 0x1e) != 0.0);
  uVar9 = -(uint)((float)(uVar9 << 0x1e) != 0.0);
  uVar12 = -(uint)((float)(uVar12 << 0x1e) != 0.0);
  fVar16 = (((_DAT_504376a0 * fVar25 + _DAT_50437650) * fVar25 + _DAT_50437630) * fVar25 +
           _DAT_50437610) * fVar16;
  fVar2 = (((fRam504376a4 * fVar8 + fRam50437654) * fVar8 + fRam50437634) * fVar8 + fRam50437614) *
          fVar2;
  fVar17 = (((fRam504376a8 * fVar26 + fRam50437658) * fVar26 + fRam50437638) * fVar26 + fRam50437618
           ) * fVar17;
  fVar5 = (((fRam504376ac * fVar11 + fRam5043765c) * fVar11 + fRam5043763c) * fVar11 + fRam5043761c)
          * fVar5;
  fVar1 = (((_DAT_50437690 * fVar25 + _DAT_50437640) * fVar25 + _DAT_50437620) * fVar25 +
          _DAT_50437600) * fVar25 + _DAT_504375f0;
  fVar4 = (((fRam50437694 * fVar8 + fRam50437644) * fVar8 + fRam50437624) * fVar8 + fRam50437604) *
          fVar8 + fRam504375f4;
  fVar25 = (((fRam50437698 * fVar26 + fRam50437648) * fVar26 + fRam50437628) * fVar26 + fRam50437608
           ) * fVar26 + fRam504375f8;
  fVar7 = (((fRam5043769c * fVar11 + fRam5043764c) * fVar11 + fRam5043762c) * fVar11 + fRam5043760c)
          * fVar11 + fRam504375fc;
  *param_2 = (~uVar19 & (uint)fVar16 | uVar19 & (uint)fVar1) ^
             (uVar18 - uVar3 & _DAT_50437660) << 0x1e ^ *param_1 & _DAT_50437710;
  param_2[1] = (~uVar6 & (uint)fVar2 | uVar6 & (uint)fVar4) ^ uVar20 << 0x1e ^ uVar13;
  param_2[2] = (~uVar9 & (uint)fVar17 | uVar9 & (uint)fVar25) ^ uVar22 << 0x1e ^ uVar14;
  param_2[3] = (~uVar12 & (uint)fVar5 | uVar12 & (uint)fVar7) ^ uVar24 << 0x1e ^ uVar15;
  *param_3 = (uVar19 & (uint)fVar16 | ~uVar19 & (uint)fVar1) ^ uVar27 << 0x1e;
  param_3[1] = (uVar6 & (uint)fVar2 | ~uVar6 & (uint)fVar4) ^ uVar28 << 0x1e;
  param_3[2] = (uVar9 & (uint)fVar17 | ~uVar9 & (uint)fVar25) ^ uVar21 << 0x1e;
  param_3[3] = (uVar12 & (uint)fVar5 | ~uVar12 & (uint)fVar7) ^ uVar23 << 0x1e;
  return;
}


