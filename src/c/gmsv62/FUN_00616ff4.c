/* FUN_00616ff4 - 0x00616ff4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00616ff4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  int *piStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  puStack_5c = (undefined4 *)0x1;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_60 = (int *)0x617010;
  piVar1 = (int *)FUN_00616a66();
  if (piVar1[5] != 0) {
    puStack_5c = (undefined4 *)0x617022;
    uVar2 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    if (((*(uint *)(*(int *)(extraout_ECX + 0x84) + 0x52c) & 0xfffffffe) == 4) &&
       (*(int *)(unaff_EBP + 0xc) == 0)) {
      if ((*piVar1 != 0) && (0x5dc < *(int *)(unaff_EBP + -0x18) - *piVar1)) {
        iVar4 = piVar1[1];
        if ((-1 < iVar4) || (*(int *)(unaff_EBP + 8) != piVar1[2])) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          puStack_5c = (undefined4 *)0x1;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          piStack_60 = (int *)0x617088;
          FUN_00616a87();
          puStack_5c = (undefined4 *)0x11c2;
          piStack_60 = (int *)(unaff_EBP + -0x24);
          puStack_64 = (undefined4 *)0x61709b;
          puStack_64 = (undefined4 *)FUN_00679d86();
          puStack_5c = *(undefined4 **)(unaff_EBP + 8);
          puStack_64 = (undefined4 *)*puStack_64;
          piStack_68 = (int *)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          piStack_60 = (int *)iVar4;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x24) + -0xc);
            piStack_60 = (int *)0x6170c6;
            FUN_00403384();
          }
          puStack_5c = (undefined4 *)(unaff_EBP + -0x1c);
          puStack_64 = (undefined4 *)(unaff_EBP + -0x24);
          piStack_68 = (int *)0x6170e4;
          piStack_60 = piVar1 + 3;
          FUN_0043f93c();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          puStack_64 = (undefined4 *)0x6170ef;
          FUN_00424e27();
          puStack_64 = (undefined4 *)0x6170f6;
          puStack_64 = (undefined4 *)FUN_0043210d();
          piStack_68 = (int *)0x6170ff;
          uVar2 = FUN_00411641();
          *(int ***)(unaff_EBP + -0x28) = &piStack_68;
          piStack_68 = extraout_ECX_00;
          FUN_004033a1(uVar2);
          uVar2 = FUN_00617699();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
          puStack_5c = (undefined4 *)0x617122;
          FUN_00412600();
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            piVar1[3] = 1;
            if (piVar1[5] == 0) {
              puStack_5c = (undefined4 *)0x80004003;
              piStack_60 = (int *)0x617142;
              FUN_00878dfb();
            }
            piVar5 = (int *)piVar1[5];
            puStack_5c = (undefined4 *)0xffffffff;
            puStack_64 = (undefined4 *)0x617150;
            piStack_60 = piVar5;
            iVar3 = (**(code **)(*piVar5 + 0xb4))();
            if (iVar3 < 0) {
              puStack_64 = (undefined4 *)&DAT_00963df8;
              piStack_68 = piVar5;
              FUN_00878e09(iVar3);
            }
            iVar3 = *(int *)(unaff_EBP + -0x1c);
            iVar6 = *(int *)(unaff_EBP + 8);
            piVar1[1] = iVar4;
            piVar1[2] = iVar6;
            if (iVar3 < 0) {
              puStack_64 = &DAT_00980690;
              piStack_68 = (int *)0x617212;
              FUN_00403191();
              puStack_64 = &DAT_00980690;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              piStack_68 = (int *)0x61721f;
              FUN_00403191();
              iVar4 = piVar1[5];
              *(undefined1 *)(unaff_EBP + -4) = 6;
              if (iVar4 == 0) {
                puStack_64 = (undefined4 *)0x80004003;
                piStack_68 = (int *)0x617233;
                FUN_00878dfb();
              }
              piVar5 = (int *)piVar1[5];
              iVar4 = *piVar5;
              piStack_68 = *(int **)(unaff_EBP + -0x30);
              puStack_64 = *(undefined4 **)(unaff_EBP + -0x2c);
              *(int **)(unaff_EBP + 8) = piVar5;
              iVar4 = (**(code **)(iVar4 + 0x110))
                                (piVar5,0x20,*(undefined4 *)(unaff_EBP + -0x48),
                                 *(undefined4 *)(unaff_EBP + -0x44),
                                 *(undefined4 *)(unaff_EBP + -0x40),
                                 *(undefined4 *)(unaff_EBP + -0x3c),
                                 *(undefined4 *)(unaff_EBP + -0x38),
                                 *(undefined4 *)(unaff_EBP + -0x34));
              if (iVar4 < 0) {
                FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar4 = unaff_EBP + -0x38;
            }
            else {
              puStack_64 = (undefined4 *)0x3;
              piStack_68 = *(int **)(unaff_EBP + -0x1c);
              FUN_004031b7();
              puStack_64 = &DAT_00980690;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              piStack_68 = (int *)0x617191;
              FUN_00403191();
              iVar4 = piVar1[5];
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (iVar4 == 0) {
                puStack_64 = (undefined4 *)0x80004003;
                piStack_68 = (int *)0x6171a5;
                FUN_00878dfb();
              }
              piVar5 = (int *)piVar1[5];
              iVar4 = *piVar5;
              piStack_68 = *(int **)(unaff_EBP + -0x40);
              puStack_64 = *(undefined4 **)(unaff_EBP + -0x3c);
              *(int **)(unaff_EBP + 8) = piVar5;
              iVar4 = (**(code **)(iVar4 + 0x110))
                                (piVar5,0x20,*(undefined4 *)(unaff_EBP + -0x38),
                                 *(undefined4 *)(unaff_EBP + -0x34),
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x2c),
                                 *(undefined4 *)(unaff_EBP + -0x48),
                                 *(undefined4 *)(unaff_EBP + -0x44));
              if (iVar4 < 0) {
                FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
              if (iVar4 < 0) {
                FUN_00878dfb(iVar4);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar4 = unaff_EBP + -0x48;
            }
            iVar4 = FUN_00402bc3(iVar4);
            if (iVar4 < 0) {
              FUN_00878dfb(iVar4);
            }
            if (piVar1[5] == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = (int *)FUN_004113e5(unaff_EBP + 8);
            iVar4 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (iVar4 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = (int *)*piVar5;
            iVar4 = (**(code **)(*piVar5 + 0x40))(piVar5,0,0);
            if (iVar4 < 0) {
              puStack_5c = (undefined4 *)&DAT_00963d08;
              piStack_68 = (int *)0x6172eb;
              puStack_64 = (undefined4 *)iVar4;
              piStack_60 = piVar5;
              FUN_00878e09();
            }
            puStack_5c = (undefined4 *)0x6172f3;
            FUN_004125d9();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
            piStack_60 = (int *)0x617307;
            FUN_00403384();
          }
        }
        *(int *)(unaff_EBP + 0xc) = piVar1[5];
        puStack_5c = (undefined4 *)0x617318;
        FUN_00424ed4();
        puStack_5c = (undefined4 *)0x3;
        piStack_60 = (int *)0x0;
        *(undefined4 *)(unaff_EBP + -4) = 8;
        puStack_64 = (undefined4 *)0x61732a;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          puStack_5c = (undefined4 *)0x80004003;
          piStack_60 = (int *)0x61733d;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
        piStack_60 = (int *)(unaff_EBP + -0x14);
        puStack_64 = (undefined4 *)0x61734d;
        FUN_00425067();
        puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_60 = (int *)0x61735a;
        puStack_5c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_5c < 0) {
          piStack_60 = (int *)0x617365;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)(unaff_EBP + 8);
        piStack_60 = (int *)0x61737a;
        piVar5 = (int *)FUN_0043f93c();
        iVar4 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar4 == 0) {
          puStack_5c = (undefined4 *)0x80004003;
          piStack_60 = (int *)0x61738e;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)0x617395;
        uVar2 = FUN_0043210d();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_5c = (undefined4 *)0x6173a4;
        FUN_00412600();
        iVar4 = *(int *)(unaff_EBP + 0xc);
        *piVar1 = 0;
        if (iVar4 == 0) {
          puStack_5c = (undefined4 *)0x80004003;
          piStack_60 = (int *)0x6173b6;
          FUN_00878dfb();
        }
        piVar1 = *(int **)(unaff_EBP + 0xc);
        puStack_5c = *(undefined4 **)(unaff_EBP + -0x28);
        puStack_64 = (undefined4 *)0x6173c5;
        piStack_60 = piVar1;
        iVar4 = (**(code **)(*piVar1 + 0xd8))();
        if (iVar4 < 0) {
          puStack_64 = (undefined4 *)&DAT_00963df8;
          piStack_68 = piVar1;
          FUN_00878e09(iVar4);
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_64 = (undefined4 *)0x80004003;
          piStack_68 = (int *)0x6173e0;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_64 = (undefined4 *)0x80004003;
          piStack_68 = (int *)0x6173ed;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          puStack_64 = (undefined4 *)0x80004003;
          piStack_68 = (int *)0x6173fe;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + 0xc);
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
        puStack_64 = (undefined4 *)0x61740e;
        uVar2 = (**(code **)(*piVar1 + 0x10))();
        *(undefined4 *)(unaff_EBP + 8) = uVar2;
        puStack_64 = (undefined4 *)0x61741a;
        iVar3 = FUN_0040eed0();
        iVar4 = *(int *)(*(int *)(unaff_EBP + 8) + 4);
        puStack_64 = (undefined4 *)0x617429;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x10))();
        puStack_64 = (undefined4 *)0x617433;
        iVar6 = FUN_0040eea9();
        piStack_68 = (int *)(*piVar1 - iVar6);
        puStack_64 = (undefined4 *)(iVar4 - iVar3);
        iVar4 = (**(code **)(*piVar5 + 0x40))(piVar5);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar5,&DAT_00963d08);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004031b7(*(int *)(unaff_EBP + -0x18) + 500,3);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = (int *)FUN_004113e5(unaff_EBP + 8);
        iVar4 = *piVar1;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = (int *)*piVar1;
        iVar4 = (**(code **)(*piVar1 + 0x90))
                          (piVar1,0xff,0,*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                           *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar1,&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_004125e6();
        FUN_00412600();
      }
    }
    else {
      if (*piVar1 == 0) {
        *(int *)(unaff_EBP + 8) = piVar1[5];
        puStack_5c = (undefined4 *)0x617545;
        FUN_00424ed4();
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + 8) == 0) {
          puStack_5c = (undefined4 *)0x80004003;
          piStack_60 = (int *)0x61755b;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)(unaff_EBP + -0x24);
        piStack_60 = (int *)0x617567;
        FUN_004113e5();
        puStack_5c = (undefined4 *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_60 = (int *)0x617579;
        FUN_00424e27();
        piStack_60 = (int *)0x617580;
        uVar2 = FUN_004113e5();
        *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
        puStack_5c = (undefined4 *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_60 = (int *)0x61758f;
        FUN_00424df4();
        piStack_60 = (int *)0x617596;
        piStack_60 = (int *)FUN_00404a94();
        puStack_64 = (undefined4 *)0x61759f;
        FUN_00424df4();
        puStack_64 = (undefined4 *)0x6175a6;
        FUN_0061766e();
        puStack_5c = (undefined4 *)0x6175ae;
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_5c = (undefined4 *)0x6175ba;
        FUN_004125d9();
        puStack_5c = &DAT_00980690;
        piStack_60 = (int *)0x6175c7;
        FUN_00424aee();
        puStack_5c = (undefined4 *)0x3;
        piStack_60 = (int *)(*(int *)(unaff_EBP + -0x18) + 500);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_64 = (undefined4 *)0x6175de;
        FUN_004295f1();
        puStack_5c = (undefined4 *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_60 = (int *)0x6175ee;
        FUN_00424e27();
        piStack_60 = (int *)0x6175f5;
        FUN_004113e5();
        puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
        piStack_60 = (int *)(unaff_EBP + -0x58);
        puStack_64 = (undefined4 *)0x0;
        piStack_68 = (int *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00424df4();
        FUN_00424f2f();
        puStack_5c = (undefined4 *)0x617619;
        FUN_004125d9();
        puStack_5c = (undefined4 *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        piStack_60 = (int *)0x617626;
        puStack_5c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_5c < 0) {
          piStack_60 = (int *)0x617631;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_60 = (int *)0x61763e;
        puStack_5c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_5c < 0) {
          piStack_60 = (int *)0x617649;
          FUN_00878dfb();
        }
        puStack_5c = (undefined4 *)0x617651;
        FUN_00412600();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      *piVar1 = iVar4;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


