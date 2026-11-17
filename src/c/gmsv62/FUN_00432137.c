/* FUN_00432137 - 0x00432137 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00432137(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  byte extraout_var;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iStack_160;
  undefined4 *puStack_15c;
  
  FUN_00879bb8();
  iVar3 = *extraout_ECX;
  *(int **)(unaff_EBP + -0x20) = extraout_ECX;
  if (-1 < *(int *)(unaff_EBP + 8) - iVar3) {
    *extraout_ECX = extraout_ECX[4] + iVar3;
    if (*(int *)extraout_ECX[7] != 0) {
      uVar4 = 1;
      goto LAB_00432825;
    }
    if (((int *)extraout_ECX[7])[1] == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      piVar5 = extraout_ECX;
      while ((iVar3 = piVar5[2], iVar3 != 0 &&
             (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(iVar3 + -4)))) {
        *(undefined4 *)(unaff_EBP + -0x14) =
             *(undefined4 *)(iVar3 + *(uint *)(unaff_EBP + -0x1c) * 4);
        puStack_15c = (undefined4 *)0x4321ac;
        FUN_00424ed4();
        puStack_15c = (undefined4 *)0x3;
        iStack_160 = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_15c = (undefined4 *)0x80004003;
          iStack_160 = 0x4321d0;
          FUN_00878dfb();
        }
        puStack_15c = (undefined4 *)(unaff_EBP + -0x88);
        iStack_160 = unaff_EBP + -0x28;
        piVar2 = (int *)FUN_00425067();
        *(bool *)(unaff_EBP + 0xb) = *piVar2 == 0;
        puStack_15c = (undefined4 *)0x4321f1;
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_15c = (undefined4 *)(unaff_EBP + -0x88);
        iStack_160 = 0x432201;
        puStack_15c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_15c < 0) {
          iStack_160 = 0x43220c;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0xb) == '\0') {
          puStack_15c = &DAT_00980690;
          iStack_160 = 0x432222;
          FUN_00403191();
          puStack_15c = (undefined4 *)0x3;
          iStack_160 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_004031b7();
          bVar8 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (bVar8) {
            puStack_15c = (undefined4 *)0x80004003;
            iStack_160 = 0x432247;
            FUN_00878dfb();
          }
          puStack_15c = (undefined4 *)(unaff_EBP + -0xe8);
          iStack_160 = unaff_EBP + -0x68;
          FUN_0042a39f(unaff_EBP + -0x10,0,0,0,0,0);
          puStack_15c = (undefined4 *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_160 = 0x432273;
          puStack_15c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_15c < 0) {
            iStack_160 = 0x43227e;
            FUN_00878dfb();
          }
          puStack_15c = (undefined4 *)(unaff_EBP + -0xe8);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_160 = 0x43228e;
          puStack_15c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_15c < 0) {
            iStack_160 = 0x432299;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              puStack_15c = (undefined4 *)0x80004003;
              iStack_160 = 0x4322b1;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x148);
            iStack_160 = 0x4322c0;
            FUN_004308ad();
            puStack_15c = (undefined4 *)0x0;
            iStack_160 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iVar3 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x34) = iVar3;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            if (iVar3 != 0) {
              puStack_15c = (undefined4 *)(unaff_EBP + -0x34);
              iStack_160 = 0x4322e3;
              puStack_15c = (undefined4 *)FUN_0041a4e5();
              if (((int)puStack_15c < 0) && (puStack_15c != (undefined4 *)0x80004002)) {
                iStack_160 = 0x4322f4;
                FUN_00878dfb();
              }
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x148);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_160 = 0x432304;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x43230f;
              FUN_00878dfb();
            }
            iStack_160 = piVar5[1];
            puStack_15c = (undefined4 *)0x1;
            FUN_0040ee87();
            piVar5 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (piVar5 == (int *)0x0) {
              puStack_15c = (undefined4 *)0x80004003;
              iStack_160 = 0x432332;
              FUN_00878dfb();
              piVar5 = *(int **)(unaff_EBP + -0x10);
            }
            iVar3 = *piVar5;
            iStack_160 = *(int *)(unaff_EBP + -0x40);
            *(int **)(unaff_EBP + 8) = piVar5;
            puStack_15c = *(undefined4 **)(unaff_EBP + -0x3c);
            iVar3 = (**(code **)(iVar3 + 0xfc))
                              (piVar5,*(undefined4 *)(unaff_EBP + -0x48),
                               *(undefined4 *)(unaff_EBP + -0x44));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_00878dfb(0x80004003);
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                FUN_00878dfb(0x80004003);
              }
            }
            *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x18);
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = *(int **)(unaff_EBP + -0x10);
            uVar4 = FUN_00404abb();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
            uVar4 = FUN_00404a94();
            iVar3 = (**(code **)(*piVar5 + 0x40))(piVar5,uVar4,*(undefined4 *)(unaff_EBP + -0x24));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,piVar5,&DAT_00963d08);
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = *(int **)(unaff_EBP + -0x10);
            iVar3 = FUN_004320e3();
            iVar3 = (**(code **)(*piVar5 + 0xb4))(piVar5,iVar3 + -10);
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
            }
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = *(int **)(unaff_EBP + -0x10);
            uVar4 = FUN_0043210d();
            iVar3 = (**(code **)(*piVar5 + 0xd8))(piVar5,uVar4);
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
            }
            FUN_00403191(&DAT_00980690);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00403191(&DAT_00980690);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              FUN_00878dfb(0x80004003);
            }
            FUN_0042503d();
            bVar1 = *(byte *)(*(int *)(unaff_EBP + -0x20) + 0x14);
            *(byte *)(unaff_EBP + 0xb) = extraout_var;
            if (bVar1 <= extraout_var) {
              *(byte *)(unaff_EBP + 0xb) = bVar1;
            }
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x2c);
            iVar3 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = (int *)*piVar5;
            iVar3 = *piVar5;
            *(int **)(unaff_EBP + -0x24) = piVar5;
            iVar3 = (**(code **)(iVar3 + 0x90))
                              (piVar5,*(undefined1 *)(unaff_EBP + 0xb),0,
                               *(undefined4 *)(unaff_EBP + -0x128),
                               *(undefined4 *)(unaff_EBP + -0x124),
                               *(undefined4 *)(unaff_EBP + -0x120),
                               *(undefined4 *)(unaff_EBP + -0x11c),
                               *(undefined4 *)(unaff_EBP + -0xa8),*(undefined4 *)(unaff_EBP + -0xa4)
                               ,*(undefined4 *)(unaff_EBP + -0xa0),
                               *(undefined4 *)(unaff_EBP + -0x9c));
            if (iVar3 < 0) {
              puStack_15c = (undefined4 *)&DAT_00963de8;
              iStack_160 = *(int *)(unaff_EBP + -0x24);
              FUN_00878e09(iVar3);
            }
            puStack_15c = (undefined4 *)0x43250f;
            FUN_004125d9();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x128);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_160 = 0x43251f;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x43252c;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0xa8);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_160 = 0x43253c;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x432547;
              FUN_00878dfb();
            }
            puStack_15c = &DAT_00980690;
            iStack_160 = 0x432553;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              puStack_15c = (undefined4 *)0x80004003;
              iStack_160 = 0x432566;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)0x43256e;
            iStack_160 = FUN_0042a378();
            iVar3 = *(int *)(unaff_EBP + -0x20);
            iStack_160 = iStack_160 + *(int *)(iVar3 + 0xc);
            puStack_15c = (undefined4 *)0x3;
            FUN_004031b7();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            iStack_160 = 0x432592;
            FUN_00424e27();
            iStack_160 = 0x432599;
            FUN_004113e5();
            puStack_15c = (undefined4 *)(unaff_EBP + -200);
            iStack_160 = unaff_EBP + -0x108;
            uVar12 = 0;
            uVar4 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            FUN_00424df4(0,0);
            FUN_00424f2f(uVar4,uVar12);
            puStack_15c = (undefined4 *)0x4325c3;
            FUN_004125d9();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x108);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_160 = 0x4325d3;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x4325de;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -200);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_160 = 0x4325ee;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x4325f9;
              FUN_00878dfb();
            }
            puStack_15c = &DAT_00980690;
            iStack_160 = 0x432602;
            FUN_00424aee();
            puStack_15c = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            iStack_160 = 0x432612;
            FUN_00424aee();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x58);
            iStack_160 = unaff_EBP + -0x138;
            uVar4 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_00424e27(0);
            FUN_00425139(uVar4);
            puStack_15c = (undefined4 *)(unaff_EBP + -0x138);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            iStack_160 = 0x432641;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x43264c;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x58);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_160 = 0x432659;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x432664;
              FUN_00878dfb();
            }
            puStack_15c = &DAT_00980690;
            iStack_160 = 0x432670;
            FUN_00424aee();
            puStack_15c = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iStack_160 = 0x432680;
            FUN_00424aee();
            puStack_15c = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            iStack_160 = 0x432690;
            FUN_00424aee();
            puStack_15c = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            iStack_160 = 0x4326a0;
            FUN_00424aee();
            puStack_15c = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iStack_160 = 0x4326b0;
            FUN_00424aee();
            puStack_15c = (undefined4 *)0x3;
            iStack_160 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_004295f1();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x78);
            iStack_160 = unaff_EBP + -0x38;
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            FUN_00424e27();
            puVar6 = (undefined4 *)FUN_00425067();
            uVar4 = *puVar6;
            puStack_15c = (undefined4 *)(unaff_EBP + -0x118);
            iStack_160 = unaff_EBP + -0xf8;
            iVar7 = unaff_EBP + -0xd8;
            iVar11 = unaff_EBP + -0xb8;
            iVar10 = unaff_EBP + -0x98;
            iVar9 = unaff_EBP + -0x158;
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_00424e27(iVar9,uVar4,iVar10,iVar11,iVar7);
            FUN_004250ac(iVar9,uVar4,iVar10,iVar11,iVar7);
            puStack_15c = (undefined4 *)(unaff_EBP + -0x158);
            iStack_160 = 0x432726;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x432731;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)0x432739;
            FUN_004125e6();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x78);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iStack_160 = 0x432746;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x432751;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x98);
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            iStack_160 = 0x432761;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x43276c;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0xb8);
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            iStack_160 = 0x43277c;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x432787;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0xd8);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            iStack_160 = 0x432797;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x4327a2;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0xf8);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iStack_160 = 0x4327b2;
            puStack_15c = (undefined4 *)FUN_00402bc3();
            if ((int)puStack_15c < 0) {
              iStack_160 = 0x4327bd;
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x118);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_160 = 0x4327cd;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              iStack_160 = 0x4327d8;
              puStack_15c = (undefined4 *)iVar7;
              FUN_00878dfb();
              puStack_15c = (undefined4 *)extraout_ECX_00;
            }
            uVar4 = *(undefined4 *)(iVar3 + 0xc);
            *(int **)(unaff_EBP + 8) = &iStack_160;
            iStack_160 = (int)puStack_15c;
            puStack_15c = (undefined4 *)uVar4;
            FUN_0041160e(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00424e82();
            FUN_00427b38();
            puStack_15c = (undefined4 *)0x432802;
            FUN_004125d9();
            piVar5 = *(int **)(unaff_EBP + -0x20);
          }
          puStack_15c = (undefined4 *)0x43280f;
          FUN_00412600();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_15c = (undefined4 *)0x43281b;
        FUN_00412600();
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
    }
  }
  uVar4 = 0;
LAB_00432825:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


