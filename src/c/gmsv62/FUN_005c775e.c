/* FUN_005c775e - 0x005c775e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c775e(void)

{
  IBinding *pIVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar10;
  undefined4 *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int unaff_EBP;
  float10 fVar11;
  int iStack_234;
  int *piStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  int iStack_21c;
  int *piStack_218;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iVar3 = FUN_005c8935();
  if (iVar3 == 0) {
    piStack_218 = (int *)(extraout_ECX + 0x3d0);
    iStack_21c = 0x5c77a0;
    iVar3 = FUN_004cd670();
    if (iVar3 != 0) {
      piStack_218 = (int *)(extraout_ECX + 0x3d0);
      iStack_21c = 0x5c77b4;
      iVar3 = FUN_004cd670();
      if (iVar3 != 3) goto LAB_005c891e;
    }
    iVar3 = FUN_005d04ff();
    if ((iVar3 == 0) &&
       ((*(int *)(extraout_ECX + 0x2f8) == 0 || (iVar3 = FUN_005d053d(), iVar3 != 0)))) {
      piStack_218 = (int *)(unaff_EBP + -0x108);
      *(undefined4 *)(unaff_EBP + -0x2c) = DAT_00978358;
      iStack_21c = 0x5c77fe;
      FUN_0043f3d6();
      if ((*(int *)(extraout_ECX + 0x78) != 0) &&
         (-1 < *(int *)(unaff_EBP + 8) - *(int *)(extraout_ECX + 0x78))) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        do {
          if (*(int *)(unaff_EBP + -0x1c) < 0) {
            *(undefined **)(unaff_EBP + -0x30) = &DAT_0097812c;
          }
          else {
            FUN_0087a1b0();
            iStack_21c = *(undefined4 *)(unaff_EBP + -0x1c);
            puStack_220 = (undefined1 *)0x5c7838;
            piStack_218 = (int *)&stack0xfffffdf0;
            uVar4 = FUN_0087a25a();
            *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
          }
          if (*(undefined4 **)(extraout_ECX + 0x80) == (undefined4 *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)**(undefined4 **)(extraout_ECX + 0x80);
          }
          piStack_218 = (int *)(unaff_EBP + -0x14);
          iStack_21c = 0x5c786a;
          puVar5 = (undefined4 *)FUN_00679d86();
          iStack_21c = *puVar5;
          puStack_220 = (undefined1 *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_228 = CONCAT44(0x5c787e,(int)uStack_228);
          piStack_218 = piVar7;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00402676();
          piStack_218 = (int *)0x5c789a;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_218 = (int *)0x5c78aa;
          FUN_00403191();
          piStack_218 = (int *)0x0;
          iStack_21c = unaff_EBP + -0x78;
          puStack_220 = (undefined1 *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uStack_228 = CONCAT44(0x5c78c3,(int)uStack_228);
          uStack_228._0_4_ = FUN_00411641();
          *(int *)(unaff_EBP + -0x34) = (int)&uStack_228 + 4;
          uStack_228._4_4_ = (undefined4 *)extraout_ECX_00;
          FUN_004033a1();
          uStack_228 = CONCAT44(uStack_228._4_4_,unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00405a1d();
          FUN_00402660();
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_21c = 0x5c78f8;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x38) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (iVar3 != 0) {
            piStack_218 = (int *)0x5c790e;
            iVar3 = FUN_00404b30();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              piStack_218 = (int *)0x5c791f;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_218 = (int *)0x5c792f;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_218 = (int *)0x5c793a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          piStack_218 = (int *)0x5c794a;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_218 = (int *)0x5c7955;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          piStack_218 = (int *)0x5c7962;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_218 = (int *)0x5c796d;
            FUN_00878dfb();
          }
          piVar7 = (int *)0x0;
          if (*(int *)(unaff_EBP + -0x18) == 0) {
LAB_005c79f8:
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (piVar7 != (int *)0x0) {
              piStack_218 = (int *)0x5c7a05;
              (**(code **)(*piVar7 + 8))();
            }
            break;
          }
          iVar3 = FUN_0040cf4d();
          if (iVar3 == 0) {
            piVar7 = *(int **)(unaff_EBP + -0x18);
            goto LAB_005c79f8;
          }
          if (((*(int *)(extraout_ECX + 0x274) == 0) &&
              (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x194) != 0)) ||
             (*(int *)(extraout_ECX + 0x7c) != 0)) {
            puStack_220 = (undefined1 *)0x1;
          }
          else {
            puStack_220 = (undefined1 *)0x0;
          }
          piStack_218 = (int *)0x0;
          iStack_21c = 0;
          uStack_228 = CONCAT44(0x5c79af,(int)uStack_228);
          uStack_228._0_4_ = FUN_00411641();
          *(int *)(unaff_EBP + -0x34) = (int)&uStack_228 + 4;
          uStack_228._4_4_ = (undefined4 *)extraout_ECX_01;
          FUN_004033a1();
          uStack_228 = CONCAT44(uStack_228._4_4_,unaff_EBP + -0x50);
          FUN_005ca3b4();
          if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
            piStack_218 = (int *)0x5c79d3;
            (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            piStack_218 = (int *)0x5c79e3;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        } while (*(int *)(unaff_EBP + -0x1c) <= 0x7fffffff);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x78) = 0;
        FUN_00402676();
      }
      piVar7 = *(int **)(extraout_ECX + 0xa4);
      if (piVar7 != (int *)0x0) {
        do {
          iVar3 = *(int *)((-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + -4)) + 4);
          iVar6 = piVar7[1];
          *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
          *(int **)(unaff_EBP + -0x18) = piVar7;
          if (*(int *)(unaff_EBP + 8) - iVar6 < 0) {
            if (-1 < *(int *)(unaff_EBP + 8) - *piVar7) {
              if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1c) == 0) {
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                piStack_218 = (int *)(unaff_EBP + -0x50);
                *(undefined4 *)(unaff_EBP + -4) = 10;
                iStack_21c = 0x5c7a9e;
                puVar5 = (undefined4 *)FUN_00679d86();
                iStack_21c = *puVar5;
                piStack_218 = (int *)(unaff_EBP + -0x10);
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                puStack_220 = (undefined1 *)0x5c7aaf;
                FUN_00437222();
                *(undefined1 *)(unaff_EBP + -4) = 10;
                FUN_00402676();
                piStack_218 = (int *)0x5c7acd;
                VariantInit((VARIANTARG *)(unaff_EBP + -200));
                piStack_218 = (int *)(unaff_EBP + -200);
                iStack_21c = 0x5c7adf;
                iVar3 = FUN_00402e32();
                if (iVar3 < 0) {
                  piStack_218 = (int *)0x5c7aeb;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                piStack_218 = (int *)0x5c7af8;
                VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
                piStack_218 = (int *)(unaff_EBP + -0xb8);
                iStack_21c = 0x5c7b05;
                iVar3 = FUN_00402e32();
                if (iVar3 < 0) {
                  piStack_218 = (int *)0x5c7b11;
                  FUN_00878dfb();
                }
                piVar7 = *(int **)(unaff_EBP + -0x10);
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                if (piVar7 == (int *)0x0) {
                  piStack_218 = (int *)0x5c7b26;
                  FUN_00878dfb();
                  piVar7 = *(int **)(unaff_EBP + -0x10);
                }
                iStack_234 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0xc);
                puStack_220 = *(undefined1 **)(unaff_EBP + -200);
                iStack_21c = *(int *)(unaff_EBP + -0xc4);
                piStack_218 = *(int **)(unaff_EBP + -0xc0);
                piStack_230 = *(int **)(unaff_EBP + -0xb8);
                *(undefined4 *)(unaff_EBP + -0x38) =
                     *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 8);
                iVar3 = *piVar7;
                *(int **)(unaff_EBP + -0x14) = piVar7;
                uStack_228 = CONCAT44(*(undefined4 *)(unaff_EBP + -0xac),
                                      *(undefined4 *)(unaff_EBP + -0xb0));
                iVar3 = (**(code **)(iVar3 + 0x90))(piVar7,*(undefined4 *)(unaff_EBP + -0x38));
                if (iVar3 < 0) {
                  FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
                if (iVar3 < 0) {
                  FUN_00878dfb(iVar3);
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                iVar3 = FUN_00402bc3(unaff_EBP + -200);
                if (iVar3 < 0) {
                  FUN_00878dfb(iVar3);
                }
                VariantInit((VARIANTARG *)(unaff_EBP + -0xe8));
                iVar3 = FUN_00402e32(unaff_EBP + -0xe8,&DAT_00980690);
                if (iVar3 < 0) {
                  FUN_00878dfb(iVar3);
                }
                uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                FUN_004031b7(uVar4,3);
                piVar7 = *(int **)(unaff_EBP + -0x10);
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                if (piVar7 == (int *)0x0) {
                  FUN_00878dfb(0x80004003);
                  piVar7 = *(int **)(unaff_EBP + -0x10);
                }
                uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
                *(undefined4 *)(unaff_EBP + -0x38) =
                     *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
                iVar3 = *piVar7;
                *(int **)(unaff_EBP + -0x14) = piVar7;
                iVar3 = (**(code **)(iVar3 + 0x90))
                                  (piVar7,*(undefined4 *)(unaff_EBP + -0x38),uVar4,
                                   *(undefined4 *)(unaff_EBP + -0x158),
                                   *(undefined4 *)(unaff_EBP + -0x154),
                                   *(undefined4 *)(unaff_EBP + -0x150),
                                   *(undefined4 *)(unaff_EBP + -0x14c),
                                   *(undefined4 *)(unaff_EBP + -0xe8),
                                   *(undefined4 *)(unaff_EBP + -0xe4),
                                   *(undefined4 *)(unaff_EBP + -0xe0),
                                   *(undefined4 *)(unaff_EBP + -0xdc));
                if (iVar3 < 0) {
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  FUN_00878dfb();
                }
                iVar3 = *(int *)(unaff_EBP + -0x18);
                iVar10 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0xc);
                iVar6 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 8);
                *(int *)(unaff_EBP + -0x20) = iVar10;
                *(int *)(unaff_EBP + -0x38) = iVar10 * iVar10 + iVar6 * iVar6;
                *(int *)(unaff_EBP + -0x14) = iVar6;
                fVar11 = (float10)FUN_0087af44((double)*(int *)(unaff_EBP + -0x38));
                *(double *)(unaff_EBP + -0x3c) = (double)fVar11;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  FUN_00878dfb();
                }
                piVar7 = *(int **)(unaff_EBP + -0x10);
                FUN_0087af10(-((double)*(int *)(unaff_EBP + -0x20) / *(double *)(unaff_EBP + -0x3c))
                             ,-((double)*(int *)(unaff_EBP + -0x14) / *(double *)(unaff_EBP + -0x3c)
                               ));
                iVar6 = (**(code **)(*piVar7 + 0x80))();
                if (iVar6 < 0) {
                  puStack_220 = (undefined1 *)0x5c7d17;
                  iStack_21c = iVar6;
                  piStack_218 = piVar7;
                  FUN_00878e09();
                }
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  piStack_218 = (int *)0x5c7d29;
                  FUN_00878dfb();
                }
                fVar11 = (float10)FUN_0042fae2();
                if ((float10)_DAT_008e8ac8 < fVar11) {
LAB_005c7d5e:
                  *(undefined4 *)(unaff_EBP + -0x14) = 1;
                }
                else {
                  if (*(int *)(unaff_EBP + -0x10) == 0) {
                    piStack_218 = (int *)0x5c7d4b;
                    FUN_00878dfb();
                  }
                  fVar11 = (float10)FUN_0042fae2();
                  if (fVar11 < (float10)_DAT_008ecb50) goto LAB_005c7d5e;
                }
                piStack_218 = (int *)0x5c7d74;
                VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
                piStack_218 = (int *)(unaff_EBP + -0x128);
                iStack_21c = 0x5c7d85;
                iVar6 = FUN_00402e32();
                if (iVar6 < 0) {
                  piStack_218 = (int *)0x5c7d91;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x10;
                piStack_218 = (int *)0x5c7d9e;
                VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
                piStack_218 = (int *)(unaff_EBP + -0x148);
                puVar5 = &DAT_00980690;
                iStack_21c = 0x5c7daf;
                iVar6 = FUN_00402e32();
                if (iVar6 < 0) {
                  piStack_218 = (int *)0x5c7dbb;
                  FUN_00878dfb();
                  puVar5 = extraout_ECX_02;
                }
                piStack_218 = (int *)0x0;
                iStack_21c = unaff_EBP + -0x128;
                puStack_220 = (undefined1 *)(unaff_EBP + -0x148);
                uStack_228._0_4_ = iVar3 + 0x20;
                *(int *)(unaff_EBP + -0x20) = (int)&uStack_228 + 4;
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                uStack_228._4_4_ = puVar5;
                FUN_004059fd();
                uStack_228 = CONCAT44(uStack_228._4_4_,unaff_EBP + -0x198);
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                FUN_00405a1d();
                FUN_00402660();
                FUN_00404a02();
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                iStack_21c = 0x5c7e07;
                iVar6 = FUN_004032b4();
                *(int *)(unaff_EBP + -100) = iVar6;
                *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                if (iVar6 != 0) {
                  piStack_218 = (int *)0x5c7e1d;
                  iVar6 = FUN_00404b30();
                  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
                    piStack_218 = (int *)0x5c7e2e;
                    FUN_00878dfb();
                  }
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                piStack_218 = (int *)0x5c7e3e;
                iVar6 = FUN_00402bc3();
                if (iVar6 < 0) {
                  piStack_218 = (int *)0x5c7e49;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                piStack_218 = (int *)0x5c7e59;
                iVar6 = FUN_00402bc3();
                if (iVar6 < 0) {
                  piStack_218 = (int *)0x5c7e64;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                piStack_218 = (int *)0x5c7e74;
                iVar6 = FUN_00402bc3();
                if (iVar6 < 0) {
                  piStack_218 = (int *)0x5c7e7f;
                  FUN_00878dfb();
                }
                if ((*(int *)(unaff_EBP + -0x1c) == 0) || (iVar6 = FUN_0040cf4d(), iVar6 == 0)) {
                  piStack_218 = (int *)0x5c7fef;
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                             (IBinding *)0x0);
                  piStack_218 = extraout_ECX_04;
                }
                else {
                  piStack_218 = (int *)0xff;
                  iStack_21c = 0x5c7eab;
                  FUN_00424e27();
                  iStack_21c = 0x5c7eb2;
                  iStack_21c = FUN_004320e3();
                  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_220;
                  uStack_228 = 0x5c7ebf;
                  FUN_00424e0a();
                  uStack_228 = 0;
                  piStack_230 = (int *)(unaff_EBP + -0x10);
                  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffdd4;
                  iStack_234 = 0x5c7ed0;
                  FUN_00433bdf();
                  piStack_230 = (int *)0x0;
                  *(int **)(unaff_EBP + -0x20) = &iStack_234;
                  FUN_00424dbc(unaff_EBP + -0x1c);
                  puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x54);
                  pIVar1 = (IBinding *)*puVar5;
                  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20) =
                       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c);
                  piStack_218 = (int *)0x5c7ef9;
                  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 0x1c),
                             pIVar1);
                  if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
                    piStack_218 = (int *)0x5c7f06;
                    (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
                  }
                  piStack_218 = (int *)0x5c7f0f;
                  VariantInit((VARIANTARG *)(unaff_EBP + -0xf8));
                  piStack_218 = (int *)(unaff_EBP + -0xf8);
                  iStack_21c = 0x5c7f21;
                  iVar3 = FUN_00402e32();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c7f2d;
                    FUN_00878dfb();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x18;
                  piStack_218 = (int *)0x5c7f3a;
                  VariantInit((VARIANTARG *)(unaff_EBP + -0x118));
                  piStack_218 = (int *)(unaff_EBP + -0x118);
                  iStack_21c = 0x5c7f47;
                  iVar3 = FUN_00402e32();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c7f53;
                    FUN_00878dfb();
                  }
                  iVar3 = **(int **)(unaff_EBP + -0x20);
                  *(undefined1 *)(unaff_EBP + -4) = 0x19;
                  if (iVar3 == 0) {
                    piStack_218 = (int *)0x5c7f68;
                    FUN_00878dfb();
                  }
                  puStack_220 = *(undefined1 **)(unaff_EBP + -0xf8);
                  iStack_21c = *(int *)(unaff_EBP + -0xf4);
                  piStack_218 = *(int **)(unaff_EBP + -0xf0);
                  piStack_230 = *(int **)(unaff_EBP + -0x118);
                  piVar7 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x1c);
                  iVar3 = *piVar7;
                  iStack_234 = 0x20;
                  *(int **)(unaff_EBP + -0x20) = piVar7;
                  uStack_228 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x10c),
                                        *(undefined4 *)(unaff_EBP + -0x110));
                  iVar3 = (**(code **)(iVar3 + 0x110))(piVar7);
                  if (iVar3 < 0) {
                    piStack_218 = *(int **)(unaff_EBP + -0x20);
                    puStack_220 = (undefined1 *)0x5c7fae;
                    iStack_21c = iVar3;
                    FUN_00878e09();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x18;
                  piStack_218 = (int *)0x5c7fbe;
                  iVar3 = FUN_00402bc3();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c7fc9;
                    FUN_00878dfb();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  piStack_218 = (int *)0x5c7fd9;
                  piVar7 = (int *)(unaff_EBP + -0xf8);
                  iVar3 = FUN_00402bc3();
                  piStack_218 = piVar7;
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c7fe4;
                    FUN_00878dfb();
                    piStack_218 = extraout_ECX_03;
                  }
                }
                if (*(int *)(unaff_EBP + -0x1c) != 0) {
                  puStack_220 = (undefined1 *)&piStack_218;
                  *(int ***)(unaff_EBP + -0x20) = &piStack_218;
                  iStack_21c = 0xaae;
                  uStack_228 = CONCAT44(0x5c800f,(int)uStack_228);
                  FUN_00679e4e();
                  iStack_21c = unaff_EBP + -0xd8;
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  puStack_220 = (undefined1 *)0x5c8022;
                  FUN_0040263d();
                  puStack_220 = (undefined1 *)0x5c8029;
                  piStack_218 = (int *)FUN_004048a4();
                  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
                  iStack_21c = 0x5c8033;
                  piVar7 = (int *)FUN_00412550();
                  iStack_21c = unaff_EBP + -0xd8;
                  *(bool *)(unaff_EBP + -0x25) = piVar7 != (int *)0x0;
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  puStack_220 = (undefined1 *)0x5c804b;
                  iVar3 = FUN_00402bc3();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c8058;
                    FUN_00878dfb();
                  }
                  if (*(char *)(unaff_EBP + -0x25) != '\0') {
                    if (*(int *)(unaff_EBP + -0x14) == 0) {
                      piStack_218 = (int *)-(int)piVar7;
                      iStack_21c = 0x5c80da;
                      FUN_004031b7();
                      piVar7 = *(int **)(unaff_EBP + -0x10);
                      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                      if (piVar7 == (int *)0x0) {
                        piStack_218 = (int *)0x5c80ef;
                        FUN_00878dfb();
                        piVar7 = *(int **)(unaff_EBP + -0x10);
                      }
                      iVar3 = *piVar7;
                      puStack_220 = *(undefined1 **)(unaff_EBP + -0x168);
                      iStack_21c = *(int *)(unaff_EBP + -0x164);
                      piStack_218 = *(int **)(unaff_EBP + -0x160);
                      uStack_228 = 0;
                      *(int **)(unaff_EBP + -0x20) = piVar7;
                      piStack_230 = (int *)0x5c8114;
                      iVar3 = (**(code **)(iVar3 + 0xa0))();
                      if (iVar3 < 0) {
                        piStack_218 = *(int **)(unaff_EBP + -0x20);
                        puStack_220 = (undefined1 *)0x5c8126;
                        iStack_21c = iVar3;
                        FUN_00878e09();
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0x15;
                    }
                    else {
                      iStack_21c = 0x5c8074;
                      piStack_218 = piVar7;
                      FUN_004031b7();
                      piVar7 = *(int **)(unaff_EBP + -0x10);
                      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                      if (piVar7 == (int *)0x0) {
                        piStack_218 = (int *)0x5c8089;
                        FUN_00878dfb();
                        piVar7 = *(int **)(unaff_EBP + -0x10);
                      }
                      iVar3 = *piVar7;
                      puStack_220 = *(undefined1 **)(unaff_EBP + -0x178);
                      iStack_21c = *(int *)(unaff_EBP + -0x174);
                      piStack_218 = *(int **)(unaff_EBP + -0x170);
                      uStack_228 = 0;
                      *(int **)(unaff_EBP + -0x20) = piVar7;
                      piStack_230 = (int *)0x5c80ae;
                      iVar3 = (**(code **)(iVar3 + 0xa0))();
                      if (iVar3 < 0) {
                        piStack_218 = *(int **)(unaff_EBP + -0x20);
                        puStack_220 = (undefined1 *)0x5c80c0;
                        iStack_21c = iVar3;
                        FUN_00878e09();
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0x15;
                    }
                    piStack_218 = (int *)0x5c8136;
                    iVar3 = FUN_00402bc3();
                    if (iVar3 < 0) {
                      piStack_218 = (int *)0x5c8141;
                      FUN_00878dfb();
                    }
                  }
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
                  piStack_218 = (int *)0x5c8152;
                  (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                piVar7 = *(int **)(unaff_EBP + -0x10);
LAB_005c83ae:
                if (piVar7 != (int *)0x0) {
                  piStack_218 = (int *)0x5c83b8;
                  (**(code **)(*piVar7 + 8))();
                }
              }
              else if (iVar6 - *(int *)(unaff_EBP + 8) < 0xc9) {
                if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1c) == 0) {
                  piStack_218 = (int *)0x5c8181;
                  FUN_00878dfb();
                }
                piStack_218 = (int *)0x5c818c;
                piVar7 = (int *)FUN_004113e5();
                iVar3 = *piVar7;
                *(undefined4 *)(unaff_EBP + -4) = 0x1e;
                if (iVar3 == 0) {
                  piStack_218 = (int *)0x5c81a3;
                  FUN_00878dfb();
                }
                piStack_218 = (int *)0x5c81b1;
                FUN_004308ad();
                piStack_218 = (int *)0x0;
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                iStack_21c = 0x5c81be;
                iVar3 = FUN_004032b4();
                *(char *)(unaff_EBP + -0x25) = '\x01' - (iVar3 != 0);
                *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                piStack_218 = (int *)0x5c81d7;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  piStack_218 = (int *)0x5c81e2;
                  FUN_00878dfb();
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
                  piStack_218 = (int *)0x5c81f3;
                  (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
                }
                if (*(char *)(unaff_EBP + -0x25) != '\0') {
                  *(undefined4 *)(unaff_EBP + -0x10) = 0;
                  piStack_218 = (int *)(unaff_EBP + -0x4c);
                  *(undefined4 *)(unaff_EBP + -4) = 0x20;
                  iStack_21c = 0x5c8219;
                  puVar5 = (undefined4 *)FUN_00679d86();
                  iStack_21c = *puVar5;
                  piStack_218 = (int *)(unaff_EBP + -0x10);
                  *(undefined1 *)(unaff_EBP + -4) = 0x21;
                  puStack_220 = (undefined1 *)0x5c822a;
                  FUN_00437222();
                  *(undefined1 *)(unaff_EBP + -4) = 0x20;
                  FUN_00402676();
                  *(undefined2 *)(unaff_EBP + -0x138) = 0xd;
                  *(int **)(unaff_EBP + -0x130) = *(int **)(unaff_EBP + -0x10);
                  piStack_218 = (int *)0x5c8251;
                  (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
                  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x1c);
                  *(undefined1 *)(unaff_EBP + -4) = 0x22;
                  if (iVar3 == 0) {
                    piStack_218 = (int *)0x80004003;
                    iStack_21c = 0x5c826a;
                    FUN_00878dfb();
                  }
                  piStack_218 = (int *)(unaff_EBP + -0x34);
                  iStack_21c = 0x5c8275;
                  piVar7 = (int *)FUN_004113e5();
                  iVar3 = *piVar7;
                  *(undefined1 *)(unaff_EBP + -4) = 0x23;
                  if (iVar3 == 0) {
                    piStack_218 = (int *)0x80004003;
                    iStack_21c = 0x5c8289;
                    FUN_00878dfb();
                  }
                  piVar7 = (int *)*piVar7;
                  iVar3 = *piVar7;
                  puStack_220 = *(undefined1 **)(unaff_EBP + -0x134);
                  iStack_21c = *(int *)(unaff_EBP + -0x130);
                  uStack_228 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x138),piVar7);
                  *(int **)(unaff_EBP + -0x20) = piVar7;
                  piStack_218 = *(int **)(unaff_EBP + -300);
                  iVar3 = (**(code **)(iVar3 + 100))();
                  if (iVar3 < 0) {
                    piStack_230 = *(int **)(unaff_EBP + -0x20);
                    iStack_234 = iVar3;
                    FUN_00878e09();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x22;
                  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
                    piStack_230 = (int *)0x5c82c6;
                    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x20;
                  piStack_230 = (int *)0x5c82d6;
                  iVar3 = FUN_00402bc3();
                  if (iVar3 < 0) {
                    piStack_230 = (int *)0x5c82e1;
                    FUN_00878dfb();
                  }
                  piStack_230 = (int *)0x5c82eb;
                  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
                  piStack_230 = (int *)(unaff_EBP + -0x78);
                  iStack_234 = 0x5c82f9;
                  iVar3 = FUN_00402e32();
                  if (iVar3 < 0) {
                    piStack_230 = (int *)0x5c8305;
                    FUN_00878dfb();
                  }
                  piStack_230 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
                  *(undefined1 *)(unaff_EBP + -4) = 0x24;
                  iStack_234 = 0x5c831d;
                  FUN_004031b7();
                  piVar7 = *(int **)(unaff_EBP + -0x10);
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                  if (piVar7 == (int *)0x0) {
                    piStack_230 = (int *)0x5c8332;
                    FUN_00878dfb();
                    piVar7 = *(int **)(unaff_EBP + -0x10);
                  }
                  iStack_234 = *(int *)(unaff_EBP + -0x74);
                  iVar3 = *piVar7;
                  piStack_230 = *(int **)(unaff_EBP + -0x70);
                  *(int **)(unaff_EBP + -0x20) = piVar7;
                  iVar3 = (**(code **)(iVar3 + 0x90))
                                    (piVar7,0xffffff01,0,*(undefined4 *)(unaff_EBP + -0xa8),
                                     *(undefined4 *)(unaff_EBP + -0xa4),
                                     *(undefined4 *)(unaff_EBP + -0xa0),
                                     *(undefined4 *)(unaff_EBP + -0x9c),
                                     *(undefined4 *)(unaff_EBP + -0x78));
                  if (iVar3 < 0) {
                    piStack_218 = *(int **)(unaff_EBP + -0x20);
                    puStack_220 = (undefined1 *)0x5c8374;
                    iStack_21c = iVar3;
                    FUN_00878e09();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x24;
                  piStack_218 = (int *)0x5c8384;
                  iVar3 = FUN_00402bc3();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c838f;
                    FUN_00878dfb();
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0x20;
                  piStack_218 = (int *)0x5c839c;
                  iVar3 = FUN_00402bc3();
                  if (iVar3 < 0) {
                    piStack_218 = (int *)0x5c83a7;
                    FUN_00878dfb();
                  }
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  piVar7 = *(int **)(unaff_EBP + -0x10);
                  goto LAB_005c83ae;
                }
              }
              piStack_218 = (int *)0x5c83c5;
              VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
              piStack_218 = (int *)(unaff_EBP + -0x88);
              iStack_21c = 0x5c83d6;
              iVar3 = FUN_00402e32();
              if (iVar3 < 0) {
                piStack_218 = (int *)0x5c83e2;
                FUN_00878dfb();
              }
              iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x1c);
              *(undefined4 *)(unaff_EBP + -4) = 0x26;
              if (iVar3 == 0) {
                piStack_218 = (int *)0x5c83fd;
                FUN_00878dfb();
              }
              uStack_228 = 0;
              puStack_220 = *(undefined1 **)(unaff_EBP + -0x88);
              piStack_230 = (int *)(unaff_EBP + -0x48);
              iStack_234 = 0;
              iStack_21c = *(int *)(unaff_EBP + -0x84);
              piVar7 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x1c);
              iVar3 = *piVar7;
              piStack_218 = *(int **)(unaff_EBP + -0x80);
              *(int **)(unaff_EBP + -0x20) = piVar7;
              iVar3 = (**(code **)(iVar3 + 0x8c))(piVar7,0,0,0);
              if (iVar3 < 0) {
                piStack_218 = *(int **)(unaff_EBP + -0x20);
                puStack_220 = (undefined1 *)0x5c8442;
                iStack_21c = iVar3;
                FUN_00878e09();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              piStack_218 = (int *)0x5c8452;
              iVar6 = FUN_00402bc3();
              if (iVar6 < 0) {
                piStack_218 = (int *)0x5c845d;
                FUN_00878dfb();
              }
              if (-1 < iVar3) {
                iStack_21c = unaff_EBP + -0x108;
                piStack_218 = *(int **)(unaff_EBP + -0x48);
                puStack_220 = (undefined1 *)0x5c8478;
                iVar3 = (*DAT_0097b57c)();
                if (iVar3 == 0) {
                  iVar3 = *(int *)(unaff_EBP + -0x18);
                }
                else {
                  iVar3 = *(int *)(unaff_EBP + -0x18);
                  piStack_218 = (int *)((-(uint)(*(int *)(iVar3 + 0x18) != 0) & 0xfffffffe) + 1);
                  iStack_21c = *(undefined4 *)(iVar3 + 0x24);
                  puStack_220 = *(undefined1 **)(unaff_EBP + -0x24);
                  uStack_228 = 0;
                  piStack_230 = (int *)0x0;
                  iStack_234 = 0x5c849e;
                  (**(code **)(**(int **)(unaff_EBP + -0x2c) + 0x40))();
                }
                *(int *)(unaff_EBP + -0x98) = *(int *)(unaff_EBP + -0x48);
                *(int *)(unaff_EBP + -0x90) = *(int *)(unaff_EBP + -0x48) + 1;
                *(int *)(unaff_EBP + -0x94) = *(int *)(unaff_EBP + -0x44);
                piStack_218 = (int *)(unaff_EBP + -0x98);
                *(int *)(unaff_EBP + -0x8c) = *(int *)(unaff_EBP + -0x44) + 1;
                iStack_21c = 0x5c84d6;
                iVar6 = FUN_007b021d();
                if (0 < iVar6) {
                  *(int *)(unaff_EBP + -0x14) = iVar6;
                  do {
                    piStack_218 = *(int **)(iVar3 + 0x24);
                    iStack_21c = *(undefined4 *)(unaff_EBP + -0x24);
                    puStack_220 = (undefined1 *)0x0;
                    uStack_228 = 0;
                    FUN_0067d844();
                    piVar7 = (int *)(unaff_EBP + -0x14);
                    *piVar7 = *piVar7 + -1;
                  } while (*piVar7 != 0);
                }
                piStack_218 = (int *)0x0;
                iStack_21c = 0;
                puStack_220 = (undefined1 *)0x0;
                uStack_228 = 0xf;
                piStack_230 = (int *)(unaff_EBP + -0x98);
                iStack_234 = 0x5c8525;
                iVar6 = FUN_005d528b();
                if (0 < iVar6) {
                  *(int *)(unaff_EBP + -0x14) = iVar6;
                  do {
                    piStack_218 = *(int **)(iVar3 + 0x24);
                    iStack_21c = *(int *)(unaff_EBP + -0x24);
                    puStack_220 = (undefined1 *)0x0;
                    uStack_228 = 0;
                    FUN_005d054c();
                    piVar7 = (int *)(unaff_EBP + -0x14);
                    *piVar7 = *piVar7 + -1;
                  } while (*piVar7 != 0);
                }
              }
            }
          }
          else {
            piStack_218 = (int *)0x5c7a63;
            FUN_005d15b8();
          }
          if (*(int *)(unaff_EBP + -0x30) == 0) break;
          piVar7 = *(int **)(unaff_EBP + -0x30);
        } while( true );
      }
      piVar7 = *(int **)(*(int *)(unaff_EBP + -0x24) + 0xb8);
      if (piVar7 != (int *)0x0) {
        piVar9 = *(int **)(unaff_EBP + -0x2c);
        do {
          *(int **)(unaff_EBP + -0x40) = piVar7;
          iVar3 = *(int *)((-(uint)(piVar7 != (int *)0x0) & (uint)(piVar7 + -4)) + 4);
          piVar8 = (int *)(iVar3 + 0x10U & -(uint)(iVar3 != 0));
          iVar3 = *piVar7;
          *(int **)(unaff_EBP + -0x30) = piVar8;
          if (-1 < *(int *)(unaff_EBP + 8) - iVar3) {
            piStack_218 = (int *)0x5c85b0;
            iVar3 = FUN_004e67c9();
            *(int *)(unaff_EBP + -0x14) = iVar3;
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x70) != 0)) {
              piStack_218 = (int *)0x0;
              iStack_21c = 0;
              puStack_220 = (undefined1 *)0x1;
              uStack_228 = _DAT_008eacd8;
              FUN_0042dc18();
            }
            iVar3 = piVar7[1];
            if (iVar3 == 0) {
              piStack_218 = (int *)(unaff_EBP + -0x108);
              iStack_21c = unaff_EBP + -0xd8;
              puStack_220 = (undefined1 *)0x5c85fa;
              iVar3 = (*DAT_0097b5a0)();
              if (iVar3 != 0) {
                piStack_218 = (int *)0x5c860a;
                piVar9 = (int *)FUN_00486ada();
                iVar3 = *piVar9;
                if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
                  piStack_218 = (int *)0x5c8622;
                  (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
                }
                if ((*(int *)(*(int *)(unaff_EBP + -0x14) + 0x24) == 0) ||
                   (*(int *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x110) != 0)) {
                  piStack_218 = (int *)((-(uint)(piVar7[6] != 0) & 0xfffffffe) + 1);
                  iStack_21c = piVar7[7];
                  puStack_220 = *(undefined1 **)(unaff_EBP + -0x24);
                  uStack_228 = 0;
                  piStack_230 = (int *)0x0;
                  iStack_234 = 0x5c8651;
                  (**(code **)(**(int **)(unaff_EBP + -0x2c) + 0x40))();
                }
              }
              piStack_218 = piVar7 + 2;
              iStack_21c = 0x5c8663;
              iVar3 = FUN_007b021d();
              if (0 < iVar3) {
                *(int *)(unaff_EBP + -0x1c) = unaff_EBP + -0x60;
                *(int *)(unaff_EBP + -0x18) = iVar3;
                do {
                  piStack_218 = (int *)0x5c867e;
                  piVar9 = (int *)FUN_005c894f();
                  iVar3 = *piVar9;
                  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
                    piStack_218 = (int *)0x5c8696;
                    (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
                  }
                  if ((*(int *)(*(int *)(unaff_EBP + -0x14) + 0x24) == 0) ||
                     (*(int *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x110) != 0)) {
                    piStack_218 = (int *)piVar7[7];
                    iStack_21c = *(undefined4 *)(unaff_EBP + -0x24);
                    puStack_220 = (undefined1 *)0x0;
                    uStack_228 = 0;
                    FUN_0067d844();
                  }
                  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
                  piVar9 = (int *)(unaff_EBP + -0x18);
                  *piVar9 = *piVar9 + -1;
                } while (*piVar9 != 0);
              }
              piStack_218 = (int *)0x0;
              iStack_21c = 0;
              puStack_220 = (undefined1 *)0x0;
              uStack_228 = 0xf;
              piStack_230 = piVar7 + 2;
              iStack_234 = 0x5c86ec;
              iVar3 = FUN_005d528b();
              if (0 < iVar3) {
                *(int *)(unaff_EBP + -0x14) = iVar3;
                do {
                  piStack_218 = (int *)piVar7[7];
                  iStack_21c = *(int *)(unaff_EBP + -0x24);
                  puStack_220 = (undefined1 *)0x0;
                  uStack_228 = 0;
                  FUN_005d054c();
                  piVar9 = (int *)(unaff_EBP + -0x14);
                  *piVar9 = *piVar9 + -1;
                } while (*piVar9 != 0);
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              piStack_218 = (int *)(unaff_EBP + -0x108);
              iStack_21c = unaff_EBP + -0xd8;
              puStack_220 = (undefined1 *)0x5c8851;
              iVar3 = (*DAT_0097b5a0)();
              if (iVar3 != 0) {
                piStack_218 = (int *)((-(uint)(piVar7[6] != 0) & 0xfffffffe) + 1);
                iStack_21c = piVar7[7];
                puStack_220 = *(undefined1 **)(unaff_EBP + -0x24);
                uStack_228 = 0;
                piStack_230 = (int *)0x0;
                iStack_234 = 0x5c8873;
                (**(code **)(*piVar9 + 0x40))();
              }
              piStack_218 = piVar7 + 2;
              iStack_21c = 0x5c8882;
              iVar3 = FUN_007b021d();
              if (0 < iVar3) {
                *(int *)(unaff_EBP + -0x14) = iVar3;
                do {
                  piStack_218 = (int *)piVar7[7];
                  iStack_21c = *(undefined4 *)(unaff_EBP + -0x24);
                  puStack_220 = (undefined1 *)0x0;
                  uStack_228 = 0;
                  FUN_0067d844();
                  piVar9 = (int *)(unaff_EBP + -0x14);
                  *piVar9 = *piVar9 + -1;
                } while (*piVar9 != 0);
              }
              piStack_218 = (int *)0x0;
              iStack_21c = 0;
              puStack_220 = (undefined1 *)0x0;
              uStack_228 = 0xf;
              piStack_230 = piVar7 + 2;
              iStack_234 = 0x5c88ce;
              iVar3 = FUN_005d528b();
              if (0 < iVar3) {
                *(int *)(unaff_EBP + -0x14) = iVar3;
                do {
                  piStack_218 = (int *)piVar7[7];
                  iStack_21c = *(int *)(unaff_EBP + -0x24);
                  puStack_220 = (undefined1 *)0x0;
                  uStack_228 = 0;
                  FUN_005d054c();
                  piVar9 = (int *)(unaff_EBP + -0x14);
                  *piVar9 = *piVar9 + -1;
                } while (*piVar9 != 0);
              }
            }
            else {
              uVar2 = piVar7[2];
              *(uint *)(unaff_EBP + -0x1c) = uVar2 & 3;
              if (uVar2 >> 2 == (piVar9[0x35e] & 0x3fffffffU)) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  piStack_218 = (int *)((-(uint)(piVar7[6] != 0) & 0xfffffffe) + 1);
                  iStack_21c = piVar7[7];
                  puStack_220 = *(undefined1 **)(unaff_EBP + -0x24);
                  uStack_228 = 0;
                  piStack_230 = (int *)0x0;
                  iStack_234 = 0x5c877c;
                  (**(code **)(*piVar9 + 0x40))();
                }
                else {
                  piStack_218 = (int *)0x5c8790;
                  iVar3 = FUN_00455c59();
                  piStack_218 = *(int **)(iVar3 + 4);
                  *(undefined4 *)(unaff_EBP + -4) = 0x27;
                  iStack_21c = 0x5c87a3;
                  FUN_00653cc5();
                  piStack_218 = (int *)(unaff_EBP + -0x68);
                  iStack_21c = 0x5c87b1;
                  iVar3 = FUN_00794f23();
                  iVar3 = *(int *)(iVar3 + 4);
                  FUN_005d0fed();
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  if (*(int *)(unaff_EBP + -0x54) != 0) {
                    piStack_218 = (int *)0x5c87ce;
                    FUN_0045e7c2();
                    *(undefined4 *)(unaff_EBP + -0x54) = 0;
                  }
                  if (iVar3 != 0) {
                    piStack_218 = (int *)piVar7[7];
                    iStack_21c = *(int *)(unaff_EBP + -0x24);
                    puStack_220 = (undefined1 *)0x0;
                    uStack_228 = 0;
                    FUN_0067d844();
                  }
                }
              }
              else if (*(int *)(unaff_EBP + -0x1c) == 3) {
                piStack_218 = (int *)0x5c8810;
                iVar3 = FUN_004308f4();
                if (iVar3 != 0) {
                  piStack_218 = (int *)piVar7[7];
                  iStack_21c = *(int *)(unaff_EBP + -0x24);
                  puStack_220 = (undefined1 *)0x0;
                  uStack_228 = 0;
                  FUN_005d054c();
                }
              }
            }
            piStack_218 = (int *)0x5c8910;
            FUN_005d1742();
            piVar8 = *(int **)(unaff_EBP + -0x30);
            piVar9 = *(int **)(unaff_EBP + -0x2c);
          }
          piVar7 = piVar8;
        } while (piVar8 != (int *)0x0);
      }
    }
  }
LAB_005c891e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


