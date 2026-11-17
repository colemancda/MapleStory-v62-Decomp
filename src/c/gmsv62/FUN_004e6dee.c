/* FUN_004e6dee - 0x004e6dee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e6dee(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  int *piVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  int extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  int unaff_EBP;
  char *pcStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  
  FUN_00879bb8();
  piStack_1e8 = (int *)0x0;
  iStack_1ec = 0;
  *(char ***)(unaff_EBP + -0x30) = &pcStack_1f0;
  *(undefined4 *)(unaff_EBP + -0x50) = extraout_ECX;
  FUN_00448a17(&DAT_00964ea4);
  iVar1 = unaff_EBP + -0x154;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pcStack_1f0 = (char *)0x4e6e44;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 != 0) {
    piStack_1e8 = (int *)(unaff_EBP + -0x54);
    iStack_1ec = 0x4e6e5a;
    piStack_1e8 = (int *)FUN_00404b30();
    if (((int)piStack_1e8 < 0) && (piStack_1e8 != (int *)0x80004002)) {
      iStack_1ec = 0x4e6e6b;
      FUN_00878dfb();
    }
  }
  piStack_1e8 = (int *)(unaff_EBP + -0x154);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_1ec = 0x4e6e7b;
  piStack_1e8 = (int *)FUN_00402bc3();
  if ((int)piStack_1e8 < 0) {
    iStack_1ec = 0x4e6e86;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    piStack_1e8 = (int *)0x4e6e93;
    FUN_004027eb();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        piStack_1e8 = (int *)0x80004003;
        iStack_1ec = 0x4e6eaa;
        FUN_00878dfb();
      }
      piStack_1e8 = (int *)0x4e6eb2;
      uVar2 = FUN_0040cf4d();
      if (uVar2 <= *(uint *)(unaff_EBP + -0x2c)) break;
      piStack_1e8 = (int *)0x4e6ec3;
      FUN_0087a1b0();
      piStack_1e8 = (int *)0x0;
      iStack_1ec = 0;
      pcStack_1f0 = &stack0xfffffe1c;
      uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x2c));
      *(char ***)(unaff_EBP + -0x14) = &pcStack_1f0;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0x1e4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar1);
      FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      pcStack_1f0 = (char *)0x4e6f01;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x34) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (iVar1 != 0) {
        piStack_1e8 = (int *)(unaff_EBP + -0x34);
        iStack_1ec = 0x4e6f17;
        piStack_1e8 = (int *)FUN_00404b30();
        if (((int)piStack_1e8 < 0) && (piStack_1e8 != (int *)0x80004002)) {
          iStack_1ec = 0x4e6f28;
          FUN_00878dfb();
        }
      }
      piStack_1e8 = (int *)(unaff_EBP + -0x1e4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_1ec = 0x4e6f38;
      iVar1 = FUN_00402bc3();
      piVar4 = piStack_1e8;
      if (iVar1 < 0) {
        iStack_1ec = 0x4e6f43;
        piStack_1e8 = (int *)iVar1;
        FUN_00878dfb();
        piVar4 = (int *)extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
LAB_004e700f:
        *(undefined1 *)(unaff_EBP + -4) = 3;
        piStack_1e8 = (int *)0x4e701b;
        FUN_004027eb();
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008eac50;
        piStack_1e8 = (int *)0x0;
        iStack_1ec = 0;
        *(char ***)(unaff_EBP + -0x14) = &pcStack_1f0;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_1f0 = (char *)piVar4;
        FUN_00448a17(&DAT_00964e9c);
        iVar1 = unaff_EBP + -0x134;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        pcStack_1f0 = (char *)0x4e6f98;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x4c) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        if (iVar1 != 0) {
          piStack_1e8 = (int *)(unaff_EBP + -0x4c);
          iStack_1ec = 0x4e6fae;
          piStack_1e8 = (int *)FUN_00404b30();
          if (((int)piStack_1e8 < 0) && (piStack_1e8 != (int *)0x80004002)) {
            iStack_1ec = 0x4e6fbf;
            FUN_00878dfb();
          }
        }
        piStack_1e8 = (int *)(unaff_EBP + -0x134);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_1ec = 0x4e6fcf;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_1ec = 0x4e6fda;
          piStack_1e8 = (int *)iVar1;
          FUN_00878dfb();
          piStack_1e8 = (int *)extraout_ECX_01;
        }
        pcStack_1f0 = (char *)(unaff_EBP + -0x28);
        *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
        iStack_1ec = (int)piStack_1e8;
        piStack_1e8 = (int *)(unaff_EBP + -0x48);
        FUN_00424dbc();
        pcStack_1f0 = (char *)0x4e6ff2;
        iVar1 = FUN_00517e2d();
        piVar4 = piStack_1e8;
        if (iVar1 == 0) {
          piStack_1e8 = (int *)0x4e7000;
          FUN_004027eb();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008eac50;
          piStack_1e8 = (int *)0x4e700f;
          FUN_004f1e04();
          goto LAB_004e700f;
        }
        piStack_1e8 = (int *)0x0;
        iStack_1ec = 0;
        pcStack_1f0 = (char *)piVar4;
        *(char ***)(unaff_EBP + -0x14) = &pcStack_1f0;
        FUN_00448a17(&DAT_00964e94);
        iVar1 = unaff_EBP + -0x94;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_0040263d(iVar1);
        FUN_004048a4(iVar1);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        pcStack_1f0 = (char *)0x4e7057;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x30) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar1 != 0) {
          piStack_1e8 = (int *)(unaff_EBP + -0x30);
          iStack_1ec = 0x4e706d;
          piStack_1e8 = (int *)FUN_00404b30();
          if (((int)piStack_1e8 < 0) && (piStack_1e8 != (int *)0x80004002)) {
            iStack_1ec = 0x4e707e;
            FUN_00878dfb();
          }
        }
        piStack_1e8 = (int *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_1ec = 0x4e708e;
        piStack_1e8 = (int *)FUN_00402bc3();
        if ((int)piStack_1e8 < 0) {
          iStack_1ec = 0x4e7099;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          piStack_1e8 = (int *)0x4e70ad;
          FUN_004f1802();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_1e8 = (int *)0x4e70be;
          FUN_004f1e04();
          piStack_1e8 = (int *)(unaff_EBP + -0x48);
          iStack_1ec = 0x4e70c9;
          FUN_004f179f();
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = &DAT_00964e8c;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x194);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          pcStack_1f0 = (char *)0x4e70fe;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e710a;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x39) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x194);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e711d;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e7128;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_02;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = &DAT_00964e88;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xb4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          pcStack_1f0 = (char *)0x4e715d;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7169;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x3d) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xb4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e717c;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e7187;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_03;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_faceAcc_00964e80;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          pcStack_1f0 = (char *)0x4e71b9;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e71c5;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x41) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e71d5;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e71e0;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_04;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_eyeAcc_00964e78;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xd4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          pcStack_1f0 = (char *)0x4e7215;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7221;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x45) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xd4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7234;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e723f;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_05;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_earAcc_00964e70;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x1d4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          pcStack_1f0 = (char *)0x4e7274;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7280;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x49) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x1d4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7293;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e729e;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_06;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_clothes_00964e68;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          pcStack_1f0 = (char *)0x4e72d3;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e72df;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x4d) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e72f2;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e72fd;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_07;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_pants_00964e60;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x174);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          pcStack_1f0 = (char *)0x4e7332;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e733e;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x51) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x174);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7351;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e735c;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_08;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_shoes_00964e58;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x114);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          pcStack_1f0 = (char *)0x4e7391;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e739d;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x55) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x114);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e73b0;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e73bb;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_09;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_gloves_00964e50;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x1b4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          pcStack_1f0 = (char *)0x4e73f0;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e73fc;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x59) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x1b4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e740f;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e741a;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_10;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = &DAT_00964e48;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          pcStack_1f0 = (char *)0x4e744c;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7458;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x5d) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7468;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e7473;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_11;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_shield_00964e40;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x84);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          pcStack_1f0 = (char *)0x4e74a8;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e74b4;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x61) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x84);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e74c7;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e74d2;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_12;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_weapon_00964e38;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          pcStack_1f0 = (char *)0x4e7507;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7513;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x65) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7526;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e7531;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_13;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_ring1_00964e30;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xc4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          pcStack_1f0 = (char *)0x4e7566;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7572;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x69) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xc4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7585;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e7590;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_14;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_ring2_00964e28;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0xe4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          pcStack_1f0 = (char *)0x4e75c5;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e75d1;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x6d) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0xe4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e75e4;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e75ef;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_15;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_ring3_00964e20;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x104);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          pcStack_1f0 = (char *)0x4e7624;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7630;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x75) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x104);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7643;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e764e;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_16;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_ring4_00964e18;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x124);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          pcStack_1f0 = (char *)0x4e7683;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e768f;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x79) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x124);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e76a2;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e76ad;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_17;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_pendant_00964e10;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x144);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          pcStack_1f0 = (char *)0x4e76e2;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e76ee;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x7d) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x144);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7701;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e770c;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_18;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_petwear_00964e08;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x164);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          pcStack_1f0 = (char *)0x4e7741;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e774d;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x71) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x164);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7760;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e776b;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_19;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_saddle_00964e00;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x184);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          pcStack_1f0 = (char *)0x4e77a0;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e77ac;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x85) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x184);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e77c2;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e77cd;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_20;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_tamingmob_00964df4;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x1a4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          pcStack_1f0 = (char *)0x4e7802;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e780e;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x81) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x1a4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7824;
          iVar1 = FUN_00402bc3();
          iStack_1ec = (int)piStack_1e8;
          if (iVar1 < 0) {
            iStack_1ec = 0x4e782f;
            piStack_1e8 = (int *)iVar1;
            FUN_00878dfb();
            iStack_1ec = extraout_ECX_21;
          }
          piStack_1e8 = (int *)0xffffffff;
          *(int **)(unaff_EBP + -0x14) = &iStack_1ec;
          pcStack_1f0 = s_mobequip_00964de8;
          FUN_00448a17();
          pcStack_1f0 = (char *)(unaff_EBP + -0x1c4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_0040263d();
          iStack_1ec = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          pcStack_1f0 = (char *)0x4e7864;
          uVar3 = FUN_00412550();
          piStack_1e8 = (int *)0x4e7870;
          iVar1 = FUN_004f1516();
          *(undefined4 *)(iVar1 + 0x89) = uVar3;
          piStack_1e8 = (int *)(unaff_EBP + -0x1c4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_1ec = 0x4e7886;
          piStack_1e8 = (int *)FUN_00402bc3();
          if ((int)piStack_1e8 < 0) {
            iStack_1ec = 0x4e7891;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)0x4e789f;
          FUN_004f1e3e();
          piStack_1e8 = (int *)(unaff_EBP + -0x1c);
          iStack_1ec = 0x4e78aa;
          FUN_004f18c5();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            piStack_1e8 = (int *)0x0;
            iStack_1ec = 0x4e78bc;
            FUN_004f18fe();
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
        }
        piStack_1e8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (piStack_1e8 != (int *)0x0) {
          iStack_1ec = 0x4e78d0;
          (**(code **)(*piStack_1e8 + 8))();
        }
        piStack_1e8 = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piStack_1e8 != (int *)0x0) {
          iStack_1ec = 0x4e78e1;
          (**(code **)(*piStack_1e8 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008eac50;
        piStack_1e8 = (int *)0x4e78f4;
        FUN_004f1e04();
        piStack_1e8 = *(int **)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piStack_1e8 != (int *)0x0) {
          iStack_1ec = 0x4e7905;
          (**(code **)(*piStack_1e8 + 8))();
        }
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    }
    piStack_1e8 = *(int **)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_1e8 != (int *)0x0) {
      iStack_1ec = 0x4e791d;
      (**(code **)(*piStack_1e8 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


