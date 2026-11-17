/* FUN_0081f819 - 0x0081f819 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0081f819(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int unaff_EBP;
  uint uVar7;
  int *piVar8;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  for (uVar7 = 0;
      (*(int *)(extraout_ECX + 0x584) != 0 &&
      (uVar7 < *(uint *)(*(int *)(extraout_ECX + 0x584) + -4))); uVar7 = uVar7 + 1) {
    piStack_138 = (int *)0x81f854;
    FUN_00820292();
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x44;
  }
  *(undefined4 *)(extraout_ECX + 0x574) = 0xffffffff;
  piStack_138 = (int *)0x81f869;
  FUN_00820dab();
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  *(int ***)(unaff_EBP + -0x44) = &piStack_140;
  FUN_00679e4e(&piStack_140,0x8d8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = unaff_EBP + -0x94;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_140 = (int *)0x81f8aa;
  iVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x80) = iVar1;
  if (iVar1 != 0) {
    piStack_138 = (int *)(unaff_EBP + -0x80);
    piStack_13c = (int *)0x81f8c1;
    piStack_138 = (int *)FUN_00404b30();
    if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
      piStack_13c = (int *)0x81f8d2;
      FUN_00878dfb();
    }
  }
  piStack_138 = (int *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_13c = (int *)0x81f8e2;
  piStack_138 = (int *)FUN_00402bc3();
  if ((int)piStack_138 < 0) {
    piStack_13c = (int *)0x81f8ed;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_138 = (int *)0x81f8fd;
    iVar1 = FUN_0040cf4d();
    if (iVar1 != 0) {
      piStack_140 = (int *)&piStack_138;
      *(int ***)(unaff_EBP + -0x44) = &piStack_138;
      piStack_13c = (int *)0x3b2;
      FUN_00679e4e();
      piStack_13c = (int *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_140 = (int *)0x81f92b;
      FUN_004115d9();
      piStack_140 = (int *)0x81f932;
      FUN_00404e7f();
      piStack_13c = (int *)(unaff_EBP + -0x124);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_140 = (int *)0x81f944;
      FUN_0040263d();
      piStack_140 = (int *)0x81f94b;
      piStack_138 = (int *)FUN_004048a4();
      piStack_13c = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_140 = (int *)0x81f959;
      piStack_138 = (int *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_13c = (int *)0x81f968;
      FUN_00416f14();
      piStack_138 = (int *)0x81f970;
      FUN_004027b3();
      piStack_138 = (int *)(unaff_EBP + -0x124);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_13c = (int *)0x81f980;
      piStack_138 = (int *)FUN_00402bc3();
      if ((int)piStack_138 < 0) {
        piStack_13c = (int *)0x81f98b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_138 = (int *)0x81f997;
      FUN_004027eb();
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_138 = (int *)0x80004003;
        piStack_13c = (int *)0x81f9a7;
        FUN_00878dfb();
      }
      piStack_138 = (int *)0x81f9af;
      piStack_13c = (int *)FUN_0040cf4d();
      piStack_138 = (int *)(unaff_EBP + -0x2d);
      piStack_140 = (int *)0x81f9bb;
      FUN_00820de7();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      iVar1 = extraout_ECX;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81f9d4;
          FUN_00878dfb();
        }
        piStack_138 = (int *)0x81f9dc;
        uVar7 = FUN_0040cf4d();
        if (uVar7 <= *(uint *)(unaff_EBP + -0x24)) {
          piStack_138 = *(int **)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piStack_138 != (int *)0x0) {
            piStack_13c = (int *)0x82026b;
            (**(code **)(*piStack_138 + 8))();
          }
          piStack_138 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (piStack_138 != (int *)0x0) {
            piStack_13c = (int *)0x82027c;
            (**(code **)(*piStack_138 + 8))();
          }
          piStack_138 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (piStack_138 != (int *)0x0) {
            piStack_13c = (int *)0x82028d;
            (**(code **)(*piStack_138 + 8))();
          }
          piStack_138 = (int *)0x1;
          goto LAB_00820243;
        }
        piStack_138 = (int *)0x81f9ed;
        FUN_0087a1b0();
        piStack_138 = (int *)0x0;
        piStack_13c = (int *)0x0;
        piStack_140 = (int *)&stack0xfffffecc;
        uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x24));
        *(int ***)(unaff_EBP + -0x10) = &piStack_140;
        FUN_004033a1(uVar2);
        iVar3 = unaff_EBP + -0xc4;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d(iVar3);
        FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        piStack_140 = (int *)0x81fa2b;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x5c) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar3 != 0) {
          piStack_138 = (int *)(unaff_EBP + -0x5c);
          piStack_13c = (int *)0x81fa41;
          piStack_138 = (int *)FUN_00404b30();
          if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
            piStack_13c = (int *)0x81fa52;
            FUN_00878dfb();
          }
        }
        piStack_138 = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_13c = (int *)0x81fa62;
        piStack_138 = (int *)FUN_00402bc3();
        if ((int)piStack_138 < 0) {
          piStack_13c = (int *)0x81fa6d;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_00820221;
        piVar8 = (int *)(*(int *)(unaff_EBP + -0x48) + *(int *)(iVar1 + 0x584));
        piStack_138 = (int *)0x81fa8c;
        FUN_00820292();
        piStack_140 = (int *)&piStack_138;
        *(int ***)(unaff_EBP + -0x10) = &piStack_138;
        piStack_13c = (int *)0xf80;
        FUN_00679e4e();
        piStack_13c = (int *)(unaff_EBP + -0x104);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_140 = (int *)0x81fab2;
        FUN_0040263d();
        piStack_140 = (int *)0x81fab9;
        piStack_138 = (int *)FUN_004048a4();
        piStack_13c = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        piStack_140 = (int *)0x81faca;
        piStack_138 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_13c = (int *)0x81fad9;
        FUN_00416f14();
        piStack_138 = (int *)0x81fae4;
        FUN_004027b3();
        piStack_138 = (int *)(unaff_EBP + -0x104);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_13c = (int *)0x81faf4;
        piStack_138 = (int *)FUN_00402bc3();
        if ((int)piStack_138 < 0) {
          piStack_13c = (int *)0x81faff;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81fb0f;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81fb1f;
          FUN_00878dfb();
        }
        piStack_138 = (int *)0x81fb2a;
        uVar2 = FUN_00404a94();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
        piStack_138 = (int *)0x81fb36;
        iVar1 = FUN_00404a94();
        *piVar8 = *(int *)(unaff_EBP + -0x10) + iVar1;
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81fb4d;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81fb5d;
          FUN_00878dfb();
        }
        piStack_138 = (int *)0x81fb68;
        uVar2 = FUN_00404abb();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
        piStack_138 = (int *)0x81fb74;
        iVar1 = FUN_00404abb();
        piStack_13c = (int *)(*(int *)(unaff_EBP + -0x10) + iVar1);
        piStack_138 = (int *)0x0;
        *(int ***)(unaff_EBP + -0x10) = &piStack_13c;
        piStack_140 = (int *)0x5ed;
        piVar8[1] = (int)piStack_13c;
        FUN_00679e4e(&piStack_13c);
        piStack_140 = (int *)(unaff_EBP + -0xe4);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_0040263d();
        piStack_13c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        piStack_140 = (int *)0x81fbb5;
        iVar1 = FUN_00412550();
        piVar8[2] = iVar1;
        piStack_140 = (int *)(unaff_EBP + -0xe4);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_138 = (int *)FUN_00402bc3();
        if ((int)piStack_138 < 0) {
          piStack_13c = (int *)0x81fbd5;
          FUN_00878dfb();
        }
        piStack_138 = (int *)&DAT_0097812c;
        *(int ***)(unaff_EBP + -0x10) = &piStack_13c;
        piStack_140 = (int *)0x5aa;
        FUN_00679e4e(&piStack_13c);
        piStack_140 = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_0040263d();
        piStack_13c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        piStack_140 = (int *)0x81fc12;
        piStack_13c = (int *)FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        piStack_138 = (int *)0xffffffff;
        piStack_140 = (int *)0x81fc23;
        FUN_00454081();
        piStack_138 = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        piStack_13c = (int *)0x81fc33;
        piVar4 = (int *)FUN_00402bc3();
        piStack_13c = piStack_138;
        if ((int)piVar4 < 0) {
          piStack_13c = (int *)0x81fc3e;
          piStack_138 = piVar4;
          FUN_00878dfb();
          piStack_13c = extraout_ECX_00;
        }
        piStack_138 = (int *)&DAT_0097812c;
        *(int ***)(unaff_EBP + -0x10) = &piStack_13c;
        piStack_140 = (int *)0x5ac;
        FUN_00679e4e(&piStack_13c);
        piStack_140 = (int *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_0040263d();
        piStack_13c = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        piStack_140 = (int *)0x81fc76;
        piStack_13c = (int *)FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        piStack_138 = (int *)0xffffffff;
        piStack_140 = (int *)0x81fc87;
        FUN_00454081();
        piStack_138 = (int *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        piStack_13c = (int *)0x81fc97;
        piVar4 = (int *)FUN_00402bc3();
        if ((int)piVar4 < 0) {
          piStack_13c = (int *)0x81fca2;
          piStack_138 = piVar4;
          FUN_00878dfb();
          piStack_138 = extraout_ECX_01;
        }
        piStack_140 = (int *)&piStack_138;
        *(int ***)(unaff_EBP + -0x10) = &piStack_138;
        piStack_13c = (int *)0x70e;
        FUN_00679e4e();
        piStack_13c = (int *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        piStack_140 = (int *)0x81fcc8;
        FUN_0040263d();
        piStack_140 = (int *)0x81fccf;
        piStack_138 = (int *)FUN_004048a4();
        piStack_13c = (int *)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        piStack_140 = (int *)0x81fcdd;
        piStack_138 = (int *)FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        piStack_13c = (int *)0x81fcec;
        piStack_138 = (int *)FUN_0041a485();
        if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
          piStack_13c = (int *)0x81fcff;
          FUN_00878dfb();
        }
        piStack_138 = (int *)0x81fd07;
        FUN_004027b3();
        piStack_138 = (int *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        piStack_13c = (int *)0x81fd17;
        piVar5 = (int *)FUN_00402bc3();
        piVar4 = piStack_138;
        if ((int)piVar5 < 0) {
          piStack_13c = (int *)0x81fd22;
          piStack_138 = piVar5;
          FUN_00878dfb();
          piVar4 = extraout_ECX_02;
        }
        piStack_138 = (int *)0x0;
        piStack_13c = (int *)0x0;
        *(int ***)(unaff_EBP + -0x10) = &piStack_140;
        piStack_140 = piVar4;
        FUN_00679e4e(&piStack_140,0x8d9);
        iVar1 = unaff_EBP + -0xf4;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        piStack_140 = (int *)0x81fd5c;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x68) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (iVar1 != 0) {
          piStack_138 = (int *)(unaff_EBP + -0x68);
          piStack_13c = (int *)0x81fd72;
          piStack_138 = (int *)FUN_00404b30();
          if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
            piStack_13c = (int *)0x81fd83;
            FUN_00878dfb();
          }
        }
        piStack_138 = (int *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        piStack_13c = (int *)0x81fd93;
        piStack_138 = (int *)FUN_00402bc3();
        if ((int)piStack_138 < 0) {
          piStack_13c = (int *)0x81fd9e;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x1c) == 0) break;
        piStack_138 = (int *)0x81fdae;
        iVar1 = FUN_0040cf4d();
        if (iVar1 == 0) break;
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_138 = (int *)0x80004003;
          piStack_13c = (int *)0x81fdc5;
          FUN_00878dfb();
        }
        piStack_138 = (int *)0x81fdcd;
        piStack_13c = (int *)FUN_0040cf4d();
        piStack_138 = (int *)(unaff_EBP + -0x2d);
        piStack_140 = (int *)0x81fdda;
        FUN_004b8dfa();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            piStack_138 = (int *)0x80004003;
            piStack_13c = (int *)0x81fdec;
            FUN_00878dfb();
          }
          piStack_138 = (int *)0x81fdf4;
          uVar7 = FUN_0040cf4d();
          if (uVar7 <= *(uint *)(unaff_EBP + -0x20)) break;
          piStack_138 = (int *)0x81fe05;
          FUN_0087a1b0();
          piStack_138 = (int *)0x0;
          piStack_140 = *(int **)(unaff_EBP + -0x20);
          piStack_13c = (int *)&stack0xfffffecc;
          piStack_140 = (int *)FUN_00412335();
          *(int ***)(unaff_EBP + -0x10) = &piStack_13c;
          FUN_004033a1();
          piStack_140 = (int *)(unaff_EBP + -0x114);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          FUN_0040263d();
          piStack_13c = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          piStack_140 = (int *)0x81fe41;
          uVar2 = FUN_00412550();
          piStack_138 = *(int **)(unaff_EBP + -0x20);
          piStack_13c = (int *)0x81fe50;
          puVar6 = (undefined4 *)FUN_004a312f();
          *puVar6 = uVar2;
          piStack_138 = (int *)(unaff_EBP + -0x114);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_13c = (int *)0x81fe62;
          piStack_138 = (int *)FUN_00402bc3();
          if ((int)piStack_138 < 0) {
            piStack_13c = (int *)0x81fe6f;
            FUN_00878dfb();
          }
          piStack_138 = *(int **)(*(int *)(unaff_EBP + -0x3c) + 0x58c);
          if ((piStack_138 != (int *)0x0) && (piVar8[8] == 0)) {
            piStack_13c = (int *)0x81fe87;
            iVar1 = FUN_005f3a71();
            if (iVar1 != 0) {
              *(undefined4 *)(unaff_EBP + -0x78) =
                   *(undefined4 *)(piVar8[0xb] + *(int *)(unaff_EBP + -0x20) * 4);
              piStack_138 = (int *)0x0;
              piStack_13c = (int *)(unaff_EBP + -0x78);
              piStack_140 = (int *)0x81fea8;
              iVar1 = FUN_0055a499();
              if (iVar1 != 0) {
                piVar8[8] = 1;
              }
            }
          }
          if (*(int *)(unaff_EBP + -0x20) == 0) {
            piStack_138 = *(int **)piVar8[0xb];
            piVar4 = piVar8 + 0xb;
            piStack_13c = (int *)(unaff_EBP + -0x40);
            piStack_140 = (int *)0x81fecd;
            FUN_004e61ea();
            piVar5 = piStack_138;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (*(int *)(unaff_EBP + -0x40) == 0) {
              piStack_138 = *(int **)(unaff_EBP + -0x1c);
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x820178;
                (**(code **)(*piStack_138 + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              piStack_138 = (int *)0x820184;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              piStack_138 = (int *)0x820190;
              FUN_00414ebb();
              piStack_138 = *(int **)(unaff_EBP + -0x2c);
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x8201a1;
                (**(code **)(*piStack_138 + 8))();
              }
              piStack_138 = *(int **)(unaff_EBP + -0x14);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x8201b2;
                (**(code **)(*piStack_138 + 8))();
              }
              piStack_138 = *(int **)(unaff_EBP + -0x28);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x8201c3;
                (**(code **)(*piStack_138 + 8))();
              }
              piStack_138 = *(int **)(unaff_EBP + -0x18);
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x8201d4;
                (**(code **)(*piStack_138 + 8))();
              }
              piStack_138 = *(int **)(unaff_EBP + 8);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (piStack_138 != (int *)0x0) {
                piStack_13c = (int *)0x8201e5;
                (**(code **)(*piStack_138 + 8))();
              }
              goto LAB_00820241;
            }
            piStack_138 = (int *)0x0;
            piStack_13c = (int *)0x0;
            piStack_140 = piVar5;
            *(int ***)(unaff_EBP + -0x10) = &piStack_140;
            FUN_00679e4e(&piStack_140,0x3b4);
            iVar1 = unaff_EBP + -0x134;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            FUN_0040263d(iVar1);
            FUN_004048a4(iVar1);
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            piStack_140 = (int *)0x81ff19;
            iVar1 = FUN_004032b4();
            *(undefined4 *)(unaff_EBP + -0x4c) = 0;
            *(int *)(unaff_EBP + -0x70) = iVar1;
            if (iVar1 != 0) {
              piStack_138 = (int *)(unaff_EBP + -0x70);
              piStack_13c = (int *)0x81ff30;
              piStack_138 = (int *)FUN_00404b30();
              if (((int)piStack_138 < 0) && (piStack_138 != (int *)0x80004002)) {
                piStack_13c = (int *)0x81ff41;
                FUN_00878dfb();
              }
            }
            piStack_138 = (int *)(unaff_EBP + -0x134);
            *(undefined1 *)(unaff_EBP + -4) = 0x2f;
            piStack_13c = (int *)0x81ff51;
            piStack_138 = (int *)FUN_00402bc3();
            if ((int)piStack_138 < 0) {
              piStack_13c = (int *)0x81ff5c;
              FUN_00878dfb();
            }
            if ((*(char **)(unaff_EBP + -0x34) == (char *)0x0) ||
               (**(char **)(unaff_EBP + -0x34) == '\0')) {
              piStack_138 = (int *)0x6c6;
              piStack_13c = (int *)(unaff_EBP + -100);
              piStack_140 = (int *)0x81ff7c;
              puVar6 = (undefined4 *)FUN_00679d22();
              piStack_138 = (int *)*puVar6;
              piStack_13c = *(int **)*piVar4;
              piStack_140 = (int *)(unaff_EBP + -0x60);
              *(undefined1 *)(unaff_EBP + -4) = 0x30;
              piStack_138 = (int *)FUN_00550c58();
              *(undefined1 *)(unaff_EBP + -4) = 0x31;
              piStack_13c = (int *)0x81ffa2;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x30;
              piStack_138 = (int *)0x81ffae;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x2f;
              piStack_138 = (int *)0x81ffba;
              FUN_00414ebb();
              piStack_138 = (int *)0x6c7;
              piStack_13c = (int *)(unaff_EBP + -0x74);
              piStack_140 = (int *)0x81ffca;
              puVar6 = (undefined4 *)FUN_00679d22();
              piStack_138 = (int *)*puVar6;
              piStack_13c = *(int **)*piVar4;
              piStack_140 = (int *)(unaff_EBP + -0x6c);
              *(undefined1 *)(unaff_EBP + -4) = 0x32;
              piStack_138 = (int *)FUN_00550c58();
              *(undefined1 *)(unaff_EBP + -4) = 0x33;
              piStack_13c = (int *)0x81fff0;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x32;
              piStack_138 = (int *)0x81fffc;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x2f;
              piStack_138 = (int *)0x820008;
              FUN_00414ebb();
              piStack_138 = (int *)0x8da;
              piStack_13c = (int *)(unaff_EBP + -0x44);
              piStack_140 = (int *)0x820018;
              puVar6 = (undefined4 *)FUN_00679d22();
              piStack_138 = (int *)*puVar6;
              piStack_13c = *(int **)*piVar4;
              piStack_140 = (int *)(unaff_EBP + -0x54);
              *(undefined1 *)(unaff_EBP + -4) = 0x34;
              piStack_138 = (int *)FUN_00550c58();
              *(undefined1 *)(unaff_EBP + -4) = 0x35;
              piStack_13c = (int *)0x82003e;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x34;
              piStack_138 = (int *)0x82004a;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x2f;
              piStack_138 = (int *)0x820056;
              FUN_00414ebb();
            }
            else {
              piStack_138 = (int *)(unaff_EBP + -0x34);
              piStack_13c = (int *)0x820064;
              FUN_00414f8b();
              piStack_138 = (int *)(unaff_EBP + -0x38);
              piStack_13c = (int *)0x820070;
              FUN_00414f8b();
            }
            piStack_138 = *(int **)(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (piStack_138 != (int *)0x0) {
              piStack_13c = (int *)0x820081;
              (**(code **)(*piStack_138 + 8))();
            }
            piStack_138 = *(int **)(unaff_EBP + -0x40);
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            if (piStack_138 != (int *)0x0) {
              piStack_13c = (int *)0x820092;
              (**(code **)(*piStack_138 + 8))();
            }
          }
          uVar7 = 0;
          while( true ) {
            iVar1 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c);
            *(uint *)(unaff_EBP + -0x10) = uVar7;
            if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar7)) break;
            if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c) + uVar7 * 0xc) ==
                *(int *)(piVar8[0xb] + *(int *)(unaff_EBP + -0x20) * 4)) {
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                piStack_138 = (int *)0x8200d1;
                puVar6 = (undefined4 *)FUN_00518b2e();
                *puVar6 = *(undefined4 *)(unaff_EBP + -0x10);
              }
              iVar1 = 1;
              if (piVar8[6] != 1) {
                if (*(int *)(unaff_EBP + -0x10) != 0) {
                  iVar1 = (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0x56c) + 8 + uVar7 * 0xc)
                          != 0) + 2;
                }
                piVar8[6] = iVar1;
              }
            }
            uVar7 = *(int *)(unaff_EBP + -0x10) + 1;
          }
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        }
        piStack_138 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piStack_138 != (int *)0x0) {
          piStack_13c = (int *)0x82011e;
          (**(code **)(*piStack_138 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        piStack_138 = (int *)0x82012a;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_138 = (int *)0x820136;
        FUN_00414ebb();
        piStack_138 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (piStack_138 != (int *)0x0) {
          piStack_13c = (int *)0x820147;
          (**(code **)(*piStack_138 + 8))();
        }
        piStack_138 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (piStack_138 != (int *)0x0) {
          piStack_13c = (int *)0x820158;
          (**(code **)(*piStack_138 + 8))();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 0x44;
        iVar1 = *(int *)(unaff_EBP + -0x3c);
      }
      piStack_138 = (int *)0x8201ef;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        piStack_138 = (int *)(*(int *)(unaff_EBP + -0x38) + -0xc);
        piStack_13c = (int *)0x820203;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        piStack_138 = (int *)(*(int *)(unaff_EBP + -0x34) + -0xc);
        piStack_13c = (int *)0x820218;
        FUN_00434e38();
      }
      piStack_138 = (int *)0x820221;
      FUN_004125d9();
LAB_00820221:
      piStack_138 = (int *)0x820229;
      FUN_004027eb();
      piStack_138 = (int *)0x820231;
      FUN_004125d9();
    }
  }
  piStack_138 = (int *)0x820239;
  FUN_004027eb();
  piStack_138 = (int *)0x820241;
  FUN_004027eb();
LAB_00820241:
  piStack_138 = (int *)0x0;
LAB_00820243:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piStack_138;
}


