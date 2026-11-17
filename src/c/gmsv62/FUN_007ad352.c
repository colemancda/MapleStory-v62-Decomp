/* FUN_007ad352 - 0x007ad352 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ad352(void)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int unaff_EBP;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iStack_bc;
  undefined1 *puStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  int *piStack_a8;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x34) = extraout_ECX;
  _piStack_a8 = (double)CONCAT44(0x7ad375,piStack_a8);
  iVar5 = FUN_0045e2eb();
  if ((iVar5 != 0) || ((extraout_ECX[0x14b] & 0xfffffffeU) == 0x12)) goto LAB_007ae563;
  _piStack_a8 = (double)CONCAT44(0x7ad394,piStack_a8);
  iVar6 = FUN_007d1e08();
  iVar5 = extraout_ECX[0x5ed];
  if ((iVar5 != 0) && (iVar6 - iVar5 < 0)) goto LAB_007ae563;
  if (1000 < iVar6 - iVar5) {
    extraout_ECX[0x5ed] = 0;
  }
  if ((extraout_ECX[0x7ac] != 0) && (extraout_ECX[0x7af] != 0)) goto LAB_007ae563;
  iVar5 = *(int *)(unaff_EBP + 0x18);
  if (iVar5 != 0) {
    _piStack_a8 = (double)CONCAT44(0x7ad3db,piStack_a8);
    iVar7 = FUN_005d04ff();
    if ((iVar7 != 0) || (*(int *)(iVar5 + 0x2f8) != 0)) goto LAB_007ae563;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x78,0x7ad409);
  FUN_0085c67a();
  *(int *)(unaff_EBP + -0x58) = extraout_ECX[0x35e];
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_00978108;
  _piStack_a8 = (double)CONCAT44(0x7ad422,piStack_a8);
  puVar8 = (undefined8 *)(**(code **)(extraout_ECX[1] + 0x10))();
  _piStack_a8 = (double)*puVar8;
  uStack_b0 = (double)CONCAT44(unaff_EBP + -0x78,*(undefined4 *)(unaff_EBP + -0x58));
  uStack_b4 = 0x7ad436;
  iVar5 = FUN_00423dc8();
  if (iVar5 == 0) {
    _piStack_a8 = (double)CONCAT44(unaff_EBP + -0xa0,0x7ad44c);
    iVar5 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      _piStack_a8 = 3.97711283766091e-317;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    }
    puVar10 = (undefined4 *)(unaff_EBP + -0x94);
    *(undefined4 *)(unaff_EBP + -0x40) = 4;
    do {
      _piStack_a8 = (double)CONCAT44(0x7ad487,piStack_a8);
      uVar9 = FUN_004133f0();
      *puVar10 = uVar9;
      puVar10 = puVar10 + 1;
      piVar15 = (int *)(unaff_EBP + -0x40);
      *piVar15 = *piVar15 + -1;
    } while (*piVar15 != 0);
    iVar5 = *(int *)(unaff_EBP + 0x18);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    piVar15 = extraout_ECX;
    if (iVar5 != 0) {
      _piStack_a8 = (double)CONCAT44(0x7ad4cc,piStack_a8);
      puVar10 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + 8) = *puVar10;
      _piStack_a8 = (double)CONCAT44(0x7ad4d9,piStack_a8);
      piVar11 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
      if (*piVar11 < *(int *)(unaff_EBP + 8)) {
        *(undefined4 *)(unaff_EBP + -0x74) = 1;
      }
      *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(iVar5 + 0x15c);
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x1c),0x7ad4fb);
      iVar5 = FUN_004e67c9();
      *(int *)(unaff_EBP + -0x20) = iVar5;
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x1c) == 0)) {
        iVar5 = *(int *)(unaff_EBP + -0x10);
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad5ec);
        iVar7 = FUN_00455c59();
        puStack_b8 = *(undefined1 **)(iVar7 + 4);
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + -0x94));
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_b0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),iVar5 + 0x2114);
        uStack_b4 = iVar5 + 0x209c;
        iStack_bc = *(int *)(unaff_EBP + 0x18) + 0x170;
        uVar9 = FUN_0066fcdc();
        *(undefined4 *)(unaff_EBP + 8) = uVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          _piStack_a8 = 3.97734257818622e-317;
          FUN_0045e7c2();
        }
      }
      else {
        iVar6 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad529);
        iVar5 = FUN_00455c59();
        uStack_b4 = *(uint *)(iVar5 + 4);
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + -0x94));
        uStack_b0 = (double)CONCAT44(iVar6 + 0x2114,iVar6 + 0x209c);
        puStack_b8 = (undefined1 *)(*(int *)(unaff_EBP + 0x18) + 0x170);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_bc = 0x7ad55d;
        uVar9 = FUN_006700b5();
        *(undefined4 *)(unaff_EBP + 8) = uVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          _piStack_a8 = 3.97724475318835e-317;
          FUN_0045e7c2();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          *(undefined4 *)(unaff_EBP + 0xc) = 1;
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x20) != 0) {
          _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad590);
          iVar5 = FUN_00455c59();
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x20),
                                         *(undefined4 *)(iVar5 + 4));
          *(undefined1 *)(unaff_EBP + -4) = 2;
          uStack_b0 = (double)CONCAT44(0x7ad5a3,(undefined4)uStack_b0);
          iVar5 = FUN_00653a70();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          *(int *)(unaff_EBP + 8) = ((100 - iVar5) * *(int *)(unaff_EBP + 8)) / 100;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            _piStack_a8 = 3.97728872503083e-317;
            FUN_0045e7c2();
          }
        }
        if ((*(int *)(unaff_EBP + 0xc) == 0) && (*(int *)(unaff_EBP + 8) < 2)) {
          *(undefined4 *)(unaff_EBP + 8) = 1;
        }
      }
      *(uint *)(unaff_EBP + -0x48) = (uint)(*(int *)(unaff_EBP + 8) < 1);
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        iVar5 = *(int *)(unaff_EBP + -0x54);
      }
      else {
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x6c) == 0) ||
           (*(int *)(unaff_EBP + -0x48) != 0)) {
          iVar5 = *(int *)(unaff_EBP + -0x54);
        }
        else {
          iVar5 = *(int *)(unaff_EBP + -0x54);
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x65),iVar5 + 0x61);
          uStack_b0 = (double)CONCAT44(0x7ad662,(undefined4)uStack_b0);
          sVar4 = FUN_0045f084();
          if (sVar4 + -1 < 2) {
            *(undefined4 *)(unaff_EBP + 8) = 1;
          }
          else {
            *(int *)(unaff_EBP + 8) = sVar4 + -1;
          }
        }
        if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x94) != 0) &&
           (*(int *)(unaff_EBP + -0x48) == 0)) {
          *(undefined4 *)(unaff_EBP + 8) = 1;
        }
      }
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x3d),iVar5 + 0x39);
      *(int *)(unaff_EBP + -0x30) = iVar5 + 0x39;
      uStack_b0 = (double)CONCAT44(0x7ad6a9,(undefined4)uStack_b0);
      sVar4 = FUN_0045f084();
      if (sVar4 == 0x19c) {
LAB_007ad6c8:
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x3d),
                                       *(undefined4 *)(unaff_EBP + -0x30));
        uStack_b0 = (double)CONCAT44(0x7ad6d3,(undefined4)uStack_b0);
        sVar4 = FUN_0045f084();
        *(uint *)(unaff_EBP + 0xc) = ((sVar4 != 0x19c) - 1 & 0xfffe7960) + 0x406462;
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad6fa);
        iVar7 = FUN_00455c59();
        uVar9 = *(undefined4 *)(iVar7 + 4);
        _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x80,*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_b0 = (double)CONCAT44(uVar9,0x7ad714);
        uVar9 = FUN_00650dae();
        *(undefined4 *)(unaff_EBP + 0xc) = uVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          _piStack_a8 = 3.97746164800687e-317;
          FUN_0045e7c2();
        }
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0xc),0x7ad738);
          iVar7 = FUN_006509a1();
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0xfc),iVar7 + 0xf4);
          uStack_b0 = (double)CONCAT44(0x7ad749,(undefined4)uStack_b0);
          uVar9 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar9;
          if (*(uint *)(unaff_EBP + -0x90) % 100 < *(uint *)(unaff_EBP + 0xc)) {
            _piStack_a8 = (double)CONCAT44(0x7ad765,piStack_a8);
            iVar7 = FUN_00429303();
            uVar12 = *(uint *)(iVar7 + 0x108) >> 1 & 1;
            *(uint *)(unaff_EBP + 0xc) = uVar12;
            if (uVar12 == 0) {
              *(undefined4 *)(unaff_EBP + 8) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x48) = 1;
            }
          }
        }
      }
      else {
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x3d),
                                       *(undefined4 *)(unaff_EBP + -0x30));
        uStack_b0 = (double)CONCAT44(0x7ad6bc,(undefined4)uStack_b0);
        sVar4 = FUN_0045f084();
        if (sVar4 == 0x1a6) goto LAB_007ad6c8;
      }
      if (*(uint *)(unaff_EBP + -0x8c) % 100 < *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x2e0)) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 1;
      }
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (0 < *(int *)(unaff_EBP + 8)) {
        uVar9 = *(undefined4 *)(iVar5 + 0x3d);
        *(undefined4 *)(unaff_EBP + -0x24) = 0x10e;
        _piStack_a8 = (double)CONCAT44(uVar9,*(undefined4 *)(unaff_EBP + -0x30));
        uStack_b0 = (double)CONCAT44(0x7ad7c3,(undefined4)uStack_b0);
        sVar4 = FUN_0045f084();
        if (sVar4 == 0x70) {
LAB_007ad7e2:
          _piStack_a8 = -NAN;
          uStack_b0 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad7f1);
          iVar6 = FUN_00458c4f();
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar6 + 4);
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            _piStack_a8 = 3.9775708365146e-317;
            FUN_00449913();
          }
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x3d),
                                           *(undefined4 *)(unaff_EBP + -0x30));
            uStack_b0 = (double)CONCAT44(0x7ad819,(undefined4)uStack_b0);
            sVar4 = FUN_0045f084();
            _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x1c,0x7ad83f);
            iVar5 = FUN_00455c59();
            uVar9 = *(undefined4 *)(iVar5 + 4);
            _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x7c,
                                           ((sVar4 != 0x70) - 1 & 0xfffe795f) + 0x129da6);
            *(undefined1 *)(unaff_EBP + -4) = 5;
            uStack_b0 = (double)CONCAT44(uVar9,0x7ad857);
            uVar9 = FUN_00650dae();
            *(undefined4 *)(unaff_EBP + -0x70) = uVar9;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              _piStack_a8 = 3.97762123121048e-317;
              FUN_0045e7c2();
            }
            if (*(int *)(unaff_EBP + -0x70) != 0) {
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x70),0x7ad87f);
              iVar5 = FUN_006509a1();
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0xfc),iVar5 + 0xf4);
              uStack_b0 = (double)CONCAT44(0x7ad890,(undefined4)uStack_b0);
              uVar12 = FUN_00413367();
              if (*(uint *)(unaff_EBP + -0x88) % 1000 < uVar12) {
                _piStack_a8 = (double)CONCAT44(0x7ad8ac,piStack_a8);
                iVar5 = FUN_00429303();
                uVar12 = *(uint *)(iVar5 + 0x108) >> 1 & 1;
                *(uint *)(unaff_EBP + -0x28) = uVar12;
                if (uVar12 == 0) {
                  if ((extraout_ECX[0x13f] / 10000 == 0xbe) || (extraout_ECX[0x13f] / 10000 == 0xc1)
                     ) {
                    _piStack_a8 = (double)CONCAT44(1,piStack_a8);
                    bVar19 = true;
                  }
                  else {
                    bVar19 = false;
                  }
                  *(uint *)(unaff_EBP + -0x3c) = (uint)!bVar19;
                  *(uint *)(unaff_EBP + -0x6c) = (uint)(*(int *)(unaff_EBP + -0x20) == 0);
                }
              }
            }
          }
        }
        else {
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x3d),
                                         *(undefined4 *)(unaff_EBP + -0x30));
          uStack_b0 = (double)CONCAT44(0x7ad7d6,(undefined4)uStack_b0);
          sVar4 = FUN_0045f084();
          if (sVar4 == 0x7a) goto LAB_007ad7e2;
        }
        if (0 < *(int *)(unaff_EBP + 0x24)) {
          iVar5 = *(int *)(unaff_EBP + 0x18);
          _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar5 + 0x15c) + 0x84),
                                         *(int *)(iVar5 + 0x15c) + 0x7c);
          uStack_b0 = (double)CONCAT44(0x7ad918,(undefined4)uStack_b0);
          iVar6 = FUN_00413367();
          *(int *)(unaff_EBP + -0x28) = iVar6 / 10;
          iVar7 = (*(int *)(unaff_EBP + 8) * *(int *)(unaff_EBP + 0x24)) / 100;
          *(int *)(unaff_EBP + -0x14) = iVar7;
          if (*(int *)(unaff_EBP + -0x28) <= iVar7) {
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x28);
          }
          _piStack_a8 = (double)CONCAT44(0x7ad944,piStack_a8);
          iVar6 = FUN_005cdcb1();
          if (iVar6 != 0) {
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) / 2;
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar5 + 0x15c) + 0x1ac),
                                           *(int *)(iVar5 + 0x15c) + 0x1a4);
            uStack_b0 = (double)CONCAT44(0x7ad96f,(undefined4)uStack_b0);
            iVar7 = FUN_00413367();
            if (0 < iVar7) {
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar5 + 0x15c) + 0x1ac),
                                             *(int *)(iVar5 + 0x15c) + 0x1a4);
              uStack_b0 = (double)CONCAT44(0x7ad98c,(undefined4)uStack_b0);
              uVar9 = FUN_00413367();
              *(undefined4 *)(unaff_EBP + -0x14) = uVar9;
            }
            _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar5 + 0x15c) + 400),
                                           *(int *)(iVar5 + 0x15c) + 0x188);
            uStack_b0 = (double)CONCAT44(0x7ad9a8,(undefined4)uStack_b0);
            iVar5 = FUN_004cd670();
            if (iVar5 != 0) {
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
          }
          *(undefined4 *)(unaff_EBP + -0x24) = 200;
          *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0x24);
        }
        if ((*(int *)(unaff_EBP + -0x6c) != 0) || (0 < *(int *)(unaff_EBP + -0x50))) {
          _piStack_a8 = (double)CONCAT44(1,unaff_EBP + -0x94);
          uStack_b0 = (double)CONCAT44(0x7ad9e0,(undefined4)uStack_b0);
          FUN_0043f3d6();
          uStack_b0 = *(double *)(unaff_EBP + -0x94);
          _piStack_a8 = *(double *)(unaff_EBP + -0x8c);
          uStack_b4 = unaff_EBP - 0x2c;
          puStack_b8 = (undefined1 *)0x7ad9fd;
          puVar10 = (undefined4 *)FUN_005c5bbc();
          uVar9 = puVar10[1];
          *(undefined4 *)(unaff_EBP + -0x1c) = *puVar10;
          *(undefined4 *)(unaff_EBP + -0x18) = uVar9;
          _piStack_a8 = (double)CONCAT44(0x7ada0f,piStack_a8);
          uVar9 = FUN_005c9cb2();
          *(undefined4 *)(unaff_EBP + -0x40) = uVar9;
          _piStack_a8 = 2.3363322238011397e-308;
          iVar7 = FUN_005dcae0();
          iVar5 = extraout_ECX_00;
          if (iVar7 == 0) {
            _piStack_a8 = 2.548531802897678e-308;
            iVar7 = FUN_005dcae0();
            iVar5 = extraout_ECX_01;
            if (iVar7 == 0) {
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
            }
          }
          iVar6 = *(int *)(unaff_EBP + -0x14);
          if (iVar6 == 0) {
            iVar6 = -1;
          }
          _piStack_a8 = 0.0;
          uStack_b0 = 0.0;
          uStack_b4 = -(uint)(*(int *)(unaff_EBP + -0x3c) != 0) & 2;
          puStack_b8 = (undefined1 *)0x1;
          *(int **)(unaff_EBP + -0x28) = &iStack_bc;
          iStack_bc = iVar5;
          FUN_00448a17(&DAT_00978474);
          uVar9 = *(undefined4 *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uVar22 = *(undefined4 *)(unaff_EBP + -0x1c);
          uVar24 = 0;
          uVar23 = 0;
          piVar15 = *(int **)(unaff_EBP + -0x34);
          uVar13 = FUN_0043f900(iVar6,0,0,uVar22,uVar9);
          uVar21 = *(undefined4 *)(unaff_EBP + -0x40);
          iVar5 = FUN_007d1e08(uVar21,uVar13);
          iVar5 = iVar5 + 100;
          uVar20 = 0;
          uVar14 = FUN_0067e5d1(0,iVar5);
          FUN_005cbf42(uVar14,uVar20,iVar5,uVar21,uVar13,iVar6,uVar23,uVar24,uVar22,uVar9);
        }
        if (*(int *)(unaff_EBP + -0x3c) == 0) {
          *(undefined4 *)(unaff_EBP + -0x30) = 0x111aea;
          _piStack_a8 = (double)CONCAT44(0x7adabb,piStack_a8);
          uVar12 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x28) = uVar12 % 100;
          _piStack_a8 = (double)CONCAT44(0x7adaca,piStack_a8);
          iVar5 = FUN_00429303();
          uVar12 = *(uint *)(iVar5 + 0x108) >> 1 & 1;
          *(uint *)(unaff_EBP + -0x38) = uVar12;
          if (uVar12 == 0) {
            _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x26d4),
                                           *(int *)(unaff_EBP + -0x10) + 0x26cc);
            uStack_b0 = (double)CONCAT44(0x7adb73,(undefined4)uStack_b0);
            iVar5 = FUN_00413367();
            if (99 < iVar5) {
              _piStack_a8 = (double)CONCAT44(100,piStack_a8);
              uVar2 = _piStack_a8;
              iVar7 = 100;
              iVar5 = iVar7;
              _piStack_a8 = (double)uVar2;
            }
            if (iVar5 < 1) {
              iVar5 = 0;
            }
            uVar12 = (uint)(*(int *)(unaff_EBP + -0x28) < iVar5);
            *(uint *)(unaff_EBP + -0x4c) = uVar12;
            if (uVar12 == 0) {
              _piStack_a8 = (double)CONCAT44(0x7adba5,piStack_a8);
              cVar3 = (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x10) + 0x2a6c) + 4))();
              if (cVar3 != '\0') {
                _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x38,0x4df8f1);
                *(undefined4 *)(unaff_EBP + -0x30) = 0x4df8f1;
                *(undefined4 *)(unaff_EBP + -0x38) = 0;
                uStack_b0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x54),0x7adbc2);
                uVar9 = FUN_00650dae();
                if (*(int *)(unaff_EBP + -0x38) != 0) {
                  _piStack_a8 = (double)CONCAT44(uVar9,0x7adbcf);
                  iVar5 = FUN_006509a1();
                  _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0xfc),iVar5 + 0xf4);
                  uStack_b0 = (double)CONCAT44(0x7adbe0,(undefined4)uStack_b0);
                  iVar5 = FUN_00413367();
                  if (99 < iVar5) {
                    _piStack_a8 = (double)CONCAT44(100,piStack_a8);
                    uVar2 = _piStack_a8;
                    iVar7 = 100;
                    iVar5 = iVar7;
                    _piStack_a8 = (double)uVar2;
                  }
                  if (iVar5 < 1) {
                    iVar5 = 0;
                  }
                  *(uint *)(unaff_EBP + -0x4c) = (uint)(*(int *)(unaff_EBP + -0x28) < iVar5);
                }
              }
              if (*(int *)(unaff_EBP + -0x4c) == 0) goto LAB_007adae1;
            }
            _piStack_a8 = 4.94065645841247e-321;
            uStack_b0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x30),0x7adc18);
            uVar9 = FUN_0064d61f();
            uStack_b0 = (double)CONCAT44(uVar9,0x7adc20);
            FUN_0079316f();
            if (*(int *)(unaff_EBP + -0x30) == 0x4df8f1) {
              _piStack_a8 = 6.57843941958678e-313;
              uStack_b0 = (double)CONCAT44(0x7adc2d,(undefined4)uStack_b0);
              FUN_007d3e08();
            }
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x4c) = 0;
LAB_007adae1:
            if ((*(int *)(unaff_EBP + -0x20) == 0) ||
               (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x98) == 0)) {
              if (*(int *)(unaff_EBP + 0x20) == 0x7fffffff) {
                iVar5 = *(int *)(unaff_EBP + -0x24);
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
              }
              else {
                iVar5 = *(int *)(unaff_EBP + -0x24);
                if (*(int *)(unaff_EBP + 0x20) < 0) {
                  *(int *)(unaff_EBP + 0xc) = -iVar5;
                }
                else {
                  *(int *)(unaff_EBP + 0xc) = iVar5;
                }
              }
              *(uint *)(unaff_EBP + 0x10) =
                   -(uint)(*(int *)(unaff_EBP + 0x20) != 0x7fffffff) & -iVar5;
            }
            else {
              _piStack_a8 = (double)CONCAT44(0x7adafd,piStack_a8);
              iVar5 = FUN_007d1e08();
              piVar15[0x91a] = iVar5;
              piVar15[0x91b] = 1;
              _piStack_a8 = 2.54679274596486e-313;
              FUN_004e98b7();
              iVar5 = (-(uint)(*(int *)((-(uint)(piVar15[0x35d] != 0) & piVar15[0x35d] - 0xcU) +
                                       0x110) != 0) & 1000) + 900;
              if (*(int *)(unaff_EBP + 0x20) == 0x7fffffff) {
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
              }
              else {
                if (*(int *)(unaff_EBP + -0x74) == 1) {
                  iVar5 = -iVar5;
                }
                *(int *)(unaff_EBP + 0xc) = iVar5;
              }
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
            }
          }
          if (piVar15[0x799] == 0x404139) {
            _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x2c,0x7adc90);
            iVar5 = FUN_00455c59();
            uVar9 = *(undefined4 *)(iVar5 + 4);
            _piStack_a8 = 8.455258938416574e-306;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            uStack_b0 = (double)CONCAT44(uVar9,0x7adca9);
            iVar5 = FUN_00650dae();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x28) != 0) {
              _piStack_a8 = 3.97816717374913e-317;
              FUN_0045e7c2();
            }
            if ((iVar5 != 0) && (DAT_0097bffc != 0)) {
              _piStack_a8 = (double)CONCAT44(iVar5,0x7adcd0);
              iVar5 = FUN_006509a1();
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x144),iVar5 + 0x13c);
              uStack_b0 = (double)CONCAT44(0x7adce1,(undefined4)uStack_b0);
              iVar5 = FUN_00413367();
              iVar5 = (iVar5 * *(int *)(unaff_EBP + 8)) / 100;
              *(int *)(unaff_EBP + 8) = iVar5;
              if (iVar5 < 2) {
                *(undefined4 *)(unaff_EBP + 8) = 1;
              }
            }
          }
          if ((*(int *)(unaff_EBP + -0x20) != 0) &&
             (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x1c) != 0)) {
            iVar6 = *(int *)(unaff_EBP + -0x10);
            iVar5 = iVar6 + 0x2720;
            _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x2728),iVar5);
            *(int *)(unaff_EBP + -0x28) = iVar6 + 0x2114;
            uStack_b0 = (double)CONCAT44(0x7add2c,(undefined4)uStack_b0);
            iVar7 = FUN_00413367();
            if (iVar7 != 0) {
              if ((DAT_0097bfc4 & 1) == 0) {
                DAT_0097bfc4 = DAT_0097bfc4 | 1;
                _piStack_a8 = 4.551366924199933e-308;
                DAT_0097bfc0 = FUN_0064d61f();
              }
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x614),
                                             iVar5);
              uStack_b0 = (double)CONCAT44(0x7add6a,(undefined4)uStack_b0);
              uVar9 = FUN_00413367();
              _piStack_a8 = (double)CONCAT44(uVar9,0x7add78);
              iVar7 = FUN_006509a1();
              _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0xfc),iVar7 + 0xf4);
              uStack_b0 = (double)CONCAT44(0x7add89,(undefined4)uStack_b0);
              uVar9 = FUN_00413367();
              *(undefined4 *)(unaff_EBP + -0x38) = uVar9;
              _piStack_a8 = (double)CONCAT44(0x7add98,piStack_a8);
              uVar12 = FUN_004133f0();
              if (uVar12 % 100 < *(uint *)(unaff_EBP + -0x38)) {
                _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x614),
                                               iVar5);
                uStack_b0 = (double)CONCAT44(0x7addb7,(undefined4)uStack_b0);
                uVar9 = FUN_00413367();
                _piStack_a8 = (double)CONCAT44(uVar9,0x7addc5);
                iVar5 = FUN_006509a1();
                _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x144),iVar5 + 0x13c);
                uStack_b0 = (double)CONCAT44(0x7addd6,(undefined4)uStack_b0);
                iVar6 = FUN_00413367();
                iVar5 = *(int *)(*(int *)(unaff_EBP + 0x18) + 0x15c);
                uStack_b0 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x84),iVar5 + 0x7c);
                uStack_b4 = 0x7addf0;
                iVar5 = FUN_00413367();
                iVar7 = (iVar6 * *(int *)(unaff_EBP + 8)) / 100;
                *(int *)(unaff_EBP + -0x24) = iVar7;
                if (iVar5 / 0x14 <= iVar7) {
                  *(int *)(unaff_EBP + -0x24) = iVar5 / 0x14;
                }
                _piStack_a8 = 4.551366924200136e-308;
                iVar5 = FUN_005dcae0();
                if (iVar5 == 0) {
                  _piStack_a8 = 4.975766082393211e-308;
                  iVar5 = FUN_005dcae0();
                  if (iVar5 == 0) {
                    _piStack_a8 = 5.400165240586285e-308;
                    iVar5 = FUN_005dcae0();
                    if (iVar5 == 0) {
                      *(undefined4 *)(unaff_EBP + -0x24) = 0;
                    }
                  }
                }
                _piStack_a8 = (double)CONCAT44(0x7ade5e,piStack_a8);
                piVar15 = (int *)(**(code **)(*(int *)(*(int *)(unaff_EBP + 0x18) + 4) + 0x10))();
                iStack_bc = *piVar15;
                iVar5 = piVar15[1];
                _piStack_a8 = 0.0;
                uStack_b0 = 0.0;
                uStack_b4 = 0;
                puStack_b8 = (undefined1 *)0x1;
                *(int *)(unaff_EBP + -0x1c) = iStack_bc;
                *(int **)(unaff_EBP + -0x28) = &iStack_bc;
                *(int *)(unaff_EBP + -0x18) = iVar5;
                FUN_00448a17(&DAT_00978474);
                uVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
                piVar15 = *(int **)(unaff_EBP + -0x34);
                uVar24 = 0;
                uVar23 = 0;
                uVar22 = *(undefined4 *)(unaff_EBP + -0x24);
                *(undefined1 *)(unaff_EBP + -4) = 0;
                uVar13 = FUN_0043f900(uVar22,0,0,uVar9,iVar5);
                uVar21 = *(undefined4 *)(unaff_EBP + -0x40);
                iVar16 = FUN_007d1e08(uVar21,uVar13);
                iVar16 = iVar16 + 100;
                uVar20 = 0;
                uVar14 = FUN_0067e5d1(0,iVar16);
                FUN_005cbf42(uVar14,uVar20,iVar16,uVar21,uVar13,uVar22,uVar23,uVar24,uVar9,iVar5);
                *(int *)(unaff_EBP + -0x50) = iVar6;
              }
            }
          }
        }
        else {
          *(undefined4 *)(unaff_EBP + 8) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x48) = 1;
        }
      }
      if ((*(int *)(unaff_EBP + -0x48) == 0) && (*(int *)(unaff_EBP + 8) < 2)) {
        *(undefined4 *)(unaff_EBP + 8) = 1;
      }
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        _piStack_a8 = 4.94065645841247e-321;
        uStack_b0 = 1.8084106513524466e-307;
        uVar9 = FUN_0064d61f();
        uStack_b0 = (double)CONCAT44(uVar9,0x7adef8);
        FUN_0079316f();
      }
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        _piStack_a8 = (double)CONCAT44(1,unaff_EBP + -0x94);
        uStack_b0 = (double)CONCAT44(0x7adf12,(undefined4)uStack_b0);
        FUN_0043f3d6();
        uVar12 = *(int *)(unaff_EBP + -0x8c) - *(int *)(unaff_EBP + -0x94);
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x94);
        if (uVar12 == 0) {
          _piStack_a8 = (double)CONCAT44(0x7adf40,piStack_a8);
          uVar9 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x24) = uVar9;
        }
        else {
          _piStack_a8 = (double)CONCAT44(0x7adf2f,piStack_a8);
          uVar17 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x24) = uVar17 % uVar12 + *(int *)(unaff_EBP + -0x28);
        }
        uVar12 = *(int *)(unaff_EBP + -0x88) - *(int *)(unaff_EBP + -0x90);
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x90);
        if (uVar12 == 0) {
          _piStack_a8 = (double)CONCAT44(0x7adf71,piStack_a8);
          uVar9 = FUN_004133f0();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar9;
        }
        else {
          _piStack_a8 = (double)CONCAT44(0x7adf60,piStack_a8);
          uVar17 = FUN_004133f0();
          *(uint *)(unaff_EBP + -0x34) = uVar17 % uVar12 + *(int *)(unaff_EBP + -0x28);
        }
        iVar5 = *(int *)(unaff_EBP + -0x20);
        if ((*(int **)(iVar5 + 0x78) == (int *)0x0) ||
           (iVar7 = **(int **)(iVar5 + 0x78), iVar7 == 0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)(iVar7 + -4) >> 1;
        }
        if (uVar12 != 0) {
          if (*(int *)(iVar5 + 0x84) == 0) {
            _piStack_a8 = (double)CONCAT44(0xc00614a4,iVar5);
            if (*(int *)(iVar5 + 0x9c) != 0) {
              *(int ***)(unaff_EBP + -0x58) = &piStack_a8;
              uStack_b0 = 3.97857230757872e-317;
              FUN_00424e0a();
              uStack_b0 = 0.0;
              puStack_b8 = (undefined1 *)&uStack_b4;
              *(uint **)(unaff_EBP + -0x28) = &uStack_b4;
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              iStack_bc = 0x7ae004;
              uStack_b4 = extraout_ECX_03;
              FUN_00486ada();
              puStack_b8 = *(undefined1 **)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iStack_bc = 0x7ae011;
              iStack_bc = FUN_004091f9();
              FUN_00424e82();
              FUN_0042b613();
              *(undefined4 *)(unaff_EBP + -0x58) = 1;
              goto LAB_007ae066;
            }
            *(int ***)(unaff_EBP + -0x28) = &piStack_a8;
            uStack_b0 = 3.97860392778006e-317;
            FUN_00424e0a();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            uStack_b0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x34),
                                         *(undefined4 *)(unaff_EBP + -0x24));
            *(uint **)(unaff_EBP + -0x38) = &uStack_b4;
            puStack_b8 = (undefined1 *)0x0;
            iStack_bc = 0x7ae046;
            uStack_b4 = extraout_ECX_04;
            FUN_00424dd7();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            bVar19 = 0 < *(int *)(unaff_EBP + 0x20);
          }
          else {
            _piStack_a8 = (double)CONCAT44(0xc00614a4,iVar5);
            *(int ***)(unaff_EBP + -0x28) = &piStack_a8;
            uStack_b0 = 3.97854118144303e-317;
            FUN_00424e0a();
            uStack_b0 = 0.0;
            puStack_b8 = (undefined1 *)&uStack_b4;
            *(uint **)(unaff_EBP + -0x38) = &uStack_b4;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            iStack_bc = 0x7adfc5;
            uStack_b4 = extraout_ECX_02;
            FUN_00486ada();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puStack_b8 = (undefined1 *)0x7adfd0;
            iVar5 = FUN_0043f900();
            bVar19 = iVar5 == 0;
          }
          puStack_b8 = (undefined1 *)(uint)bVar19;
          iStack_bc = 0x7ae059;
          iStack_bc = FUN_004091f9();
          FUN_00424e82();
          FUN_0042b613();
        }
LAB_007ae066:
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x98) + 0x14),
                                       *(int *)(unaff_EBP + -0x98) + 0xc);
        uStack_b0 = (double)CONCAT44(0x7ae078,(undefined4)uStack_b0);
        iVar5 = FUN_004b8c9b();
        uStack_b0 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x34),
                                     *(undefined4 *)(unaff_EBP + -0x24));
        uStack_b4 = 0x7ae085;
        uStack_b4 = FUN_007d3c48();
        puStack_b8 = (undefined1 *)(*(int *)(unaff_EBP + 0x1c) + 0xb);
        iStack_bc = iVar5;
        FUN_007d4267();
      }
    }
    if ((*(int *)(unaff_EBP + 0xc) != 0) || (*(int *)(unaff_EBP + 0x10) != 0)) {
      _piStack_a8 = (double)*(int *)(unaff_EBP + 0x10);
      uStack_b0 = (double)*(int *)(unaff_EBP + 0xc);
      uStack_b4 = 0x7ae0c4;
      FUN_0067db5b();
    }
    if (*(int *)(unaff_EBP + 8) < 1) {
      _piStack_a8 = -NAN;
      FUN_0045e3a0();
      goto LAB_007ae236;
    }
    _piStack_a8 = 3.1829976651462e-311;
    FUN_0045e3a0();
    _piStack_a8 = 3.1829936864484e-311;
    uStack_b0 = (double)CONCAT44(0x7ae0fa,(undefined4)uStack_b0);
    FUN_0043f7b6();
    piVar15[0x14a] = 5000;
    pcVar1 = (code *)piVar15[0x799];
    if (pcVar1 == (code *)0x404139) {
LAB_007ae16d:
      if ((int)pcVar1 < 0x236a6a) {
        if (((pcVar1 == (code *)0x236a69) ||
            ((pcVar1 == (code *)0x111ae9 || (pcVar1 == (code *)0x12a189)))) ||
           ((pcVar1 == (code *)0x142829 ||
            ((pcVar1 == (code *)0x205d29 || (pcVar1 == (code *)0x21e3c9)))))) {
LAB_007ae1bb:
          if ((int)pcVar1 < 0x21e3ca) {
            if (((pcVar1 != (code *)0x21e3c9) && (pcVar1 != (code *)0x111ae9)) &&
               ((pcVar1 != (code *)0x12a189 && (pcVar1 != (code *)0x142829)))) {
              bVar19 = pcVar1 == (code *)0x205d29;
LAB_007ae1f9:
              if (!bVar19) {
                _piStack_a8 = (double)CONCAT44(0x7ae203,piStack_a8);
                iVar5 = FUN_0043f6fe();
                if (-1 < iVar5) {
                  _piStack_a8 = (double)CONCAT44(0x7ae20f,piStack_a8);
                  (**(code **)(*piVar15 + 0x3c))();
                  _piStack_a8 = 4.94065645841247e-322;
                  uStack_b0 = 1.27359535932938e-313;
                  (**(code **)(piVar15[0x1e] + 0x10))();
                }
                piVar15[0x915] = 0;
                _piStack_a8 = 3.97885639532508e-317;
                _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                          ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar15 + 0x916),
                           (IBinding *)0x0);
                _piStack_a8 = (double)CONCAT44(0x7ae236,piStack_a8);
                FUN_007b0b2a();
              }
            }
          }
          else if (((pcVar1 != (code *)0x236a69) && (pcVar1 != (code *)0x312609)) &&
                  (pcVar1 != (code *)0x4dd5cc)) {
            bVar19 = pcVar1 == ptr_004f5c6a;
            goto LAB_007ae1f9;
          }
        }
      }
      else if ((((pcVar1 == (code *)0x2f9f6c) || (pcVar1 == (code *)0x312609)) ||
               (pcVar1 == (code *)0x4dd5cc)) ||
              ((pcVar1 == ptr_004f5c6a || (pcVar1 == (code *)0x4faa8c)))) goto LAB_007ae1bb;
    }
    else if ((int)pcVar1 < 0x236a6a) {
      if ((((pcVar1 == (code *)0x236a69) ||
           ((pcVar1 == (code *)0x111ae9 || (pcVar1 == (code *)0x12a189)))) ||
          (pcVar1 == (code *)0x142829)) ||
         ((pcVar1 == (code *)0x205d29 || (pcVar1 == (code *)0x21e3c9)))) goto LAB_007ae16d;
    }
    else if ((((pcVar1 == (code *)0x2f9f6c) || (pcVar1 == (code *)0x312609)) ||
             (pcVar1 == (code *)0x4dd5cc)) ||
            ((pcVar1 == ptr_004f5c6a || (pcVar1 == (code *)0x4faa8c)))) goto LAB_007ae16d;
LAB_007ae236:
    _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x7ae240);
    uVar9 = FUN_007b19ba();
    _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x84)
                                  );
    *(undefined4 *)(unaff_EBP + 0x10) = uVar9;
    uStack_b0 = (double)CONCAT44(0x7ae253,(undefined4)uStack_b0);
    iVar5 = FUN_007b3d00();
    *(int *)(unaff_EBP + 8) = iVar5;
    if (iVar5 < 0) {
      if (*(int *)(unaff_EBP + 8) == -1) {
        uVar9 = *(undefined4 *)(unaff_EBP + -0x7c);
        if (*(int *)(unaff_EBP + -0x3c) == 0) {
          uVar9 = *(undefined4 *)(unaff_EBP + -0x80);
        }
        _piStack_a8 = 4.94065645841247e-321;
        uStack_b0 = (double)CONCAT44(uVar9,0x7ae28f);
        FUN_0079316f();
        if (*(int *)(unaff_EBP + -0x3c) == 0) {
          _piStack_a8 = 3.1829936864489e-311;
          uStack_b0 = (double)CONCAT44(0x7ae29f,(undefined4)uStack_b0);
          FUN_0043f7b6();
        }
      }
    }
    else {
      _piStack_a8 = (double)CONCAT44((*(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 8)) +
                                     *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x14),
                                     0x7ae26e);
      FUN_0078c08d();
    }
    _piStack_a8 = 0.0;
    uStack_b0 = 9.54937895110967e-313;
    FUN_0060142b();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    _piStack_a8 = (double)CONCAT44(0x7ae2b4,piStack_a8);
    uVar9 = FUN_007d1e08();
    _piStack_a8 = (double)CONCAT44(uVar9,0x7ae2bd);
    FUN_00457d37();
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      _piStack_a8 = 5.38990909840625e-312;
      FUN_00457cda();
      _piStack_a8 = 3.97893989241923e-317;
      FUN_00457cda();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x7ae2e3);
      FUN_00457d37();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x14),0x7ae2ee);
      FUN_0045d247();
    }
    else {
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x1c),0x7ae2fe);
      FUN_00457cda();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x84),0x7ae30c);
      FUN_00457cda();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x7ae317);
      FUN_00457d37();
      iVar5 = *(int *)(unaff_EBP + 0x18);
      iVar7 = *(int *)(iVar5 + 0x15c);
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x14),iVar7 + 0xc);
      uStack_b0 = (double)CONCAT44(0x7ae32c,(undefined4)uStack_b0);
      uVar9 = FUN_004b8c9b();
      _piStack_a8 = (double)CONCAT44(uVar9,0x7ae337);
      FUN_00457d37();
      iVar5 = iVar5 + 0x150;
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x158),iVar5);
      uStack_b0 = (double)CONCAT44(0x7ae34c,(undefined4)uStack_b0);
      uVar9 = FUN_004b8c9b();
      _piStack_a8 = (double)CONCAT44(uVar9,0x7ae357);
      FUN_00457d37();
      if (*(int *)(unaff_EBP + -0x58) == 0) {
        uVar12 = (uint)(*(int *)(unaff_EBP + 0x20) < 0);
      }
      else {
        uVar12 = *(uint *)(unaff_EBP + -0x74);
      }
      _piStack_a8 = (double)CONCAT44(uVar12,0x7ae372);
      FUN_00457cda();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x50),0x7ae37d);
      uVar9 = FUN_00457cda();
      _piStack_a8 = (double)CONCAT44(CONCAT31((int3)((uint)extraout_ECX_05 >> 8),
                                              *(int *)(unaff_EBP + -0x3c) == 0) - 1U &
                                     CONCAT31((int3)((uint)uVar9 >> 8),
                                              *(int *)(unaff_EBP + -0x6c) != 0) + 1U,0x7ae396);
      uVar9 = FUN_00457cda();
      if ((*(int *)(unaff_EBP + -0x6c) != 0) || (*(int *)(unaff_EBP + -0x50) != 0)) {
        _piStack_a8 = (double)CONCAT44(CONCAT31((int3)((uint)extraout_ECX_06 >> 8),
                                                *(int *)(unaff_EBP + -0x50) == 0) - 1U &
                                       CONCAT31((int3)((uint)uVar9 >> 8),
                                                *(int *)(unaff_EBP + 0x24) != 0),0x7ae3b8);
        FUN_00457cda();
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x158),iVar5);
        uStack_b0 = (double)CONCAT44(0x7ae3c7,(undefined4)uStack_b0);
        uVar9 = FUN_004b8c9b();
        _piStack_a8 = (double)CONCAT44(uVar9,0x7ae3d2);
        FUN_00457d37();
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x40),0x7ae3dd);
        FUN_00457cda();
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x1c),0x7ae3e8);
        FUN_0045d247();
        _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),0x7ae3f3);
        FUN_0045d247();
        _piStack_a8 = (double)CONCAT44(0x7ae3fe,piStack_a8);
        puVar18 = (undefined2 *)(**(code **)(piVar15[1] + 0x10))();
        _piStack_a8 = (double)CONCAT44(CONCAT22((short)((uint)puVar18 >> 0x10),*puVar18),0x7ae40a);
        FUN_0045d247();
        _piStack_a8 = (double)CONCAT44(0x7ae411,piStack_a8);
        iVar5 = (**(code **)(piVar15[1] + 0x10))();
        _piStack_a8 = (double)CONCAT44(CONCAT22((short)((uint)iVar5 >> 0x10),
                                                *(undefined2 *)(iVar5 + 4)),0x7ae41e);
        FUN_0045d247();
      }
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x4c),0x7ae429);
      FUN_00457cda();
    }
    _piStack_a8 = (double)CONCAT44(unaff_EBP + -0x68,0x7ae438);
    FUN_004751b2();
    iVar5 = *(int *)(unaff_EBP + -0x10) + 0x22c4;
    _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x22cc),iVar5);
    *(undefined4 *)(unaff_EBP + 0x18) = 0;
    uStack_b0 = (double)CONCAT44(0x7ae450,(undefined4)uStack_b0);
    iVar7 = FUN_00413367();
    if (iVar7 != 0) {
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x27a0),
                                     *(int *)(unaff_EBP + -0x10) + 0x2798);
      uStack_b0 = (double)CONCAT44(0x7ae46a,(undefined4)uStack_b0);
      iVar6 = FUN_00413367();
      _piStack_a8 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x22cc),iVar5);
      if (iVar6 == 0) {
        uStack_b0 = (double)CONCAT44(0x7ae492,(undefined4)uStack_b0);
        iVar5 = FUN_00413367();
        uStack_b0 = (double)CONCAT44(*(undefined4 *)(*(int *)(unaff_EBP + -0x54) + 0x75),
                                     *(int *)(unaff_EBP + -0x54) + 0x71);
        uStack_b4 = 0x7ae4a3;
        sVar4 = FUN_0045f084();
        iVar5 = (iVar5 * *(int *)(unaff_EBP + 8)) / 100;
        *(int *)(unaff_EBP + 0x18) = (int)sVar4;
        if (sVar4 < iVar5) goto LAB_007ae4c1;
      }
      else {
        uStack_b0 = (double)CONCAT44(0x7ae47f,(undefined4)uStack_b0);
        iVar5 = FUN_00413367();
        iVar5 = (iVar5 * *(int *)(unaff_EBP + 8)) / 100;
      }
      *(int *)(unaff_EBP + 0x18) = iVar5;
    }
LAB_007ae4c1:
    *(undefined1 *)(unaff_EBP + 0xc) = 0;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      if (*(int *)(unaff_EBP + -0x44) == 0) {
        if (*(int *)(unaff_EBP + 0x18) != 0) {
          *(undefined1 *)(unaff_EBP + 0xc) = 4;
        }
      }
      else {
        *(undefined1 *)(unaff_EBP + 0xc) = 2;
      }
    }
    else {
      *(undefined1 *)(unaff_EBP + 0xc) = 1;
    }
    iVar5 = *(int *)(unaff_EBP + 8);
    if ((iVar5 < 0) && (iVar5 = 0, *(int *)(unaff_EBP + -0x70) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    _piStack_a8 = (double)((ulonglong)*(uint *)(unaff_EBP + 0xc) << 0x20);
    uStack_b0 = (double)CONCAT44((((iVar5 - *(int *)(unaff_EBP + 0x18)) - *(int *)(unaff_EBP + 0x10)
                                  ) - *(int *)(unaff_EBP + -0x44)) - *(int *)(unaff_EBP + -0x14),
                                 0x7ae50e);
    FUN_007b05f0();
    if (*(char *)(unaff_EBP + 0xc) != '\0') {
      _piStack_a8 = 0.0;
      piVar15[0x798] = 1;
      uStack_b0 = 3.97923188521592e-317;
      FUN_007b0832();
    }
    if (0 < iVar5) {
      _piStack_a8 = (double)CONCAT44(piVar15[0x7be],piVar15 + 0x7bc);
      uStack_b0 = (double)CONCAT44(0x7ae53d,(undefined4)uStack_b0);
      iVar5 = FUN_004cd670();
      if (iVar5 != 0) {
        _piStack_a8 = 3.97925016564482e-317;
        FUN_0083a6ec();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    _piStack_a8 = (double)CONCAT44(0x7ae557,piStack_a8);
    FUN_0045ebca();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _piStack_a8 = (double)CONCAT44(0x7ae563,piStack_a8);
  FUN_0047cf76();
LAB_007ae563:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


