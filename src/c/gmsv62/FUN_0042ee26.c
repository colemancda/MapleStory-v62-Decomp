/* FUN_0042ee26 - 0x0042ee26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0042ee26(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *extraout_ECX;
  int iVar9;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar10;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var11;
  bool bVar12;
  float10 fVar13;
  undefined4 uStack_e4;
  int iStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int iStack_c8;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar3 = extraout_ECX[1];
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (iVar2 != iVar3 && -1 < iVar2 - iVar3) {
    piVar10 = (int *)0x1;
    goto LAB_0042fad1;
  }
  piVar10 = (int *)0x0;
  if ((extraout_ECX[0xb] == 0) && (iVar2 != *extraout_ECX && -1 < iVar2 - *extraout_ECX)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402fa6();
    cVar1 = FUN_004115ad();
    if (cVar1 == '\0') {
      FUN_0040ee87();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar2 = *piVar4;
      *(int **)(unaff_EBP + 8) = piVar4;
      iVar2 = (**(code **)(iVar2 + 100))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8);
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10);
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))();
    if (iVar2 < 0) {
      iStack_c8 = *(int *)(unaff_EBP + -0x1c);
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_c8 = 0x42f04d;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c8 = 0x42f058;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_c8 = 0x42f064;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_c8 = 0x42f06f;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 8);
    iVar9 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0xc);
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *(int *)(unaff_EBP + -0x20) = iVar9;
    if ((iVar3 == 0) && (iVar9 == 0)) {
      piVar10 = (int *)0x1;
LAB_0042f9f7:
      FUN_004125d9();
      goto LAB_0042fad1;
    }
    *(int *)(unaff_EBP + 8) = iVar9 * iVar9 + iVar3 * iVar3;
    iStack_c8 = SUB84((double)*(int *)(unaff_EBP + 8),0);
    fVar13 = (float10)FUN_0087af44();
    *(double *)(unaff_EBP + -0x30) = (double)fVar13;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_c8 = 0x42f0c5;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_c8 = SUB84(-((double)*(int *)(unaff_EBP + -0x1c) / *(double *)(unaff_EBP + -0x30)),0);
    piStack_d4 = (int *)0x42f0ea;
    fVar13 = (float10)FUN_0087af10();
    iStack_c8 = SUB84((double)(fVar13 * (float10)_DAT_008e8ad0),0);
    piVar4 = (int *)(**(code **)(**(int **)(unaff_EBP + 8) + 0x80))();
    if ((int)piVar4 < 0) {
      piStack_d4 = *(int **)(unaff_EBP + 8);
      piStack_dc = (int *)0x42f118;
      piStack_d8 = piVar4;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_d4 = (int *)0x42f126;
      FUN_00878dfb();
    }
    fVar13 = (float10)FUN_0042fae2();
    if ((float10)_DAT_008e8ac8 < fVar13) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_d4 = (int *)0x42f144;
        FUN_00878dfb();
      }
      fVar13 = (float10)FUN_0042fae2();
      if (fVar13 < (float10)_DAT_008e8ac0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_d4 = (int *)0x42f162;
          FUN_00878dfb();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_d4 = (int *)0x42f16d;
            FUN_00878dfb();
          }
        }
        piVar4 = *(int **)(unaff_EBP + -0x10);
        fVar13 = (float10)FUN_0042fae2();
        piStack_d4 = SUB84((double)(fVar13 - (float10)_DAT_008e8ab8),0);
        piStack_dc = (int *)0x42f18b;
        piStack_d8 = piVar4;
        piVar5 = (int *)(**(code **)(*piVar4 + 0x80))();
        if ((int)piVar5 < 0) {
          piStack_dc = (int *)0x42f19b;
          piStack_d8 = piVar5;
          piStack_d4 = piVar4;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      }
    }
    piStack_d4 = (int *)0x42f1b4;
    FUN_00403191();
    piStack_d4 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_d8 = (int *)0x42f1c3;
    FUN_004031b7();
    bVar12 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (bVar12) {
      piStack_d4 = (int *)0x42f1d5;
      FUN_00878dfb();
    }
    piStack_d4 = (int *)(unaff_EBP + -0x48);
    piStack_d8 = *(int **)(iVar2 + 0x1c);
    piStack_dc = (int *)0x0;
    iStack_e0 = 0;
    uStack_e4 = 0;
    puVar6 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8,0);
    p_Var11 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0x2c);
    piStack_d4 = (int *)0x42f1ff;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var11,(IBinding *)*puVar6);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_d4 = (int *)0x42f214;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d4 = (int *)0x42f21f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_d4 = (int *)0x42f22b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_d4 = (int *)0x42f236;
      FUN_00878dfb();
    }
    if (*(int *)p_Var11 == 0) {
      piStack_d4 = (int *)0x42f240;
      FUN_00878dfb();
    }
    piVar4 = *(int **)p_Var11;
    piStack_d8 = (int *)0x42f24d;
    piStack_d4 = piVar4;
    iStack_e0 = (**(code **)(*piVar4 + 0xe0))();
    if (iStack_e0 < 0) {
      piStack_d8 = (int *)&DAT_00963df8;
      uStack_e4 = 0x42f25d;
      piStack_dc = piVar4;
      FUN_00878e09();
    }
    piStack_d8 = (int *)0x1;
    piStack_dc = *(int **)(unaff_EBP + -0x10);
    iStack_e0 = 0x42f26a;
    FUN_0040ee87();
    iVar2 = *(int *)p_Var11;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar2 == 0) {
      piStack_d8 = (int *)0x80004003;
      piStack_dc = (int *)0x42f27c;
      FUN_00878dfb();
    }
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_e0 = *(undefined4 *)(unaff_EBP + -0x44);
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x2c);
    iVar2 = *piVar4;
    piStack_dc = *(int **)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + 8) = piVar4;
    piStack_d8 = *(int **)(unaff_EBP + -0x3c);
    iVar2 = (**(code **)(iVar2 + 100))(piVar4);
    if (iVar2 < 0) {
      iStack_c8 = *(int *)(unaff_EBP + 8);
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_c8 = 0x42f2b7;
    iVar2 = unaff_EBP + -0x48;
    iVar3 = FUN_00402bc3();
    iStack_c8 = iVar2;
    if (iVar3 < 0) {
      iStack_c8 = 0x42f2c2;
      FUN_00878dfb();
      iStack_c8 = extraout_ECX_00;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x28) != 0) {
      iVar2 = *(int *)(unaff_EBP + -0x14);
      *(int **)(unaff_EBP + 8) = &iStack_c8;
      FUN_0041160e();
      FUN_0042fb93();
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piVar4 = (int *)(iVar2 + 0x2c);
        if (*(int *)(iVar2 + 0x2c) == 0) {
          iStack_c8 = 0x42f307;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f312;
        piVar5 = (int *)FUN_0042fb5e();
        iVar2 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f326;
          FUN_00878dfb();
        }
        uVar7 = FUN_00424ee1();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004125d9();
        if (*piVar4 == 0) {
          iStack_c8 = 0x42f349;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f354;
        piVar5 = (int *)FUN_0042fb5e();
        iVar2 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f368;
          FUN_00878dfb();
        }
        uVar7 = FUN_00424f08();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004125d9();
        iStack_c8 = 0x42f38b;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_c8 = 0x42f398;
        FUN_00403191();
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f3aa;
          FUN_00878dfb();
        }
        if (*piVar4 == 0) {
          iStack_c8 = 0x42f3ba;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f3c7;
        piVar4 = (int *)FUN_0042fb5e();
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f3db;
          FUN_00878dfb();
        }
        piVar4 = (int *)*piVar4;
        *(int **)(unaff_EBP + 8) = piVar4;
        iVar2 = FUN_0042fb0a();
        iStack_c8 = *(int *)(unaff_EBP + -0x30);
        uStack_e4 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_e0 = *(undefined4 *)(unaff_EBP + -0x48);
        piStack_dc = *(int **)(unaff_EBP + -0x44);
        piStack_d8 = *(int **)(unaff_EBP + -0x40);
        piStack_d4 = *(int **)(unaff_EBP + -0x3c);
        iVar2 = (**(code **)(*piVar4 + 0x90))
                          (*(undefined4 *)(unaff_EBP + 8),iVar2 + *(int *)(unaff_EBP + -0x20));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00403191(&DAT_00980690);
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2c);
        piVar4 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar2 = *piVar4;
        *(int *)(unaff_EBP + -0x28) = iVar2;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (*piVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = (int *)FUN_0042bc90(unaff_EBP + -0x24);
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar4 = (int *)*piVar4;
        *(int **)(unaff_EBP + 8) = piVar4;
        uVar7 = FUN_0042fb34();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
        iVar2 = FUN_0042fb0a();
        iVar2 = (**(code **)(*piVar4 + 0x90))
                          (*(undefined4 *)(unaff_EBP + 8),-iVar2,*(undefined4 *)(unaff_EBP + -0x28),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
        if (iVar2 < 0) {
          iStack_c8 = *(int *)(unaff_EBP + 8);
          FUN_00878e09();
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_c8 = 0x42f537;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f542;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_c8 = 0x42f54e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f559;
          FUN_00878dfb();
        }
      }
      iStack_c8 = 0x42f567;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_c8 = 0x42f574;
      FUN_00403191();
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (iVar2 == 0) {
        iStack_c8 = 0x42f58c;
        FUN_00878dfb();
      }
      iStack_c8 = *(int *)(unaff_EBP + -0x30);
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x48);
      piStack_dc = *(int **)(unaff_EBP + -0x44);
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x2c);
      iVar2 = *piVar4;
      piStack_d8 = *(int **)(unaff_EBP + -0x40);
      uStack_e4 = 0x20;
      *(int **)(unaff_EBP + 8) = piVar4;
      piStack_d4 = *(int **)(unaff_EBP + -0x3c);
      iVar2 = (**(code **)(iVar2 + 0x110))(piVar4);
      if (iVar2 < 0) {
        iStack_c8 = *(int *)(unaff_EBP + 8);
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_c8 = 0x42f5d9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c8 = 0x42f5e4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_c8 = 0x42f5f0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c8 = 0x42f5fb;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if ((piVar4 == (int *)0x0) || (iVar2 = *piVar4, iVar2 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(iVar2 + -4) >> 1;
    }
    if (uVar8 != 0) {
      iStack_c8 = 0x42f633;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_c8 = 0x42f640;
      FUN_00403191();
      iStack_c8 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_d4 = (int *)0x42f655;
      piStack_d8 = (int *)FUN_004091f9();
      *(int ***)(unaff_EBP + -0x2c) = &piStack_d4;
      piStack_dc = (int *)0x42f661;
      FUN_004033a1();
      piStack_d8 = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_dc = (int *)0x42f66e;
      FUN_00405a1d();
      piStack_dc = (int *)0x42f675;
      FUN_00402660();
      piStack_dc = (int *)0x42f67c;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      uVar7 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 8) = uVar7;
      iStack_c8 = 0x42f696;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_c8 = 0x42f6a7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_c8 = 0x42f6b4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c8 = 0x42f6bf;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_c8 = 0x42f6cc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c8 = 0x42f6d7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_c8 = 0x42f6e4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_c8 = 0x42f6ef;
        FUN_00878dfb();
      }
      if ((*(int *)(unaff_EBP + -0x18) == 0) || (iVar2 = FUN_0040cf4d(), iVar2 == 0)) {
        FUN_004027eb();
        goto LAB_0042f9f7;
      }
      iVar2 = *(int *)(unaff_EBP + -0x14);
      iStack_c8 = 0xff;
      piStack_d4 = (int *)(iVar2 + 0x2c);
      *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff30;
      piStack_d8 = (int *)0x42f721;
      FUN_0041160e();
      piStack_d4 = (int *)0x0;
      piStack_d8 = (int *)0x0;
      iStack_e0 = unaff_EBP + -0x10;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_dc;
      uStack_e4 = 0x42f732;
      piStack_dc = extraout_ECX_01;
      FUN_00433bdf();
      iStack_e0 = 0;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_e4;
      uStack_e4 = extraout_ECX_02;
      FUN_00424dbc(unaff_EBP + -0x18);
      puVar6 = (undefined4 *)FUN_0042e5bf(unaff_EBP + 8);
      p_Var11 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0x30);
      iStack_c8 = 0x42f75a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var11,(IBinding *)*puVar6);
      FUN_00412600();
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        if (*(int *)p_Var11 == 0) {
          iStack_c8 = 0x42f779;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f784;
        piVar4 = (int *)FUN_0042fb5e();
        *(int **)(unaff_EBP + 8) = piVar4;
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f799;
          FUN_00878dfb();
        }
        uVar7 = FUN_00424ee1();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_004125d9();
        if (*(int *)p_Var11 == 0) {
          iStack_c8 = 0x42f7c0;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f7cb;
        piVar4 = (int *)FUN_0042fb5e();
        *(int **)(unaff_EBP + 8) = piVar4;
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f7e0;
          FUN_00878dfb();
        }
        uVar7 = FUN_00424f08();
        *(undefined4 *)(unaff_EBP + 8) = uVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_004125d9();
        iStack_c8 = 0x42f802;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iStack_c8 = 0x42f80f;
        FUN_00403191();
        iVar2 = *(int *)p_Var11;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f821;
          FUN_00878dfb();
        }
        iVar2 = *(int *)p_Var11;
        *(int *)(unaff_EBP + -0x28) = iVar2;
        if (iVar2 == 0) {
          iStack_c8 = 0x42f834;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f83f;
        uVar7 = FUN_0042fb5e();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
        iStack_c8 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0042fb0a();
        piStack_d4 = (int *)0x42f865;
        FUN_00424df4();
        piStack_d4 = (int *)0x42f86c;
        FUN_00424f2f();
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iStack_c8 = 0x42f881;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f88c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_c8 = 0x42f899;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f8a4;
          FUN_00878dfb();
        }
        iStack_c8 = 0x42f8ad;
        FUN_00424aee();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_c8 = 0x42f8ba;
        FUN_00424aee();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_c8 = 0x42f8c9;
        FUN_00424e27();
        iStack_c8 = 0x42f8d0;
        FUN_0042bc90();
        iStack_c8 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        FUN_00424e27();
        FUN_0042fb34();
        FUN_00424e27();
        FUN_0042fb0a();
        piStack_d4 = (int *)0x42f905;
        FUN_00424df4();
        piStack_d4 = (int *)0x42f90c;
        FUN_00424f2f();
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_c8 = 0x42f921;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f92c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_c8 = 0x42f939;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42f944;
          FUN_00878dfb();
        }
      }
    }
    iStack_c8 = 0x42f94d;
    cVar1 = FUN_00411581();
    if (cVar1 == '\0') {
      *(int **)(unaff_EBP + 8) = &iStack_c8;
      piStack_d4 = (int *)0x42f96c;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_0040263d();
      iStack_c8 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iVar2 = FUN_00412550();
      *(bool *)(unaff_EBP + 0xb) = iVar2 != 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_c8 = 0x42f9af;
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + 0xb) != '\0') {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          iStack_c8 = -iVar2;
          FUN_004295f1();
          iStack_c8 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00424df4();
          FUN_0042bc52();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
        }
        else {
          iStack_c8 = iVar2;
          FUN_004295f1();
          iStack_c8 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          FUN_00424df4();
          FUN_0042bc52();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
        }
        iStack_c8 = 0x42fa3c;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_c8 = 0x42fa47;
          FUN_00878dfb();
        }
      }
    }
    iStack_c8 = unaff_EBP + -0x30;
    iVar2 = FUN_004084c5();
    iVar2 = *(int *)(iVar2 + 4);
    FUN_00412829();
    if (iVar2 != 0) {
      if ((*(int **)(iVar2 + 0x38) == (int *)0x0) || (iVar3 = **(int **)(iVar2 + 0x38), iVar3 == 0))
      {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(iVar3 + -4) >> 1;
      }
      if (uVar8 != 0) {
        if (*(undefined4 **)(iVar2 + 0x38) != (undefined4 *)0x0) {
          piVar10 = (int *)**(undefined4 **)(iVar2 + 0x38);
        }
        FUN_00424df4();
        FUN_00404abb();
        iStack_c8 = 0x42faa6;
        FUN_00424df4();
        iStack_c8 = 0x42faad;
        iStack_c8 = FUN_00404a94();
        FUN_007d3c48();
        piStack_d8 = (int *)0x42fabc;
        piStack_d4 = piVar10;
        FUN_007d4763();
      }
    }
    FUN_004027eb();
    FUN_004125d9();
  }
  piVar10 = (int *)0x0;
LAB_0042fad1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar10;
}


