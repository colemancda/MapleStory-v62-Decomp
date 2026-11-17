/* FUN_0078ded5 - 0x0078ded5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0078eaf9) */

void FUN_0078ded5(void)

{
  IBinding *pIVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var10;
  uint uVar11;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  code *pcStack_8c;
  
  FUN_00879bb8();
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  pcStack_8c = (code *)0x78defc;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') {
    pcStack_8c = (code *)0x78df0f;
    uVar3 = FUN_0043f90a();
    iVar4 = extraout_ECX[0x5f5];
    piVar5 = extraout_ECX + 0x5f5;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78df2a;
      FUN_00878dfb();
    }
    uVar3 = FUN_00424ee1();
    iVar4 = *piVar5;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78df42;
      FUN_00878dfb();
    }
    uVar3 = FUN_00424f08();
    iVar4 = *piVar5;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78df5a;
      FUN_00878dfb();
    }
    pcStack_8c = (code *)0x78df65;
    FUN_004308ad();
    iVar4 = *piVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78df76;
      FUN_00878dfb();
    }
    piStack_98 = (int *)extraout_ECX[0x5f5];
    *(undefined4 *)(unaff_EBP + -0x84) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x80) = DAT_0097bb34;
    iVar4 = *piStack_98;
    *(undefined4 *)(unaff_EBP + -0x7c) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x78) = DAT_0097bb3c;
    piStack_94 = *(int **)(unaff_EBP + -0x84);
    piStack_90 = *(int **)(unaff_EBP + -0x80);
    pcStack_8c = *(code **)(unaff_EBP + -0x7c);
    *(int **)(unaff_EBP + -0x24) = piStack_98;
    piStack_9c = (int *)0x78dfa3;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      piStack_9c = (int *)&DAT_00963de8;
      piStack_a0 = *(int **)(unaff_EBP + -0x24);
      FUN_00878e09(iVar4);
    }
    if (extraout_ECX[0x5f5] == 0) {
      piStack_9c = (int *)0x80004003;
      piStack_a0 = (int *)0x78dfc8;
      FUN_00878dfb();
    }
    piVar5 = (int *)extraout_ECX[0x5f5];
    iVar4 = *piVar5;
    piStack_a0 = *(int **)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    piStack_9c = *(int **)(unaff_EBP + -0x58);
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar5,*(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
    }
    iVar4 = FUN_0043fb93();
    if (iVar4 == 0) {
      if ((((extraout_ECX[0x138] == 0) ||
           ((*(int *)(unaff_EBP + -0x18) != 8 && (*(int *)(unaff_EBP + -0x18) != 0x10)))) &&
          ((extraout_ECX[0x13d] == 0 || (*(int *)(unaff_EBP + -0x18) != 0x66)))) &&
         ((extraout_ECX[0x138] != 0 ||
          ((*(int *)(unaff_EBP + -0x18) != 0x21 && (*(int *)(unaff_EBP + -0x18) != 0x20)))))) {
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x5f5];
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x5f5];
        iVar4 = *piVar5;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x20),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x54),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                           *(undefined4 *)(unaff_EBP + -0x2c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x5f5];
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x5f5];
        iVar4 = *piVar5;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                  (piVar5,0xffffffe6,0xffffffa7,*(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + -0x34),
                                   *(undefined4 *)(unaff_EBP + -0x30),
                                   *(undefined4 *)(unaff_EBP + -0x2c));
        if ((int)piVar5 < 0) {
          pcStack_8c = *(code **)(unaff_EBP + -0x24);
          piStack_94 = (int *)0x78e3d9;
          piStack_90 = piVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        pcStack_8c = (code *)0x78e3e6;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          pcStack_8c = (code *)0x78e3f1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x5f5];
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x5f5];
        iVar4 = *piVar5;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x20),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x54),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                           *(undefined4 *)(unaff_EBP + -0x2c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x5f5];
        iVar6 = extraout_ECX[0x14b];
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *(int *)(unaff_EBP + -0x24) = iVar6;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x5f5];
        iVar4 = *piVar5;
        *(int **)(unaff_EBP + -0x20) = piVar5;
        piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                  (piVar5,(-(uint)((*(uint *)(unaff_EBP + -0x24) & 1) != 0) &
                                          0xffffffda) - 7,0xffffffc3,
                                   *(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + -0x34),
                                   *(undefined4 *)(unaff_EBP + -0x30),
                                   *(undefined4 *)(unaff_EBP + -0x2c));
        if ((int)piVar5 < 0) {
          pcStack_8c = *(code **)(unaff_EBP + -0x20);
          piStack_94 = (int *)0x78e2a0;
          piStack_90 = piVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        pcStack_8c = (code *)0x78e2ad;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          pcStack_8c = (code *)0x78e2b8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
    }
    else if (*(int *)(unaff_EBP + -0x18) == 8) {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191(&DAT_00980690);
      iVar4 = extraout_ECX[0x5f5];
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)extraout_ECX[0x5f5];
      iVar4 = *piVar5;
      *(int **)(unaff_EBP + -0x24) = piVar5;
      piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                (piVar5,0xffffffe6,0xffffffae,*(undefined4 *)(unaff_EBP + -0x38),
                                 *(undefined4 *)(unaff_EBP + -0x34),
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x2c),
                                 *(undefined4 *)(unaff_EBP + -0x54),
                                 *(undefined4 *)(unaff_EBP + -0x50),
                                 *(undefined4 *)(unaff_EBP + -0x4c),
                                 *(undefined4 *)(unaff_EBP + -0x48));
      if ((int)piVar5 < 0) {
        pcStack_8c = *(code **)(unaff_EBP + -0x24);
        piStack_94 = (int *)0x78e081;
        piStack_90 = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      pcStack_8c = (code *)0x78e08e;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e099;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191(&DAT_00980690);
      iVar4 = extraout_ECX[0x5f5];
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)extraout_ECX[0x5f5];
      iVar4 = *piVar5;
      *(int **)(unaff_EBP + -0x24) = piVar5;
      piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                (piVar5,0xffffffe6,0xffffffa7,*(undefined4 *)(unaff_EBP + -0x54),
                                 *(undefined4 *)(unaff_EBP + -0x50),
                                 *(undefined4 *)(unaff_EBP + -0x4c),
                                 *(undefined4 *)(unaff_EBP + -0x48),
                                 *(undefined4 *)(unaff_EBP + -0x38),
                                 *(undefined4 *)(unaff_EBP + -0x34),
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x2c));
      if ((int)piVar5 < 0) {
        pcStack_8c = *(code **)(unaff_EBP + -0x24);
        piStack_94 = (int *)0x78e111;
        piStack_90 = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      pcStack_8c = (code *)0x78e11e;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e129;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    pcStack_8c = (code *)0x78e3fe;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pcStack_8c = (code *)0x78e409;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_8c = (code *)0x78e416;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pcStack_8c = (code *)0x78e421;
      FUN_00878dfb();
    }
  }
  pcStack_8c = (code *)0x0;
  piStack_90 = (int *)0x78e42d;
  FUN_007959eb();
  FUN_005a9936();
  pcStack_8c = (code *)0x78e43e;
  FUN_0046f87c();
  pcStack_8c = (code *)0x78e447;
  iVar4 = FUN_0079b949();
  iVar6 = (**(code **)(*extraout_ECX + 4))();
  cVar2 = (**(code **)(**(int **)(iVar6 + 0x95c) + 4))();
  if (cVar2 == '\0') {
    pcStack_8c = (code *)0x78e79a;
    cVar2 = FUN_00433bfa();
    if (cVar2 == '\0') {
      if (*(int *)(iVar4 + 0x14) == 0) {
        pcStack_8c = (code *)0x78e7b0;
        FUN_00878dfb();
      }
      pcStack_8c = (code *)0x78e7bb;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x24) = piVar5;
      iVar6 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x17;
      if (iVar6 == 0) {
        pcStack_8c = (code *)0x78e7d3;
        FUN_00878dfb();
      }
      iVar6 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar6 != 0;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') {
        if (*(int *)(iVar4 + 0x14) == 0) {
          pcStack_8c = (code *)0x78e803;
          FUN_00878dfb();
        }
        pcStack_8c = (code *)0x78e80e;
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0x18;
        if (iVar4 == 0) {
          pcStack_8c = (code *)0x78e825;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        pcStack_8c = (code *)0x0;
        piStack_94 = (int *)0x78e82f;
        piStack_90 = piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0x40))();
        if ((int)piVar8 < 0) {
          piStack_94 = (int *)0x78e83f;
          piStack_90 = piVar8;
          pcStack_8c = (code *)piVar5;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0078e846:
        FUN_004125d9();
      }
    }
  }
  else if (*(int *)((-(uint)(extraout_ECX[0x35d] != 0) & extraout_ECX[0x35d] - 0xcU) + 0x110) == 0)
  {
    pcStack_8c = (code *)0x78e6da;
    cVar2 = FUN_00433bfa();
    if (cVar2 == '\0') {
      if (*(int *)(iVar4 + 0x14) == 0) {
        pcStack_8c = (code *)0x78e6f0;
        FUN_00878dfb();
      }
      pcStack_8c = (code *)0x78e6fb;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x24) = piVar5;
      iVar6 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x15;
      if (iVar6 == 0) {
        pcStack_8c = (code *)0x78e713;
        FUN_00878dfb();
      }
      iVar6 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar6 != 0;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') {
        if (*(int *)(iVar4 + 0x14) == 0) {
          pcStack_8c = (code *)0x78e747;
          FUN_00878dfb();
        }
        pcStack_8c = (code *)0x78e752;
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0x16;
        if (iVar4 == 0) {
          pcStack_8c = (code *)0x78e769;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        pcStack_8c = (code *)0x0;
        piStack_94 = (int *)0x78e773;
        piStack_90 = piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0x40))();
        if ((int)piVar8 < 0) {
          piStack_94 = (int *)0x78e783;
          piStack_90 = piVar8;
          pcStack_8c = (code *)piVar5;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_0078e846;
      }
    }
  }
  else {
    p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0x14);
    iVar4 = *(int *)p_Var10;
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20) = p_Var10;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78e49e;
      uVar3 = FUN_0064d61f();
      pcStack_8c = (code *)0xff;
      piStack_90 = (int *)0x3;
      piStack_98 = (int *)&piStack_94;
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_94;
      piStack_9c = (int *)0x78e4b8;
      FUN_0043f93c();
      piStack_98 = (int *)0x0;
      piStack_9c = (int *)0x0;
      *(int ***)(unaff_EBP + -0x28) = &piStack_a0;
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      FUN_00486ada(&piStack_a0);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uVar3 = FUN_0040f150(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      uVar3 = FUN_004091f9(uVar3);
      puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar3);
      pcStack_8c = (code *)0x78e517;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,(IBinding *)*puVar7);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
      pcStack_8c = (code *)0x78e538;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      pcStack_8c = (code *)0x78e54c;
      FUN_00403191();
      iVar4 = *(int *)p_Var10;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78e55e;
        FUN_00878dfb();
      }
      piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
      piStack_94 = *(int **)(unaff_EBP + -0x54);
      piStack_90 = *(int **)(unaff_EBP + -0x50);
      iVar4 = *piVar5;
      pcStack_8c = *(code **)(unaff_EBP + -0x4c);
      piStack_a0 = *(int **)(unaff_EBP + -0x60);
      piStack_9c = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x24) = piVar5;
      piStack_98 = *(int **)(unaff_EBP + -0x58);
      piVar5 = (int *)(**(code **)(iVar4 + 0x110))(piVar5,0x20,*(undefined4 *)(unaff_EBP + -100));
      if ((int)piVar5 < 0) {
        pcStack_8c = *(code **)(unaff_EBP + -0x24);
        piStack_94 = (int *)0x78e59b;
        piStack_90 = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      pcStack_8c = (code *)0x78e5a8;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e5b3;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      pcStack_8c = (code *)0x78e5c0;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e5cf;
        FUN_00878dfb();
      }
    }
    else {
      pcStack_8c = (code *)0x78e5df;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x24) = piVar5;
      iVar4 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x13;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78e5f7;
        FUN_00878dfb();
      }
      iVar4 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar4 != 0xff;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') {
        if (*(int *)p_Var10 == 0) {
          pcStack_8c = (code *)0x78e62a;
          FUN_00878dfb();
        }
        pcStack_8c = (code *)0x78e635;
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        if (iVar4 == 0) {
          pcStack_8c = (code *)0x78e64c;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        pcStack_8c = (code *)0xff;
        piStack_94 = (int *)0x78e65a;
        piStack_90 = piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0x40))();
        if ((int)piVar8 < 0) {
          piStack_94 = (int *)0x78e66a;
          piStack_90 = piVar8;
          pcStack_8c = (code *)piVar5;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
      }
    }
    if (extraout_ECX[0x34f] == 0) {
      pcStack_8c = (code *)0x78e68c;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x20);
    iVar4 = *piVar5;
    *(int *)(unaff_EBP + -0x24) = extraout_ECX[0x34f];
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78e6a2;
      FUN_00878dfb();
    }
    piVar5 = (int *)*piVar5;
    FUN_0043210d();
    piStack_90 = (int *)0x78e6b6;
    pcStack_8c = (code *)piVar5;
    piVar8 = (int *)(**(code **)(*piVar5 + 0xd8))();
    if ((int)piVar8 < 0) {
      piStack_94 = (int *)0x78e6ca;
      piStack_90 = piVar8;
      pcStack_8c = (code *)piVar5;
      FUN_00878e09();
    }
  }
  iVar4 = (**(code **)(*extraout_ECX + 4))();
  cVar2 = (**(code **)(**(int **)(iVar4 + 0x958) + 4))();
  if ((cVar2 != '\0') &&
     ((extraout_ECX[0x792] == 0 ||
      (0x545 < (uint)(*(int *)(unaff_EBP + -0x14) - extraout_ECX[0x792]))))) {
    pcStack_8c = (code *)0x78e889;
    iVar4 = FUN_0079b949();
    p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar4 + 0x14);
    if (*(int *)(iVar4 + 0x14) == 0) {
      pcStack_8c = (code *)0x78e8a5;
      FUN_0064d61f();
      pcStack_8c = (code *)0x78e8b0;
      FUN_00790038();
      *(undefined4 *)(unaff_EBP + -4) = 0x19;
      pcStack_8c = (code *)0x78e8c4;
      FUN_00432cfc();
      pcStack_8c = (code *)0xff;
      piStack_90 = (int *)0x3;
      piStack_98 = (int *)&piStack_94;
      *(int ***)(unaff_EBP + -0x3c) = &piStack_94;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_9c = (int *)0x78e8df;
      FUN_0043f93c();
      piStack_98 = (int *)0x0;
      piStack_9c = (int *)0x0;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_a0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00486ada(&piStack_a0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      uVar3 = FUN_00432f57(unaff_EBP + -0x28,unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      uVar3 = FUN_004091f9(uVar3);
      puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x18,uVar3);
      pcStack_8c = (code *)0x78e93f;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,(IBinding *)*puVar7);
      FUN_00412600();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00402fa6();
      pcStack_8c = (code *)0x78e968;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      pcStack_8c = (code *)0x78e979;
      FUN_00403191();
      iVar4 = *(int *)p_Var10;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78e98b;
        FUN_00878dfb();
      }
      piVar5 = *(int **)p_Var10;
      piStack_94 = *(int **)(unaff_EBP + -0x54);
      piStack_90 = *(int **)(unaff_EBP + -0x50);
      iVar4 = *piVar5;
      pcStack_8c = *(code **)(unaff_EBP + -0x4c);
      piStack_a0 = *(int **)(unaff_EBP + -0x60);
      piStack_9c = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x28) = piVar5;
      piStack_98 = *(int **)(unaff_EBP + -0x58);
      piVar5 = (int *)(**(code **)(iVar4 + 0x110))(piVar5,0x20,*(undefined4 *)(unaff_EBP + -100));
      if ((int)piVar5 < 0) {
        pcStack_8c = *(code **)(unaff_EBP + -0x28);
        piStack_94 = (int *)0x78e9c5;
        piStack_90 = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      pcStack_8c = (code *)0x78e9d2;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e9dd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      pcStack_8c = (code *)0x78e9ea;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78e9f5;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
    }
    else {
      pcStack_8c = (code *)0x78ea13;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x28) = piVar5;
      iVar4 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x21;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78ea2b;
        FUN_00878dfb();
      }
      iVar4 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar4 != 0xff;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') {
        if (*(int *)p_Var10 == 0) {
          pcStack_8c = (code *)0x78ea5e;
          FUN_00878dfb();
        }
        pcStack_8c = (code *)0x78ea69;
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0x22;
        if (iVar4 == 0) {
          pcStack_8c = (code *)0x78ea80;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        pcStack_8c = (code *)0xff;
        piStack_94 = (int *)0x78ea8e;
        piStack_90 = piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0x40))();
        if ((int)piVar8 < 0) {
          piStack_94 = (int *)0x78ea9e;
          piStack_90 = piVar8;
          pcStack_8c = (code *)piVar5;
          FUN_00878e09();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
      }
    }
    extraout_ECX[0x792] = 0;
  }
  pcStack_8c = (code *)0x78eab9;
  uVar3 = FUN_0079b949();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  pcStack_8c = (code *)0x78eac7;
  piVar5 = (int *)FUN_00486ada();
  uVar11 = -(uint)(*piVar5 != 0) & *piVar5 - 0xcU;
  FUN_004125d9();
  iVar4 = FUN_0078ffdf();
  if (iVar4 == 0) {
    if (((*(int *)(uVar11 + 0x16c) == 0) && (*(int *)(uVar11 + 0x170) != 0)) &&
       (*(int *)((-(uint)(extraout_ECX[0x35d] != 0) & extraout_ECX[0x35d] - 0xcU) + 0x110) != 0)) {
      pcStack_8c = (code *)0x78ed51;
      FUN_0064d61f();
      pcStack_8c = (code *)0xff;
      piStack_90 = (int *)0x3;
      piStack_98 = (int *)&piStack_94;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_94;
      piStack_9c = (int *)0x78ed6a;
      FUN_0043f93c();
      piStack_98 = (int *)0x0;
      piStack_9c = (int *)0x0;
      *(int ***)(unaff_EBP + -0x20) = &piStack_a0;
      *(undefined4 *)(unaff_EBP + -4) = 0x2a;
      FUN_00486ada(&piStack_a0);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_0079005e(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      uVar3 = FUN_004091f9(uVar3);
      puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x28,uVar3);
      pIVar1 = (IBinding *)*puVar7;
      p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                (*(int *)(unaff_EBP + -0x18) + 0x14);
      *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = p_Var10;
      pcStack_8c = (code *)0x78edcd;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,pIVar1);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
      pcStack_8c = (code *)0x78edef;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x2e;
      pcStack_8c = (code *)0x78edff;
      FUN_00403191();
      iVar4 = **(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78ee14;
        FUN_00878dfb();
      }
      piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
      piStack_94 = *(int **)(unaff_EBP + -0x54);
      piStack_90 = *(int **)(unaff_EBP + -0x50);
      iVar4 = *piVar5;
      pcStack_8c = *(code **)(unaff_EBP + -0x4c);
      piStack_a0 = *(int **)(unaff_EBP + -0x60);
      piStack_9c = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x28) = piVar5;
      piStack_98 = *(int **)(unaff_EBP + -0x58);
      iVar4 = (**(code **)(iVar4 + 0x110))(piVar5,0,*(undefined4 *)(unaff_EBP + -100));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iVar4 = FUN_00402bc3(unaff_EBP + -100);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      if (**(int **)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x28);
      iVar4 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x30;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)*piVar5;
      piVar8 = (int *)(**(code **)(*piVar5 + 0x40))(piVar5,0xfe,0);
      if ((int)piVar8 < 0) {
        piStack_94 = (int *)0x78eed4;
        piStack_90 = piVar8;
        pcStack_8c = (code *)piVar5;
        FUN_00878e09();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
    }
    else {
      piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
      pcStack_8c = (code *)0x78eef5;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        if (*piVar5 == 0) {
          pcStack_8c = (code *)0x78ef0b;
          FUN_00878dfb();
        }
        pcStack_8c = (code *)0x78ef16;
        piVar8 = (int *)FUN_004113e5();
        *(int **)(unaff_EBP + -0x28) = piVar8;
        iVar4 = *piVar8;
        *(undefined4 *)(unaff_EBP + -4) = 0x31;
        if (iVar4 == 0) {
          pcStack_8c = (code *)0x78ef2e;
          FUN_00878dfb();
        }
        iVar4 = FUN_00404a94();
        *(bool *)(unaff_EBP + -0xd) = iVar4 == 0xff;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        if (*(char *)(unaff_EBP + -0xd) != '\0') {
          if (*piVar5 == 0) {
            pcStack_8c = (code *)0x78ef61;
            FUN_00878dfb();
          }
          pcStack_8c = (code *)0x78ef6c;
          piVar5 = (int *)FUN_004113e5();
          iVar4 = *piVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0x32;
          if (iVar4 == 0) {
            pcStack_8c = (code *)0x78ef83;
            FUN_00878dfb();
          }
          piVar5 = (int *)*piVar5;
          pcStack_8c = (code *)0x0;
          piStack_94 = (int *)0x78ef8d;
          piStack_90 = piVar5;
          piVar8 = (int *)(**(code **)(*piVar5 + 0x40))();
          if ((int)piVar8 < 0) {
            piStack_94 = (int *)0x78ef9d;
            piStack_90 = piVar8;
            pcStack_8c = (code *)piVar5;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004125d9();
        }
      }
    }
    if (extraout_ECX[0x793] != 0) {
      pcStack_8c = (code *)0x78efbf;
      FUN_007d4061();
      extraout_ECX[0x793] = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
              (*(int *)(unaff_EBP + -0x18) + 0x14);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = p_Var10;
    if (iVar4 == 0) {
LAB_0078eb4f:
      pcStack_8c = (code *)0x78eb5f;
      uVar3 = FUN_0064d61f();
      pcStack_8c = (code *)0xff;
      piStack_90 = (int *)0x3;
      piStack_98 = (int *)&piStack_94;
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_94;
      piStack_9c = (int *)0x78eb79;
      FUN_0043f93c();
      piStack_98 = (int *)0x0;
      piStack_9c = (int *)0x0;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_a0;
      *(undefined4 *)(unaff_EBP + -4) = 0x24;
      FUN_00486ada(&piStack_a0);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uVar3 = FUN_0040f150(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      uVar3 = FUN_004091f9(uVar3);
      puVar7 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x24,uVar3);
      pcStack_8c = (code *)0x78ebd8;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,(IBinding *)*puVar7);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
      pcStack_8c = (code *)0x78ebf9;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x28;
      pcStack_8c = (code *)0x78ec0d;
      FUN_00403191();
      iVar4 = *(int *)p_Var10;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78ec1f;
        FUN_00878dfb();
      }
      piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
      piStack_94 = *(int **)(unaff_EBP + -0x54);
      piStack_90 = *(int **)(unaff_EBP + -0x50);
      iVar4 = *piVar5;
      pcStack_8c = *(code **)(unaff_EBP + -0x4c);
      piStack_a0 = *(int **)(unaff_EBP + -0x60);
      piStack_9c = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x28) = piVar5;
      piStack_98 = *(int **)(unaff_EBP + -0x58);
      piVar5 = (int *)(**(code **)(iVar4 + 0x110))(piVar5,0x20,*(undefined4 *)(unaff_EBP + -100));
      if ((int)piVar5 < 0) {
        pcStack_8c = *(code **)(unaff_EBP + -0x28);
        piStack_94 = (int *)0x78ec5c;
        piStack_90 = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      pcStack_8c = (code *)0x78ec69;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78ec74;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      pcStack_8c = (code *)0x78ec81;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78ec8c;
        FUN_00878dfb();
      }
      if (extraout_ECX[0x793] != 0) {
        pcStack_8c = (code *)0x78ec9c;
        FUN_007d4061();
      }
      pcStack_8c = ptr_004f5c6d;
      piStack_90 = (int *)0x78eca9;
      iVar4 = FUN_007d3e08();
      p_Var10 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18);
      extraout_ECX[0x793] = iVar4;
    }
    else {
      pcStack_8c = (code *)0x78eb0e;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x28) = piVar5;
      iVar4 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x23;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78eb26;
        FUN_00878dfb();
      }
      iVar4 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar4 != 0xff;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') goto LAB_0078eb4f;
    }
    if (extraout_ECX[0x34f] == 0) {
      pcStack_8c = (code *)0x78ecc8;
      FUN_00878dfb();
    }
    iVar4 = *(int *)p_Var10;
    *(int *)(unaff_EBP + -0x28) = extraout_ECX[0x34f];
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78ecdf;
      FUN_00878dfb();
    }
    piVar5 = *(int **)p_Var10;
    FUN_0043210d();
    piStack_90 = (int *)0x78ecf3;
    pcStack_8c = (code *)piVar5;
    piVar8 = (int *)(**(code **)(*piVar5 + 0xd8))();
    if ((int)piVar8 < 0) {
      piStack_94 = (int *)0x78ed07;
      piStack_90 = piVar8;
      pcStack_8c = (code *)piVar5;
      FUN_00878e09();
    }
  }
  FUN_0043fd71();
  iVar4 = 0;
  do {
    puVar7 = *(undefined4 **)(iVar4 + 4 + extraout_ECX[0x5d1]);
    if (puVar7 == (undefined4 *)0x0) break;
    (**(code **)*puVar7)();
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x18);
  uVar11 = extraout_ECX[0x5f3];
  while (uVar11 != 0) {
    *(uint *)(unaff_EBP + -0x28) = uVar11;
    iVar4 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(uVar11 + 4);
    FUN_0079d8f3();
    *(undefined4 *)(unaff_EBP + -4) = 0x33;
    if ((*(int *)(unaff_EBP + -0x2c) != 0) && (iVar6 = FUN_0051d663(), iVar6 != 0)) {
      FUN_0079d910();
      pcStack_8c = (code *)0x78f04b;
      FUN_0079de92();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0079d910();
    uVar11 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  }
  pcStack_8c = (code *)0x0;
  piStack_90 = (int *)0x78f064;
  FUN_004031b7();
  iVar4 = extraout_ECX[0x5fc];
  *(undefined4 *)(unaff_EBP + -4) = 0x34;
  if (iVar4 == 0) {
    pcStack_8c = (code *)0x78f07d;
    FUN_00878dfb();
  }
  pcStack_8c = (code *)(unaff_EBP + -0x28);
  piStack_90 = (int *)0x78f090;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  pcStack_8c = (code *)0x78f09c;
  cVar2 = FUN_004115ef();
  if (cVar2 == '\0') {
    if (extraout_ECX[0x5fc] == 0) {
      pcStack_8c = (code *)0x78f0b2;
      FUN_00878dfb();
    }
    iVar4 = FUN_00432a57();
    cVar2 = '\x01' - (iVar4 != 0);
    *(char *)(unaff_EBP + -0xd) = cVar2;
    if (cVar2 == '\0') goto LAB_0078f0ce;
    *(undefined1 *)(unaff_EBP + -0xd) = 1;
  }
  else {
LAB_0078f0ce:
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
  }
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_8c = (code *)0x78f0e7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    pcStack_8c = (code *)0x78f0f2;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    pcStack_8c = (code *)0xfffffffe;
    piStack_90 = (int *)0x78f104;
    FUN_004031b7();
    iVar4 = extraout_ECX[0x5fc];
    *(undefined4 *)(unaff_EBP + -4) = 0x36;
    if (iVar4 == 0) {
      pcStack_8c = (code *)0x78f11d;
      FUN_00878dfb();
    }
    pcStack_8c = (code *)(unaff_EBP + -0x28);
    piStack_90 = (int *)0x78f130;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_8c = (code *)0x78f145;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      pcStack_8c = (code *)0x78f150;
      FUN_00878dfb();
    }
  }
  piVar5 = (int *)extraout_ECX[0x78c];
  if (((piVar5 != (int *)0x0) && (-1 < *(int *)(unaff_EBP + -0x14) - *piVar5)) &&
     (extraout_ECX[0x149] == 0)) {
    if (((int *)piVar5[4] == (int *)0x0) || (iVar4 = *(int *)piVar5[4], iVar4 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(iVar4 + -4) >> 1;
    }
    if (uVar11 != 0) {
      iVar4 = (**(code **)(*extraout_ECX + 0xc))();
      if (iVar4 == 0) {
        (**(code **)(extraout_ECX[1] + 0x10))();
        pcStack_8c = (code *)0x78f1b4;
        puVar7 = (undefined4 *)(**(code **)(extraout_ECX[1] + 0x10))();
        pcStack_8c = (code *)*puVar7;
        piStack_90 = (int *)0x78f1bb;
        FUN_007d3c48();
      }
      if (*(int **)(extraout_ECX[0x78c] + 0x10) == (int *)0x0) {
        piStack_90 = (int *)0x0;
      }
      else {
        piStack_90 = (int *)**(int **)(extraout_ECX[0x78c] + 0x10);
      }
      pcStack_8c = (code *)0x1b;
      piStack_94 = (int *)0x78f1d9;
      FUN_007d4763();
    }
    if ((*(int **)(extraout_ECX[0x78c] + 0xc) == (int *)0x0) ||
       (iVar4 = **(int **)(extraout_ECX[0x78c] + 0xc), iVar4 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(iVar4 + -4) >> 1;
    }
    if (uVar11 != 0) {
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff78;
      pcStack_8c = (code *)0x78f213;
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
      pcStack_8c = (code *)0x78f227;
      iVar4 = FUN_0079d5bc();
      pcStack_8c = *(code **)(iVar4 + 8);
      piStack_90 = (int *)0x78f231;
      iVar4 = FUN_0079d5bc();
      piStack_94 = (int *)(iVar4 + 0xc);
      *(int ***)(unaff_EBP + -0x28) = &piStack_90;
      piStack_98 = (int *)0x78f240;
      FUN_004059fd();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_94 = (int *)0x78f249;
      FUN_0079d484();
      piStack_94 = (int *)0x78f250;
      FUN_00411207();
      pcStack_8c = (code *)0x0;
      piStack_90 = (int *)0x78f25b;
      FUN_004031b7();
      iVar4 = extraout_ECX[0x5fc];
      *(undefined4 *)(unaff_EBP + -4) = 0x39;
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78f274;
        FUN_00878dfb();
      }
      pcStack_8c = (code *)(unaff_EBP + -0x20);
      piStack_90 = (int *)0x78f287;
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      pcStack_8c = (code *)0x78f294;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_8c = (code *)0x78f29f;
        FUN_00878dfb();
      }
      pcStack_8c = (code *)0x78f2a8;
      cVar2 = FUN_004115ef();
      if (cVar2 == '\0') {
        if (extraout_ECX[0x5fc] == 0) {
          pcStack_8c = (code *)0x78f2c9;
          FUN_00878dfb();
        }
        piVar5 = (int *)extraout_ECX[0x5fc];
        piStack_90 = (int *)0x78f2e1;
        pcStack_8c = (code *)piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0xd8))();
        if ((int)piVar8 < 0) {
          piStack_90 = (int *)&DAT_00963df8;
          piStack_9c = (int *)0x78f2f1;
          piStack_98 = piVar8;
          piStack_94 = piVar5;
          FUN_00878e09();
        }
        if (*(int *)(extraout_ECX[0x78c] + 8) == 0x5b) {
          piStack_94 = (int *)extraout_ECX[0x34c];
          piStack_90 = (int *)0x1;
          piStack_98 = (int *)0x78f30e;
          FUN_0040ee87();
          iVar4 = extraout_ECX[0x5fc];
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (iVar4 == 0) {
            piStack_90 = (int *)0x80004003;
            piStack_94 = (int *)0x78f325;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)extraout_ECX[0x5fc];
          iVar4 = *piStack_a0;
          piStack_9c = *(int **)(unaff_EBP + -0x54);
          piStack_98 = *(int **)(unaff_EBP + -0x50);
          piStack_94 = *(int **)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + -0x28) = piStack_a0;
          piStack_90 = *(int **)(unaff_EBP + -0x48);
          iVar4 = (**(code **)(iVar4 + 100))();
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
        }
        else {
          piStack_90 = (int *)(unaff_EBP + -0x24);
          piStack_94 = (int *)0x78f37e;
          puVar7 = (undefined4 *)FUN_00486ada();
          piStack_94 = (int *)*puVar7;
          piStack_90 = (int *)0x1;
          piStack_98 = (int *)0x78f38b;
          FUN_0040ee87();
          iVar4 = extraout_ECX[0x5fc];
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          if (iVar4 == 0) {
            piStack_90 = (int *)0x80004003;
            piStack_94 = (int *)0x78f3a2;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)extraout_ECX[0x5fc];
          iVar4 = *piStack_a0;
          piStack_9c = *(int **)(unaff_EBP + -0x54);
          piStack_98 = *(int **)(unaff_EBP + -0x50);
          piStack_94 = *(int **)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + -0x28) = piStack_a0;
          piStack_90 = *(int **)(unaff_EBP + -0x48);
          iVar4 = (**(code **)(iVar4 + 100))();
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_004125d9();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x5fc];
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x5fc];
        iVar4 = *piVar5;
        *(int **)(unaff_EBP + -0x28) = piVar5;
        piVar5 = (int *)(**(code **)(iVar4 + 0x110))
                                  (piVar5,0,*(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + -0x34),
                                   *(undefined4 *)(unaff_EBP + -0x30),
                                   *(undefined4 *)(unaff_EBP + -0x2c));
        if ((int)piVar5 < 0) {
          pcStack_8c = *(code **)(unaff_EBP + -0x28);
          piStack_94 = (int *)0x78f463;
          piStack_90 = piVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        pcStack_8c = (code *)0x78f470;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          pcStack_8c = (code *)0x78f47b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        pcStack_8c = (code *)0x78f488;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          pcStack_8c = (code *)0x78f493;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125e6();
    }
    FUN_0079d895();
  }
  if (extraout_ECX[0x77d] < 0) {
    pcStack_8c = (code *)0x78f4bf;
    iVar4 = FUN_0079b949();
    pcStack_8c = (code *)0x78f4ca;
    cVar2 = FUN_00433bfa();
    if (cVar2 == '\0') {
      if (*(int *)(iVar4 + 0x14) == 0) {
        pcStack_8c = (code *)0x78f4e0;
        FUN_00878dfb();
      }
      iVar4 = FUN_00432a57();
      if (iVar4 == 0) {
        pcStack_8c = (code *)0x78f508;
        FUN_0079757b();
      }
    }
  }
  else if (0 < extraout_ECX[0x77d]) {
    pcStack_8c = (code *)0x78f51c;
    iVar6 = FUN_0079b949();
    pcStack_8c = (code *)0x78f527;
    uVar3 = FUN_0079b949();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
    iVar4 = extraout_ECX[0x5ed];
    if ((iVar4 == 0) || (-1 < *(int *)(unaff_EBP + -0x14) - iVar4)) {
      if (1000 < *(int *)(unaff_EBP + -0x14) - iVar4) {
        extraout_ECX[0x5ed] = 0;
      }
      iVar4 = FUN_00790008();
      if (iVar4 != 0) goto LAB_0078f592;
      if ((*(int *)(iVar6 + 0x14) == 0) && (extraout_ECX[0x77e] == 0)) {
        pcStack_8c = (code *)0x78f573;
        FUN_00797d5a();
      }
      if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x14) == 0) && (extraout_ECX[0x77e] != 0)) {
        pcStack_8c = (code *)0x78f590;
        FUN_007980a6();
      }
    }
    else {
LAB_0078f592:
      pcStack_8c = (code *)0x78f59b;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        pcStack_8c = (code *)0x78f5a8;
        FUN_0079ba1a();
      }
      pcStack_8c = (code *)0x78f5b4;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        pcStack_8c = (code *)0x78f5c1;
        FUN_0079ba1a();
      }
    }
    if ((extraout_ECX[0x77f] != 0) && (*(int *)(extraout_ECX[0x77f] + -4) != 0)) {
      pcStack_8c = (code *)0x78f5df;
      iVar4 = FUN_0043f90a();
      if (extraout_ECX[0x780] != iVar4) {
        pcStack_8c = (code *)0x78f5ec;
        iVar4 = FUN_0043f90a();
        extraout_ECX[0x780] = iVar4;
        pcStack_8c = (code *)0x78f5fb;
        FUN_00797d5a();
      }
    }
  }
  pcStack_8c = (code *)0x78f607;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x35;
    do {
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar6 = extraout_ECX[iVar4 * 6 + 0x606];
      piVar5 = extraout_ECX + iVar4 * 6 + 0x601;
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      if (iVar6 != 0) {
        if (iVar4 == 0x35) {
          pcStack_8c = (code *)0x78f649;
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -4) = 0x41;
          pcStack_8c = (code *)0x78f65c;
          piVar5 = (int *)FUN_0078ffba();
          iVar4 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          if (iVar4 == 0) {
            pcStack_8c = (code *)0x78f670;
            FUN_00878dfb();
          }
          piVar5 = (int *)*piVar5;
          iVar4 = *piVar5;
          piStack_98 = (int *)0x0;
          piStack_9c = (int *)0x0;
          piStack_a0 = (int *)0x0;
          piStack_94 = *(int **)(unaff_EBP + -100);
          piStack_90 = *(int **)(unaff_EBP + -0x60);
          pcStack_8c = *(code **)(unaff_EBP + -0x5c);
          *(int **)(unaff_EBP + -0x28) = piVar5;
          iVar4 = (**(code **)(iVar4 + 0x8c))(piVar5,unaff_EBP + -0x20,0,0,0,0);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -100);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(&DAT_00980690);
          iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0x43;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x14);
          iVar4 = *piVar5;
          *(int **)(unaff_EBP + -0x28) = piVar5;
          piVar5 = (int *)(**(code **)(iVar4 + 0x8c))
                                    (piVar5,unaff_EBP + -0x2c,0,0,0,0,0,0,0,
                                     *(undefined4 *)(unaff_EBP + -0x54),
                                     *(undefined4 *)(unaff_EBP + -0x50),
                                     *(undefined4 *)(unaff_EBP + -0x4c),
                                     *(undefined4 *)(unaff_EBP + -0x48));
          if ((int)piVar5 < 0) {
            pcStack_8c = *(code **)(unaff_EBP + -0x28);
            piStack_94 = (int *)0x78f72d;
            piStack_90 = piVar5;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          pcStack_8c = (code *)0x78f73a;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            pcStack_8c = (code *)0x78f745;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(uint *)(unaff_EBP + -0x28) =
               (uint)(*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + -0x20));
        }
        if (piVar5[5] == 0) {
          pcStack_8c = (code *)0x78f767;
          FUN_00878dfb();
        }
        piVar5 = (int *)piVar5[5];
        piStack_90 = (int *)0x78f776;
        pcStack_8c = (code *)piVar5;
        piVar8 = (int *)(**(code **)(*piVar5 + 0xd8))();
        if ((int)piVar8 < 0) {
          piStack_94 = (int *)0x78f786;
          piStack_90 = piVar8;
          pcStack_8c = (code *)piVar5;
          FUN_00878e09();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < 0x3f);
  }
  iVar4 = FUN_005a9936();
  if ((iVar4 != 0) && (extraout_ECX[0x5e3] != 0)) {
    *(undefined4 *)(extraout_ECX[0x5e3] + 4) = 1;
  }
  iVar4 = (**(code **)(*extraout_ECX + 0xc))();
  if (iVar4 != 0) goto LAB_0078ffab;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  uVar11 = extraout_ECX[0x5dc];
  *(undefined4 *)(unaff_EBP + -4) = 0x44;
  while (uVar11 != 0) {
    iVar4 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
    *(uint *)(unaff_EBP + -0x2c) = uVar11;
    FUN_0079d81d();
    FUN_005d0fed();
    puVar7 = *(undefined4 **)(*(int *)(unaff_EBP + -0x2c) + 4);
    *(undefined4 **)(unaff_EBP + -0x40) = puVar7;
    (**(code **)*puVar7)();
    uVar11 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  }
  iVar4 = FUN_0045e2eb();
  if (0 < iVar4) {
    iVar4 = FUN_0045e2eb();
    pcStack_8c = (code *)0x78f838;
    FUN_0045e3a0();
    if (iVar4 + -0x1e < 0) {
      pcStack_8c = (code *)0x78f848;
      FUN_0045e3a0();
    }
  }
  iVar4 = FUN_0045e2eb();
  if (iVar4 < 0) {
    iVar4 = FUN_0045e2eb();
    pcStack_8c = (code *)0x78f871;
    FUN_0045e3a0();
    if (0 < iVar4 + 0x1e) {
      pcStack_8c = (code *)0x78f881;
      FUN_0045e3a0();
    }
  }
  uVar11 = extraout_ECX[0x14b];
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  if ((((uVar11 & 0xfffffffe) != 0x12) && (iVar4 = FUN_0045e2eb(), 0 < iVar4)) &&
     (extraout_ECX[0x5fe] = extraout_ECX[0x5fe] + 1, ((byte)extraout_ECX[0x5fe] & 3) < 2)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xff808080;
  }
  iVar4 = FUN_004bed04();
  if ((iVar4 != 0) || (iVar4 = (**(code **)(*extraout_ECX + 0x10))(), iVar4 != 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x80ffffff;
  }
  iVar4 = (**(code **)(*extraout_ECX + 0x14))();
  if (iVar4 != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  iVar4 = extraout_ECX[0x5ed];
  if ((iVar4 == 0) || (-1 < *(int *)(unaff_EBP + -0x14) - iVar4)) {
    if (1000 < *(int *)(unaff_EBP + -0x14) - iVar4) {
      extraout_ECX[0x5ed] = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (extraout_ECX[0x34e] == 0) {
    pcStack_8c = (code *)0x78f92a;
    FUN_00878dfb();
  }
  piVar5 = (int *)extraout_ECX[0x34e];
  piStack_90 = (int *)0x78f938;
  pcStack_8c = (code *)piVar5;
  piVar8 = (int *)(**(code **)(*piVar5 + 0xe0))();
  if ((int)piVar8 < 0) {
    piStack_90 = (int *)&DAT_00963df8;
    piStack_9c = (int *)0x78f948;
    piStack_98 = piVar8;
    piStack_94 = piVar5;
    FUN_00878e09();
  }
  if (extraout_ECX[0x34f] == 0) {
    piStack_90 = (int *)0x80004003;
    piStack_94 = (int *)0x78f960;
    FUN_00878dfb();
  }
  piVar5 = (int *)extraout_ECX[0x34f];
  piStack_90 = *(int **)(unaff_EBP + -0x18);
  piStack_98 = (int *)0x78f96e;
  piStack_94 = piVar5;
  piVar8 = (int *)(**(code **)(*piVar5 + 0xe0))();
  if ((int)piVar8 < 0) {
    piStack_98 = (int *)&DAT_00963df8;
    piStack_a0 = piVar8;
    piStack_9c = piVar5;
    FUN_00878e09();
  }
  piStack_98 = (int *)0x78f985;
  iVar4 = (**(code **)(*extraout_ECX + 0x14))();
  if ((iVar4 == 0) && (extraout_ECX[0x149] == 0)) {
    piStack_98 = (int *)0x1;
  }
  else {
    piStack_98 = (int *)0x0;
  }
  piStack_9c = (int *)0x78f9a0;
  FUN_005c9c3b();
  piVar5 = extraout_ECX + 0x678;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xc;
  do {
    if (*piVar5 != 0) {
      piStack_98 = (int *)0x78f9c3;
      uVar11 = FUN_0042503d();
      if ((uVar11 & 0xff000000) < 0xd0000001) {
        if (*piVar5 == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78fb1d;
          FUN_00878dfb();
        }
        piStack_98 = (int *)0x78fb24;
        uVar11 = FUN_0042503d();
        if ((uVar11 & 0xff000000) != 0) goto LAB_0078fc9b;
        if (*piVar5 == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78fb3d;
          FUN_00878dfb();
        }
        iVar4 = *piVar5;
        *(int *)(unaff_EBP + -0x1c) = iVar4;
        if (iVar4 == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78fb50;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = *piVar5;
        piStack_98 = (int *)0x78fb5d;
        piStack_98 = (int *)FUN_0042503d();
        piStack_9c = *(int **)(unaff_EBP + -0x20);
        piStack_a0 = (int *)0x78fb6a;
        iVar4 = (**(code **)(*piStack_9c + 0xe0))();
        if (iVar4 < 0) {
          piStack_a0 = (int *)&DAT_00963df8;
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x20));
        }
        piStack_a0 = &DAT_00980690;
        FUN_00403191();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)0x78fbaa;
        uVar11 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 500;
        piStack_a0 = (int *)0x78fbbd;
        iVar4 = FUN_0042a378();
        piStack_a0 = (int *)0x3;
        FUN_004031b7(*(int *)(unaff_EBP + -0x2c) + 500 + iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        piStack_a0 = (int *)0x78fbe0;
        uVar11 = FUN_004133f0();
        iVar4 = **(int **)(unaff_EBP + -0x18);
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 0x1e + 0xe1;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)(unaff_EBP + -0x3c);
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        iVar4 = *piVar5;
        piStack_a0 = *(int **)(unaff_EBP + -0x78);
        *(int **)(unaff_EBP + -0x20) = piVar5;
        piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                  (piVar5,*(undefined4 *)(unaff_EBP + -0x2c),0,
                                   *(undefined4 *)(unaff_EBP + -0x74),
                                   *(undefined4 *)(unaff_EBP + -0x70),
                                   *(undefined4 *)(unaff_EBP + -0x6c),
                                   *(undefined4 *)(unaff_EBP + -0x68),
                                   *(undefined4 *)(unaff_EBP + -0x84),
                                   *(undefined4 *)(unaff_EBP + -0x80),
                                   *(undefined4 *)(unaff_EBP + -0x7c));
        if ((int)piVar5 < 0) {
          piStack_98 = (int *)&DAT_00963de8;
          piStack_9c = *(int **)(unaff_EBP + -0x20);
          piStack_a0 = piVar5;
          FUN_00878e09();
        }
        piStack_98 = (int *)0x78fc68;
        FUN_004125d9();
        piStack_98 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        piStack_9c = (int *)0x78fc75;
        piStack_98 = (int *)FUN_00402bc3();
        if ((int)piStack_98 < 0) {
          piStack_9c = (int *)0x78fc80;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_98 = (int *)(unaff_EBP + -0x84);
      }
      else {
        if (*piVar5 == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78f9e1;
          FUN_00878dfb();
        }
        iVar4 = *piVar5;
        *(int *)(unaff_EBP + -0x1c) = iVar4;
        if (iVar4 == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78f9f4;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = *piVar5;
        piStack_98 = (int *)0x78fa01;
        piStack_98 = (int *)FUN_0042503d();
        piStack_9c = *(int **)(unaff_EBP + -0x20);
        piStack_a0 = (int *)0x78fa0e;
        iVar4 = (**(code **)(*piStack_9c + 0xe0))();
        if (iVar4 < 0) {
          piStack_a0 = (int *)&DAT_00963df8;
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x20));
        }
        piStack_a0 = &DAT_00980690;
        FUN_00403191();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)0x78fa4b;
        uVar11 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 500;
        piStack_a0 = (int *)0x78fa5e;
        iVar4 = FUN_0042a378();
        piStack_a0 = (int *)0x3;
        FUN_004031b7(*(int *)(unaff_EBP + -0x2c) + 200 + iVar4);
        iVar4 = **(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)(unaff_EBP + -0x28);
        piVar5 = (int *)FUN_004113e5();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        if (iVar4 == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        iVar4 = *piVar5;
        piStack_a0 = *(int **)(unaff_EBP + -0x48);
        *(int **)(unaff_EBP + -0x2c) = piVar5;
        piVar5 = (int *)(**(code **)(iVar4 + 0x90))
                                  (piVar5,0,0,*(undefined4 *)(unaff_EBP + -100),
                                   *(undefined4 *)(unaff_EBP + -0x60),
                                   *(undefined4 *)(unaff_EBP + -0x5c),
                                   *(undefined4 *)(unaff_EBP + -0x58),
                                   *(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c));
        if ((int)piVar5 < 0) {
          piStack_98 = (int *)&DAT_00963de8;
          piStack_9c = *(int **)(unaff_EBP + -0x2c);
          piStack_a0 = piVar5;
          FUN_00878e09();
        }
        piStack_98 = (int *)0x78faeb;
        FUN_004125d9();
        piStack_98 = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        piStack_9c = (int *)0x78faf8;
        piStack_98 = (int *)FUN_00402bc3();
        if ((int)piStack_98 < 0) {
          piStack_9c = (int *)0x78fb03;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_98 = (int *)(unaff_EBP + -0x54);
      }
      piStack_9c = (int *)0x78fc90;
      piStack_98 = (int *)FUN_00402bc3();
      if ((int)piStack_98 < 0) {
        piStack_9c = (int *)0x78fc9b;
        FUN_00878dfb();
      }
    }
LAB_0078fc9b:
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x18);
    piVar8 = (int *)(unaff_EBP + -0x24);
    *piVar8 = *piVar8 + -1;
    *(int **)(unaff_EBP + -0x18) = piVar5;
  } while (*piVar8 != 0);
  piStack_98 = (int *)0x0;
  piStack_9c = (int *)0x78fcb7;
  FUN_0079c347();
  piStack_98 = *(int **)(unaff_EBP + -0x14);
  piStack_9c = (int *)0x78fcc1;
  FUN_00790087();
  if (extraout_ECX[0x5e9] != 0) {
    piStack_98 = (int *)0x5;
    piStack_9c = (int *)0x78fcd2;
    iVar4 = FUN_0079b949();
    extraout_ECX[0x5e9] = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    piVar5 = (int *)(iVar4 + 0x44);
    do {
      if (*piVar5 == 0) {
        piStack_98 = (int *)0x80004003;
        piStack_9c = (int *)0x78fcf4;
        FUN_00878dfb();
      }
      piStack_98 = (int *)0x78fcfb;
      iVar4 = FUN_00432a57();
      if (iVar4 != 0) {
        extraout_ECX[0x5e9] = 1;
        break;
      }
      if (*piVar5 == 0) {
        piStack_98 = (int *)0x80004003;
        piStack_9c = (int *)0x78fd0d;
        FUN_00878dfb();
      }
      piVar8 = (int *)*piVar5;
      piStack_98 = (int *)0xffffff;
      piStack_a0 = (int *)0x78fd1d;
      piStack_9c = piVar8;
      piVar9 = (int *)(**(code **)(*piVar8 + 0xe0))();
      if ((int)piVar9 < 0) {
        piStack_98 = (int *)&DAT_00963df8;
        piStack_a0 = piVar9;
        piStack_9c = piVar8;
        FUN_00878e09();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      piVar5 = piVar5 + 6;
    } while (*(int *)(unaff_EBP + -0x1c) < 0xb);
  }
  if ((0 < extraout_ECX[0x5ea]) &&
     (iVar4 = extraout_ECX[0x5ea] + -0x1e, extraout_ECX[0x5ea] = iVar4, iVar4 < 1)) {
    piStack_98 = (int *)0x78fd65;
    (**(code **)(*extraout_ECX + 4))();
    piStack_98 = (int *)0x78fd70;
    puVar7 = (undefined4 *)FUN_004c2648();
    piStack_98 = (int *)*puVar7;
    piStack_9c = (int *)0x78fd7a;
    FUN_00445548();
    piStack_98 = (int *)extraout_ECX[0x77d];
    piStack_9c = (int *)0x78fd87;
    FUN_0079757b();
  }
  if (0 < extraout_ECX[0x5eb]) {
    iVar4 = extraout_ECX[0x5eb] + -0x1e;
    extraout_ECX[0x5eb] = iVar4;
    if (extraout_ECX[0x5ec] == 0) {
      if ((iVar4 < 0x79) || (0xf0 < iVar4)) {
        if (0 < iVar4) {
          if (iVar4 < 0x79) {
            if (extraout_ECX[0x34e] == 0) {
              piStack_98 = (int *)0x80004003;
              piStack_9c = (int *)0x78fec1;
              FUN_00878dfb();
            }
            piVar5 = (int *)extraout_ECX[0x34e];
            iVar4 = *piVar5;
            piVar8 = (int *)0xb2ffffff;
            goto LAB_0078fe1c;
          }
          if (0 < iVar4) goto LAB_0078ff0f;
        }
        piStack_98 = (int *)0xffffffff;
        piStack_9c = (int *)0x78fee0;
        FUN_00424e27();
        piStack_9c = (int *)0x78fee7;
        FUN_00444e05();
        piStack_98 = (int *)0xffffffff;
        piStack_9c = (int *)0x78fef4;
        FUN_00424e27();
        piStack_9c = (int *)0x78fefb;
        FUN_00444e05();
        piStack_98 = (int *)0xffffffff;
        piStack_9c = (int *)0x78ff08;
        FUN_00424e27();
        piStack_9c = (int *)0x78ff0f;
        FUN_00444e05();
      }
      else {
        piStack_98 = (int *)0x0;
        piStack_9c = (int *)0x78fdee;
        FUN_00444e82();
        piStack_98 = (int *)extraout_ECX[0x77d];
        piStack_9c = (int *)0x78fdfb;
        FUN_0079757b();
        if (extraout_ECX[0x34e] == 0) {
          piStack_98 = (int *)0x80004003;
          piStack_9c = (int *)0x78fe13;
          FUN_00878dfb();
        }
        piVar5 = (int *)extraout_ECX[0x34e];
        iVar4 = *piVar5;
        piVar8 = (int *)0x4dffffff;
LAB_0078fe1c:
        piStack_a0 = (int *)0x78fe24;
        piStack_9c = piVar5;
        piStack_98 = piVar8;
        iVar4 = (**(code **)(iVar4 + 0xe0))();
        if (iVar4 < 0) {
          piStack_a0 = (int *)&DAT_00963df8;
          FUN_00878e09(iVar4,piVar5);
        }
        if (extraout_ECX[0x34f] == 0) {
          piStack_a0 = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)extraout_ECX[0x34f];
        piStack_a0 = piVar8;
        iVar4 = (**(code **)(*piVar5 + 0xe0))(piVar5);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar5,&DAT_00963df8);
        }
        if (extraout_ECX[0x34d] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)extraout_ECX[0x34d];
        piVar8 = (int *)(**(code **)(*piVar5 + 0xe0))(piVar5,piVar8);
        if ((int)piVar8 < 0) {
          piStack_98 = (int *)&DAT_00963df8;
          piStack_a0 = piVar8;
          piStack_9c = piVar5;
          FUN_00878e09();
        }
      }
    }
    else if (iVar4 < 1) {
      piStack_98 = (int *)0x3ea;
      piStack_9c = (int *)0x78fdbf;
      FUN_00444e82();
      piStack_98 = (int *)extraout_ECX[0x77d];
      piStack_9c = (int *)0x78fdcc;
      FUN_0079757b();
    }
  }
LAB_0078ff0f:
  piVar5 = extraout_ECX + 1;
  piStack_98 = (int *)0x78ff1a;
  piVar8 = (int *)(**(code **)(extraout_ECX[1] + 0x14))();
  piStack_98 = (int *)0x78ff23;
  piVar9 = (int *)(**(code **)(*piVar5 + 0x10))();
  if (*piVar9 == *piVar8) {
    piStack_98 = (int *)0x78ff30;
    iVar4 = (**(code **)(*piVar5 + 0x14))();
    piStack_98 = (int *)0x78ff39;
    iVar6 = (**(code **)(*piVar5 + 0x10))();
    if (*(int *)(iVar6 + 4) != *(int *)(iVar4 + 4)) goto LAB_0078ff4a;
    extraout_ECX[0x794] = extraout_ECX[0x794] + 0x1e;
  }
  else {
LAB_0078ff4a:
    extraout_ECX[0x794] = 0;
  }
  piStack_98 = (int *)0x78ff56;
  iVar4 = FUN_00429303();
  if (((599999 < extraout_ECX[0x794]) &&
      (iVar6 = *(int *)(unaff_EBP + -0x14), extraout_ECX[0x795] <= iVar6)) && (iVar4 != 0)) {
    piStack_98 = (int *)0x78ff7c;
    iVar4 = FUN_004f162d();
    if ((iVar4 < 910000000) || (0x363d7f96 < iVar4)) {
      piStack_98 = (int *)0x2;
      piStack_9c = (int *)0x78ff93;
      FUN_0079d45a();
      extraout_ECX[0x795] = iVar6 + 120000;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_98 = (int *)0x78ffab;
  FUN_005d0fed();
LAB_0078ffab:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


