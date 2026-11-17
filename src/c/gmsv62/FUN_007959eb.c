/* FUN_007959eb - 0x007959eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007959eb(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int iVar7;
  int unaff_EBP;
  int *piStack_64;
  undefined4 *puStack_60;
  int *piStack_5c;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  iVar7 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (iVar7 == 0) {
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_58 = (undefined4 *)0x3;
      piStack_5c = *(int **)(extraout_ECX + 0x1748);
      piStack_64 = (int *)(unaff_EBP + -0x14);
      puStack_60 = (undefined4 *)0x0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_005d0ab2();
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      iVar7 = 0;
      do {
        if (*(int *)(iVar7 + 4 + *(int *)(extraout_ECX + 0x1744)) == 0) break;
        puStack_58 = *(undefined4 **)(unaff_EBP + 8);
        piStack_5c = *(int **)(*(int *)(unaff_EBP + 0xc) + *(int *)(unaff_EBP + -0x14));
        puStack_60 = (undefined4 *)0x795a52;
        FUN_00616ff4();
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 4;
        iVar7 = iVar7 + 8;
      } while (iVar7 < 0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_58 = (undefined4 *)0x795a6a;
      FUN_00445a30();
    }
    puStack_58 = (undefined4 *)0x1;
    piStack_5c = (int *)0x795a73;
    piVar1 = (int *)FUN_0079b949();
    if (piVar1[5] != 0) {
      puStack_58 = (undefined4 *)0x795a83;
      uVar2 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      if (((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) == 4) && (*(int *)(unaff_EBP + 8) == 0)) {
        if ((piVar1[2] != 0) && (0x5dc < *(int *)(unaff_EBP + -0x14) - piVar1[2])) {
          iVar7 = *piVar1;
          *(int *)(unaff_EBP + 0xc) = iVar7;
          iVar6 = extraout_ECX;
          if (-1 < iVar7) {
            *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            puStack_58 = (undefined4 *)0x1;
            *(undefined4 *)(unaff_EBP + -4) = 1;
            piStack_5c = (int *)0x795adf;
            FUN_0079ba1a();
            puStack_58 = (undefined4 *)0xb5a;
            piStack_5c = (int *)(unaff_EBP + -0x20);
            puStack_60 = (undefined4 *)0x795af2;
            puVar3 = (undefined4 *)FUN_00679d86();
            piStack_5c = (int *)*puVar3;
            puStack_58 = *(undefined4 **)(unaff_EBP + 0xc);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            puStack_60 = (undefined4 *)(unaff_EBP + -0x18);
            piStack_64 = (int *)0x795b05;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            if (*(int *)(unaff_EBP + -0x20) != 0) {
              puStack_58 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
              piStack_5c = (int *)0x795b1c;
              FUN_00403384();
            }
            puStack_58 = (undefined4 *)(unaff_EBP + -0x1c);
            piStack_5c = piVar1 + 3;
            puStack_60 = (undefined4 *)0x795b30;
            FUN_00424e27();
            puStack_60 = (undefined4 *)0x795b37;
            puStack_60 = (undefined4 *)FUN_0043210d();
            piStack_64 = (int *)0x795b40;
            uVar2 = FUN_00411641();
            *(int ***)(unaff_EBP + -0x20) = &piStack_64;
            piStack_64 = extraout_ECX_00;
            FUN_004033a1(uVar2);
            iVar7 = FUN_0079be1e();
            if (iVar7 != 0) {
              piVar1[3] = 1;
              if (piVar1[5] == 0) {
                puStack_58 = (undefined4 *)0x80004003;
                piStack_5c = (int *)0x795b71;
                FUN_00878dfb();
              }
              piVar4 = (int *)piVar1[5];
              puStack_58 = (undefined4 *)0xffffffff;
              puStack_60 = (undefined4 *)0x795b7f;
              piStack_5c = piVar4;
              iVar7 = (**(code **)(*piVar4 + 0xb4))();
              if (iVar7 < 0) {
                puStack_60 = (undefined4 *)&DAT_00963df8;
                piStack_64 = piVar4;
                FUN_00878e09(iVar7);
              }
              puStack_60 = (undefined4 *)0x3;
              piStack_64 = *(int **)(unaff_EBP + -0x1c);
              *piVar1 = *(int *)(unaff_EBP + 0xc);
              FUN_004031b7();
              puStack_60 = &DAT_00980690;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              piStack_64 = (int *)0x795bb2;
              FUN_00403191();
              iVar7 = piVar1[5];
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (iVar7 == 0) {
                puStack_60 = (undefined4 *)0x80004003;
                piStack_64 = (int *)0x795bc5;
                FUN_00878dfb();
              }
              piVar4 = (int *)piVar1[5];
              iVar7 = *piVar4;
              piStack_64 = *(int **)(unaff_EBP + -0x3c);
              puStack_60 = *(undefined4 **)(unaff_EBP + -0x38);
              *(int **)(unaff_EBP + 0xc) = piVar4;
              iVar7 = (**(code **)(iVar7 + 0x110))
                                (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x34),
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x2c),
                                 *(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x44),
                                 *(undefined4 *)(unaff_EBP + -0x40));
              if (iVar7 < 0) {
                FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963df8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar7 = FUN_00402bc3(unaff_EBP + -0x34);
              if (iVar7 < 0) {
                FUN_00878dfb(iVar7);
              }
              *(undefined1 *)(unaff_EBP + -4) = 1;
              iVar7 = FUN_00402bc3(unaff_EBP + -0x44);
              if (iVar7 < 0) {
                FUN_00878dfb(iVar7);
              }
              if (piVar1[5] == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_004113e5(unaff_EBP + 0xc);
              iVar7 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              if (iVar7 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar7 = (**(code **)(*piVar4 + 0x40))(piVar4,0,0);
              if (iVar7 < 0) {
                puStack_58 = (undefined4 *)&DAT_00963d08;
                piStack_64 = (int *)0x795c7b;
                puStack_60 = (undefined4 *)iVar7;
                piStack_5c = piVar4;
                FUN_00878e09();
              }
              puStack_58 = (undefined4 *)0x795c83;
              FUN_004125d9();
              iVar6 = *(int *)(unaff_EBP + -0x24);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              puStack_58 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
              piStack_5c = (int *)0x795c9c;
              FUN_00403384();
            }
          }
          *(int *)(unaff_EBP + 8) = piVar1[5];
          puStack_58 = (undefined4 *)0x795cab;
          FUN_00424ed4();
          puStack_58 = (undefined4 *)0x3;
          piStack_5c = (int *)0x0;
          *(undefined4 *)(unaff_EBP + -4) = 6;
          puStack_60 = (undefined4 *)0x795cbd;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (*(int *)(unaff_EBP + 8) == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795cd0;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
          piStack_5c = (int *)(unaff_EBP + -0x10);
          puStack_60 = (undefined4 *)0x795ce0;
          FUN_00425067();
          puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_5c = (int *)0x795ced;
          puStack_58 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_58 < 0) {
            piStack_5c = (int *)0x795cf8;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)(unaff_EBP + -0x24);
          piStack_5c = (int *)0x795d04;
          piVar4 = (int *)FUN_0043f93c();
          *(int **)(unaff_EBP + 0xc) = piVar4;
          iVar7 = *piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar7 == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795d19;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)0x795d23;
          uVar2 = FUN_0043210d();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_58 = (undefined4 *)0x795d32;
          FUN_00412600();
          piStack_5c = *(int **)(unaff_EBP + 8);
          piVar1[2] = 0;
          if (piStack_5c == (int *)0x0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795d47;
            FUN_00878dfb();
            piStack_5c = *(int **)(unaff_EBP + 8);
          }
          puStack_58 = *(undefined4 **)(unaff_EBP + 0xc);
          iVar7 = *piStack_5c;
          *(int **)(unaff_EBP + -0x24) = piStack_5c;
          puStack_60 = (undefined4 *)0x795d59;
          iVar7 = (**(code **)(iVar7 + 0xd8))();
          if (iVar7 < 0) {
            puStack_60 = (undefined4 *)&DAT_00963df8;
            piStack_64 = *(int **)(unaff_EBP + -0x24);
            FUN_00878e09(iVar7);
          }
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_60 = (undefined4 *)0x80004003;
            piStack_64 = (int *)0x795d76;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_60 = (undefined4 *)0x80004003;
            piStack_64 = (int *)0x795d86;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + 8) == 0) {
            puStack_60 = (undefined4 *)0x80004003;
            piStack_64 = (int *)0x795d97;
            FUN_00878dfb();
          }
          piVar1 = *(int **)(unaff_EBP + 8);
          puStack_60 = (undefined4 *)0x795da5;
          iVar7 = (**(code **)(*(int *)(iVar6 + 4) + 0x10))();
          puStack_60 = (undefined4 *)0x795daf;
          iVar5 = FUN_0040eed0();
          iVar7 = *(int *)(iVar7 + 4);
          puStack_60 = (undefined4 *)0x795dbb;
          piVar4 = (int *)(**(code **)(*(int *)(iVar6 + 4) + 0x10))();
          puStack_60 = (undefined4 *)0x795dc5;
          iVar6 = FUN_0040eea9();
          piStack_64 = (int *)(*piVar4 - iVar6);
          puStack_60 = (undefined4 *)(iVar7 - iVar5);
          iVar7 = (**(code **)(*piVar1 + 0x40))(piVar1);
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar1,&DAT_00963d08);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_004031b7(*(int *)(unaff_EBP + -0x14) + 500,3);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar1 = (int *)FUN_004113e5(unaff_EBP + 0xc);
          iVar7 = *piVar1;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar1 = (int *)*piVar1;
          iVar7 = (**(code **)(*piVar1 + 0x90))
                            (piVar1,0xff,0,*(undefined4 *)(unaff_EBP + -0x34),
                             *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x54),
                             *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                             *(undefined4 *)(unaff_EBP + -0x48));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar1,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x34);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          FUN_004125e6();
          FUN_00412600();
        }
      }
      else {
        if (piVar1[2] == 0) {
          *(int *)(unaff_EBP + 0xc) = piVar1[5];
          puStack_58 = (undefined4 *)0x795ed8;
          FUN_00424ed4();
          *(undefined4 *)(unaff_EBP + -4) = 0xe;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795eee;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)(unaff_EBP + -0x20);
          piStack_5c = (int *)0x795efa;
          piVar4 = (int *)FUN_004113e5();
          iVar7 = *piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (iVar7 == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795f0e;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 8) = *piVar4;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795f22;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)(unaff_EBP + -0x24);
          piStack_5c = (int *)0x795f2e;
          piVar4 = (int *)FUN_004113e5();
          iVar7 = *piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (iVar7 == 0) {
            puStack_58 = (undefined4 *)0x80004003;
            piStack_5c = (int *)0x795f42;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)0x0;
          piStack_5c = (int *)0x795f4d;
          piStack_5c = (int *)FUN_00404a94();
          puStack_60 = (undefined4 *)0x795f55;
          FUN_0061766e();
          puStack_58 = (undefined4 *)0x795f5d;
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_58 = (undefined4 *)0x795f69;
          FUN_004125d9();
          puStack_58 = &DAT_00980690;
          piStack_5c = (int *)0x795f76;
          FUN_00424aee();
          puStack_58 = (undefined4 *)0x3;
          piStack_5c = (int *)(*(int *)(unaff_EBP + -0x14) + 500);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          puStack_60 = (undefined4 *)0x795f8d;
          FUN_004295f1();
          puStack_58 = (undefined4 *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_5c = (int *)0x795f9d;
          FUN_00424e27();
          piStack_5c = (int *)0x795fa4;
          FUN_004113e5();
          puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
          piStack_5c = (int *)(unaff_EBP + -0x54);
          puStack_60 = (undefined4 *)0x0;
          piStack_64 = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00424df4();
          FUN_00424f2f();
          puStack_58 = (undefined4 *)0x795fc8;
          FUN_004125d9();
          puStack_58 = (undefined4 *)(unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_5c = (int *)0x795fd5;
          puStack_58 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_58 < 0) {
            piStack_5c = (int *)0x795fe0;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_5c = (int *)0x795fed;
          puStack_58 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_58 < 0) {
            piStack_5c = (int *)0x795ff8;
            FUN_00878dfb();
          }
          puStack_58 = (undefined4 *)0x796000;
          FUN_00412600();
        }
        iVar7 = *(int *)(unaff_EBP + -0x14);
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        piVar1[2] = iVar7;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


