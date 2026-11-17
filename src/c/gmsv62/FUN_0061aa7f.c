/* FUN_0061aa7f - 0x0061aa7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0061aa7f(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  int *extraout_ECX_15;
  int *extraout_ECX_16;
  int *extraout_ECX_17;
  int *extraout_ECX_18;
  int *extraout_ECX_19;
  int *extraout_ECX_20;
  int *extraout_ECX_21;
  int *extraout_ECX_22;
  int *extraout_ECX_23;
  int *extraout_ECX_24;
  int *extraout_ECX_25;
  int unaff_EBP;
  int *piStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe18;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  piStack_1ec = (int *)0x61aaa9;
  FUN_0061d257();
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x74) = &piStack_1f4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&piStack_1f4,0x3b4);
  iVar3 = unaff_EBP + -0x1b8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_1f4 = (int *)0x61aaec;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xb4) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0xb4);
    piStack_1f0 = (int *)0x61ab08;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61ab19;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x1b8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_1f0 = (int *)0x61ab29;
  piStack_1ec = (int *)FUN_00402bc3();
  if ((int)piStack_1ec < 0) {
    piStack_1f0 = (int *)0x61ab34;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0xc);
  piStack_1ec = (int *)0x61ab42;
  FUN_004125cc();
  piStack_1ec = *(int **)(unaff_EBP + 8);
  **(undefined4 **)(unaff_EBP + -0x38) = piStack_1ec;
  piStack_1f0 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_1f4 = (int *)0x61ab5e;
  piStack_1ec = (int *)FUN_0045a1d8();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_1f0 = (int *)0x61ab6e;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piVar7 = extraout_ECX;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    piStack_1ec = (int *)(*(int *)(unaff_EBP + -0x58) + -0xc);
    piStack_1f0 = (int *)0x61ab82;
    FUN_00434e38();
    piVar7 = piStack_1ec;
  }
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x74) = &piStack_1f4;
  piStack_1f4 = piVar7;
  FUN_00679e4e(&piStack_1f4,0x6a3);
  iVar3 = unaff_EBP + -0x1e8;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_1f4 = (int *)0x61abbd;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xa8) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0xa8);
    piStack_1f0 = (int *)0x61abd9;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61abea;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x1e8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_1f0 = (int *)0x61abfa;
  piStack_1ec = (int *)FUN_00402bc3();
  if ((int)piStack_1ec < 0) {
    piStack_1f0 = (int *)0x61ac05;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  while( true ) {
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x61ac11;
    cVar2 = FUN_00411581();
    if (cVar2 != '\0') break;
    piStack_1ec = (int *)0x61ac21;
    FUN_0087a1b0();
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    piStack_1f4 = (int *)&stack0xfffffe18;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x44));
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f4;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x1d8;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_1f4 = (int *)0x61ac5f;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xb0) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0xb0);
      piStack_1f0 = (int *)0x61ac7b;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61ac8c;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x1d8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1f0 = (int *)0x61ac9c;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61aca7;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x48) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_1ec = (int *)0x61b551;
      FUN_004027eb();
      break;
    }
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61acbd;
    puVar5 = (undefined4 *)FUN_0061d35f();
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f0;
    piStack_1f4 = (int *)0x6a4;
    *(undefined4 **)(unaff_EBP + -0x2c) = puVar5;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x1c8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_1f4 = (int *)0x61acfa;
    uVar4 = FUN_00412550();
    puVar5[2] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x1c8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61ad1a;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f0;
    piStack_1f4 = (int *)0x6a5;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x178);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_1f4 = (int *)0x61ad52;
    uVar4 = FUN_00412550();
    puVar5[3] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x178);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61ad72;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f0;
    piStack_1f4 = (int *)0x5db;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x1a8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_1f4 = (int *)0x61adaa;
    uVar4 = FUN_00412550();
    *puVar5 = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x1a8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61adc9;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f0;
    piStack_1f4 = (int *)0x5dc;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_1f4 = (int *)0x61ae01;
    uVar4 = FUN_00412550();
    puVar5[1] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61ae21;
      FUN_00878dfb();
    }
    piStack_1f4 = (int *)&piStack_1ec;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1ec;
    piStack_1f0 = (int *)0x6a6;
    FUN_00679e4e();
    piStack_1f0 = (int *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_1f4 = (int *)0x61ae47;
    FUN_0040263d();
    piStack_1f4 = (int *)0x61ae4e;
    psVar6 = (short *)FUN_004048a4();
    sVar1 = *psVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (sVar1 == 8) {
      piStack_1ec = *(int **)(psVar6 + 4);
    }
    else {
      piStack_1ec = (int *)&DAT_0097812c;
    }
    piStack_1f0 = (int *)0x61ae6b;
    FUN_00402e8e();
    piStack_1ec = (int *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_1f0 = (int *)0x61ae7b;
    piVar7 = (int *)FUN_00402bc3();
    if ((int)piVar7 < 0) {
      piStack_1f0 = (int *)0x61ae86;
      piStack_1ec = piVar7;
      FUN_00878dfb();
      piStack_1ec = extraout_ECX_00;
    }
    piStack_1f0 = (int *)(unaff_EBP + -0x24);
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1ec;
    piStack_1f4 = (int *)0x61ae95;
    FUN_0040810c();
    piStack_1f0 = *(int **)(unaff_EBP + 8);
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f4;
    FUN_00424dbc(unaff_EBP + 0x10);
    FUN_007d6c55(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    while( true ) {
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)0x61aec1;
      FUN_0045ed72();
      piStack_1f0 = (int *)0x61aec8;
      piStack_1ec = (int *)FUN_0045ee27();
      piStack_1f0 = (int *)0x61aed1;
      FUN_00414f8b();
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)&DAT_00968224;
      piVar7 = (int *)FUN_004538dc();
      if ((int)piVar7 < 0) break;
      piStack_1f0 = (int *)(unaff_EBP + -0x98);
      piStack_1f4 = (int *)0x61aefa;
      piStack_1ec = piVar7;
      piStack_1ec = (int *)FUN_0045e070();
      piStack_1f0 = (int *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      piStack_1f4 = (int *)0x61af0c;
      FUN_004655d4();
      piStack_1f0 = (int *)0x61af13;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x98) != 0) {
        piStack_1ec = (int *)(*(int *)(unaff_EBP + -0x98) + -0xc);
        piStack_1f0 = (int *)0x61af2a;
        FUN_00434e38();
      }
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)((int)piVar7 + 1);
      piStack_1f4 = (int *)(unaff_EBP + -0x94);
      piStack_1ec = (int *)FUN_0045e053();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_1f0 = (int *)0x61af4b;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (*(int *)(unaff_EBP + -0x94) != 0) {
        piStack_1ec = (int *)(*(int *)(unaff_EBP + -0x94) + -0xc);
        piStack_1f0 = (int *)0x61af66;
        FUN_00434e38();
      }
    }
    if ((*(char **)(unaff_EBP + -0x28) != (char *)0x0) && (**(char **)(unaff_EBP + -0x28) != '\0'))
    {
      piStack_1ec = (int *)(unaff_EBP + -0x28);
      piStack_1f0 = (int *)0xffffffff;
      piStack_1f4 = (int *)0x61af88;
      FUN_004655d4();
      piStack_1f0 = (int *)0x61af8f;
      FUN_00414f8b();
    }
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_1f4;
    FUN_00679e4e(&piStack_1f4,0x6a7);
    iVar3 = unaff_EBP + -0xe8;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    piStack_1f4 = (int *)0x61afc9;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x78) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x78);
      piStack_1f0 = (int *)0x61afdf;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61aff0;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_1f0 = (int *)0x61b000;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61b00b;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x34) == 0) {
      piStack_1ec = (int *)0x61b8a3;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        piStack_1ec = (int *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        piStack_1f0 = (int *)0x61b8b7;
        FUN_00434e38();
      }
      piStack_1ec = (int *)0x61b8c0;
      FUN_00402fa6();
      piStack_1ec = (int *)0x61b8c8;
      FUN_004027eb();
      piStack_1ec = (int *)0x61b8d0;
      FUN_004027eb();
      piStack_1ec = (int *)0x61b8d8;
      FUN_004027eb();
      piStack_1ec = (int *)0x61b8e0;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_1ec = (int *)0x61b8ec;
      FUN_0061d28a();
      piStack_1ec = (int *)0x61b8f4;
      FUN_004027eb();
      piStack_1ec = (int *)0x61b8fc;
      FUN_004027eb();
      goto LAB_0061d10f;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while( true ) {
      piStack_1ec = (int *)0x61b01f;
      FUN_0087a1b0();
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)&stack0xfffffe18;
      uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
      *(int ***)(unaff_EBP + -0x1c) = &piStack_1f4;
      FUN_004033a1(uVar4);
      iVar3 = unaff_EBP + -0x108;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_1f4 = (int *)0x61b05d;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x70) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      if (iVar3 != 0) {
        piStack_1ec = (int *)(unaff_EBP + -0x70);
        piStack_1f0 = (int *)0x61b073;
        piStack_1ec = (int *)FUN_00404b30();
        if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
          piStack_1f0 = (int *)0x61b084;
          FUN_00878dfb();
        }
      }
      piStack_1ec = (int *)(unaff_EBP + -0x108);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_1f0 = (int *)0x61b094;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b09f;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x54) == 0) break;
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)0x61b0b5;
      FUN_0061d2cf();
      piStack_1f4 = (int *)&piStack_1ec;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_1ec;
      piStack_1f0 = (int *)0x43d;
      FUN_00679e4e();
      piStack_1f0 = (int *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_1f4 = (int *)0x61b0dd;
      FUN_0040263d();
      piStack_1f4 = (int *)0x61b0e4;
      psVar6 = (short *)FUN_004048a4();
      sVar1 = *psVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (sVar1 == 8) {
        piStack_1ec = *(int **)(psVar6 + 4);
      }
      else {
        piStack_1ec = (int *)&DAT_0097812c;
      }
      piStack_1f0 = (int *)0x61b104;
      FUN_00402e8e();
      piStack_1ec = (int *)(unaff_EBP + -0xa4);
      piStack_1f0 = (int *)0x61b112;
      FUN_00402f41();
      piStack_1ec = (int *)0x61b11d;
      FUN_00402fa6();
      piStack_1ec = (int *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_1f0 = (int *)0x61b12d;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b138;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        piStack_1ec = (int *)0x61b143;
        FUN_0087a1b0();
        piStack_1f0 = *(int **)(unaff_EBP + -0x1c);
        piStack_1f4 = (int *)0x61b14e;
        piStack_1ec = (int *)&stack0xfffffe18;
        piStack_1f0 = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b15c;
        FUN_00402e8e();
        piStack_1f0 = (int *)(unaff_EBP + -0xf8);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_1f4 = (int *)0x61b16f;
        FUN_0040263d();
        piStack_1f4 = (int *)0x61b176;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(short *)(unaff_EBP + -0xf8) == 0) break;
        piStack_1f0 = (int *)(unaff_EBP + -0xf8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b199;
        FUN_0040675b();
        piStack_1f0 = *(int **)(unaff_EBP + 8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
        piStack_1f4 = extraout_ECX_01;
        FUN_00424dbc(unaff_EBP + 0x10);
        puVar5 = (undefined4 *)FUN_007d6c55(unaff_EBP + -0x50);
        piStack_1ec = (int *)*puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_1f0 = (int *)0x61b1c5;
        FUN_00432cfc();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (*(int *)(unaff_EBP + -0x50) != 0) {
          piStack_1ec = (int *)(*(int *)(unaff_EBP + -0x50) + -0xc);
          piStack_1f0 = (int *)0x61b1d9;
          FUN_00434e38();
        }
        piStack_1ec = (int *)0xffffffff;
        piStack_1f0 = (int *)0x61b1e4;
        FUN_004d6cfb();
        piStack_1ec = (int *)(unaff_EBP + -0x7c);
        piStack_1f0 = (int *)0x61b1ef;
        FUN_00402f41();
        piStack_1ec = (int *)0x61b1f7;
        FUN_00402fa6();
        piStack_1ec = (int *)(unaff_EBP + -0xf8);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_1f0 = (int *)0x61b207;
        piStack_1ec = (int *)FUN_00402bc3();
        if ((int)piStack_1ec < 0) {
          piStack_1f0 = (int *)0x61b212;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      piStack_1ec = (int *)(unaff_EBP + -0xf8);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_1f0 = (int *)0x61b22a;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b235;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_1ec = (int *)0x61b241;
      FUN_004027eb();
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_1ec = (int *)0x61b255;
    FUN_004027eb();
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    FUN_00679e4e(&piStack_1f4,0x6a8);
    iVar3 = unaff_EBP + -0x118;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_1f4 = (int *)0x61b28f;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x68);
      piStack_1f0 = (int *)0x61b2a5;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61b2b6;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    piStack_1f0 = (int *)0x61b2c6;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61b2d1;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while( true ) {
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x61b2dd;
      cVar2 = FUN_00411581();
      if (cVar2 != '\0') break;
      piStack_1ec = (int *)0x61b2ed;
      FUN_0087a1b0();
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)&stack0xfffffe18;
      uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
      *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
      FUN_004033a1(uVar4);
      iVar3 = unaff_EBP + -0x148;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      piStack_1f4 = (int *)0x61b32b;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x6c) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      if (iVar3 != 0) {
        piStack_1ec = (int *)(unaff_EBP + -0x6c);
        piStack_1f0 = (int *)0x61b341;
        piStack_1ec = (int *)FUN_00404b30();
        if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
          piStack_1f0 = (int *)0x61b352;
          FUN_00878dfb();
        }
      }
      piStack_1ec = (int *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_1f0 = (int *)0x61b362;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b36d;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        piStack_1ec = (int *)0x61b50d;
        FUN_004027eb();
        break;
      }
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)0x61b383;
      FUN_0061d2cf();
      piStack_1f4 = (int *)&piStack_1ec;
      *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
      piStack_1f0 = (int *)0x43d;
      FUN_00679e4e();
      piStack_1f0 = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_1f4 = (int *)0x61b3ab;
      FUN_0040263d();
      piStack_1f4 = (int *)0x61b3b2;
      psVar6 = (short *)FUN_004048a4();
      sVar1 = *psVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (sVar1 == 8) {
        piStack_1ec = *(int **)(psVar6 + 4);
      }
      else {
        piStack_1ec = (int *)&DAT_0097812c;
      }
      piStack_1f0 = (int *)0x61b3cf;
      FUN_00402e8e();
      piStack_1ec = (int *)(unaff_EBP + -100);
      piStack_1f0 = (int *)0x61b3da;
      FUN_00402f41();
      piStack_1ec = (int *)0x61b3e2;
      FUN_00402fa6();
      piStack_1ec = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_1f0 = (int *)0x61b3f2;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b3fd;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        piStack_1ec = (int *)0x61b408;
        FUN_0087a1b0();
        piStack_1f0 = *(int **)(unaff_EBP + -0x1c);
        piStack_1f4 = (int *)0x61b413;
        piStack_1ec = (int *)&stack0xfffffe18;
        piStack_1f0 = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b421;
        FUN_00402e8e();
        piStack_1f0 = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        piStack_1f4 = (int *)0x61b434;
        FUN_0040263d();
        piStack_1f4 = (int *)0x61b43b;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        if (*(short *)(unaff_EBP + -0xc4) == 0) break;
        piStack_1f0 = (int *)(unaff_EBP + -0xc4);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b45e;
        FUN_0040675b();
        piStack_1f0 = *(int **)(unaff_EBP + 8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
        piStack_1f4 = extraout_ECX_02;
        FUN_00424dbc(unaff_EBP + 0x10);
        puVar5 = (undefined4 *)FUN_007d6c55(unaff_EBP + -0x74);
        piStack_1ec = (int *)*puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        piStack_1f0 = (int *)0x61b48a;
        FUN_00432cfc();
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        piStack_1ec = (int *)0x61b496;
        FUN_00414ebb();
        piStack_1ec = (int *)0xffffffff;
        piStack_1f0 = (int *)0x61b4a0;
        FUN_004d6cfb();
        piStack_1ec = (int *)(unaff_EBP + -0x58);
        piStack_1f0 = (int *)0x61b4ab;
        FUN_00402f41();
        piStack_1ec = (int *)0x61b4b3;
        FUN_00402fa6();
        piStack_1ec = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        piStack_1f0 = (int *)0x61b4c3;
        piStack_1ec = (int *)FUN_00402bc3();
        if ((int)piStack_1ec < 0) {
          piStack_1f0 = (int *)0x61b4ce;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      piStack_1ec = (int *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_1f0 = (int *)0x61b4e6;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b4f1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_1ec = (int *)0x61b4fd;
      FUN_004027eb();
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
    piStack_1ec = (int *)0x61b515;
    FUN_004027eb();
    piStack_1ec = (int *)0x61b51d;
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_1ec = (int *)0x61b529;
    FUN_00414ebb();
    piStack_1ec = (int *)0x61b531;
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_1ec = (int *)0x61b53d;
    FUN_004027eb();
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
  }
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
  FUN_00679e4e(&piStack_1f4,0x6ae);
  iVar3 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  piStack_1f4 = (int *)0x61b58b;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x74) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0x74);
    piStack_1f0 = (int *)0x61b5a7;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61b5b8;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  piStack_1f0 = (int *)0x61b5c8;
  piVar7 = (int *)FUN_00402bc3();
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61b5d3;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1ec = extraout_ECX_03;
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  while (piVar7 = piStack_1ec, *(int *)(unaff_EBP + -0x90) != 0) {
    piStack_1ec = (int *)0x61b5ea;
    FUN_0087a1b0();
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    piStack_1f4 = (int *)&stack0xfffffe18;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x44));
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x148;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_1f4 = (int *)0x61b62b;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x6c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x6c);
      piStack_1f0 = (int *)0x61b641;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61b652;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x148);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_1f0 = (int *)0x61b662;
    piVar7 = (int *)FUN_00402bc3();
    if ((int)piVar7 < 0) {
      piStack_1f0 = (int *)0x61b66d;
      piStack_1ec = piVar7;
      FUN_00878dfb();
      piStack_1ec = extraout_ECX_04;
    }
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      piVar7 = piStack_1ec;
      break;
    }
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61b683;
    puVar5 = (undefined4 *)FUN_0061d3e4();
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5db;
    *(undefined4 **)(unaff_EBP + -0x7c) = puVar5;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    piStack_1f4 = (int *)0x61b6c0;
    uVar4 = FUN_00412550();
    *puVar5 = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61b6df;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5dc;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    piStack_1f4 = (int *)0x61b717;
    uVar4 = FUN_00412550();
    puVar5[1] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61b737;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    FUN_00679e4e(&piStack_1f4,0x6a7);
    iVar3 = unaff_EBP + -0x108;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_1f4 = (int *)0x61b771;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x68);
      piStack_1f0 = (int *)0x61b787;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61b798;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    piStack_1f0 = (int *)0x61b7a8;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61b7b3;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      piStack_1ec = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      goto LAB_0061d088;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while( true ) {
      piStack_1ec = (int *)0x61b7c7;
      FUN_0087a1b0();
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)&stack0xfffffe18;
      uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
      *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
      FUN_004033a1(uVar4);
      iVar3 = unaff_EBP + -0xe8;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      piStack_1f4 = (int *)0x61b805;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x50) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (iVar3 != 0) {
        piStack_1ec = (int *)(unaff_EBP + -0x50);
        piStack_1f0 = (int *)0x61b81b;
        piStack_1ec = (int *)FUN_00404b30();
        if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
          piStack_1f0 = (int *)0x61b82c;
          FUN_00878dfb();
        }
      }
      piStack_1ec = (int *)(unaff_EBP + -0xe8);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_1f0 = (int *)0x61b83c;
      piVar8 = (int *)FUN_00402bc3();
      piVar7 = piStack_1ec;
      if ((int)piVar8 < 0) {
        piStack_1f0 = (int *)0x61b847;
        piStack_1ec = piVar8;
        FUN_00878dfb();
        piVar7 = extraout_ECX_05;
      }
      if (*(int *)(unaff_EBP + -0x34) == 0) break;
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)0x61b85d;
      FUN_0061d2cf();
      piStack_1f4 = (int *)&piStack_1ec;
      *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
      piStack_1f0 = (int *)0x43d;
      FUN_00679e4e();
      piStack_1f0 = (int *)(unaff_EBP + -0x138);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_1f4 = (int *)0x61b885;
      FUN_0040263d();
      piStack_1f4 = (int *)0x61b88c;
      psVar6 = (short *)FUN_004048a4();
      sVar1 = *psVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      if (sVar1 == 8) {
        piStack_1ec = *(int **)(psVar6 + 4);
      }
      else {
        piStack_1ec = (int *)&DAT_0097812c;
      }
      piStack_1f0 = (int *)0x61b90f;
      FUN_00402e8e();
      piStack_1ec = (int *)(unaff_EBP + -0x58);
      piStack_1f0 = (int *)0x61b91a;
      FUN_00402f41();
      piStack_1ec = (int *)0x61b922;
      FUN_00402fa6();
      piStack_1ec = (int *)(unaff_EBP + -0x138);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_1f0 = (int *)0x61b932;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61b93d;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      while( true ) {
        piStack_1ec = (int *)0x61b948;
        FUN_0087a1b0();
        piStack_1f0 = *(int **)(unaff_EBP + -0x24);
        piStack_1f4 = (int *)0x61b953;
        piStack_1ec = (int *)&stack0xfffffe18;
        piStack_1f0 = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b961;
        FUN_00402e8e();
        piStack_1f0 = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        piStack_1f4 = (int *)0x61b974;
        FUN_0040263d();
        piStack_1f4 = (int *)0x61b97b;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        if (*(short *)(unaff_EBP + -0xc4) == 0) break;
        piStack_1f0 = (int *)(unaff_EBP + -0xc4);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61b99e;
        FUN_0040675b();
        piStack_1f0 = *(int **)(unaff_EBP + 8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
        piStack_1f4 = extraout_ECX_06;
        FUN_00424dbc(unaff_EBP + 0x10);
        puVar5 = (undefined4 *)FUN_007d6c55(unaff_EBP + -0x70);
        piStack_1ec = (int *)*puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        piStack_1f0 = (int *)0x61b9ca;
        FUN_00432cfc();
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        piStack_1ec = (int *)0x61b9d6;
        FUN_00414ebb();
        piStack_1ec = (int *)0xffffffff;
        piStack_1f0 = (int *)0x61b9e0;
        FUN_004d6cfb();
        piStack_1ec = (int *)(unaff_EBP + -100);
        piStack_1f0 = (int *)0x61b9eb;
        FUN_00402f41();
        piStack_1ec = (int *)0x61b9f3;
        FUN_00402fa6();
        piStack_1ec = (int *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        piStack_1f0 = (int *)0x61ba03;
        piStack_1ec = (int *)FUN_00402bc3();
        if ((int)piStack_1ec < 0) {
          piStack_1f0 = (int *)0x61ba0e;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      }
      piStack_1ec = (int *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      piStack_1f0 = (int *)0x61ba26;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61ba31;
        FUN_00878dfb();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61ba42;
        (**(code **)(*piStack_1ec + 8))();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    piStack_1f4 = piVar7;
    FUN_00679e4e(&piStack_1f4,0x6a8);
    iVar3 = unaff_EBP + -0x198;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    piStack_1f4 = (int *)0x61ba88;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x78) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x78);
      piStack_1f0 = (int *)0x61ba9e;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61baaf;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x198);
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    piStack_1f0 = (int *)0x61babf;
    piVar7 = (int *)FUN_00402bc3();
    if ((int)piVar7 < 0) {
      piStack_1f0 = (int *)0x61baca;
      piStack_1ec = piVar7;
      FUN_00878dfb();
      piStack_1ec = extraout_ECX_07;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    while (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_1ec = (int *)0x61bade;
      FUN_0087a1b0();
      piStack_1ec = (int *)0x0;
      piStack_1f0 = (int *)0x0;
      piStack_1f4 = (int *)&stack0xfffffe18;
      uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x20));
      *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
      FUN_004033a1(uVar4);
      iVar3 = unaff_EBP + -0x1a8;
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      piStack_1f4 = (int *)0x61bb1c;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x94) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      if (iVar3 != 0) {
        piStack_1ec = (int *)(unaff_EBP + -0x94);
        piStack_1f0 = (int *)0x61bb38;
        piStack_1ec = (int *)FUN_00404b30();
        if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
          piStack_1f0 = (int *)0x61bb49;
          FUN_00878dfb();
        }
      }
      piStack_1ec = (int *)(unaff_EBP + -0x1a8);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      piStack_1f0 = (int *)0x61bb59;
      piVar7 = (int *)FUN_00402bc3();
      if ((int)piVar7 < 0) {
        piStack_1f0 = (int *)0x61bb64;
        piStack_1ec = piVar7;
        FUN_00878dfb();
        piStack_1ec = extraout_ECX_08;
      }
      if (*(int *)(unaff_EBP + -0x4c) == 0) break;
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)0x61bb7a;
      piVar7 = (int *)FUN_0061d2cf();
      piStack_1f4 = (int *)&piStack_1ec;
      *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
      piStack_1f0 = (int *)0x43d;
      FUN_00679e4e();
      piStack_1f0 = (int *)(unaff_EBP + -0x178);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      piStack_1f4 = (int *)0x61bba2;
      FUN_0040263d();
      piStack_1f4 = (int *)0x61bba9;
      psVar6 = (short *)FUN_004048a4();
      sVar1 = *psVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      if (sVar1 == 8) {
        piStack_1ec = *(int **)(psVar6 + 4);
      }
      else {
        piStack_1ec = (int *)&DAT_0097812c;
      }
      piStack_1f0 = (int *)0x61bbc6;
      FUN_00402e8e();
      piStack_1ec = (int *)0x61bbce;
      FUN_00408b49();
      piStack_1ec = (int *)0x61bbd5;
      FUN_00402fa6();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      *piVar7 = iVar3;
      if (iVar3 != 0) {
        piStack_1ec = (int *)0x61bbe3;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      piStack_1ec = (int *)(unaff_EBP + -0x178);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      piStack_1f0 = (int *)0x61bbf6;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61bc01;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      while( true ) {
        piStack_1ec = (int *)0x61bc0c;
        FUN_0087a1b0();
        piStack_1f0 = *(int **)(unaff_EBP + -0x24);
        piStack_1f4 = (int *)0x61bc17;
        piStack_1ec = (int *)&stack0xfffffe18;
        piStack_1f0 = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61bc25;
        FUN_00402e8e();
        piStack_1f0 = (int *)(unaff_EBP + -0xf8);
        *(undefined1 *)(unaff_EBP + -4) = 0x60;
        piStack_1f4 = (int *)0x61bc38;
        FUN_0040263d();
        piStack_1f4 = (int *)0x61bc3f;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 100;
        if (*(short *)(unaff_EBP + -0xf8) == 0) break;
        piStack_1f0 = (int *)(unaff_EBP + -0xf8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61bc62;
        FUN_0040675b();
        piStack_1f0 = *(int **)(unaff_EBP + 8);
        *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
        piStack_1f4 = extraout_ECX_09;
        FUN_00424dbc(unaff_EBP + 0x10);
        puVar5 = (undefined4 *)FUN_007d6c55(unaff_EBP + -0x98);
        piStack_1ec = (int *)*puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x65;
        piStack_1f0 = (int *)0x61bc91;
        FUN_00432cfc();
        *(undefined1 *)(unaff_EBP + -4) = 0x67;
        piStack_1ec = (int *)0x61bca0;
        FUN_00414ebb();
        piStack_1ec = (int *)0xffffffff;
        piStack_1f0 = (int *)0x61bcaa;
        FUN_004d6cfb();
        piStack_1ec = (int *)(unaff_EBP + -0x54);
        piStack_1f0 = (int *)0x61bcb5;
        FUN_00402f41();
        if (*(int *)(unaff_EBP + -0x54) != 0) {
          piStack_1ec = (int *)0x61bcc1;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x54) = 0;
        }
        piStack_1ec = (int *)(unaff_EBP + -0xf8);
        *(undefined1 *)(unaff_EBP + -4) = 0x60;
        piStack_1f0 = (int *)0x61bcd4;
        piStack_1ec = (int *)FUN_00402bc3();
        if ((int)piStack_1ec < 0) {
          piStack_1f0 = (int *)0x61bcdf;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      }
      piStack_1ec = (int *)(unaff_EBP + -0xf8);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      piStack_1f0 = (int *)0x61bcf7;
      piVar7 = (int *)FUN_00402bc3();
      if ((int)piVar7 < 0) {
        piStack_1f0 = (int *)0x61bd02;
        piStack_1ec = piVar7;
        FUN_00878dfb();
        piStack_1ec = extraout_ECX_10;
      }
      piVar7 = *(int **)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      if (piVar7 != (int *)0x0) {
        piStack_1f0 = (int *)0x61bd13;
        piStack_1ec = piVar7;
        (**(code **)(*piVar7 + 8))();
        piStack_1ec = extraout_ECX_11;
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
    piVar7 = *(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    if (piVar7 != (int *)0x0) {
      piStack_1f0 = (int *)0x61bd2c;
      piStack_1ec = piVar7;
      (**(code **)(*piVar7 + 8))();
      piStack_1ec = extraout_ECX_12;
    }
    piVar7 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (piVar7 != (int *)0x0) {
      piStack_1f0 = (int *)0x61bd3d;
      piStack_1ec = piVar7;
      (**(code **)(*piVar7 + 8))();
      piStack_1ec = extraout_ECX_13;
    }
    piVar7 = *(int **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    if (piVar7 != (int *)0x0) {
      piStack_1f0 = (int *)0x61bd4e;
      piStack_1ec = piVar7;
      (**(code **)(*piVar7 + 8))();
      piStack_1ec = extraout_ECX_14;
    }
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
  }
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
  piStack_1f4 = piVar7;
  FUN_00679e4e(&piStack_1f4,0xe75);
  iVar3 = unaff_EBP + -0x148;
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x69;
  piStack_1f4 = (int *)0x61bd94;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x6c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0x6c);
    piStack_1f0 = (int *)0x61bdb0;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61bdc1;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x148);
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  piStack_1f0 = (int *)0x61bdd1;
  piVar7 = (int *)FUN_00402bc3();
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61bddc;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1ec = extraout_ECX_15;
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  while (piVar7 = piStack_1ec, *(int *)(unaff_EBP + -0xa0) != 0) {
    piStack_1ec = (int *)0x61bdf3;
    FUN_0087a1b0();
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    piStack_1f4 = (int *)&stack0xfffffe18;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x44));
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x118;
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    piStack_1f4 = (int *)0x61be34;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x68);
      piStack_1f0 = (int *)0x61be4a;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61be5b;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x118);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1f0 = (int *)0x61be6b;
    piVar7 = (int *)FUN_00402bc3();
    if ((int)piVar7 < 0) {
      piStack_1f0 = (int *)0x61be76;
      piStack_1ec = piVar7;
      FUN_00878dfb();
      piStack_1ec = extraout_ECX_16;
    }
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      piVar7 = piStack_1ec;
      break;
    }
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61be8c;
    puVar5 = (undefined4 *)FUN_0061d473();
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5db;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    piStack_1f4 = (int *)0x61bec6;
    uVar4 = FUN_00412550();
    *puVar5 = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61bee5;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5dc;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    piStack_1f4 = (int *)0x61bf1d;
    uVar4 = FUN_00412550();
    puVar5[1] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61bf3d;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61bf47;
    piVar7 = (int *)FUN_0061d2cf();
    piStack_1f4 = (int *)&piStack_1ec;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
    piStack_1f0 = (int *)0x43d;
    FUN_00679e4e();
    piStack_1f0 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1f4 = (int *)0x61bf6f;
    FUN_0040263d();
    piStack_1f4 = (int *)0x61bf76;
    psVar6 = (short *)FUN_004048a4();
    sVar1 = *psVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    if (sVar1 == 8) {
      piStack_1ec = *(int **)(psVar6 + 4);
    }
    else {
      piStack_1ec = (int *)&DAT_0097812c;
    }
    piStack_1f0 = (int *)0x61bf9f;
    FUN_00402e8e();
    piStack_1ec = (int *)0x61bfa7;
    FUN_00408b49();
    piStack_1ec = (int *)0x61bfae;
    FUN_00402fa6();
    iVar3 = *(int *)(unaff_EBP + -0x24);
    *piVar7 = iVar3;
    if (iVar3 != 0) {
      piStack_1ec = (int *)0x61bfbc;
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    piStack_1ec = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1f0 = (int *)0x61bfcf;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61bfda;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    while( true ) {
      piStack_1ec = (int *)0x61bfe5;
      FUN_0087a1b0();
      piStack_1f0 = *(int **)(unaff_EBP + -0x2c);
      piStack_1f4 = (int *)0x61bff0;
      piStack_1ec = (int *)&stack0xfffffe18;
      piStack_1f0 = (int *)FUN_00412335();
      *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
      piStack_1f4 = (int *)0x61bffe;
      FUN_00402e8e();
      piStack_1f0 = (int *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x6f;
      piStack_1f4 = (int *)0x61c011;
      FUN_0040263d();
      piStack_1f4 = (int *)0x61c018;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x77;
      if (*(short *)(unaff_EBP + -0xc4) == 0) break;
      piStack_1f0 = (int *)(unaff_EBP + -0xc4);
      *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
      piStack_1f4 = (int *)0x61c03b;
      FUN_0040675b();
      piStack_1f0 = *(int **)(unaff_EBP + 8);
      *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
      piStack_1f4 = extraout_ECX_17;
      FUN_00424dbc(unaff_EBP + 0x10);
      puVar5 = (undefined4 *)FUN_007d6c55(unaff_EBP + -0x50);
      piStack_1ec = (int *)*puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x78;
      piStack_1f0 = (int *)0x61c067;
      FUN_00432cfc();
      *(undefined1 *)(unaff_EBP + -4) = 0x7a;
      piStack_1ec = (int *)0x61c073;
      FUN_00414ebb();
      piStack_1ec = (int *)0xffffffff;
      piStack_1f0 = (int *)0x61c07d;
      FUN_004d6cfb();
      piStack_1ec = (int *)(unaff_EBP + -0x1c);
      piStack_1f0 = (int *)0x61c088;
      FUN_00402f41();
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piStack_1ec = (int *)0x61c094;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      piStack_1ec = (int *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x6f;
      piStack_1f0 = (int *)0x61c0a7;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61c0b2;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    }
    piStack_1ec = (int *)(unaff_EBP + -0xc4);
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    piStack_1f0 = (int *)0x61c0ca;
    piVar7 = (int *)FUN_00402bc3();
    if ((int)piVar7 < 0) {
      piStack_1f0 = (int *)0x61c0d5;
      piStack_1ec = piVar7;
      FUN_00878dfb();
      piStack_1ec = extraout_ECX_18;
    }
    piVar7 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    if (piVar7 != (int *)0x0) {
      piStack_1f0 = (int *)0x61c0e6;
      piStack_1ec = piVar7;
      (**(code **)(*piVar7 + 8))();
      piStack_1ec = extraout_ECX_19;
    }
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
  }
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
  piStack_1f4 = piVar7;
  FUN_00679e4e(&piStack_1f4,0xf16);
  iVar3 = unaff_EBP + -0x118;
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x7c;
  piStack_1f4 = (int *)0x61c12c;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0x68);
    piStack_1f0 = (int *)0x61c148;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61c159;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x118);
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  piStack_1f0 = (int *)0x61c169;
  piStack_1ec = (int *)FUN_00402bc3();
  if ((int)piStack_1ec < 0) {
    piStack_1f0 = (int *)0x61c174;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  while (*(int *)(unaff_EBP + -0x9c) != 0) {
    piStack_1ec = (int *)0x61c18b;
    FUN_0087a1b0();
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    piStack_1f4 = (int *)&stack0xfffffe18;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x44));
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0xd8;
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x80;
    piStack_1f4 = (int *)0x61c1cc;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x50) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x50);
      piStack_1f0 = (int *)0x61c1e2;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61c1f3;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    piStack_1f0 = (int *)0x61c203;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61c20e;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x30) == 0) break;
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61c224;
    puVar5 = (undefined4 *)FUN_0061d4f8();
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5db;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x84;
    piStack_1f4 = (int *)0x61c25e;
    uVar4 = FUN_00412550();
    *puVar5 = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61c27d;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
    piStack_1f4 = (int *)0x5dc;
    FUN_00679e4e(&piStack_1f0);
    piStack_1f4 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    FUN_0040263d();
    piStack_1f0 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    piStack_1f4 = (int *)0x61c2b5;
    uVar4 = FUN_00412550();
    puVar5[1] = uVar4;
    piStack_1f4 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61c2d5;
      FUN_00878dfb();
    }
    piStack_1ec = (int *)0xffffffff;
    piStack_1f0 = (int *)0x61c2df;
    piVar7 = (int *)FUN_0061d2cf();
    piStack_1f4 = (int *)&piStack_1ec;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
    piStack_1f0 = (int *)0x43d;
    FUN_00679e4e();
    piStack_1f0 = (int *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    piStack_1f4 = (int *)0x61c307;
    FUN_0040263d();
    piStack_1f4 = (int *)0x61c30e;
    psVar6 = (short *)FUN_004048a4();
    sVar1 = *psVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    if (sVar1 == 8) {
      piStack_1ec = *(int **)(psVar6 + 4);
    }
    else {
      piStack_1ec = (int *)&DAT_0097812c;
    }
    piStack_1f0 = (int *)0x61c32b;
    FUN_00402e8e();
    piStack_1ec = (int *)0x61c333;
    FUN_00408b49();
    piStack_1ec = (int *)0x61c33a;
    FUN_00402fa6();
    iVar3 = *(int *)(unaff_EBP + -0x24);
    *piVar7 = iVar3;
    if (iVar3 != 0) {
      piStack_1ec = (int *)0x61c348;
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    piStack_1ec = (int *)(unaff_EBP + -0x138);
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    piStack_1f0 = (int *)0x61c35b;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61c366;
      FUN_00878dfb();
    }
    piStack_1ec = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    if (piStack_1ec != (int *)0x0) {
      piStack_1f0 = (int *)0x61c377;
      (**(code **)(*piStack_1ec + 8))();
    }
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  piStack_1ec = (int *)0x61c38b;
  FUN_0087a1b0();
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)0x0;
  piStack_1f4 = (int *)&stack0xfffffe18;
  uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + 8));
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
  FUN_004033a1(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  FUN_0040263d();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  FUN_004048a4(unaff_EBP + -0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  piStack_1f4 = (int *)0x61c3cf;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x50) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 != 0) {
    piStack_1ec = (int *)(unaff_EBP + -0x50);
    piStack_1f0 = (int *)0x61c3e5;
    piStack_1ec = (int *)FUN_00404b30();
    if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
      piStack_1f0 = (int *)0x61c3f6;
      FUN_00878dfb();
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 0x8d;
  piStack_1f0 = (int *)0x61c406;
  piVar8 = (int *)FUN_00402bc3();
  piVar7 = piStack_1ec;
  if ((int)piVar8 < 0) {
    piStack_1f0 = (int *)0x61c411;
    piStack_1ec = piVar8;
    FUN_00878dfb();
    piVar7 = extraout_ECX_20;
  }
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    piStack_1ec = (int *)0x0;
    piStack_1f0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    piStack_1f4 = piVar7;
    FUN_004033a1(u_autoSpekaing_00968208);
    *(undefined1 *)(unaff_EBP + -4) = 0x8e;
    FUN_0040263d();
    *(undefined1 *)(unaff_EBP + -4) = 0x8d;
    FUN_004048a4(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x8f;
    piStack_1f4 = (int *)0x61c455;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x70) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar3 != 0) {
      piStack_1ec = (int *)(unaff_EBP + -0x70);
      piStack_1f0 = (int *)0x61c46b;
      piStack_1ec = (int *)FUN_00404b30();
      if (((int)piStack_1ec < 0) && (piStack_1ec != (int *)0x80004002)) {
        piStack_1f0 = (int *)0x61c47c;
        FUN_00878dfb();
      }
    }
    piStack_1ec = (int *)(unaff_EBP + -0x108);
    *(undefined1 *)(unaff_EBP + -4) = 0x91;
    piStack_1f0 = (int *)0x61c48c;
    piStack_1ec = (int *)FUN_00402bc3();
    if ((int)piStack_1ec < 0) {
      piStack_1f0 = (int *)0x61c497;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_1ec = (int *)0x61c4bd;
      piStack_1f4 = (int *)FUN_0040cf4d();
      piStack_1ec = (int *)(unaff_EBP + -0x11);
      piStack_1f0 = (int *)0x1;
      *(int **)(unaff_EBP + -0x78) = piStack_1f4;
      FUN_0046691d();
      for (piVar7 = (int *)0x0; (int)piVar7 < *(int *)(unaff_EBP + -0x78);
          piVar7 = (int *)((int)piVar7 + 1)) {
        piStack_1ec = (int *)0x61c4e5;
        FUN_0087a1b0();
        piStack_1f4 = (int *)0x61c4ee;
        piStack_1f0 = piVar7;
        piStack_1ec = (int *)&stack0xfffffe18;
        piStack_1f0 = (int *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
        piStack_1f4 = (int *)0x61c4fc;
        FUN_004033a1();
        *(undefined1 *)(unaff_EBP + -4) = 0x92;
        piStack_1f0 = (int *)0x61c508;
        FUN_0040263d();
        piStack_1f0 = (int *)(unaff_EBP + -0xe8);
        *(undefined1 *)(unaff_EBP + -4) = 0x91;
        piStack_1f4 = (int *)0x61c51a;
        psVar6 = (short *)FUN_004048a4();
        sVar1 = *psVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x93;
        if (sVar1 == 8) {
          piStack_1f0 = *(int **)(psVar6 + 4);
        }
        else {
          piStack_1f0 = (int *)&DAT_0097812c;
        }
        piStack_1ec = (int *)0xffffffff;
        piStack_1f4 = (int *)0x61c53f;
        FUN_00454081();
        piStack_1ec = (int *)(unaff_EBP + -0xe8);
        *(undefined1 *)(unaff_EBP + -4) = 0x91;
        piStack_1f0 = (int *)0x61c54f;
        piStack_1ec = (int *)FUN_00402bc3();
        if ((int)piStack_1ec < 0) {
          piStack_1f0 = (int *)0x61c55a;
          FUN_00878dfb();
        }
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x8d;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61c575;
        (**(code **)(*piStack_1ec + 8))();
      }
    }
    piStack_1ec = *(int **)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    if (piStack_1ec != (int *)0x0) {
      piStack_1f0 = (int *)0x61c4b3;
      (**(code **)(*piStack_1ec + 8))();
      uVar10 = FUN_0061c587();
      return uVar10;
    }
  }
  piStack_1ec = (int *)(unaff_EBP + -0x11);
  piStack_1f0 = (int *)0x1;
  piStack_1f4 = (int *)0x7;
  *(undefined4 *)(unaff_EBP + -4) = 0x7e;
  FUN_0046691d();
  iVar3 = 0;
  do {
    piStack_1ec = (int *)0x61c5ae;
    piStack_1f0 = (int *)FUN_00411641();
    *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
    piStack_1f4 = (int *)0x61c5ba;
    FUN_00402e8e();
    piStack_1f0 = *(int **)(unaff_EBP + 8);
    *(int ***)(unaff_EBP + -0x18) = &piStack_1f4;
    piStack_1f4 = extraout_ECX_21;
    FUN_00424dbc(unaff_EBP + 0x10);
    FUN_007d6c55(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x95;
    if ((*(char **)(unaff_EBP + -0x24) != (char *)0x0) && (**(char **)(unaff_EBP + -0x24) != '\0'))
    {
      piStack_1ec = (int *)(unaff_EBP + -0x24);
      piStack_1f0 = (int *)0x61c5f8;
      FUN_00414f8b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    piStack_1ec = (int *)0x61c604;
    FUN_00414ebb();
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x18);
  piStack_1f4 = (int *)&piStack_1ec;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
  piStack_1f0 = (int *)0x411;
  FUN_00679e4e();
  piStack_1f0 = (int *)(unaff_EBP + -0x158);
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  piStack_1f4 = (int *)0x61c632;
  FUN_0040263d();
  piStack_1f4 = (int *)0x61c639;
  FUN_004048a4();
  piStack_1f4 = (int *)&piStack_1ec;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
  piStack_1f0 = (int *)0x3ef;
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  FUN_00679e4e();
  piStack_1f0 = (int *)(unaff_EBP + -0x168);
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  piStack_1f4 = (int *)0x61c663;
  FUN_0040263d();
  piStack_1f4 = (int *)0x61c66a;
  FUN_004048a4();
  piStack_1f4 = (int *)&piStack_1ec;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1ec;
  piStack_1f0 = (int *)0x5c8;
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  FUN_00679e4e();
  piStack_1f0 = (int *)(unaff_EBP + -0x188);
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  piStack_1f4 = (int *)0x61c694;
  FUN_0040263d();
  piStack_1f4 = (int *)0x61c69b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1f0 = (int *)(uint)(*(short *)(unaff_EBP + -0x158) != 0);
  if (*(short *)(unaff_EBP + -0x188) == 0) {
    if ((piStack_1f0 == (int *)0x0) || (*(short *)(unaff_EBP + -0x168) == 0)) {
      piStack_1ec = (int *)(unaff_EBP + -0x188);
      *(undefined1 *)(unaff_EBP + -4) = 0x99;
      piStack_1f0 = (int *)0x61d029;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61d034;
        FUN_00878dfb();
      }
      piStack_1ec = (int *)(unaff_EBP + -0x168);
      *(undefined1 *)(unaff_EBP + -4) = 0x97;
      piStack_1f0 = (int *)0x61d044;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61d04f;
        FUN_00878dfb();
      }
      piStack_1ec = (int *)(unaff_EBP + -0x158);
      *(undefined1 *)(unaff_EBP + -4) = 0x7e;
      piStack_1f0 = (int *)0x61d05f;
      piStack_1ec = (int *)FUN_00402bc3();
      if ((int)piStack_1ec < 0) {
        piStack_1f0 = (int *)0x61d06a;
        FUN_00878dfb();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d07e;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
LAB_0061d088:
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d092;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d0a6;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d0b7;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d0c8;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d0d9;
        (**(code **)(*piStack_1ec + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        piStack_1ec = (int *)0x0;
        piStack_1f0 = (int *)0x61d0eb;
        FUN_0061d2a0();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
      }
      piStack_1ec = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d0fe;
        (**(code **)(*piStack_1ec + 8))();
      }
      piStack_1ec = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_1ec != (int *)0x0) {
        piStack_1f0 = (int *)0x61d10f;
        (**(code **)(*piStack_1ec + 8))();
      }
LAB_0061d10f:
      uVar10 = 0;
      goto LAB_0061d111;
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8) = 2;
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8) = 3;
  }
  piStack_1ec = (int *)0x3;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0x437;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  piStack_1f4 = (int *)0x61c728;
  uVar4 = FUN_00412550();
  piStack_1ec = (int *)0x61c734;
  iVar3 = FUN_0061d22d();
  *(undefined4 *)(iVar3 + 0xc) = uVar4;
  piStack_1ec = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1f0 = (int *)0x61c747;
  piVar7 = (int *)FUN_00402bc3();
  piStack_1f0 = piStack_1ec;
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61c752;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1f0 = extraout_ECX_22;
  }
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0x95a;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  piStack_1f4 = (int *)0x61c78a;
  uVar4 = FUN_00412550();
  piStack_1ec = (int *)0x61c796;
  iVar3 = FUN_0061d22d();
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  piStack_1ec = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1f0 = (int *)0x61c7a9;
  piVar7 = (int *)FUN_00402bc3();
  piStack_1f0 = piStack_1ec;
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61c7b4;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1f0 = extraout_ECX_23;
  }
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0x959;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa1;
  piStack_1f4 = (int *)0x61c7ec;
  uVar4 = FUN_00412550();
  piStack_1ec = (int *)0x61c7f8;
  iVar3 = FUN_0061d22d();
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  piStack_1ec = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1f0 = (int *)0x61c80b;
  piVar7 = (int *)FUN_00402bc3();
  piStack_1f0 = piStack_1ec;
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61c816;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1f0 = extraout_ECX_24;
  }
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd1;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa3;
  piStack_1f4 = (int *)0x61c84e;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61c860;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x18) = (uint)(iVar3 != 0);
  piStack_1ec = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1f0 = (int *)0x61c873;
  piVar7 = (int *)FUN_00402bc3();
  piStack_1f0 = piStack_1ec;
  if ((int)piVar7 < 0) {
    piStack_1f0 = (int *)0x61c87e;
    piStack_1ec = piVar7;
    FUN_00878dfb();
    piStack_1f0 = extraout_ECX_25;
  }
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd4;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa5;
  piStack_1f4 = (int *)0x61c8b6;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61c8c8;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x1c) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61c8da;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd5;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  piStack_1f4 = (int *)0x61c912;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61c924;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x20) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61c936;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd6;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  piStack_1f4 = (int *)0x61c96e;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61c980;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x24) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61c992;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd8;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xab;
  piStack_1f4 = (int *)0x61c9ca;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61c9dc;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x28) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61c9ee;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xbd9;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xad;
  piStack_1f4 = (int *)0x61ca26;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61ca38;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x2c) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61ca4a;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0x11de;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xaf;
  piStack_1f4 = (int *)0x61ca82;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61ca94;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x30) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61caa6;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0xdb2;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb1;
  piStack_1f4 = (int *)0x61cade;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61caf0;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x34) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61cb02;
  FUN_00404892();
  piStack_1ec = (int *)0x0;
  *(int ***)(unaff_EBP + -0x18) = &piStack_1f0;
  piStack_1f4 = (int *)0x11e1;
  FUN_00679e4e(&piStack_1f0);
  piStack_1f4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_1f0 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb3;
  piStack_1f4 = (int *)0x61cb3a;
  iVar3 = FUN_00412550();
  piStack_1ec = (int *)0x61cb4c;
  iVar9 = FUN_0061d22d();
  *(uint *)(iVar9 + 0x38) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_1ec = (int *)0x61cb5e;
  FUN_00404892();
  piStack_1ec = (int *)(unaff_EBP + -0x74);
  piStack_1f0 = (int *)0x61cb6a;
  FUN_0040263d();
  piStack_1f0 = (int *)0x61cb71;
  piStack_1ec = (int *)FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0xb4;
  piStack_1f0 = (int *)0x61cb81;
  FUN_004035f5();
  piStack_1ec = (int *)0x61cb89;
  FUN_00402623();
  piStack_1ec = (int *)0x61cb94;
  FUN_00550bb6();
  *(undefined1 *)(unaff_EBP + -4) = 0xb7;
  *(undefined4 *)(unaff_EBP + -200) = 0;
  while( true ) {
    piStack_1ec = (int *)0x61cba9;
    piVar7 = (int *)FUN_005593b9();
    piStack_1ec = (int *)(unaff_EBP + -200);
    piStack_1f0 = (int *)(unaff_EBP + -0x128);
    piStack_1f4 = (int *)0x1;
    iVar3 = (**(code **)(*piVar7 + 0xc))(piVar7);
    if (iVar3 != 0) break;
    piVar7 = *(int **)(unaff_EBP + -0x120);
    piStack_1ec = (int *)0x3b4;
    piStack_1f0 = (int *)(unaff_EBP + -0x7c);
    piStack_1f4 = (int *)0x61cbdd;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xb8;
    piStack_1ec = (int *)0x61cbe8;
    piStack_1ec = (int *)FUN_00411641();
    piStack_1f4 = (int *)0x61cbef;
    piStack_1f0 = piVar7;
    iVar3 = FUN_0087c71f();
    if (iVar3 == 0) {
LAB_0061cee4:
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
    }
    else {
      piStack_1ec = (int *)0x6af;
      piStack_1f0 = (int *)(unaff_EBP + -0x6c);
      piStack_1f4 = (int *)0x61cc09;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xb9;
      piStack_1ec = (int *)0x61cc14;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cc1b;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cc32;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x6a3;
      piStack_1f0 = (int *)(unaff_EBP + -0x50);
      piStack_1f4 = (int *)0x61cc4b;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xba;
      piStack_1ec = (int *)0x61cc56;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cc5d;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cc74;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x6ae;
      piStack_1f0 = (int *)(unaff_EBP + -0x70);
      piStack_1f4 = (int *)0x61cc8d;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbb;
      piStack_1ec = (int *)0x61cc98;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cc9f;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61ccb6;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x3ef;
      piStack_1f0 = (int *)(unaff_EBP + -0x78);
      piStack_1f4 = (int *)0x61cccf;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbc;
      piStack_1ec = (int *)0x61ccda;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cce1;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61ccf8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x40c;
      piStack_1f0 = (int *)(unaff_EBP + -0x94);
      piStack_1f4 = (int *)0x61cd14;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbd;
      piStack_1ec = (int *)0x61cd1f;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cd26;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cd40;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x40d;
      piStack_1f0 = (int *)(unaff_EBP + -0x98);
      piStack_1f4 = (int *)0x61cd5c;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbe;
      piStack_1ec = (int *)0x61cd67;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cd6e;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cd88;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x411;
      piStack_1f0 = (int *)(unaff_EBP + -0xb0);
      piStack_1f4 = (int *)0x61cda4;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbf;
      piStack_1ec = (int *)0x61cdaf;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cdb6;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cdd0;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x437;
      piStack_1f0 = (int *)(unaff_EBP + -0xa8);
      piStack_1f4 = (int *)0x61cdec;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc0;
      piStack_1ec = (int *)0x61cdf7;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cdfe;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61ce18;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x435;
      piStack_1f0 = (int *)(unaff_EBP + -0xb4);
      piStack_1f4 = (int *)0x61ce34;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc1;
      piStack_1ec = (int *)0x61ce3f;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61ce46;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61ce60;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x436;
      piStack_1f0 = (int *)(unaff_EBP + -0x58);
      piStack_1f4 = (int *)0x61ce75;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc2;
      piStack_1ec = (int *)0x61ce80;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61ce87;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61ce9e;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != '\0') goto LAB_0061cee4;
      piStack_1ec = (int *)0x438;
      piStack_1f0 = (int *)(unaff_EBP + -100);
      piStack_1f4 = (int *)0x61ceb3;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc3;
      piStack_1ec = (int *)0x61cebe;
      piStack_1ec = (int *)FUN_00411641();
      piStack_1f4 = (int *)0x61cec5;
      piStack_1f0 = piVar7;
      iVar3 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar3 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      piStack_1ec = (int *)0x61cedc;
      FUN_00402676();
      cVar2 = *(char *)(unaff_EBP + -0x11);
      *(undefined1 *)(unaff_EBP + -0x11) = 0;
      if (cVar2 != '\0') goto LAB_0061cee4;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb7;
    piStack_1ec = (int *)0x61cef4;
    FUN_00402676();
    if (*(char *)(unaff_EBP + -0x11) == '\0') {
      piStack_1ec = (int *)(unaff_EBP + -0x128);
      piStack_1f0 = (int *)(unaff_EBP + -0xa4);
      piStack_1f4 = (int *)0x61cf0c;
      piStack_1f0 = (int *)FUN_00405a23();
      piStack_1ec = (int *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 0xc4;
      piStack_1f4 = (int *)0x61cf1d;
      FUN_0061d22d();
      piStack_1f4 = (int *)0x61cf27;
      FUN_0061d1e7();
      *(undefined1 *)(unaff_EBP + -4) = 0xb7;
      piStack_1ec = (int *)0x61cf36;
      FUN_00403621();
    }
    piStack_1ec = (int *)0x61cf41;
    FUN_00550ba4();
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  piStack_1ec = (int *)0x0;
  piStack_1f0 = (int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  piStack_1f4 = (int *)0x61cf5d;
  iVar3 = FUN_0061d57d();
  if (iVar3 == 0) {
    piStack_1ec = (int *)(unaff_EBP + -0x3c);
    piStack_1f0 = (int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    piStack_1f4 = (int *)0x61cf73;
    FUN_0061d204();
  }
  uVar10 = (uint)(iVar3 == 0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb6;
  piStack_1ec = (int *)0x61cf85;
  FUN_00404892();
  piStack_1ec = (int *)0x61cf90;
  FUN_00402653();
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  piStack_1ec = (int *)0x61cf9f;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  piStack_1ec = (int *)0x61cfae;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  piStack_1ec = (int *)0x61cfbd;
  FUN_00404892();
  piStack_1ec = (int *)0x61cfc8;
  FUN_00402630();
  piStack_1ec = (int *)0x61cfd3;
  FUN_00402630();
  piStack_1ec = (int *)0x61cfde;
  FUN_00402630();
  piStack_1ec = (int *)0x61cfe6;
  FUN_00402630();
  piStack_1ec = (int *)0x61cfee;
  FUN_00402630();
  piStack_1ec = (int *)0x61cff6;
  FUN_00402630();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_1ec = (int *)0x61d002;
  FUN_0061d217();
  piStack_1ec = (int *)0x61d00a;
  FUN_00402630();
  piStack_1ec = (int *)0x61d012;
  FUN_00402630();
LAB_0061d111:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar10;
}


