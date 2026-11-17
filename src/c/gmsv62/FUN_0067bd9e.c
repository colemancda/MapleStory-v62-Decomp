/* FUN_0067bd9e - 0x0067bd9e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067bd9e(void)

{
  int iVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  float10 fVar8;
  int iStack_174;
  int iStack_170;
  int *piStack_16c;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  int iStack_15c;
  int *local_158;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x78);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  if ((iVar4 != 0) && (local_158 = (int *)(*(int *)(unaff_EBP + 8) - iVar4), -1 < (int)local_158)) {
    iStack_15c = extraout_ECX + 0xc0;
    *(int ***)(unaff_EBP + -0x30) = &local_158;
    puStack_160 = (undefined1 *)0x67bdda;
    FUN_0041160e();
    iStack_15c = 0;
    puStack_160 = (undefined1 *)0x0;
    uStack_168._0_4_ = (int *)(extraout_ECX + 0x134);
    *(int *)(unaff_EBP + -0x3c) = (int)&uStack_168 + 4;
    piStack_16c = (int *)0x67bdee;
    uStack_168._4_4_ = (int *)extraout_ECX_00;
    FUN_00433bdf();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_168 = CONCAT44(uStack_168._4_4_,(uint)(*(int *)(extraout_ECX + 0x7c) == 0));
    piStack_16c = (int *)0x67be06;
    piStack_16c = (int *)FUN_004091f9();
    iStack_170 = 0x67be0c;
    FUN_00424e82();
    iStack_170 = 0x67be13;
    FUN_0042b613();
    local_158 = *(int **)(extraout_ECX + 0xa0);
    iStack_15c = 0x67be20;
    FUN_007d3e08();
    *(undefined4 *)(extraout_ECX + 0x78) = 0;
  }
  piVar5 = *(int **)(extraout_ECX + 0x90);
  if (piVar5 == (int *)0x0) {
LAB_0067c6b9:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar4 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
    iVar7 = piVar5[1];
    *(uint *)(unaff_EBP + -0x38) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    if (*(int *)(unaff_EBP + 8) - iVar7 < 0) {
      if (-1 < *(int *)(unaff_EBP + 8) - *piVar5) {
        iVar4 = piVar5[7];
        *(int **)(unaff_EBP + -0x20) = piVar5 + 7;
        if (iVar4 == 0) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          local_158 = (int *)(unaff_EBP + -0x50);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          iStack_15c = 0x67beac;
          puVar3 = (undefined4 *)FUN_00679d86();
          iStack_15c = *puVar3;
          local_158 = (int *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          puStack_160 = (undefined1 *)0x67bebd;
          FUN_00437222();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + -0x50) != 0) {
            local_158 = (int *)0x67bed4;
            FUN_00403384();
          }
          local_158 = (int *)0x67bee3;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          local_158 = (int *)0x67bef3;
          FUN_00403191();
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (piVar6 == (int *)0x0) {
            local_158 = (int *)0x67bf08;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x10);
          }
          iStack_174 = piVar5[3];
          puStack_160 = *(undefined1 **)(unaff_EBP + -0x80);
          iStack_15c = *(int *)(unaff_EBP + -0x7c);
          iVar4 = *piVar6;
          local_158 = *(int **)(unaff_EBP + -0x78);
          iStack_170 = *(int *)(unaff_EBP + -0xa0);
          piStack_16c = *(int **)(unaff_EBP + -0x9c);
          iVar7 = piVar5[2];
          *(int **)(unaff_EBP + -0x24) = piVar6;
          uStack_168 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x94),
                                *(undefined4 *)(unaff_EBP + -0x98));
          iVar4 = (**(code **)(iVar4 + 0x90))(piVar6,iVar7);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar4 = FUN_00402bc3(unaff_EBP + -0xa0);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x80);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(&DAT_00980690);
          iVar4 = piVar5[1];
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_004031b7(iVar4,3);
          piVar6 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (piVar6 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar6 = *(int **)(unaff_EBP + -0x10);
          }
          iVar4 = piVar5[5];
          iVar7 = *piVar6;
          iVar1 = piVar5[4];
          *(int **)(unaff_EBP + -0x24) = piVar6;
          iVar4 = (**(code **)(iVar7 + 0x90))
                            (piVar6,iVar1,iVar4,*(undefined4 *)(unaff_EBP + -0x110),
                             *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108)
                             ,*(undefined4 *)(unaff_EBP + -0x104),*(undefined4 *)(unaff_EBP + -0x60)
                             ,*(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54));
          if (iVar4 < 0) {
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            FUN_00878dfb();
          }
          iVar7 = piVar5[5] - piVar5[3];
          iVar4 = piVar5[4] - piVar5[2];
          *(int *)(unaff_EBP + -0x14) = iVar7;
          *(int *)(unaff_EBP + -0x24) = iVar7 * iVar7 + iVar4 * iVar4;
          *(int *)(unaff_EBP + -0x48) = iVar4;
          fVar8 = (float10)FUN_0087af44((double)*(int *)(unaff_EBP + -0x24));
          *(double *)(unaff_EBP + -0x28) = (double)fVar8;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x10);
          FUN_0087af10(-((double)*(int *)(unaff_EBP + -0x14) / *(double *)(unaff_EBP + -0x28)),
                       -((double)*(int *)(unaff_EBP + -0x48) / *(double *)(unaff_EBP + -0x28)));
          iVar4 = (**(code **)(*piVar6 + 0x80))();
          if (iVar4 < 0) {
            puStack_160 = (undefined1 *)0x67c0ba;
            iStack_15c = iVar4;
            local_158 = piVar6;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            local_158 = (int *)0x67c0cc;
            FUN_00878dfb();
          }
          fVar8 = (float10)FUN_0042fae2();
          if ((float10)_DAT_008e8ac8 < fVar8) {
LAB_0067c101:
            *(undefined4 *)(unaff_EBP + -0x24) = 1;
          }
          else {
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              local_158 = (int *)0x67c0ee;
              FUN_00878dfb();
            }
            fVar8 = (float10)FUN_0042fae2();
            if (fVar8 < (float10)_DAT_008ecb50) goto LAB_0067c101;
          }
          local_158 = (int *)0x67c119;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          local_158 = (int *)0x67c129;
          FUN_00403191();
          local_158 = (int *)0x0;
          iStack_15c = unaff_EBP + -0xc0;
          puStack_160 = (undefined1 *)(unaff_EBP + -0x100);
          uStack_168._0_4_ = piVar5 + 8;
          *(int *)(unaff_EBP + -0x14) = (int)&uStack_168 + 4;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_16c = (int *)0x67c14c;
          uStack_168._4_4_ = (int *)extraout_ECX_01;
          FUN_004059fd();
          uStack_168 = CONCAT44(uStack_168._4_4_,unaff_EBP + -0x130);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_16c = (int *)0x67c15c;
          FUN_00405a1d();
          piStack_16c = (int *)0x67c163;
          FUN_00402660();
          piStack_16c = (int *)0x67c16a;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_15c = 0x67c175;
          iVar4 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x40) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (iVar4 != 0) {
            local_158 = (int *)0x67c18b;
            iVar4 = FUN_00404b30();
            if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
              local_158 = (int *)0x67c19c;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          local_158 = (int *)0x67c1ac;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            local_158 = (int *)0x67c1b7;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          local_158 = (int *)0x67c1c7;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            local_158 = (int *)0x67c1d2;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          local_158 = (int *)0x67c1e2;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            local_158 = (int *)0x67c1ed;
            FUN_00878dfb();
          }
          if ((*(int *)(unaff_EBP + -0x1c) == 0) || (iVar4 = FUN_0040cf4d(), iVar4 == 0)) {
            local_158 = (int *)0x67c31b;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20),
                       (IBinding *)0x0);
          }
          else {
            local_158 = (int *)0xff;
            iStack_15c = 0x67c219;
            FUN_00424e27();
            iStack_15c = 0x67c220;
            iStack_15c = FUN_004320e3();
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_160;
            uStack_168 = 0x67c22d;
            FUN_00424e0a();
            uStack_168 = 0;
            iStack_170 = unaff_EBP + -0x10;
            *(int ***)(unaff_EBP + -0x14) = &piStack_16c;
            iStack_174 = 0x67c23e;
            FUN_00433bdf();
            iStack_170 = 0;
            *(int **)(unaff_EBP + -0x14) = &iStack_174;
            FUN_00424dbc(unaff_EBP + -0x1c);
            puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x4c);
            this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x20);
            local_158 = (int *)0x67c266;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
            FUN_00412600();
            local_158 = (int *)0x67c27a;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            local_158 = (int *)0x67c28a;
            FUN_00403191();
            iVar4 = *(int *)this;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            if (iVar4 == 0) {
              local_158 = (int *)0x67c29c;
              FUN_00878dfb();
            }
            piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
            puStack_160 = *(undefined1 **)(unaff_EBP + -0xe0);
            iStack_15c = *(int *)(unaff_EBP + -0xdc);
            local_158 = *(int **)(unaff_EBP + -0xd8);
            iStack_170 = *(int *)(unaff_EBP + -0x120);
            piStack_16c = *(int **)(unaff_EBP + -0x11c);
            iStack_174 = 0x20;
            uStack_168 = *(undefined8 *)(unaff_EBP + -0x118);
            iVar4 = (**(code **)(*piVar5 + 0x110))(piVar5);
            if (iVar4 < 0) {
              puStack_160 = (undefined1 *)0x67c2da;
              iStack_15c = iVar4;
              local_158 = piVar5;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            local_158 = (int *)0x67c2ea;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              local_158 = (int *)0x67c2f5;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            local_158 = (int *)0x67c305;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              local_158 = (int *)0x67c310;
              FUN_00878dfb();
            }
          }
          local_158 = (int *)0x67c326;
          cVar2 = FUN_00411581();
          if (cVar2 == '\0') {
            puStack_160 = (undefined1 *)&local_158;
            *(int ***)(unaff_EBP + -0x14) = &local_158;
            iStack_15c = 0xaae;
            uStack_168 = CONCAT44(0x67c345,(int *)uStack_168);
            FUN_00679e4e();
            iStack_15c = unaff_EBP + -0x140;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_160 = (undefined1 *)0x67c358;
            FUN_0040263d();
            puStack_160 = (undefined1 *)0x67c35f;
            local_158 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            iStack_15c = 0x67c369;
            piVar5 = (int *)FUN_00412550();
            iStack_15c = unaff_EBP + -0x140;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_160 = (undefined1 *)0x67c380;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              local_158 = (int *)0x67c38d;
              FUN_00878dfb();
            }
            if (piVar5 != (int *)0x0) {
              if (*(int *)(unaff_EBP + -0x24) == 0) {
                local_158 = (int *)-(int)piVar5;
                iStack_15c = 0x67c3fe;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 0x15;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  local_158 = (int *)0x67c411;
                  FUN_00878dfb();
                }
                piVar5 = *(int **)(unaff_EBP + -0x10);
                puStack_160 = *(undefined1 **)(unaff_EBP + -0x90);
                iStack_15c = *(int *)(unaff_EBP + -0x8c);
                local_158 = *(int **)(unaff_EBP + -0x88);
                uStack_168 = 0;
                iStack_170 = 0x67c433;
                piStack_16c = piVar5;
                iVar4 = (**(code **)(*piVar5 + 0xa0))();
                if (iVar4 < 0) {
                  puStack_160 = (undefined1 *)0x67c443;
                  iStack_15c = iVar4;
                  local_158 = piVar5;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
              }
              else {
                iStack_15c = 0x67c3a5;
                local_158 = piVar5;
                FUN_004031b7();
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                if (*(int *)(unaff_EBP + -0x10) == 0) {
                  local_158 = (int *)0x67c3b8;
                  FUN_00878dfb();
                }
                piVar5 = *(int **)(unaff_EBP + -0x10);
                puStack_160 = *(undefined1 **)(unaff_EBP + -0x70);
                iStack_15c = *(int *)(unaff_EBP + -0x6c);
                local_158 = *(int **)(unaff_EBP + -0x68);
                uStack_168 = 0;
                iStack_170 = 0x67c3d7;
                piStack_16c = piVar5;
                iVar4 = (**(code **)(*piVar5 + 0xa0))();
                if (iVar4 < 0) {
                  puStack_160 = (undefined1 *)0x67c3e7;
                  iStack_15c = iVar4;
                  local_158 = piVar5;
                  FUN_00878e09();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
              }
              local_158 = (int *)0x67c453;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                local_158 = (int *)0x67c45e;
                FUN_00878dfb();
              }
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
            local_158 = (int *)0x67c46f;
            (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piVar5 = *(int **)(unaff_EBP + -0x10);
LAB_0067c6a5:
          if (piVar5 != (int *)0x0) {
            local_158 = (int *)0x67c6af;
            (**(code **)(*piVar5 + 8))();
          }
        }
        else if (iVar7 - *(int *)(unaff_EBP + 8) < 0xc9) {
          if (**(int **)(unaff_EBP + -0x20) == 0) {
            local_158 = (int *)0x67c49c;
            FUN_00878dfb();
          }
          local_158 = (int *)0x67c4a7;
          piVar6 = (int *)FUN_004113e5();
          iVar4 = *piVar6;
          *(undefined4 *)(unaff_EBP + -4) = 0x16;
          if (iVar4 == 0) {
            local_158 = (int *)0x67c4be;
            FUN_00878dfb();
          }
          local_158 = (int *)0x67c4cc;
          FUN_004308ad();
          local_158 = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iStack_15c = 0x67c4d9;
          iVar4 = FUN_004032b4();
          *(char *)(unaff_EBP + -0x15) = '\x01' - (iVar4 != 0);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          local_158 = (int *)0x67c4f2;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            local_158 = (int *)0x67c4fd;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004125d9();
          if (*(char *)(unaff_EBP + -0x15) != '\0') {
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
            local_158 = (int *)(unaff_EBP + -0x3c);
            *(undefined4 *)(unaff_EBP + -4) = 0x18;
            iStack_15c = 0x67c532;
            puVar3 = (undefined4 *)FUN_00679d86();
            iStack_15c = *puVar3;
            local_158 = (int *)(unaff_EBP + -0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            puStack_160 = (undefined1 *)0x67c543;
            FUN_00437222();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_00402676();
            local_158 = *(int **)(unaff_EBP + -0x2c);
            iStack_15c = 0x67c562;
            FUN_0040ee87();
            iVar4 = **(int **)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            if (iVar4 == 0) {
              local_158 = (int *)0x67c577;
              FUN_00878dfb();
            }
            local_158 = (int *)0x67c582;
            piVar6 = (int *)FUN_004113e5();
            iVar4 = *piVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (iVar4 == 0) {
              local_158 = (int *)0x67c596;
              FUN_00878dfb();
            }
            uStack_168._4_4_ = (int *)*piVar6;
            iVar4 = *uStack_168._4_4_;
            puStack_160 = *(undefined1 **)(unaff_EBP + -0xb0);
            iStack_15c = *(int *)(unaff_EBP + -0xac);
            local_158 = *(int **)(unaff_EBP + -0xa8);
            *(int **)(unaff_EBP + -0x14) = uStack_168._4_4_;
            uStack_168._0_4_ = (int *)0x67c5b0;
            iVar4 = (**(code **)(iVar4 + 100))();
            if (iVar4 < 0) {
              uStack_168._0_4_ = (int *)&DAT_00963de8;
              piStack_16c = *(int **)(unaff_EBP + -0x14);
              iStack_174 = 0x67c5c2;
              iStack_170 = iVar4;
              FUN_00878e09();
            }
            uStack_168._0_4_ = *(int **)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            if ((int *)uStack_168 != (int *)0x0) {
              piStack_16c = (int *)0x67c5d3;
              (**(code **)(*(int *)uStack_168 + 8))();
            }
            uStack_168._0_4_ = (int *)(unaff_EBP + -0xb0);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            piStack_16c = (int *)0x67c5e3;
            uStack_168._0_4_ = (int *)FUN_00402bc3();
            if ((int)(int *)uStack_168 < 0) {
              piStack_16c = (int *)0x67c5ee;
              FUN_00878dfb();
            }
            uStack_168._0_4_ = &DAT_00980690;
            piStack_16c = (int *)0x67c5fe;
            FUN_00403191();
            piStack_16c = (int *)piVar5[1];
            uStack_168._0_4_ = (int *)0x3;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iStack_170 = 0x67c613;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int *)(unaff_EBP + -0x2c) == 0) {
              uStack_168._0_4_ = (int *)0x80004003;
              piStack_16c = (int *)0x67c627;
              FUN_00878dfb();
            }
            piVar5 = *(int **)(unaff_EBP + -0x2c);
            iStack_174 = *(int *)(unaff_EBP + -0xf0);
            iStack_170 = *(int *)(unaff_EBP + -0xec);
            piStack_16c = *(int **)(unaff_EBP + -0xe8);
            uStack_168 = CONCAT44(uStack_168._4_4_,*(undefined4 *)(unaff_EBP + -0xe4));
            iVar4 = (**(code **)(*piVar5 + 0x90))
                              (piVar5,0xffffff01,0,*(undefined4 *)(unaff_EBP + -0xd0),
                               *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200),
                               *(undefined4 *)(unaff_EBP + -0xc4));
            if (iVar4 < 0) {
              puStack_160 = (undefined1 *)0x67c668;
              iStack_15c = iVar4;
              local_158 = piVar5;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            local_158 = (int *)0x67c678;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              local_158 = (int *)0x67c683;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            local_158 = (int *)0x67c693;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              local_158 = (int *)0x67c69e;
              FUN_00878dfb();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piVar5 = *(int **)(unaff_EBP + -0x2c);
            goto LAB_0067c6a5;
          }
        }
      }
    }
    else {
      local_158 = (int *)0x67be6f;
      FUN_0067f70a();
    }
    if (*(int *)(unaff_EBP + -0x38) == 0) goto LAB_0067c6b9;
    piVar5 = *(int **)(unaff_EBP + -0x38);
  } while( true );
}


