/* FUN_007ccf09 - 0x007ccf09 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ccf09(void)

{
  byte bVar1;
  undefined1 auVar2 [8];
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int *extraout_ECX;
  int iVar14;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  undefined1 *extraout_ECX_07;
  int extraout_ECX_08;
  int iVar15;
  int unaff_EBP;
  undefined *puVar16;
  int iVar17;
  bool bVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int iStack_130;
  undefined1 auStack_12c [8];
  code *pcStack_124;
  
  FUN_00879bb8();
  bVar1 = DAT_0097c074 & 1;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (bVar1 == 0) {
    DAT_0097c074 = DAT_0097c074 | 1;
    pcStack_124 = (code *)0x2f514c;
    auStack_12c._4_4_ = 0x7ccf41;
    DAT_0097c070 = FUN_0064d61f();
  }
  if (*(undefined4 **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = (undefined *)**(undefined4 **)(unaff_EBP + 0xc);
  }
  *(undefined **)(unaff_EBP + -0x18) = puVar16;
  pcStack_124 = (code *)0x7ccf5d;
  uVar5 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -100) = uVar5;
  if (((puVar16 != &DAT_004e23ea) && (puVar16 != (undefined *)0x40684b)) &&
     (puVar16 != (undefined *)0x3ee1ab)) {
    pcStack_124 = (code *)extraout_ECX[0x129];
    auStack_12c._4_4_ = 0x7ccf83;
    iVar6 = FUN_00732f96();
    if (iVar6 == 0) goto LAB_007cddb6;
  }
  pcStack_124 = (code *)0x7ccf96;
  uVar7 = FUN_0043f6fe();
  uVar7 = (uint)(uVar7 < 0x80000000);
  iVar6 = extraout_ECX[uVar7 * 0xfd + 0x150];
  if ((iVar6 == 0) || (*(int *)(iVar6 + -4) == 0)) goto LAB_007cddb6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + -4);
  }
  pcStack_124 = (code *)(extraout_ECX[uVar7 * 0xfd + 0x14f] -
                        *(int *)(extraout_ECX[uVar7 * 0xfd + 0x150] + -4 + iVar6 * 4));
  auStack_12c._4_4_ = *(undefined4 *)(unaff_EBP + 0xc);
  auStack_12c._0_4_ = 0x7ccfdd;
  uVar5 = FUN_0079d0da();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  iVar6 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  pcStack_124 = (code *)0x7ccfec;
  iVar6 = (**(code **)(iVar6 + 4))();
  pcStack_124 = *(code **)(iVar6 + 0x2c0);
  auStack_12c._4_4_ = iVar6 + 0x2b8;
  auStack_12c._0_4_ = 0x7cd000;
  iVar8 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(uint *)(unaff_EBP + -0xa0) = (uint)(iVar8 != 0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_007cd05f:
    uVar7 = 0;
  }
  else {
    pcStack_124 = *(code **)(unaff_EBP + 0x10);
    auStack_12c._4_4_ = unaff_EBP + -0x70;
    auStack_12c._0_4_ = 0x7cd029;
    puVar9 = (undefined4 *)FUN_007ab103();
    pcStack_124 = (code *)0x7cd032;
    FUN_00408b49();
    pcStack_124 = (code *)0x7cd03a;
    FUN_00402fa6();
    piVar10 = (int *)*puVar9;
    *(int **)(unaff_EBP + -0x1c) = piVar10;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      pcStack_124 = (code *)0x7cd04b;
      FUN_004030b1();
      piVar10 = *(int **)(unaff_EBP + -0x1c);
    }
    if ((piVar10 == (int *)0x0) || (*piVar10 == 0)) goto LAB_007cd05f;
    uVar7 = *(uint *)(*piVar10 + -4) >> 1;
  }
  if (uVar7 != 0) {
    *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  }
  iVar8 = extraout_ECX[1];
  *(int **)(unaff_EBP + -0x98) = extraout_ECX + 1;
  pcStack_124 = (code *)0x7cd07d;
  puVar9 = (undefined4 *)(**(code **)(iVar8 + 0x10))();
  *(undefined4 *)(unaff_EBP + -0x5c) = *puVar9;
  pcStack_124 = (code *)0x7cd089;
  iVar8 = (**(code **)(extraout_ECX[1] + 0x10))();
  *(int *)(unaff_EBP + -0x58) = *(int *)(iVar8 + 4) + -0x1c;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar8 = 0;
  }
  else {
    pcStack_124 = *(code **)(unaff_EBP + 0x10);
    auStack_12c._4_4_ = 0x7cd0a3;
    iVar8 = FUN_006509a1();
    pcStack_124 = *(code **)(iVar8 + 0x114);
    auStack_12c._4_4_ = iVar8 + 0x10c;
    auStack_12c._0_4_ = 0x7cd0b4;
    iVar8 = FUN_00413367();
  }
  *(int *)(unaff_EBP + -0x24) = iVar8;
  if (iVar8 < 2) {
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
  }
  iVar8 = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    pcStack_124 = *(code **)(unaff_EBP + 0x10);
    auStack_12c._4_4_ = 0x7cd0d9;
    iVar8 = FUN_006509a1();
    pcStack_124 = *(code **)(iVar8 + 0x108);
    auStack_12c._4_4_ = iVar8 + 0x100;
    auStack_12c._0_4_ = 0x7cd0ea;
    iVar8 = FUN_00413367();
  }
  *(int *)(unaff_EBP + -0x9c) = iVar8;
  if (iVar8 < 2) {
    *(undefined4 *)(unaff_EBP + -0x9c) = 1;
  }
  pcStack_124 = *(code **)(iVar6 + 0x434);
  auStack_12c._4_4_ = iVar6 + 0x42c;
  *(undefined4 *)(unaff_EBP + -0x34) = 1;
  auStack_12c._0_4_ = 0x7cd111;
  iVar6 = FUN_00413367();
  if (iVar6 != 0) {
    *(undefined4 *)(unaff_EBP + -0x34) = 2;
  }
  auStack_12c._4_4_ = **(int **)(unaff_EBP + 0x24);
  if (auStack_12c._4_4_ == 0) {
    auStack_12c._0_4_ = 0;
  }
  else {
    auStack_12c._0_4_ = *(undefined4 *)(auStack_12c._4_4_ + -4);
  }
  pcStack_124 = *(code **)(unaff_EBP + 0x20);
  puStack_134 = (undefined1 *)extraout_ECX[0x129];
  iStack_130 = *(int *)(unaff_EBP + 0x14);
  puStack_138 = *(undefined1 **)(unaff_EBP + 0x10);
  iStack_13c = *(int *)(unaff_EBP + 0xc);
  FUN_0064ba86();
  pcStack_124 = (code *)0x0;
  auStack_12c._4_4_ = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + 0x20);
  iStack_130 = 0x7cd15f;
  uVar5 = FUN_0079d11c();
  *(undefined4 *)(unaff_EBP + -0x70) = uVar5;
  *(undefined4 *)(unaff_EBP + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -0x20);
  while( true ) {
    iVar6 = **(int **)(unaff_EBP + 0x24);
    if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= *(uint *)(unaff_EBP + 0x14))) break;
    iVar17 = *(uint *)(unaff_EBP + 0x14) * 0x98;
    iVar8 = *(int *)(iVar17 + iVar6);
    *(int *)(unaff_EBP + -0x8c) = iVar17;
    iVar17 = iVar17 + iVar6;
    iVar6 = *(int *)(iVar8 + 4);
    *(int *)(unaff_EBP + -0x6c) = iVar8;
    pcStack_124 = (code *)0x7cd1aa;
    piVar10 = (int *)(**(code **)(iVar6 + 0x10))();
    pcStack_124 = (code *)0x7cd1b7;
    piVar11 = (int *)(**(code **)(**(int **)(unaff_EBP + -0x98) + 0x10))();
    iVar8 = *piVar10;
    iVar6 = *piVar11;
    iVar15 = *(int *)(unaff_EBP + -0x5c);
    uVar5 = *(undefined4 *)(unaff_EBP + -0x58);
    *(int *)(iVar17 + 0x90) = iVar15;
    pcStack_124 = (code *)0x1;
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    *(uint *)(unaff_EBP + -0xb0) = (uint)(iVar8 < iVar6);
    iVar15 = (-(uint)(iVar8 < iVar6 != 0) & 0xffffff9c) + 0x32 + iVar15;
    *(undefined4 *)(iVar17 + 0x94) = *(undefined4 *)(unaff_EBP + -0x58);
    auStack_12c._4_4_ = unaff_EBP + -0x50;
    *(int *)(unaff_EBP + -0x30) = iVar15;
    auStack_12c._0_4_ = 0x7cd1fb;
    FUN_005c5b12();
    pcStack_124 = (code *)(unaff_EBP + -0x50);
    auStack_12c._4_4_ = 0x7cd205;
    iVar6 = (*DAT_0097b5a4)();
    if (iVar6 != 0) break;
    iVar6 = *(int *)(unaff_EBP + -0x4c);
    if ((*(int *)(iVar17 + 0x94) < iVar6) ||
       (iVar6 = *(int *)(unaff_EBP + -0x44), iVar6 < *(int *)(iVar17 + 0x94))) {
      *(int *)(iVar17 + 0x94) = iVar6;
    }
    if (*(int *)(unaff_EBP + -0xb0) == 0) {
      iVar8 = (*(int *)(unaff_EBP + -0x48) + *(int *)(unaff_EBP + -0x50)) / 2;
      iVar14 = *(int *)(unaff_EBP + -0x50) + 10;
      bVar18 = SBORROW4(iVar14,iVar8);
      iVar6 = iVar14 - iVar8;
    }
    else {
      iVar8 = (*(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x48)) / 2;
      iVar14 = *(int *)(unaff_EBP + -0x48) + -10;
      bVar18 = SBORROW4(iVar8,iVar14);
      iVar6 = iVar8 - iVar14;
    }
    if (bVar18 != iVar6 < 0) {
      iVar8 = iVar14;
    }
    iVar6 = *(int *)(iVar17 + 0x94) - *(int *)(unaff_EBP + -0x2c);
    *(int *)(iVar17 + 0x90) = iVar8;
    *(int *)(unaff_EBP + -0x28) = iVar8 - iVar15;
    pcStack_124 = (code *)(unaff_EBP + -200);
    auStack_12c._4_4_ = 0x7cd27b;
    (*DAT_0097b508)();
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      auStack_12c._4_4_ = *(undefined4 *)(unaff_EBP + 0x10);
      auStack_12c._0_4_ = 0x7cd28c;
      iVar8 = FUN_006509a1();
      auStack_12c._4_4_ = iVar8 + 0x16c;
      auStack_12c._0_4_ = unaff_EBP + -200;
      iStack_130 = 0x7cd29e;
      FUN_00411537();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x58);
    if (*(int *)(unaff_EBP + -0x18) == 0x4faa90) {
      piVar10 = *(int **)(unaff_EBP + -0x98);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x52c);
      auStack_12c._4_4_ = 0x7cd2d2;
      iVar6 = (**(code **)(*piVar10 + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(iVar6 + 4);
      auStack_12c._4_4_ = 0x7cd2df;
      puVar9 = (undefined4 *)(**(code **)(*piVar10 + 0x10))();
      uVar5 = *puVar9;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) == 0) {
        *(int *)(unaff_EBP + -0xc0) = -*(int *)(unaff_EBP + -0xc0);
        *(int *)(unaff_EBP + -200) = -*(int *)(unaff_EBP + -200);
        auStack_12c._4_4_ = unaff_EBP + -0xc0;
        auStack_12c._0_4_ = unaff_EBP + -200;
        iStack_130 = 0x7cd316;
        FUN_004459fe();
      }
      auStack_12c._4_4_ = *(undefined4 *)(unaff_EBP + -0x54);
      iStack_130 = unaff_EBP + -200;
      puStack_134 = (undefined1 *)0x7cd329;
      auStack_12c._0_4_ = uVar5;
      (*DAT_0097b54c)();
      iVar8 = *(int *)(unaff_EBP + -200);
      if ((*(byte *)(*(int *)(unaff_EBP + -0x14) + 0x52c) & 1) == 0) {
        iVar8 = *(int *)(unaff_EBP + -0xc0);
      }
      *(int *)(unaff_EBP + -0x40) = iVar8;
      iVar6 = *(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x58);
      *(int *)(unaff_EBP + -0x28) = iVar8 - *(int *)(unaff_EBP + -0x5c);
    }
    *(int *)(unaff_EBP + -0x10) =
         iVar6 * iVar6 + *(int *)(unaff_EBP + -0x28) * *(int *)(unaff_EBP + -0x28);
    auStack_12c = (undefined1  [8])(double)*(int *)(unaff_EBP + -0x10);
    iStack_130 = 0x7cd36d;
    fVar19 = (float10)FUN_0087af44();
    if ((float10)_DAT_008ea320 < fVar19) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(iVar17 + 0x90) - iVar15;
      pcStack_124 = (code *)0x7cd39a;
      uVar5 = __ftol();
      *(undefined4 *)(iVar17 + 0x90) = uVar5;
      *(int *)(unaff_EBP + -0x10) = *(int *)(iVar17 + 0x94) - *(int *)(unaff_EBP + -0x2c);
      pcStack_124 = (code *)0x7cd3b9;
      uVar5 = __ftol();
      *(undefined4 *)(iVar17 + 0x94) = uVar5;
    }
    pcStack_124 = (code *)0x7cd3cc;
    iVar6 = __ftol();
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      *(int *)(unaff_EBP + -0x38) = iVar6;
    }
    else {
      iVar8 = *(int *)(unaff_EBP + -0x18);
      if (iVar8 == 0x2f514d) {
        iVar6 = *(int *)(unaff_EBP + -0x38) + 200;
      }
      else if ((iVar8 == 0x30fefb) || (iVar8 == 0x2f785b)) {
        iVar6 = (*(int *)(unaff_EBP + 0x14) + 4) * 0x1e + *(int *)(unaff_EBP + -0x38);
      }
      else if ((iVar8 == 0x2f785c) || (iVar8 == 0x30fefc)) {
        iVar6 = *(int *)(unaff_EBP + -0x20) + 400;
      }
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0;
    *(int *)(unaff_EBP + -0x88) = iVar15;
    if (*(int *)(unaff_EBP + -0x34) == 2) {
      *(uint *)(unaff_EBP + -0x88) =
           ((-(uint)((*(uint *)(*(int *)(unaff_EBP + -0x14) + 0x52c) & 1) != 0) & 0x3c) - 0x1e) +
           iVar15;
    }
    iVar8 = *(int *)(unaff_EBP + -0x34) * *(int *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(int *)(unaff_EBP + -0xac) = iVar8;
    if (0 < iVar8) {
      *(undefined4 *)(unaff_EBP + -0xa4) = 0;
      *(int *)(unaff_EBP + -0xd0) = *(int *)(unaff_EBP + -0x24) * 7;
      *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -100);
      *(int *)(unaff_EBP + -0x54) = iVar17 + 0x18;
      auVar2 = auStack_12c;
      do {
        iVar8 = *(int *)(iVar17 + 0x94);
        *(undefined4 *)(unaff_EBP + -0x94) = *(undefined4 *)(iVar17 + 0x90);
        iVar15 = 0;
        auStack_12c._4_4_ = iVar8 + (*(int *)(unaff_EBP + -0xa4) - *(int *)(unaff_EBP + -0xd0)) + 7;
        *(undefined4 *)(unaff_EBP + -0x90) = auStack_12c._4_4_;
        if (0 < *(int *)(unaff_EBP + -0x9c)) {
          do {
            iVar8 = *(int *)(unaff_EBP + -0xa8);
            *(int *)(unaff_EBP + -0xa8) = *(int *)(unaff_EBP + -0xa8) + 1;
            if (*(int *)(unaff_EBP + 8) <= iVar8) break;
            iVar8 = *(int *)(unaff_EBP + 0x20) / 1000;
            if ((iVar8 == 0x139c) || (iStack_13c = 0, iVar8 == 0x139d)) {
              iStack_13c = *(int *)(unaff_EBP + 0x20);
            }
            pcStack_124 = (code *)0x0;
            auStack_12c._4_4_ = 0;
            auStack_12c._0_4_ = 0;
            puStack_134 = (undefined1 *)0x1;
            puStack_138 = (undefined1 *)0x0;
            *(int **)(unaff_EBP + -0x10) = &iStack_13c;
            iStack_130 = iStack_13c;
            FUN_0067d25d(&iStack_13c,*(undefined4 *)(unaff_EBP + 0x14));
            uVar5 = *(undefined4 *)(unaff_EBP + -0x90);
            uVar26 = *(undefined4 *)(unaff_EBP + -0x94);
            uVar25 = *(undefined4 *)(unaff_EBP + -0x28);
            uVar24 = (*(undefined4 **)(unaff_EBP + -0x54))[0xf];
            uVar23 = **(undefined4 **)(unaff_EBP + -0x54);
            uVar22 = *(undefined4 *)(unaff_EBP + 0x18);
            uVar21 = *(undefined4 *)(iVar17 + 4);
            iVar8 = *(int *)(unaff_EBP + -0x20) + iVar6 + *(int *)(unaff_EBP + -100);
            uVar20 = *(undefined4 *)(unaff_EBP + -0x18);
            uVar12 = FUN_0067e5d1(uVar20,iVar8,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar5);
            FUN_005cbf42(uVar12,uVar20,iVar8,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar5);
            auVar2 = (undefined1  [8])CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
            iVar15 = iVar15 + 1;
            auStack_12c._4_4_ = extraout_ECX_00;
          } while (iVar15 < *(int *)(unaff_EBP + -0x9c));
        }
        auStack_12c._0_4_ = SUB84(auVar2,0);
        if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_007cd59a:
          auStack_12c._0_4_ = SUB84(auVar2,0);
          iVar8 = *(int *)(unaff_EBP + -0x18);
          dVar4 = (double)auVar2;
          if (((iVar8 != 0x4f5c69) && (iVar8 != 0x4f837d)) && (iVar8 != 0x4f837c)) {
            if (iVar8 == 0x4faa90) {
              if (*(int *)(unaff_EBP + 0x14) != 0) goto LAB_007cd837;
              if ((*(int **)(unaff_EBP + -0x1c) == (int *)0x0) ||
                 (iVar8 = **(int **)(unaff_EBP + -0x1c), iVar8 == 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(uint *)(iVar8 + -4) >> 1;
              }
              if (uVar7 == 0) {
                iVar8 = DAT_0097c070 + 100;
              }
              else {
                iVar8 = unaff_EBP + -0x1c;
              }
              *(int *)(unaff_EBP + -0x10) = iVar8;
              uVar5 = *(undefined4 *)(unaff_EBP + -0x30);
              if (*(int *)(unaff_EBP + -0x24) / *(int *)(unaff_EBP + -0x34) < 1) {
                uVar5 = *(undefined4 *)(unaff_EBP + -0x88);
              }
              pcStack_124 = (code *)0x0;
              *(undefined1 **)(unaff_EBP + -0x68) = auStack_12c + 4;
              auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + -0x10);
              *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(unaff_EBP + -0x2c);
              iStack_130 = 0x7cd62a;
              FUN_004059fd();
              *(undefined1 *)(unaff_EBP + -4) = 2;
              auStack_12c._0_4_ = 0x7cd63c;
              FUN_00424e27();
              auStack_12c._0_4_ = 0x7cd643;
              auStack_12c._0_4_ = FUN_004320e3();
              *(int **)(unaff_EBP + -0x10) = &iStack_130;
              puStack_134 = (undefined1 *)0x0;
              puStack_138 = (undefined1 *)0x7cd651;
              iStack_130 = extraout_ECX_02;
              FUN_00424dd7();
              puStack_134 = *(undefined1 **)(unaff_EBP + -0x3c);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              puStack_138 = *(undefined1 **)(unaff_EBP + -0x40);
              iStack_13c = *(int *)(unaff_EBP + -0xd4);
            }
            else {
              if (((*(int *)(unaff_EBP + -0xa0) == 0) || (*(int *)(unaff_EBP + 0x14) != 0)) &&
                 ((iVar8 != 0x2f9f6c && (iVar8 != 0x4faa8f)))) {
                pcStack_124 = *(code **)(unaff_EBP + -0x18);
                auStack_12c._4_4_ = 0x7cd697;
                iVar8 = FUN_0065439b();
                dVar4 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
                auStack_12c._4_4_ = pcStack_124;
                if (iVar8 == 0) {
                  if (*(undefined **)(unaff_EBP + -0x18) == &DAT_004e23ea) {
                    iStack_130 = 0;
                    if (*(int *)(unaff_EBP + 0x14) != 0) {
                      iStack_130 = *(int *)(*(int *)(unaff_EBP + -0x8c) + -0x98 +
                                           **(int **)(unaff_EBP + 0x24));
                    }
                    pcStack_124 = (code *)(unaff_EBP + -0x1c);
                    auStack_12c._4_4_ = unaff_EBP + -0xcc;
                    auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + -100);
                    puStack_134 = (undefined1 *)(unaff_EBP + -0x5c);
                    iStack_13c = 0x7cd6dc;
                    puStack_138 = (undefined1 *)iVar17;
                    FUN_0079d183();
                    dVar4 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
                  }
                  else if ((*(int *)(unaff_EBP + 0x14) == 0) ||
                          (*(int *)(unaff_EBP + -0x18) == 0x4faa8c)) {
                    uVar5 = *(undefined4 *)(unaff_EBP + -0x30);
                    if (*(int *)(unaff_EBP + -0x24) / *(int *)(unaff_EBP + -0x34) <=
                        *(int *)(unaff_EBP + 0x14)) {
                      uVar5 = *(undefined4 *)(unaff_EBP + -0x88);
                    }
                    pcStack_124 = *(code **)(unaff_EBP + 0x20);
                    *(undefined4 *)(unaff_EBP + -0xb8) = uVar5;
                    *(undefined4 *)(unaff_EBP + -0xb4) = *(undefined4 *)(unaff_EBP + -0x2c);
                    auStack_12c._4_4_ = 0x7cd726;
                    auStack_12c._4_4_ = FUN_007a9209();
                    iStack_130 = unaff_EBP + -0x1c;
                    *(undefined1 **)(unaff_EBP + -0x68) = auStack_12c;
                    puStack_134 = (undefined1 *)0x7cd736;
                    auStack_12c._0_4_ = extraout_ECX_03;
                    FUN_004059fd();
                    *(undefined1 *)(unaff_EBP + -4) = 6;
                    iStack_130 = 0x7cd745;
                    FUN_00424e27();
                    iStack_130 = 0x7cd74c;
                    iStack_130 = FUN_004320e3();
                    puStack_138 = (undefined1 *)&puStack_134;
                    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_134;
                    iStack_13c = 0x7cd75c;
                    puStack_134 = extraout_ECX_04;
                    FUN_005cb50c();
                    puStack_138 = *(undefined1 **)(unaff_EBP + -0x90);
                    iVar15 = *(int *)(unaff_EBP + -0x60);
                    iStack_13c = *(int *)(unaff_EBP + -0x94);
                    iVar8 = iVar15 + iVar6;
                    uVar5 = *(undefined4 *)(unaff_EBP + -0xb4);
                    *(undefined1 *)(unaff_EBP + -4) = 1;
                    uVar26 = *(undefined4 *)(unaff_EBP + -0xb8);
                    FUN_00424e82(iVar15,iVar8,uVar26,uVar5);
                    FUN_00427b7d(iVar15,iVar8,uVar26,uVar5);
                    dVar4 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
                  }
                  goto LAB_007cd837;
                }
              }
              if ((*(int **)(unaff_EBP + -0x1c) == (int *)0x0) ||
                 (iVar8 = **(int **)(unaff_EBP + -0x1c), iVar8 == 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(uint *)(iVar8 + -4) >> 1;
              }
              if (uVar7 == 0) {
                iVar8 = DAT_0097c070 + 100;
              }
              else {
                iVar8 = unaff_EBP + -0x1c;
              }
              *(int *)(unaff_EBP + -0x10) = iVar8;
              uVar5 = *(undefined4 *)(unaff_EBP + -0x30);
              if (*(int *)(unaff_EBP + -0x24) / *(int *)(unaff_EBP + -0x34) <=
                  *(int *)(unaff_EBP + 0x14)) {
                uVar5 = *(undefined4 *)(unaff_EBP + -0x88);
              }
              pcStack_124 = (code *)0x0;
              *(undefined1 **)(unaff_EBP + -0x68) = auStack_12c + 4;
              auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + -0x10);
              *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x2c);
              iStack_130 = 0x7cd7e6;
              FUN_004059fd();
              *(undefined1 *)(unaff_EBP + -4) = 4;
              auStack_12c._0_4_ = 0x7cd7f8;
              FUN_00424e27();
              auStack_12c._0_4_ = 0x7cd7ff;
              auStack_12c._0_4_ = FUN_004320e3();
              puStack_134 = (undefined1 *)&iStack_130;
              *(int **)(unaff_EBP + -0x10) = &iStack_130;
              puStack_138 = (undefined1 *)0x7cd80f;
              iStack_130 = extraout_ECX_05;
              FUN_005cb50c();
              puStack_134 = *(undefined1 **)(unaff_EBP + -0x90);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              puStack_138 = *(undefined1 **)(unaff_EBP + -0x94);
              iStack_13c = *(int *)(unaff_EBP + -0x74);
            }
            iVar15 = *(int *)(unaff_EBP + -0x60);
            iVar8 = iVar15 + iVar6;
            FUN_00424e82(iVar15,iVar8,uVar5);
            FUN_00427cd1(iVar15,iVar8,uVar5);
            dVar4 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
          }
        }
        else {
          pcStack_124 = (code *)(unaff_EBP + -200);
          auStack_12c._4_4_ = 0x7cd576;
          iVar8 = (*DAT_0097b5a4)();
          dVar4 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
          dVar3 = (double)CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
          auVar2 = (undefined1  [8])CONCAT44(auStack_12c._4_4_,auStack_12c._0_4_);
          auStack_12c._4_4_ = extraout_ECX_01;
          if (iVar8 == 0) goto LAB_007cd59a;
          if (*(int *)(unaff_EBP + -0xb0) == 0) {
            auVar2 = (undefined1  [8])dVar4;
            if (*(int *)(unaff_EBP + -0x30) < *(int *)(unaff_EBP + -0x50)) goto LAB_007cd59a;
          }
          else {
            auVar2 = (undefined1  [8])dVar3;
            if (*(int *)(unaff_EBP + -0x48) < *(int *)(unaff_EBP + -0x30)) goto LAB_007cd59a;
          }
        }
LAB_007cd837:
        auStack_12c = (undefined1  [8])dVar4;
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
        *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x60) + *(int *)(unaff_EBP + -0x70);
        *(int *)(unaff_EBP + -0xa4) = *(int *)(unaff_EBP + -0xa4) + 0xe;
        *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + 4;
        auVar2 = auStack_12c;
      } while (*(int *)(unaff_EBP + -0x28) < *(int *)(unaff_EBP + -0xac));
    }
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
  }
  if ((**(int **)(unaff_EBP + 0x24) == 0) || (*(int *)(**(int **)(unaff_EBP + 0x24) + -4) == 0)) {
    pcStack_124 = *(code **)(*(int *)(unaff_EBP + -0x14) + 0x4a4);
    auStack_12c._4_4_ = 0x7cd884;
    iVar6 = FUN_0044dddc();
    if ((iVar6 == 0x2d) || (iVar8 = 200, iVar6 == 0x2e)) {
      iVar8 = 300;
    }
    iVar6 = (-(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0xffffff9c) + 0x32 +
            *(int *)(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x58);
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      iVar8 = -iVar8;
    }
    iVar8 = iVar8 + *(int *)(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x58);
    *(int *)(unaff_EBP + -0x88) = iVar8;
    iVar8 = iVar8 - iVar6;
    *(int *)(unaff_EBP + 0x14) = iVar8 * iVar8;
    unique0x10000643 = (double)*(int *)(unaff_EBP + 0x14);
    auStack_12c._0_4_ = 0x7cd8e6;
    FUN_0087af44();
    pcStack_124 = (code *)0x7cd8f3;
    uVar5 = __ftol();
    iVar8 = *(int *)(unaff_EBP + -0x34) * *(int *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (0 < iVar8) {
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0x24) << 2;
      iVar15 = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -100);
      do {
        *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x88);
        if (*(int *)(unaff_EBP + -0x34) == 2) {
          *(uint *)(unaff_EBP + -0x40) =
               ((-(uint)((*(uint *)(*(int *)(unaff_EBP + -0x14) + 0x52c) & 1) != 0) & 0x3c) - 0x1e)
               + *(int *)(unaff_EBP + -0x88);
        }
        auStack_12c._4_4_ =
             *(int *)(unaff_EBP + -0x84) +
             (*(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + -0xac)) + 4;
        pcStack_124 = *(code **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -0x3c) = auStack_12c._4_4_;
        if ((((pcStack_124 != (code *)0x4f5c69) && (pcStack_124 != FUN_004f8376)) &&
            (pcStack_124 != (code *)0x4f837c)) && (pcStack_124 != (code *)&DAT_004e23ea)) {
          if (((*(int *)(unaff_EBP + -0xa0) == 0) && (pcStack_124 != (code *)0x2f9f6c)) &&
             ((pcStack_124 != (code *)0x4faa8f && (pcStack_124 != (code *)0x4faa90)))) {
            auStack_12c._4_4_ = 0x7cd9c1;
            iVar17 = FUN_0065439b();
            auStack_12c._4_4_ = pcStack_124;
            if (iVar17 == 0) {
              pcStack_124 = *(code **)(unaff_EBP + 0x20);
              auStack_12c._4_4_ = 0x7cd9d4;
              auStack_12c._4_4_ = FUN_007a9209();
              iStack_130 = unaff_EBP + -0x1c;
              *(undefined1 **)(unaff_EBP + -0x68) = auStack_12c;
              puStack_134 = (undefined1 *)0x7cd9e4;
              auStack_12c._0_4_ = extraout_ECX_06;
              FUN_004059fd();
              *(undefined1 *)(unaff_EBP + -4) = 10;
              iStack_130 = 0x7cd9f6;
              FUN_00424e27();
              iStack_130 = 0x7cd9fd;
              iStack_130 = FUN_004320e3();
              *(undefined1 ***)(unaff_EBP + -0x8c) = &puStack_134;
              puStack_138 = (undefined1 *)0x0;
              iStack_13c = 0x7cda0e;
              puStack_134 = extraout_ECX_07;
              FUN_00424dd7();
              puStack_138 = *(undefined1 **)(unaff_EBP + -0x3c);
              iStack_13c = *(int *)(unaff_EBP + -0x40);
              iVar13 = *(int *)(unaff_EBP + -0x10) + iVar15;
              uVar5 = *(undefined4 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              iVar17 = iVar15;
              iVar14 = iVar6;
              FUN_00424e82(iVar15,iVar13,iVar6,uVar5);
              FUN_00427b7d(iVar17,iVar13,iVar14,uVar5);
              goto LAB_007cdab4;
            }
          }
          if ((*(int **)(unaff_EBP + -0x1c) == (int *)0x0) ||
             (iVar17 = **(int **)(unaff_EBP + -0x1c), iVar17 == 0)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(uint *)(iVar17 + -4) >> 1;
          }
          if (uVar7 == 0) {
            auStack_12c._0_4_ = DAT_0097c070 + 100;
          }
          else {
            auStack_12c._0_4_ = unaff_EBP + -0x1c;
          }
          pcStack_124 = (code *)0x0;
          *(undefined1 **)(unaff_EBP + -0x68) = auStack_12c + 4;
          iStack_130 = 0x7cda69;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          auStack_12c._0_4_ = 0x7cda7b;
          FUN_00424e27();
          auStack_12c._0_4_ = 0x7cda82;
          auStack_12c._0_4_ = FUN_004320e3();
          *(int **)(unaff_EBP + -0x8c) = &iStack_130;
          puStack_134 = (undefined1 *)0x0;
          puStack_138 = (undefined1 *)0x7cda93;
          iStack_130 = extraout_ECX_08;
          FUN_00424dd7();
          puStack_134 = *(undefined1 **)(unaff_EBP + -0x3c);
          puStack_138 = *(undefined1 **)(unaff_EBP + -0x40);
          iVar13 = *(int *)(unaff_EBP + -0x10) + iVar15;
          iStack_13c = *(int *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iVar17 = iVar15;
          iVar14 = iVar6;
          FUN_00424e82(iVar15,iVar13,iVar6);
          FUN_00427cd1(iVar17,iVar13,iVar14);
        }
LAB_007cdab4:
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 8;
        iVar15 = iVar15 + *(int *)(unaff_EBP + -0x70);
      } while (*(int *)(unaff_EBP + 8) < iVar8);
    }
  }
  iVar6 = *(int *)(unaff_EBP + -0x18);
  if (iVar6 == 0x2f785b) {
LAB_007cdc8e:
    piVar10 = *(int **)(unaff_EBP + 0x24);
    iVar6 = *piVar10;
    if ((iVar6 != 0) && (*(int *)(iVar6 + -4) != 0)) {
      pcStack_124 = *(code **)(unaff_EBP + 0x10);
      auStack_12c._4_4_ = 0x7cdcb1;
      iVar6 = FUN_006509a1();
      pcStack_124 = (code *)(iVar6 + 0x16c);
      auStack_12c._4_4_ = unaff_EBP + -0x50;
      auStack_12c._0_4_ = 0x7cdcc0;
      FUN_00411537();
      iVar6 = *piVar10;
      pcStack_124 = *(code **)(iVar6 + 0x94);
      auStack_12c._4_4_ = *(undefined4 *)(iVar6 + 0x90);
      auStack_12c._0_4_ = unaff_EBP + -0x50;
      iStack_130 = 0x7cdcdb;
      (*DAT_0097b54c)();
      if (*(int *)(unaff_EBP + -0x18) == 0x2f785b) {
        pcStack_124 = (code *)(unaff_EBP + 0x20);
        auStack_12c._4_4_ = 0x7cdcec;
        piVar10 = (int *)FUN_00424619();
        piVar10 = (int *)*piVar10;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (piVar10 == (int *)0x0) {
          iStack_13c = 0;
        }
        else {
          iStack_13c = *piVar10;
        }
        pcStack_124 = (code *)0x0;
        auStack_12c._4_4_ = 0xff;
        auStack_12c._0_4_ = 0x80;
        iStack_130 = 500;
        puStack_134 = (undefined1 *)(*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x20));
        puStack_138 = (undefined1 *)(unaff_EBP + -0x50);
        FUN_00428a3e();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + 0x20) != 0) {
          pcStack_124 = (code *)0x7cdd35;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
        }
      }
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + -0x32;
      *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + -0xaa;
      pcStack_124 = (code *)(unaff_EBP + 8);
      auStack_12c._4_4_ = 0x7cdd4f;
      piVar10 = (int *)FUN_0040f150();
      piVar10 = (int *)*piVar10;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piVar10 == (int *)0x0) {
        iStack_130 = 0;
      }
      else {
        iStack_130 = *piVar10;
      }
      pcStack_124 = (code *)(*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x20));
      auStack_12c._4_4_ = unaff_EBP + -0x50;
      auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + 0x18);
      puStack_134 = (undefined1 *)0x7cdd7b;
      FUN_00427eb9();
      iVar6 = *(int *)(unaff_EBP + 8);
LAB_007cdd80:
      if (iVar6 != 0) {
        pcStack_124 = (code *)0x7cdd87;
        FUN_004030b1();
      }
    }
  }
  else if (iVar6 == 0x2f785c) {
    if ((**(int **)(unaff_EBP + 0x24) != 0) && (*(int *)(**(int **)(unaff_EBP + 0x24) + -4) != 0)) {
      pcStack_124 = *(code **)(unaff_EBP + 0x10);
      auStack_12c._4_4_ = 0x7cdbde;
      iVar6 = FUN_006509a1();
      pcStack_124 = (code *)(iVar6 + 0x16c);
      auStack_12c._4_4_ = unaff_EBP + -0x80;
      auStack_12c._0_4_ = 0x7cdbed;
      FUN_00411537();
      piVar10 = *(int **)(unaff_EBP + -0x98);
      uVar7 = *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x52c);
      pcStack_124 = (code *)0x7cdc05;
      iVar6 = (**(code **)(*piVar10 + 0x10))();
      uVar5 = *(undefined4 *)(iVar6 + 4);
      pcStack_124 = (code *)0x7cdc0f;
      puVar9 = (undefined4 *)(**(code **)(*piVar10 + 0x10))();
      uVar26 = *puVar9;
      if ((uVar7 & 1) == 0) {
        *(int *)(unaff_EBP + -0x78) = -*(int *)(unaff_EBP + -0x78);
        *(int *)(unaff_EBP + -0x80) = -*(int *)(unaff_EBP + -0x80);
        pcStack_124 = (code *)(unaff_EBP + -0x78);
        auStack_12c._4_4_ = unaff_EBP + -0x80;
        auStack_12c._0_4_ = 0x7cdc33;
        FUN_004459fe();
      }
      auStack_12c._0_4_ = unaff_EBP + -0x80;
      iStack_130 = 0x7cdc41;
      auStack_12c._4_4_ = uVar26;
      pcStack_124 = (code *)uVar5;
      (*DAT_0097b54c)();
      *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0x7c) + -0xfa;
      *(int *)(unaff_EBP + -0x74) = *(int *)(unaff_EBP + -0x74) + -0xfa;
      pcStack_124 = (code *)(unaff_EBP + 0x14);
      auStack_12c._4_4_ = 0x7cdc58;
      piVar10 = (int *)FUN_0040f150();
      piVar10 = (int *)*piVar10;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (piVar10 == (int *)0x0) {
        iStack_130 = 0;
      }
      else {
        iStack_130 = *piVar10;
      }
      pcStack_124 = (code *)(*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x20));
      auStack_12c._4_4_ = unaff_EBP + -0x80;
      auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + 0x18);
      puStack_134 = (undefined1 *)0x7cdc84;
      FUN_00427eb9();
      iVar6 = *(int *)(unaff_EBP + 0x14);
      goto LAB_007cdd80;
    }
  }
  else {
    if (iVar6 == 0x30fefb) goto LAB_007cdc8e;
    if (((iVar6 == 0x30fefc) && (**(int **)(unaff_EBP + 0x24) != 0)) &&
       (*(int *)(**(int **)(unaff_EBP + 0x24) + -4) != 0)) {
      iVar6 = 0;
      for (uVar7 = 0;
          (iVar8 = **(int **)(unaff_EBP + 0x24), iVar8 != 0 && (uVar7 < *(uint *)(iVar8 + -4)));
          uVar7 = uVar7 + 1) {
        if (*(int *)(iVar8 + iVar6) != 0) {
          pcStack_124 = (code *)0x0;
          auStack_12c._4_4_ = unaff_EBP + -0x50;
          auStack_12c._0_4_ = 0x7cdb39;
          FUN_005c5b12();
          iVar8 = *(int *)(unaff_EBP + -0x48) - *(int *)(unaff_EBP + -0x50);
          if (iVar8 < 0x96) {
            iVar8 = iVar8 / 2;
            *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x50) + -0x4b + iVar8;
            *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + (0x4b - iVar8);
          }
          *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x44) + -10;
          pcStack_124 = (code *)(unaff_EBP + 0x10);
          auStack_12c._4_4_ = 0x7cdb71;
          piVar10 = (int *)FUN_0040f150();
          piVar10 = (int *)*piVar10;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (piVar10 == (int *)0x0) {
            iStack_130 = 0;
          }
          else {
            iStack_130 = *piVar10;
          }
          pcStack_124 = (code *)(*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x20));
          auStack_12c._4_4_ = unaff_EBP + -0x50;
          auStack_12c._0_4_ = *(undefined4 *)(unaff_EBP + 0x18);
          puStack_134 = (undefined1 *)0x7cdb9d;
          FUN_00427eb9();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + 0x10) != 0) {
            pcStack_124 = (code *)0x7cdbad;
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + 0x10) = 0;
          }
        }
        iVar6 = iVar6 + 0x98;
      }
    }
  }
  pcStack_124 = FUN_00403621;
  auStack_12c._4_4_ = 0xf;
  auStack_12c._0_4_ = 4;
  iStack_130 = unaff_EBP + -0x114;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_134 = (undefined1 *)0x7cdda0;
  FUN_0087a0b8();
  *(undefined ***)(unaff_EBP + -0x120) = &PTR_LAB_008e84a0;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcStack_124 = (code *)0x7cddb6;
    FUN_004030b1();
  }
LAB_007cddb6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


