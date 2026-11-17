/* FUN_007599aa - 0x007599aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007599aa(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  short *psVar8;
  int *piVar9;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  undefined1 *puStack_c8;
  int iStack_c4;
  int *piStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 4);
  piStack_b8 = (int *)0x7599c7;
  FUN_004f1b19();
  piStack_b8 = &DAT_00980690;
  puStack_bc = (undefined *)0x7599d5;
  FUN_00403191();
  piStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_bc = (undefined *)0x7599e3;
  FUN_00403191();
  piStack_b8 = (int *)0x0;
  puStack_bc = (undefined *)0x0;
  piStack_c0 = (int *)(unaff_EBP + -0x54);
  iStack_c4 = unaff_EBP + -0x44;
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_c8 = extraout_ECX_00;
  FUN_004033a1(*(undefined4 *)(unaff_EBP + 8));
  iVar4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_c0 = (int *)0x759a25;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 0) {
    piStack_b8 = (int *)(unaff_EBP + -0x34);
    puStack_bc = (undefined *)0x759a3b;
    piStack_b8 = (int *)FUN_00404b30();
    if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
      puStack_bc = (undefined *)0x759a4c;
      FUN_00878dfb();
    }
  }
  piStack_b8 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_bc = (undefined *)0x759a59;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    puStack_bc = (undefined *)0x759a64;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_bc = (undefined *)0x759a71;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    puStack_bc = (undefined *)0x759a7c;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_bc = (undefined *)0x759a89;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    puStack_bc = (undefined *)0x759a94;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_b8 = (int *)0x759aa3;
    FUN_004027eb();
  }
  else {
    piStack_b8 = (int *)0x759aad;
    puStack_bc = (undefined *)FUN_0040cf4d();
    piStack_b8 = (int *)(unaff_EBP + 0xb);
    piStack_c0 = (int *)0x759ab9;
    FUN_0075bb4e();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_b8 = (int *)0x80004003;
        puStack_bc = (undefined *)0x759ace;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)0x759ad6;
      uVar5 = FUN_0040cf4d();
      if (uVar5 <= *(uint *)(unaff_EBP + -0x20)) break;
      piStack_b8 = (int *)0x759ae7;
      FUN_0087a1b0();
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined *)0x0;
      iStack_c4 = *(undefined4 *)(unaff_EBP + -0x20);
      puStack_c8 = (undefined1 *)0x759af4;
      piStack_c0 = (int *)&stack0xffffff4c;
      iStack_c4 = FUN_00412335();
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      puStack_c8 = (undefined1 *)0x759b00;
      FUN_004033a1();
      iStack_c4 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_c8 = (undefined1 *)0x759b13;
      FUN_0040263d();
      puStack_c8 = (undefined1 *)0x759b1a;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_c0 = (int *)0x759b25;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x2c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar4 != 0) {
        piStack_b8 = (int *)(unaff_EBP + -0x2c);
        puStack_bc = (undefined *)0x759b3b;
        piStack_b8 = (int *)FUN_00404b30();
        if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
          puStack_bc = (undefined *)0x759b4c;
          FUN_00878dfb();
        }
      }
      piStack_b8 = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_bc = (undefined *)0x759b5c;
      piVar6 = (int *)FUN_00402bc3();
      piVar9 = piStack_b8;
      if ((int)piVar6 < 0) {
        puStack_bc = (undefined *)0x759b67;
        piStack_b8 = piVar6;
        FUN_00878dfb();
        piVar9 = extraout_ECX_01;
      }
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined *)0x0;
      puStack_c8 = (undefined1 *)&piStack_c0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      iStack_c4 = 0x3ba;
      piStack_c0 = piVar9;
      FUN_00679e4e();
      iStack_c4 = unaff_EBP + -0xa4;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_c8 = (undefined1 *)0x759b94;
      FUN_0040263d();
      puStack_c8 = (undefined1 *)0x759b9b;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_c0 = (int *)0x759ba6;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x30) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar4 != 0) {
        piStack_b8 = (int *)(unaff_EBP + -0x30);
        puStack_bc = (undefined *)0x759bbc;
        piStack_b8 = (int *)FUN_0041a4e5();
        if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
          puStack_bc = (undefined *)0x759bcd;
          FUN_00878dfb();
        }
      }
      piStack_b8 = (int *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_bc = (undefined *)0x759bdd;
      piVar6 = (int *)FUN_00402bc3();
      piVar9 = piStack_b8;
      if ((int)piVar6 < 0) {
        puStack_bc = (undefined *)0x759be8;
        piStack_b8 = piVar6;
        FUN_00878dfb();
        piVar9 = extraout_ECX_02;
      }
      piStack_b8 = (int *)0x0;
      puStack_bc = (undefined *)0x0;
      puStack_c8 = (undefined1 *)&piStack_c0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_c0;
      iStack_c4 = 0x3bb;
      piStack_c0 = piVar9;
      FUN_00679e4e();
      iStack_c4 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_c8 = (undefined1 *)0x759c0d;
      FUN_0040263d();
      puStack_c8 = (undefined1 *)0x759c14;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_c0 = (int *)0x759c1f;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar4;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar4 != 0) {
        piStack_b8 = (int *)(unaff_EBP + -0x28);
        puStack_bc = (undefined *)0x759c35;
        piStack_b8 = (int *)FUN_0041a4e5();
        if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
          puStack_bc = (undefined *)0x759c46;
          FUN_00878dfb();
        }
      }
      piStack_b8 = (int *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_bc = (undefined *)0x759c53;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined *)0x759c5e;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_b8 = (int *)0x80004003;
        puStack_bc = (undefined *)0x759c6d;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar3 = *piVar1;
      piStack_b8 = (int *)0x759c7a;
      uVar7 = FUN_00404a94();
      *(undefined4 *)(iVar4 + iVar3) = uVar7;
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        piStack_b8 = (int *)0x80004003;
        puStack_bc = (undefined *)0x759c8b;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar3 = *piVar1;
      piStack_b8 = (int *)0x759c98;
      uVar7 = FUN_00404abb();
      *(undefined4 *)(iVar4 + iVar3 + 4) = uVar7;
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_b8 = (int *)0x80004003;
        puStack_bc = (undefined *)0x759caa;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar3 = *piVar1;
      piStack_b8 = (int *)0x759cb7;
      uVar7 = FUN_00404a94();
      *(undefined4 *)(iVar4 + iVar3 + 8) = uVar7;
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_b8 = (int *)0x80004003;
        puStack_bc = (undefined *)0x759cc9;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      iVar3 = *piVar1;
      piStack_b8 = (int *)0x759cd6;
      uVar7 = FUN_00404abb();
      piStack_c0 = (int *)&piStack_b8;
      *(undefined4 *)(iVar4 + iVar3 + 0xc) = uVar7;
      *(int ***)(unaff_EBP + -0x24) = &piStack_b8;
      puStack_bc = (undefined *)0x5a9;
      iStack_c4 = 0x759cef;
      FUN_00679e4e();
      puStack_bc = (undefined *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_c0 = (int *)0x759d02;
      FUN_0040263d();
      piStack_c0 = (int *)0x759d09;
      psVar8 = (short *)FUN_004048a4();
      sVar2 = *psVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (sVar2 == 8) {
        puStack_bc = *(undefined **)(psVar8 + 4);
      }
      else {
        puStack_bc = &DAT_0097812c;
      }
      iVar4 = *(int *)(unaff_EBP + -0x18);
      piStack_b8 = (int *)0xffffffff;
      piStack_c0 = (int *)0x759d2e;
      FUN_00454081();
      piStack_b8 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_bc = (undefined *)0x759d3e;
      piVar9 = (int *)FUN_00402bc3();
      if ((int)piVar9 < 0) {
        puStack_bc = (undefined *)0x759d49;
        piStack_b8 = piVar9;
        FUN_00878dfb();
        piStack_b8 = extraout_ECX_03;
      }
      piStack_c0 = (int *)&piStack_b8;
      *(int ***)(unaff_EBP + -0x24) = &piStack_b8;
      puStack_bc = (undefined *)0x5ab;
      iStack_c4 = 0x759d5f;
      FUN_00679e4e();
      puStack_bc = (undefined *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_c0 = (int *)0x759d72;
      FUN_0040263d();
      piStack_c0 = (int *)0x759d79;
      psVar8 = (short *)FUN_004048a4();
      sVar2 = *psVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (sVar2 == 8) {
        puStack_bc = *(undefined **)(psVar8 + 4);
      }
      else {
        puStack_bc = &DAT_0097812c;
      }
      piStack_b8 = (int *)0xffffffff;
      piStack_c0 = (int *)0x759d9b;
      FUN_00454081();
      piStack_b8 = (int *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_bc = (undefined *)0x759dab;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        puStack_bc = (undefined *)0x759db6;
        FUN_00878dfb();
      }
      piStack_b8 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piStack_b8 != (int *)0x0) {
        puStack_bc = (undefined *)0x759dc7;
        (**(code **)(*piStack_b8 + 8))();
      }
      piStack_b8 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (piStack_b8 != (int *)0x0) {
        puStack_bc = (undefined *)0x759dd8;
        (**(code **)(*piStack_b8 + 8))();
      }
      piStack_b8 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piStack_b8 != (int *)0x0) {
        puStack_bc = (undefined *)0x759de9;
        (**(code **)(*piStack_b8 + 8))();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      *(int *)(unaff_EBP + -0x18) = iVar4 + 0x18;
    }
    piStack_b8 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_b8 != (int *)0x0) {
      puStack_bc = (undefined *)0x759e08;
      (**(code **)(*piStack_b8 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


