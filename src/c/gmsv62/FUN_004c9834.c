/* FUN_004c9834 - 0x004c9834 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9834(void)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int iVar6;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar7;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int unaff_EBP;
  int *piVar8;
  undefined4 uVar9;
  int iStack_154;
  int *piStack_150;
  undefined4 *puStack_14c;
  int *local_148;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x2c);
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  if (iVar4 != 0) {
    do {
      iVar6 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      uVar3 = *(undefined4 *)(iVar4 + 4);
      *(uint *)(unaff_EBP + -0x3c) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
      _local_148 = CONCAT44(0x4c988b,local_148);
      FUN_004cd4d5();
      iVar4 = *(int *)(unaff_EBP + -0x14);
      *(undefined8 *)(unaff_EBP + -0x28) = _DAT_008ea320;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(iVar4 + 0x2c) == 3) {
        *(undefined8 *)(unaff_EBP + -0x28) = _DAT_008ea318;
      }
      iVar6 = *(int *)(iVar4 + 0x48);
      if (iVar6 == 0) {
        iVar6 = *(int *)(unaff_EBP + 8) - *(int *)(iVar4 + 0x40);
        if (0 < iVar6) {
          *(undefined4 *)(iVar4 + 0x48) = 1;
          iVar4 = *(int *)(unaff_EBP + -0x14);
          if (*(int *)(iVar4 + 0x38) == 0) {
            _local_148 = 0x80004003004ca089;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(iVar4 + 0x38);
          _local_148 = CONCAT44(0xffffffff,piVar8);
          puStack_14c = (undefined4 *)0x4ca096;
          iVar4 = (**(code **)(*piVar8 + 0xe0))();
          if (iVar4 < 0) {
            puStack_14c = (undefined4 *)&DAT_00963df8;
            iStack_154 = iVar4;
            piStack_150 = piVar8;
            FUN_00878e09();
          }
          puStack_14c = &DAT_00980690;
          piStack_150 = (int *)0x4ca0b2;
          FUN_00403191();
          puStack_14c = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_150 = (int *)0x4ca0c2;
          FUN_00403191();
          iVar4 = *(int *)(unaff_EBP + -0x14);
          iVar6 = *(int *)(iVar4 + 0x38);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar6 == 0) {
            puStack_14c = (undefined4 *)0x80004003;
            piStack_150 = (int *)0x4ca0dc;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(iVar4 + 0x38);
          iStack_154 = *(int *)(unaff_EBP + -0xfc);
          iVar4 = *piVar8;
          piStack_150 = *(int **)(unaff_EBP + -0xf8);
          puStack_14c = *(undefined4 **)(unaff_EBP + -0xf4);
          *(int **)(unaff_EBP + -0x10) = piVar8;
          iVar4 = (**(code **)(iVar4 + 0x110))();
          if (iVar4 < 0) {
            _local_148 = CONCAT44(&DAT_00963df8,*(undefined4 *)(unaff_EBP + -0x10));
            piStack_150 = (int *)0x4ca11c;
            puStack_14c = (undefined4 *)iVar4;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          _local_148 = CONCAT44(unaff_EBP + -0xe0,0x4ca12c);
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            _local_148 = CONCAT44(iVar4,0x4ca137);
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          _local_148 = CONCAT44(unaff_EBP + -0x100,0x4ca147);
          iVar4 = FUN_00402bc3();
          uVar2 = _local_148;
          iVar7 = (int)((ulonglong)_local_148 >> 0x20);
          iVar6 = iVar7;
          _local_148 = uVar2;
          if (iVar4 < 0) {
            _local_148 = CONCAT44(iVar4,0x4ca152);
            FUN_00878dfb();
            iVar6 = extraout_ECX_09;
          }
          iVar4 = *(int *)(unaff_EBP + -0x14);
          if (*(char *)(iVar4 + 0x1c) == '\x03') {
            _local_148 = 0x980690004ca16b;
            FUN_00403191();
            iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x38);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (iVar4 == 0) {
              _local_148 = 0x80004003004ca185;
              FUN_00878dfb();
            }
            _local_148 = CONCAT44(0x4ca18c,local_148);
            iVar4 = FUN_0042a378();
            _local_148 = CONCAT44(3,iVar4 + 1000);
            puStack_14c = (undefined4 *)0x4ca19f;
            FUN_004031b7();
            iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x38);
            *(undefined1 *)(unaff_EBP + -4) = 4;
            if (iVar4 == 0) {
              _local_148 = 0x80004003004ca1b8;
              FUN_00878dfb();
            }
            _local_148 = CONCAT44(unaff_EBP + -0x58,0x4ca1c5);
            piVar8 = (int *)FUN_004113e5();
            iVar4 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (iVar4 == 0) {
              _local_148 = 0x80004003004ca1d9;
              FUN_00878dfb();
            }
            piVar8 = (int *)*piVar8;
            piStack_150 = *(int **)(unaff_EBP + -0x140);
            puStack_14c = *(undefined4 **)(unaff_EBP + -0x13c);
            iVar4 = *piVar8;
            _local_148 = *(undefined8 *)(unaff_EBP + -0x138);
            *(int **)(unaff_EBP + -0x10) = piVar8;
            iStack_154 = *(int *)(unaff_EBP + -0x114);
            iVar4 = (**(code **)(iVar4 + 0x90))
                              (piVar8,0,0,*(undefined4 *)(unaff_EBP + -0x120),
                               *(undefined4 *)(unaff_EBP + -0x11c),
                               *(undefined4 *)(unaff_EBP + -0x118));
            if (iVar4 < 0) {
              _local_148 = CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x10));
              piStack_150 = (int *)0x4ca21b;
              puStack_14c = (undefined4 *)iVar4;
              FUN_00878e09();
            }
            _local_148 = CONCAT44(0x4ca223,local_148);
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 3;
            _local_148 = CONCAT44(unaff_EBP + -0x120,0x4ca233);
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4ca23e);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            _local_148 = CONCAT44(unaff_EBP + -0x140,0x4ca24e);
            iVar4 = FUN_00402bc3();
            uVar2 = _local_148;
            iVar7 = (int)((ulonglong)_local_148 >> 0x20);
            iVar6 = iVar7;
            _local_148 = uVar2;
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4ca259);
              FUN_00878dfb();
              iVar6 = extraout_ECX_10;
            }
            iVar4 = *(int *)(unaff_EBP + -0x14);
          }
          if ((*(char *)(iVar4 + 0x1c) == '\x01') &&
             (iVar6 = *(int *)(unaff_EBP + 8) - _DAT_009791b4, 300 < iVar6)) {
            _local_148 = CONCAT44(0x4ca285,local_148);
            uVar3 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
            _local_148 = CONCAT44(0x4e0,unaff_EBP + -0x44);
            puStack_14c = (undefined4 *)0x4ca29b;
            puVar5 = (undefined4 *)FUN_00679d86();
            uVar3 = *puVar5;
            *(undefined1 *)(unaff_EBP + -4) = 6;
            _local_148 = CONCAT44(0x4ca2a8,local_148);
            uVar9 = FUN_0045e2eb();
            _local_148 = CONCAT44(uVar9,*(undefined4 *)(unaff_EBP + -0x10));
            puStack_14c = (undefined4 *)0x4ca2b1;
            puStack_14c = (undefined4 *)FUN_007d3c48();
            iStack_154 = 0x4ca2b8;
            piStack_150 = (int *)uVar3;
            FUN_007d4073();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iVar6 = extraout_ECX_11;
            if (*(int *)(unaff_EBP + -0x44) != 0) {
              _local_148 = CONCAT44(*(int *)(unaff_EBP + -0x44) + -0xc,0x4ca2cf);
              FUN_00403384();
              uVar2 = _local_148;
              iVar7 = (int)((ulonglong)_local_148 >> 0x20);
              iVar6 = iVar7;
              _local_148 = uVar2;
            }
            _DAT_009791b4 = *(int *)(unaff_EBP + 8);
            goto LAB_004ca2d8;
          }
        }
      }
      else {
        if (iVar6 == 1) {
          *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 0x1e;
          _local_148 = CONCAT44(0x4c9d5b,local_148);
          iVar4 = FUN_0045e2eb();
          _local_148 = CONCAT44(0x4c9d65,local_148);
          iVar6 = FUN_0045e2eb();
          *(int *)(unaff_EBP + -0x10) = iVar6 - iVar4;
          iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x4c);
          dVar1 = (double)*(int *)(unaff_EBP + -0x10) * _DAT_008e89d0;
          *(int *)(unaff_EBP + -0x10) = iVar6;
          *(double *)(unaff_EBP + -0x60) = dVar1;
          iVar4 = *(int *)(unaff_EBP + -0x10);
          *(double *)(unaff_EBP + -0x4c) = (double)iVar4 * _DAT_008e8a90;
          if (iVar6 < 0x1f5) {
            dVar1 = 0.0;
          }
          else {
            *(int *)(unaff_EBP + -0x10) = iVar6 + -500;
            iVar6 = *(int *)(unaff_EBP + -0x10);
            *(int *)(unaff_EBP + -0x10) = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x50) + -500;
            dVar1 = (double)iVar6 / (double)*(int *)(unaff_EBP + -0x10);
            if (_DAT_008e8a78 <= dVar1) {
              dVar1 = 1.0;
            }
          }
          *(double *)(unaff_EBP + -0x20) = dVar1;
          dVar1 = (double)iVar4 * _DAT_008ea2f8;
          if (_DAT_008e8a78 <= dVar1) {
            dVar1 = 1.0;
          }
          *(double *)(unaff_EBP + -0x38) = dVar1;
          _local_148 = CONCAT44(0x4c9de5,local_148);
          uVar3 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
          _local_148 = CONCAT44(0x4c9e14,local_148);
          uVar3 = __ftol();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
          _local_148 = CONCAT44(0x4c9e1f,local_148);
          uVar3 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
          _local_148 = CONCAT44(0x4c9e59,local_148);
          uVar3 = __ftol();
          *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x4c) <
              *(int *)(*(int *)(unaff_EBP + -0x14) + 0x50)) {
            _local_148 = 0x980690004c9fb1;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 9;
            _local_148 = 0x980690004c9fc1;
            FUN_00403191();
            iVar4 = *(int *)(unaff_EBP + -0x14);
            iVar7 = *(int *)(iVar4 + 0x3c);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (iVar7 == 0) {
              _local_148 = 0x80004003004c9fdb;
              FUN_00878dfb();
            }
            piVar8 = *(int **)(iVar4 + 0x3c);
            piStack_150 = *(int **)(unaff_EBP + -0xc0);
            puStack_14c = *(undefined4 **)(unaff_EBP + -0xbc);
            iVar4 = *piVar8;
            _local_148 = *(undefined8 *)(unaff_EBP + -0xb8);
            *(int **)(unaff_EBP + -0x10) = piVar8;
            iStack_154 = *(int *)(unaff_EBP + -0x94);
            iVar4 = (**(code **)(iVar4 + 0x90))
                              (piVar8,*(undefined4 *)(unaff_EBP + -0x1c),
                               *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0xa0)
                               ,*(undefined4 *)(unaff_EBP + -0x9c),
                               *(undefined4 *)(unaff_EBP + -0x98));
            if (iVar4 < 0) {
              _local_148 = CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x10));
              piStack_150 = (int *)0x4ca01f;
              puStack_14c = (undefined4 *)iVar4;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 9;
            _local_148 = CONCAT44(unaff_EBP + -0xa0,0x4ca02f);
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4ca03a);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            _local_148 = CONCAT44(unaff_EBP + -0xc0,0x4ca04a);
            iVar4 = FUN_00402bc3();
            uVar2 = _local_148;
            iVar7 = (int)((ulonglong)_local_148 >> 0x20);
            iVar6 = iVar7;
            _local_148 = uVar2;
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4ca059);
              FUN_00878dfb();
              iVar6 = extraout_ECX_08;
              goto LAB_004ca2d8;
            }
          }
          else {
            _local_148 = CONCAT44(0x4c9e75,local_148);
            iVar4 = FUN_0045e2eb();
            _local_148 = CONCAT44(0x4c9e7e,local_148);
            iVar6 = FUN_0045e2eb();
            if (iVar6 < iVar4) {
              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48) = 2;
              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c) = 0;
              iVar6 = extraout_ECX_05;
LAB_004ca2d8:
              iVar4 = *(int *)(unaff_EBP + -0x14);
              goto LAB_004c9cde;
            }
            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48) = 3;
            _local_148 = 0x980690004c9e9c;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 7;
            _local_148 = 0x980690004c9eac;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            _local_148 = CONCAT44(0x4c9ebd,local_148);
            uVar3 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar4 + 0x3c) == 0) {
              _local_148 = 0x80004003004c9ed6;
              FUN_00878dfb();
            }
            piVar8 = *(int **)(iVar4 + 0x3c);
            _local_148 = CONCAT44(0x4c9ee0,local_148);
            uVar3 = FUN_0045e2eb();
            piStack_150 = *(int **)(unaff_EBP + -0xf0);
            puStack_14c = *(undefined4 **)(unaff_EBP + -0xec);
            _local_148 = *(undefined8 *)(unaff_EBP + -0xe8);
            iStack_154 = *(int *)(unaff_EBP + -0x84);
            iVar4 = (**(code **)(*piVar8 + 0x90))
                              (piVar8,*(undefined4 *)(unaff_EBP + -0x10),uVar3,
                               *(undefined4 *)(unaff_EBP + -0x90),*(undefined4 *)(unaff_EBP + -0x8c)
                               ,*(undefined4 *)(unaff_EBP + -0x88));
            if (iVar4 < 0) {
              FUN_00878e09(iVar4,piVar8,&DAT_00963de8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_004c9f40:
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              FUN_00878dfb();
            }
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar4 + 0x3c) == 0) {
              FUN_00878dfb();
            }
            piVar8 = *(int **)(iVar4 + 0x3c);
            iVar4 = (**(code **)(*piVar8 + 0x80))(piVar8);
            iVar6 = extraout_ECX_06;
            if (iVar4 < 0) {
              _local_148 = CONCAT44(&DAT_00963de8,piVar8);
              piStack_150 = (int *)0x4c9f8d;
              puStack_14c = (undefined4 *)iVar4;
              FUN_00878e09();
              iVar6 = extraout_ECX_07;
            }
          }
        }
        else {
          if (iVar6 == 2) {
            *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 0x1e;
            *(double *)(unaff_EBP + -0x38) =
                 (double)*(int *)(*(int *)(unaff_EBP + -0x14) + 0x4c) * _DAT_008e8a90;
            _local_148 = CONCAT44(0x4c9aec,local_148);
            iVar4 = FUN_0045e2eb();
            _local_148 = CONCAT44(0x4c9af5,local_148);
            iVar6 = FUN_0045e2eb();
            if (iVar6 < iVar4) {
              _local_148 = CONCAT44(0x4c9b05,local_148);
              uVar3 = FUN_0045e2eb();
              *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
              _local_148 = CONCAT44(0x4c9b31,local_148);
              uVar3 = __ftol();
              *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
              _local_148 = CONCAT44(0x4c9b3f,local_148);
              iVar4 = FUN_0045e2eb();
              if (iVar4 <= *(int *)(unaff_EBP + -0x2c)) {
                *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x48) = 3;
                _local_148 = 0x980690004c9b5e;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                _local_148 = 0x980690004c9b6e;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                _local_148 = CONCAT44(0x4c9b7f,local_148);
                uVar3 = FUN_0045e2eb();
                *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
                iVar4 = *(int *)(unaff_EBP + -0x14);
                if (*(int *)(iVar4 + 0x3c) == 0) {
                  _local_148 = 0x80004003004c9b98;
                  FUN_00878dfb();
                }
                piVar8 = *(int **)(iVar4 + 0x3c);
                _local_148 = CONCAT44(0x4c9ba2,local_148);
                uVar3 = FUN_0045e2eb();
                piStack_150 = *(int **)(unaff_EBP + -0xb0);
                puStack_14c = *(undefined4 **)(unaff_EBP + -0xac);
                _local_148 = *(undefined8 *)(unaff_EBP + -0xa8);
                iStack_154 = *(int *)(unaff_EBP + -0x104);
                iVar4 = (**(code **)(*piVar8 + 0x90))
                                  (piVar8,*(undefined4 *)(unaff_EBP + -0x10),uVar3,
                                   *(undefined4 *)(unaff_EBP + -0x110),
                                   *(undefined4 *)(unaff_EBP + -0x10c),
                                   *(undefined4 *)(unaff_EBP + -0x108));
                if (iVar4 < 0) {
                  FUN_00878e09(iVar4,piVar8,&DAT_00963de8);
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                iVar4 = FUN_00402bc3();
                if (iVar4 < 0) {
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0;
                goto LAB_004c9f40;
              }
            }
            _local_148 = 0x980690004c9c13;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            _local_148 = 0x980690004c9c23;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            _local_148 = CONCAT44(0x4c9c34,local_148);
            FUN_0045e2eb();
            _local_148 = CONCAT44(0x4c9c3d,local_148);
            FUN_0045e2eb();
            piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x3c);
            if (*piVar8 == 0) {
              _local_148 = 0x80004003004c9c5c;
              FUN_00878dfb();
            }
            piVar8 = (int *)*piVar8;
            _local_148 = CONCAT44(0x4c9c65,local_148);
            uVar3 = FUN_0045e2eb();
            piStack_150 = *(int **)(unaff_EBP + -0xd0);
            puStack_14c = *(undefined4 **)(unaff_EBP + -0xcc);
            _local_148 = *(undefined8 *)(unaff_EBP + -200);
            iStack_154 = *(int *)(unaff_EBP + -0x124);
            iVar4 = (**(code **)(*piVar8 + 0x90))
                              (piVar8,uVar3,*(undefined4 *)(unaff_EBP + -0x2c),
                               *(undefined4 *)(unaff_EBP + -0x130),*(undefined4 *)(unaff_EBP + -300)
                               ,*(undefined4 *)(unaff_EBP + -0x128));
            if (iVar4 < 0) {
              _local_148 = CONCAT44(&DAT_00963de8,piVar8);
              piStack_150 = (int *)0x4c9ca0;
              puStack_14c = (undefined4 *)iVar4;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            _local_148 = CONCAT44(unaff_EBP + -0x130,0x4c9cb0);
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4c9cbb);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iVar4 = unaff_EBP + -0xd0;
          }
          else {
            if (iVar6 != 3) {
              iVar6 = iVar6 + -4;
              if ((iVar6 == 0) &&
                 (iVar6 = *(int *)(iVar4 + 0x44) - *(int *)(unaff_EBP + 8), iVar6 < 0)) {
                if ((DAT_009791b0 & 1) == 0) {
                  DAT_009791b0 = DAT_009791b0 | 1;
                  _local_148 = 0x40413e004c98fe;
                  DAT_009791ac = FUN_0064d61f();
                }
                _local_148 = CONCAT44(0x4c9911,local_148);
                uVar3 = FUN_0045e2eb();
                *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
                _local_148 = CONCAT44(0x4c991b,local_148);
                uVar3 = FUN_0045e2eb();
                *(undefined4 *)(unaff_EBP + -0x50) = uVar3;
                *(int ***)(unaff_EBP + -0x10) = &local_148;
                _local_148 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x14),extraout_ECX_00);
                puStack_14c = (undefined4 *)0x4c9930;
                FUN_004cd4d5();
                iVar4 = *(int *)(unaff_EBP + -0x30);
                puStack_14c = (undefined4 *)0x4c993a;
                FUN_004ca2e0();
                iVar6 = *(int *)(unaff_EBP + 8);
                iVar7 = extraout_ECX_01;
                if (0x59 < iVar6 - *(int *)(iVar4 + 4)) {
                  iVar7 = 0x25;
                  local_148 = (int *)0x40413e;
                  puStack_14c = (undefined4 *)0x4c9953;
                  FUN_007d3e08();
                  *(int *)(iVar4 + 4) = iVar6;
                }
                _local_148 = CONCAT44(0xc00614a4,iVar7);
                *(int ***)(unaff_EBP + -0x10) = &local_148;
                puStack_14c = (undefined4 *)0x0;
                piStack_150 = (int *)0x4c996b;
                FUN_00424e0a();
                puStack_14c = *(undefined4 **)(unaff_EBP + -0x50);
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                piStack_150 = *(int **)(unaff_EBP + -0x54);
                *(int **)(unaff_EBP + -0x1c) = &iStack_154;
                iStack_154 = extraout_ECX_02;
                FUN_00424dd7(0);
                *(undefined1 *)(unaff_EBP + -4) = 0x12;
                FUN_004ca340(unaff_EBP + -0x40,1);
                uVar9 = 0;
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                uVar3 = FUN_004091f9(0);
                FUN_00424e82(uVar3);
                FUN_0042b613(uVar3,uVar9);
                *(undefined1 *)(unaff_EBP + -4) = 0;
                iVar6 = 0;
                if (*(int *)(unaff_EBP + -0x40) != 0) {
                  _local_148 = CONCAT44(0x4c99c3,local_148);
                  FUN_004030b1();
                  *(undefined4 *)(unaff_EBP + -0x40) = 0;
                  iVar6 = extraout_ECX_03;
                  goto LAB_004ca2d8;
                }
                goto LAB_004c9cd6;
              }
              goto LAB_004c9cde;
            }
            *(double *)(iVar4 + 0x60) = *(double *)(iVar4 + 0x60) + _DAT_008ea310;
            _local_148 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x80),0x4c99e3);
            VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
            _local_148 = CONCAT44(&DAT_00980690,unaff_EBP + -0x80);
            puStack_14c = (undefined4 *)0x4c99ed;
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4c99f9);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            _local_148 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x70),0x4c9a03);
            VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
            _local_148 = CONCAT44(&DAT_00980690,unaff_EBP + -0x70);
            puStack_14c = (undefined4 *)0x4c9a0d;
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4c9a19);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x14);
            _local_148 = CONCAT44(0x4c9a2d,local_148);
            uVar3 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar4 + 0x3c) == 0) {
              _local_148 = 0x80004003004c9a46;
              FUN_00878dfb();
            }
            piVar8 = *(int **)(iVar4 + 0x3c);
            _local_148 = CONCAT44(0x4c9a50,local_148);
            uVar3 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
            *(double *)(unaff_EBP + -0x38) = (double)*(int *)(unaff_EBP + -0x1c);
            _local_148 = *(undefined8 *)(*(int *)(unaff_EBP + -0x24) + 0x60);
            puStack_14c = (undefined4 *)0x4c9a69;
            FUN_0087adc4();
            puStack_14c = (undefined4 *)0x4c9a77;
            uVar3 = __ftol();
            piStack_150 = *(int **)(unaff_EBP + -0x80);
            puStack_14c = *(undefined4 **)(unaff_EBP + -0x7c);
            _local_148 = *(undefined8 *)(unaff_EBP + -0x78);
            iStack_154 = *(int *)(unaff_EBP + -100);
            iVar4 = (**(code **)(*piVar8 + 0x90))
                              (piVar8,*(undefined4 *)(unaff_EBP + -0x10),uVar3,
                               *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c)
                               ,*(undefined4 *)(unaff_EBP + -0x68));
            if (iVar4 < 0) {
              _local_148 = CONCAT44(&DAT_00963de8,piVar8);
              piStack_150 = (int *)0x4c9aab;
              puStack_14c = (undefined4 *)iVar4;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            _local_148 = CONCAT44(unaff_EBP + -0x70,0x4c9ab8);
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              _local_148 = CONCAT44(iVar4,0x4c9ac3);
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iVar4 = unaff_EBP + -0x80;
          }
          _local_148 = CONCAT44(iVar4,0x4c9ccb);
          iVar4 = FUN_00402bc3();
          uVar2 = _local_148;
          iVar7 = (int)((ulonglong)_local_148 >> 0x20);
          iVar6 = iVar7;
          _local_148 = uVar2;
          if (iVar4 < 0) {
            _local_148 = CONCAT44(iVar4,0x4c9cd6);
            FUN_00878dfb();
            iVar6 = extraout_ECX_04;
          }
        }
LAB_004c9cd6:
        iVar4 = *(int *)(unaff_EBP + -0x14);
      }
LAB_004c9cde:
      if ((*(char *)(iVar4 + 0x1d) == '\0') &&
         ((*(int *)(iVar4 + 0x48) == 3 ||
          (iVar6 = *(int *)(unaff_EBP + 8) - *(int *)(iVar4 + 0x40), 3000 < iVar6)))) {
        *(int ***)(unaff_EBP + -0x10) = &local_148;
        _local_148 = CONCAT44(iVar4,iVar6);
        puStack_14c = (undefined4 *)0x4c9d07;
        FUN_004cd4d5();
        puStack_14c = (undefined4 *)0x4c9d0f;
        FUN_004ca2e0();
        iVar4 = *(int *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar4 != 0) {
        _local_148 = 0x4c9d25;
        FUN_004cd5da();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      if (*(int *)(unaff_EBP + -0x3c) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x3c);
    } while( true );
  }
  _local_148 = CONCAT44(0x4c9d39,local_148);
  FUN_004ccdcc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


