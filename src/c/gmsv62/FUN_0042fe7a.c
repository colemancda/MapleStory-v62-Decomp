/* FUN_0042fe7a - 0x0042fe7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042fe7a(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int iVar8;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int unaff_EBP;
  float10 fVar9;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined8 uStack_5c;
  int *piStack_54;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) - *(int *)(extraout_ECX + 0x1c) < 1) {
    if ((*(int *)(extraout_ECX + 4) == 0) &&
       (0 < *(int *)(unaff_EBP + 8) - *(int *)(extraout_ECX + 0x18))) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      _piStack_54 = (double)CONCAT44(0x3b1,unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_5c = (double)CONCAT44(0x42fecc,(undefined4)uStack_5c);
      piVar3 = (int *)FUN_00679e4e();
      puVar7 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (puVar7 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar7;
      }
      _piStack_54 = (double)(ulonglong)(unaff_EBP - 0x10);
      uStack_5c = (double)CONCAT44(uVar6,0x42fee7);
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      _piStack_54 = (double)CONCAT44(0x42fef6,piStack_54);
      FUN_00402fa6();
      _piStack_54 = 2.16927278637239e-317;
      cVar2 = FUN_004115ad();
      if (cVar2 == '\0') {
        _piStack_54 = (double)CONCAT44(1,*(undefined4 *)(extraout_ECX + 0x30));
        uStack_5c = (double)CONCAT44(0x42ff12,(undefined4)uStack_5c);
        FUN_0040ee87();
        piStack_60 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piStack_60 == (int *)0x0) {
          _piStack_54 = -3.47731471958395e-310;
          FUN_00878dfb();
          piStack_60 = *(int **)(unaff_EBP + -0x10);
        }
        iVar4 = *piStack_60;
        uStack_5c = *(double *)(unaff_EBP + -0x2c);
        *(int **)(unaff_EBP + -0x14) = piStack_60;
        _piStack_54 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x20),
                                       *(undefined4 *)(unaff_EBP + -0x24));
        uStack_64 = 0x42ff3f;
        iVar4 = (**(code **)(iVar4 + 100))();
        if (iVar4 < 0) {
          _piStack_54 = (double)CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x14));
          uStack_5c = (double)CONCAT44(iVar4,0x42ff51);
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x2c,0x42ff5e);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _piStack_54 = (double)CONCAT44(iVar5,0x42ff69);
          FUN_00878dfb();
        }
      }
      _piStack_54 = 8.553409901718924e-306;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      _piStack_54 = 8.553409901718941e-306;
      FUN_00403191();
      piVar3 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar3 == (int *)0x0) {
        _piStack_54 = -3.47731471958958e-310;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x10);
      }
      uVar6 = *(undefined4 *)(extraout_ECX + 0x24);
      uStack_5c = *(double *)(unaff_EBP + -0x3c);
      iVar4 = *piVar3;
      _piStack_54 = *(double *)(unaff_EBP + -0x34);
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x28);
      uVar1 = *(undefined4 *)(extraout_ECX + 0x20);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      piStack_60 = *(int **)(unaff_EBP + -0x20);
      iVar4 = (**(code **)(iVar4 + 0x90))(piVar3,uVar1,uVar6,*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      FUN_00403191(&DAT_00980690);
      uVar6 = *(undefined4 *)(extraout_ECX + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004031b7(uVar6,3);
      piVar3 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar3 = *(int **)(unaff_EBP + -0x10);
      }
      uVar6 = *(undefined4 *)(extraout_ECX + 0x2c);
      iVar4 = *piVar3;
      uVar1 = *(undefined4 *)(extraout_ECX + 0x28);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      iVar4 = (**(code **)(iVar4 + 0x90))
                        (piVar3,uVar1,uVar6,*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        FUN_00878dfb();
      }
      iVar8 = *(int *)(extraout_ECX + 0x2c) - *(int *)(extraout_ECX + 0x24);
      iVar4 = *(int *)(extraout_ECX + 0x28) - *(int *)(extraout_ECX + 0x20);
      *(int *)(unaff_EBP + -0x1c) = iVar8;
      *(int *)(unaff_EBP + -0x14) = iVar8 * iVar8 + iVar4 * iVar4;
      *(int *)(unaff_EBP + -0x18) = iVar4;
      fVar9 = (float10)FUN_0087af44((double)*(int *)(unaff_EBP + -0x14));
      *(double *)(unaff_EBP + -0x24) = (double)fVar9;
      if (fVar9 <= (float10)_DAT_008e8a80) {
        _piStack_54 = (double)CONCAT44(0x4300f3,piStack_54);
        FUN_004125d9();
        goto LAB_004300f3;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        _piStack_54 = -3.47731471960791e-310;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + -0x10);
      _piStack_54 = -((double)*(int *)(unaff_EBP + -0x18) / *(double *)(unaff_EBP + -0x24));
      uStack_5c = -((double)*(int *)(unaff_EBP + -0x1c) / *(double *)(unaff_EBP + -0x24));
      piStack_60 = (int *)0x43012e;
      fVar9 = (float10)FUN_0087af10();
      _piStack_54 = (double)(fVar9 * (float10)_DAT_008e8ad0);
      uStack_5c = (double)CONCAT44(piVar3,0x430147);
      iVar4 = (**(code **)(*piVar3 + 0x80))();
      if (iVar4 < 0) {
        _piStack_54 = (double)CONCAT44(&DAT_00963de8,piVar3);
        uStack_5c = (double)CONCAT44(iVar4,0x430157);
        FUN_00878e09();
      }
      *(undefined4 *)(extraout_ECX + 8) = 0;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        _piStack_54 = -3.47731471961241e-310;
        FUN_00878dfb();
      }
      _piStack_54 = (double)CONCAT44(0x43016f,piStack_54);
      fVar9 = (float10)FUN_0042fae2();
      uVar6 = extraout_ECX_00;
      if ((float10)_DAT_008e8ac8 < fVar9) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          _piStack_54 = -3.47731471961399e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(0x43018f,piStack_54);
        fVar9 = (float10)FUN_0042fae2();
        uVar6 = extraout_ECX_01;
        if (fVar9 < (float10)_DAT_008e8ac0) {
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            _piStack_54 = -3.47731471961547e-310;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              _piStack_54 = -3.47731471961601e-310;
              FUN_00878dfb();
            }
          }
          piVar3 = *(int **)(unaff_EBP + -0x10);
          _piStack_54 = (double)CONCAT44(0x4301ba,piStack_54);
          fVar9 = (float10)FUN_0042fae2();
          _piStack_54 = (double)(fVar9 - (float10)_DAT_008e8ab8);
          uStack_5c = (double)CONCAT44(piVar3,0x4301ce);
          iVar4 = (**(code **)(*piVar3 + 0x80))();
          uVar6 = extraout_ECX_02;
          if (iVar4 < 0) {
            _piStack_54 = (double)CONCAT44(&DAT_00963de8,piVar3);
            uStack_5c = (double)CONCAT44(iVar4,0x4301de);
            FUN_00878e09();
            uVar6 = extraout_ECX_03;
          }
          *(undefined4 *)(extraout_ECX + 8) = 1;
        }
      }
      _piStack_54 = 1.25986739689518e-321;
      uStack_5c = (double)CONCAT44(*(undefined4 *)(extraout_ECX + 0x34),uVar6);
      *(undefined8 **)(unaff_EBP + -0x20) = &uStack_5c;
      piStack_60 = (int *)0x0;
      uStack_64 = 0x4301fc;
      FUN_00424e0a();
      piStack_60 = (int *)0x0;
      uStack_64 = 0;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_68;
      uStack_68 = extraout_ECX_04;
      FUN_00433bdf(unaff_EBP + -0x10);
      uVar6 = FUN_004091f9(0);
      puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar6);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 4);
      _piStack_54 = (double)CONCAT44((IBinding *)*puVar7,0x43022f);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar7);
      _piStack_54 = (double)CONCAT44(0x430237,piStack_54);
      FUN_00412600();
      if (*(int *)(extraout_ECX + 8) != 0) {
        if (*(int *)this == 0) {
          _piStack_54 = -3.47731471962372e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x1c,0x430257);
        piVar3 = (int *)FUN_0042fb5e();
        iVar4 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar4 == 0) {
          _piStack_54 = -3.4773147196253e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(0x430273,piStack_54);
        uVar6 = FUN_00424ee1();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
        _piStack_54 = (double)CONCAT44(0x430282,piStack_54);
        FUN_004125d9();
        if (*(int *)this == 0) {
          _piStack_54 = -3.47731471962713e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x1c,0x43029c);
        piVar3 = (int *)FUN_0042fb5e();
        iVar4 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar4 == 0) {
          _piStack_54 = -3.47731471962871e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(0x4302b8,piStack_54);
        uVar6 = FUN_00424f08();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
        _piStack_54 = (double)CONCAT44(0x4302c7,piStack_54);
        FUN_004125d9();
        _piStack_54 = 8.553409901720015e-306;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        _piStack_54 = 8.553409901720031e-306;
        FUN_00403191();
        iVar5 = *(int *)this;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar5 == 0) {
          _piStack_54 = -3.47731471963207e-310;
          FUN_00878dfb();
        }
        if (*(int *)this == 0) {
          _piStack_54 = -3.47731471963286e-310;
          FUN_00878dfb();
        }
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x1c,0x430312);
        piVar3 = (int *)FUN_0042fb5e();
        iVar4 = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar4 == 0) {
          _piStack_54 = -3.47731471963454e-310;
          FUN_00878dfb();
        }
        piVar3 = (int *)*piVar3;
        *(int **)(unaff_EBP + -0x14) = piVar3;
        _piStack_54 = (double)CONCAT44(0x430333,piStack_54);
        iVar4 = FUN_0042fb0a();
        uStack_5c = *(double *)(unaff_EBP + -0x4c);
        _piStack_54 = *(double *)(unaff_EBP + -0x44);
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
        piStack_60 = *(int **)(unaff_EBP + -0x30);
        iVar4 = (**(code **)(*piVar3 + 0x90))
                          (*(undefined4 *)(unaff_EBP + -0x14),iVar4 + *(int *)(unaff_EBP + -0x18),
                           *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          _piStack_54 = (double)CONCAT44(&DAT_00963de8,*(undefined4 *)(unaff_EBP + -0x14));
          uStack_5c = (double)CONCAT44(iVar4,0x43036f);
          FUN_00878e09();
        }
        _piStack_54 = (double)CONCAT44(0x430377,piStack_54);
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x3c,0x430384);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _piStack_54 = (double)CONCAT44(iVar5,0x43038f);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x4c,0x43039c);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _piStack_54 = (double)CONCAT44(iVar5,0x4303a7);
          FUN_00878dfb();
        }
        _piStack_54 = 8.553409901720298e-306;
        FUN_00424aee();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        _piStack_54 = 8.553409901720314e-306;
        FUN_00424aee();
        iVar5 = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_54 = (int *)0x4303d4;
        FUN_00424e27();
        _piStack_54 = (double)CONCAT44(iVar5,0x4303db);
        uVar6 = FUN_0042bc90();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x3c,unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uStack_5c = (double)CONCAT44(0x4303f1,(undefined4)uStack_5c);
        FUN_00424e27();
        uStack_5c = (double)CONCAT44(0x4303f8,(undefined4)uStack_5c);
        uStack_5c._4_4_ = FUN_0042fb34();
        uStack_5c._0_4_ = 0x430400;
        FUN_00424e27();
        uStack_5c._0_4_ = 0x430407;
        iVar4 = FUN_0042fb0a();
        uStack_5c = (double)CONCAT44(uStack_5c._4_4_,-iVar4);
        piStack_60 = (int *)0x430412;
        FUN_00424df4();
        piStack_60 = (int *)0x430419;
        FUN_00424f2f();
        _piStack_54 = (double)CONCAT44(0x430421,piStack_54);
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x4c,0x43042e);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _piStack_54 = (double)CONCAT44(iVar5,0x430439);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        _piStack_54 = (double)CONCAT44(unaff_EBP + -0x3c,0x430446);
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          _piStack_54 = (double)CONCAT44(iVar5,0x430451);
          FUN_00878dfb();
        }
      }
      _piStack_54 = 8.553409901720515e-306;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      _piStack_54 = 8.553409901720532e-306;
      FUN_00424aee();
      _piStack_54 = (double)CONCAT44(unaff_EBP + -0x3c,unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      uStack_5c._4_4_ = 0x20;
      uStack_5c._0_4_ = 0x430484;
      FUN_00424e27();
      uStack_5c = (double)CONCAT44(uStack_5c._4_4_,0x43048b);
      FUN_00425139();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      _piStack_54 = (double)CONCAT44(unaff_EBP + -0x4c,0x430498);
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        _piStack_54 = (double)CONCAT44(iVar5,0x4304a3);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      _piStack_54 = (double)CONCAT44(unaff_EBP + -0x3c,0x4304b0);
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        _piStack_54 = (double)CONCAT44(iVar4,0x4304bb);
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      _piStack_54 = (double)CONCAT44(0x4304c7,piStack_54);
      FUN_004125d9();
    }
    if (*(int *)(extraout_ECX + 0x3c) != 0) {
      _piStack_54 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x4304d7);
      FUN_00433270();
    }
    iVar5 = 0;
  }
  else {
LAB_004300f3:
    iVar5 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


