/* FUN_005539ff - 0x005539ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005539ff(void)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *extraout_ECX_07;
  int unaff_EBP;
  bool bVar7;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  int iStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar2 = iVar4 / 1000000;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff98;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 1) {
    puStack_70 = (undefined *)(unaff_EBP + -0x1c);
    iStack_74 = 0x553a43;
    piStack_6c = (int *)iVar4;
    FUN_0054e2c6();
    psVar1 = *(short **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      piStack_6c = &DAT_00980690;
      puStack_70 = (undefined *)0x553aa5;
      FUN_00403191();
      piStack_6c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_70 = (undefined *)0x553ab2;
      FUN_00403191();
      piStack_6c = (int *)0x0;
      puStack_70 = (undefined *)0x0;
      iStack_74 = unaff_EBP + -0x48;
      puStack_78 = (undefined1 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_7c = (undefined1 *)0x553aca;
      uVar3 = FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_7c;
      puStack_7c = extraout_ECX;
      FUN_004033a1(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00404a02(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_74 = 0x553b00;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
      piStack_6c = (int *)(unaff_EBP + -0x20);
      puStack_70 = (undefined *)0x553b0f;
      piStack_6c = (int *)FUN_00404b30();
      if (((int)piStack_6c < 0) && (piStack_6c != (int *)0x80004002)) {
        puStack_70 = (undefined *)0x553b20;
        FUN_00878dfb();
      }
      piStack_6c = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_70 = (undefined *)0x553b2d;
      piStack_6c = (int *)FUN_00402bc3();
      if ((int)piStack_6c < 0) {
        puStack_70 = (undefined *)0x553b38;
        FUN_00878dfb();
      }
      piStack_6c = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_70 = (undefined *)0x553b45;
      piStack_6c = (int *)FUN_00402bc3();
      if ((int)piStack_6c < 0) {
        puStack_70 = (undefined *)0x553b50;
        FUN_00878dfb();
      }
      piStack_6c = (int *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puStack_70 = (undefined *)0x553b5d;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_70 = (undefined *)0x553b68;
        piStack_6c = (int *)iVar4;
        FUN_00878dfb();
        piStack_6c = (int *)extraout_ECX_00;
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piVar5 = piStack_6c;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_6c = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        puStack_70 = (undefined *)0x553b80;
        FUN_00403384();
        piVar5 = piStack_6c;
      }
LAB_00553e15:
      if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_00553e1b;
      piStack_6c = (int *)0x0;
      puStack_70 = (undefined *)0x0;
      puStack_7c = (undefined1 *)&iStack_74;
      *(int **)(unaff_EBP + -0x28) = &iStack_74;
      puStack_78 = (undefined1 *)0x3b4;
      iStack_74 = (int)piVar5;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_78 = (undefined1 *)0x553e5d;
      FUN_0040263d();
      puStack_78 = (undefined1 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_7c = (undefined1 *)0x553e6c;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_74 = 0x553e77;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar4 != 0) {
        piStack_6c = (int *)(unaff_EBP + -0x24);
        puStack_70 = (undefined *)0x553e8d;
        piStack_6c = (int *)FUN_00404b30();
        if (((int)piStack_6c < 0) && (piStack_6c != (int *)0x80004002)) {
          puStack_70 = (undefined *)0x553e9e;
          FUN_00878dfb();
        }
      }
      piStack_6c = (int *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_70 = (undefined *)0x553eab;
      iVar4 = FUN_00402bc3();
      piVar5 = piStack_6c;
      if (iVar4 < 0) {
        puStack_70 = (undefined *)0x553eb6;
        piStack_6c = (int *)iVar4;
        FUN_00878dfb();
        piVar5 = (int *)extraout_ECX_04;
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        piStack_6c = (int *)0x0;
        puStack_78 = (undefined1 *)&puStack_70;
        *(undefined ***)(unaff_EBP + -0x28) = &puStack_70;
        iStack_74 = 0x7e2;
        puStack_7c = (undefined1 *)0x553ed3;
        puStack_70 = (undefined *)piVar5;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_74 = 0x553edf;
        FUN_0040263d();
        iStack_74 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_78 = (undefined1 *)0x553eee;
        puStack_70 = (undefined *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iStack_74 = 0x553ef8;
        iVar4 = FUN_00412550();
        piStack_6c = (int *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_70 = (undefined *)0x553f09;
        iVar2 = FUN_00402bc3();
        piVar5 = piStack_6c;
        if (iVar2 < 0) {
          puStack_70 = (undefined *)0x553f14;
          piStack_6c = (int *)iVar2;
          FUN_00878dfb();
          piVar5 = (int *)extraout_ECX_05;
        }
        if (iVar4 == 0) {
          piStack_6c = (int *)0x0;
          *(undefined ***)(unaff_EBP + -0x28) = &puStack_70;
          iStack_74 = 0xb58;
          puStack_7c = (undefined1 *)0x553f30;
          puStack_78 = (undefined1 *)&puStack_70;
          puStack_70 = (undefined *)piVar5;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iStack_74 = 0x553f3c;
          FUN_0040263d();
          iStack_74 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_78 = (undefined1 *)0x553f4b;
          puStack_70 = (undefined *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iStack_74 = 0x553f55;
          iVar4 = FUN_00412550();
          piStack_6c = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_70 = (undefined *)0x553f66;
          iVar2 = FUN_00402bc3();
          piVar5 = piStack_6c;
          if (iVar2 < 0) {
            puStack_70 = (undefined *)0x553f71;
            piStack_6c = (int *)iVar2;
            FUN_00878dfb();
            piVar5 = (int *)extraout_ECX_06;
          }
          if (iVar4 != 0) goto LAB_00553fce;
          piStack_6c = (int *)0x0;
          *(undefined ***)(unaff_EBP + -0x28) = &puStack_70;
          iStack_74 = 0xb59;
          puStack_7c = (undefined1 *)0x553f89;
          puStack_78 = (undefined1 *)&puStack_70;
          puStack_70 = (undefined *)piVar5;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iStack_74 = 0x553f95;
          FUN_0040263d();
          iStack_74 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_78 = (undefined1 *)0x553fa4;
          puStack_70 = (undefined *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_74 = 0x553fae;
          iVar4 = FUN_00412550();
          piStack_6c = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_70 = (undefined *)0x553fbf;
          iVar2 = FUN_00402bc3();
          piVar5 = piStack_6c;
          if (iVar2 < 0) {
            puStack_70 = (undefined *)0x553fca;
            piStack_6c = (int *)iVar2;
            FUN_00878dfb();
            piVar5 = (int *)extraout_ECX_07;
          }
          if (iVar4 != 0) goto LAB_00553fce;
          piStack_6c = (int *)0x0;
          *(undefined ***)(unaff_EBP + -0x28) = &puStack_70;
          iStack_74 = 0xc28;
          puStack_7c = (undefined1 *)0x553feb;
          puStack_78 = (undefined1 *)&puStack_70;
          puStack_70 = (undefined *)piVar5;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          iStack_74 = 0x553ff7;
          FUN_0040263d();
          iStack_74 = unaff_EBP + -0x58;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_78 = (undefined1 *)0x554006;
          puStack_70 = (undefined *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          iStack_74 = 0x554010;
          iVar4 = FUN_00412550();
          piStack_6c = (int *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puStack_70 = (undefined *)0x554021;
          piStack_6c = (int *)FUN_00402bc3();
          if ((int)piStack_6c < 0) {
            puStack_70 = (undefined *)0x55402c;
            FUN_00878dfb();
          }
          piStack_6c = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (iVar4 == 0) {
            if (piStack_6c != (int *)0x0) {
              puStack_70 = (undefined *)0x554071;
              (**(code **)(*piStack_6c + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 1;
            piStack_6c = (int *)0x55407d;
            FUN_00402676();
            piStack_6c = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (piStack_6c != (int *)0x0) {
              puStack_70 = (undefined *)0x55408e;
              (**(code **)(*piStack_6c + 8))();
            }
            piStack_6c = (int *)0x1;
            goto LAB_00553a86;
          }
        }
        else {
LAB_00553fce:
          piStack_6c = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 2;
        }
        if (piStack_6c != (int *)0x0) {
          puStack_70 = (undefined *)0x554041;
          (**(code **)(*piStack_6c + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_6c = (int *)0x55404d;
      FUN_00402676();
      piStack_6c = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      bVar7 = piStack_6c == (int *)0x0;
      goto LAB_00554056;
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (psVar1 != (short *)0x0) {
      piStack_6c = (int *)(psVar1 + -6);
      puStack_70 = (undefined *)0x553a66;
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_6c = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
      puStack_70 = (undefined *)0x553a7b;
      FUN_00403384();
    }
    piStack_6c = (int *)0x553a84;
    FUN_004027eb();
  }
  else {
    if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
      if ((DAT_009793b0 & 1) == 0) {
        DAT_009793b0 = DAT_009793b0 | 1;
        _DAT_0097939c = 0;
        piStack_6c = (int *)0xffffffff;
        puStack_70 = &DAT_0097812c;
        iStack_74 = 0x553bc2;
        FUN_004184ca();
        _DAT_009793a0 = 0;
        piStack_6c = (int *)0xffffffff;
        puStack_70 = &DAT_0097812c;
        iStack_74 = 0x553bd6;
        FUN_004184ca();
        piStack_6c = (int *)0x90e;
        puStack_70 = &DAT_009793a4;
        iStack_74 = 0x553bec;
        FUN_00679d86();
        piStack_6c = (int *)0x90f;
        puStack_70 = &DAT_009793a8;
        iStack_74 = 0x553bfd;
        FUN_00679d86();
        piStack_6c = (int *)0x911;
        puStack_70 = &DAT_009793ac;
        iStack_74 = 0x553c0e;
        FUN_00679d86();
        piStack_6c = (int *)&LAB_005540a2;
        puStack_70 = (undefined *)0x553c18;
        FUN_008796d0();
      }
      piStack_6c = (int *)0x912;
      puStack_70 = (undefined *)(unaff_EBP + -0x20);
      iStack_74 = 0x553c2c;
      piVar5 = (int *)FUN_00679d86();
      iStack_74 = *piVar5;
      piStack_6c = (int *)(iVar4 / 10000);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_70 = *(undefined **)(&DAT_0097939c + iVar2 * 4);
      puStack_78 = (undefined1 *)(unaff_EBP + 8);
      puStack_7c = (undefined1 *)0x553c4e;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        piStack_6c = (int *)(*(int *)(unaff_EBP + -0x20) + -0xc);
        puStack_70 = (undefined *)0x553c65;
        FUN_00403384();
      }
      piStack_6c = &DAT_00980690;
      puStack_70 = (undefined *)0x553c74;
      FUN_00403191();
      piStack_6c = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_70 = (undefined *)0x553c81;
      FUN_00403191();
      piStack_6c = (int *)0x0;
      puStack_70 = (undefined *)0x0;
      iStack_74 = unaff_EBP + -0x38;
      puStack_78 = (undefined1 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_7c = (undefined1 *)0x553c99;
      uVar3 = FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_7c;
      puStack_7c = extraout_ECX_01;
      FUN_004033a1(uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d();
      FUN_00402660();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00404a02(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_74 = 0x553ccf;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x20) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar2 != 0) {
        piStack_6c = (int *)(unaff_EBP + -0x20);
        puStack_70 = (undefined *)0x553ce5;
        piStack_6c = (int *)FUN_00404b30();
        if (((int)piStack_6c < 0) && (piStack_6c != (int *)0x80004002)) {
          puStack_70 = (undefined *)0x553cf6;
          FUN_00878dfb();
        }
      }
      piStack_6c = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_70 = (undefined *)0x553d03;
      piStack_6c = (int *)FUN_00402bc3();
      if ((int)piStack_6c < 0) {
        puStack_70 = (undefined *)0x553d0e;
        FUN_00878dfb();
      }
      piStack_6c = (int *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_70 = (undefined *)0x553d1b;
      piStack_6c = (int *)FUN_00402bc3();
      if ((int)piStack_6c < 0) {
        puStack_70 = (undefined *)0x553d26;
        FUN_00878dfb();
      }
      piStack_6c = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_70 = (undefined *)0x553d33;
      piStack_6c = (int *)FUN_00402bc3();
      if ((int)piStack_6c < 0) {
        puStack_70 = (undefined *)0x553d3e;
        FUN_00878dfb();
      }
      piStack_6c = (int *)0x6ba;
      puStack_70 = (undefined *)(unaff_EBP + -0x24);
      iStack_74 = 0x553d51;
      puVar6 = (undefined4 *)FUN_00679d86();
      puStack_70 = (undefined *)*puVar6;
      iStack_74 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_78 = (undefined1 *)0x553d62;
      piStack_6c = (int *)iVar4;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_6c = (int *)0x553d71;
      FUN_00402676();
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_6c = (int *)0x0;
        puStack_70 = (undefined *)0x0;
        iStack_74 = 0x553d9a;
        puStack_78 = (undefined1 *)FUN_00411641();
        *(int **)(unaff_EBP + -0x28) = &iStack_74;
        puStack_7c = (undefined1 *)0x553da6;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_78 = (undefined1 *)0x553db2;
        FUN_0040263d();
        puStack_78 = (undefined1 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_7c = (undefined1 *)0x553dc1;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_74 = 0x553dcc;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        piStack_6c = (int *)(unaff_EBP + -0x24);
        puStack_70 = (undefined *)0x553ddb;
        piStack_6c = (int *)FUN_00404b30();
        if (((int)piStack_6c < 0) && (piStack_6c != (int *)0x80004002)) {
          puStack_70 = (undefined *)0x553dec;
          FUN_00878dfb();
        }
        piStack_6c = (int *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_70 = (undefined *)0x553df9;
        iVar4 = FUN_00402bc3();
        piVar5 = piStack_6c;
        if (iVar4 < 0) {
          puStack_70 = (undefined *)0x553e04;
          piStack_6c = (int *)iVar4;
          FUN_00878dfb();
          piVar5 = (int *)extraout_ECX_02;
        }
        piStack_6c = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piStack_6c != (int *)0x0) {
          puStack_70 = (undefined *)0x553e15;
          (**(code **)(*piStack_6c + 8))();
          piVar5 = (int *)extraout_ECX_03;
        }
        goto LAB_00553e15;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_6c = (int *)0x553d82;
      FUN_00402676();
      piStack_6c = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      bVar7 = piStack_6c == (int *)0x0;
    }
    else {
LAB_00553e1b:
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_6c = (int *)0x553e27;
      FUN_00402676();
      piStack_6c = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      bVar7 = piStack_6c == (int *)0x0;
    }
LAB_00554056:
    if (!bVar7) {
      puStack_70 = (undefined *)0x554062;
      (**(code **)(*piStack_6c + 8))();
    }
  }
  piStack_6c = (int *)0x0;
LAB_00553a86:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piStack_6c;
}


