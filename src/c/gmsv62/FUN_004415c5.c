/* FUN_004415c5 - 0x004415c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004415c5(void)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar8;
  int extraout_ECX_02;
  uint uVar9;
  int unaff_EBP;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *puStack_18c;
  int iStack_188;
  IBinding *pIVar10;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x4a8);
  *(int *)(unaff_EBP + -0x84) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar4 != 0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    goto LAB_00442319;
  }
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    goto LAB_00442319;
  }
  iStack_188 = unaff_EBP + -0x24;
  puStack_18c = (undefined1 *)0x441612;
  FUN_0054e2c6();
  psVar1 = *(short **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
  }
  else {
    iStack_188 = 0x44165b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_188 = 0x44166b;
    FUN_00403191();
    iStack_188 = 0;
    puStack_18c = (undefined1 *)(unaff_EBP + -0x130);
    puStack_190 = (undefined1 *)(unaff_EBP + -0x120);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_194 = (undefined1 *)0x441687;
    uVar3 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_194;
    FUN_004033a1(uVar3);
    iVar4 = unaff_EBP + -0x180;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_18c = (undefined1 *)0x4416bc;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x80) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar4 != 0) {
      iStack_188 = 0x4416d2;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_188 = 0x4416e3;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_188 = 0x4416f3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x4416fe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_188 = 0x44170e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x441719;
      FUN_00878dfb();
    }
    puVar8 = (undefined1 *)(unaff_EBP + -0x130);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_188 = 0x441729;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x441734;
      FUN_00878dfb();
      puVar8 = extraout_ECX_00;
    }
    iStack_188 = 0;
    puStack_194 = (undefined1 *)&puStack_18c;
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_18c;
    puStack_190 = (undefined1 *)0x3b4;
    puStack_18c = puVar8;
    FUN_00679e4e();
    puStack_190 = (undefined1 *)(unaff_EBP + -0x160);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_194 = (undefined1 *)0x441761;
    FUN_0040263d();
    puStack_194 = (undefined1 *)0x441768;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_18c = (undefined1 *)0x441773;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x94) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar4 != 0) {
      iStack_188 = 0x44178f;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_188 = 0x4417a0;
        FUN_00878dfb();
      }
    }
    puVar8 = (undefined1 *)(unaff_EBP + -0x160);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_188 = 0x4417b0;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x4417bb;
      FUN_00878dfb();
      puVar8 = extraout_ECX_01;
    }
    iStack_188 = 0;
    puStack_194 = (undefined1 *)&puStack_18c;
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_18c;
    puStack_190 = (undefined1 *)0x674;
    puStack_18c = puVar8;
    FUN_00679e4e();
    puStack_190 = (undefined1 *)(unaff_EBP + -0x140);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_194 = (undefined1 *)0x4417e3;
    FUN_0040263d();
    puStack_194 = (undefined1 *)0x4417ea;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_18c = (undefined1 *)0x4417f5;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x88) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar4 != 0) {
      iStack_188 = 0x441811;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_188 = 0x441822;
        FUN_00878dfb();
      }
    }
    iVar4 = unaff_EBP + -0x140;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_188 = 0x441832;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_188 = 0x44183d;
      FUN_00878dfb();
      iVar4 = extraout_ECX_02;
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_190 = (undefined1 *)&iStack_188;
      *(int **)(unaff_EBP + 0xc) = &iStack_188;
      puStack_18c = (undefined1 *)0x70e;
      puStack_194 = (undefined1 *)0x441897;
      iStack_188 = iVar4;
      FUN_00679e4e();
      puStack_18c = (undefined1 *)(unaff_EBP + -0x170);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_190 = (undefined1 *)0x4418aa;
      FUN_0040263d();
      puStack_190 = (undefined1 *)0x4418b1;
      iStack_188 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_18c = (undefined1 *)0x4418bb;
      iStack_188 = FUN_004343c5();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      puStack_18c = (undefined1 *)0x4418cb;
      FUN_004184ca();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_188 = 0x4418db;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_188 = 0x4418e6;
        FUN_00878dfb();
      }
      if ((*(short **)(unaff_EBP + -0x28) == (short *)0x0) || (**(short **)(unaff_EBP + -0x28) == 0)
         ) {
        iVar4 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(unaff_EBP + -0x30) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_00402676();
        FUN_004027eb();
        FUN_004027eb();
        FUN_004027eb();
      }
      else {
        iStack_188 = 0x441934;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_188 = 0x441944;
        FUN_00403191();
        iStack_188 = unaff_EBP + -0x100;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_18c = (undefined1 *)0x44195e;
        puStack_190 = (undefined1 *)FUN_00411641();
        *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_18c;
        puStack_194 = (undefined1 *)0x44196a;
        FUN_004033a1();
        puStack_190 = (undefined1 *)(unaff_EBP + -0x150);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_194 = (undefined1 *)0x44197a;
        FUN_00405a1d();
        puStack_194 = (undefined1 *)0x441981;
        FUN_00402660();
        puStack_194 = (undefined1 *)0x441988;
        FUN_00404a02();
        iStack_188 = unaff_EBP + -0x90;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_18c = (undefined1 *)0x441999;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_188 = 0x4419a8;
        FUN_00417232();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (*(int **)(unaff_EBP + -0x90) != (int *)0x0) {
          iStack_188 = 0x4419bc;
          (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_188 = 0x4419cc;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_188 = 0x4419d7;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_188 = 0x4419e7;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_188 = 0x4419f2;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iStack_188 = 0x441a02;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_188 = 0x441a0d;
          FUN_00878dfb();
        }
        piVar7 = (int *)0x0;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
LAB_004422b1:
          iVar4 = *(int *)(unaff_EBP + 8);
          *(undefined4 *)(iVar4 + 4) = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (piVar7 != (int *)0x0) {
            iStack_188 = 0x4422cc;
            (**(code **)(*piVar7 + 8))();
          }
        }
        else {
          iVar4 = FUN_0040cf4d();
          if (iVar4 == 0) {
            piVar7 = *(int **)(unaff_EBP + -0x18);
            goto LAB_004422b1;
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_188 = 0x441a34;
            FUN_00878dfb();
          }
          iStack_188 = FUN_0040cf4d();
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          puStack_18c = (undefined1 *)0x441a4c;
          FUN_00445c8d();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          uVar9 = 0;
          while( true ) {
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              iStack_188 = 0x441a61;
              FUN_00878dfb();
            }
            uVar6 = FUN_0040cf4d();
            if (uVar6 <= uVar9) {
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x3cc;
              puStack_194 = (undefined1 *)0x441b7e;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441b8e;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441b95;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x26;
              puStack_18c = (undefined1 *)0x441b9f;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441baf;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441bbc;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0xdbd;
              puStack_194 = (undefined1 *)0x441bd0;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441be0;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441be7;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x28;
              puStack_18c = (undefined1 *)0x441bf1;
              iVar4 = FUN_00412550();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(uint *)(unaff_EBP + -0x98) = (uint)(iVar4 != 0);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441c0c;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441c19;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x474;
              puStack_194 = (undefined1 *)0x441c31;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441c41;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441c48;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x2a;
              puStack_18c = (undefined1 *)0x441c52;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x8c) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441c65;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441c72;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x3ce;
              puStack_194 = (undefined1 *)0x441c8a;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441c9a;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441ca1;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x2c;
              puStack_18c = (undefined1 *)0x441cab;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x5c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441cbb;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441cc8;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0xea2;
              puStack_194 = (undefined1 *)0x441cdd;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441ced;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441cf4;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x2e;
              puStack_18c = (undefined1 *)0x441cfe;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441d0e;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441d1b;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0xea4;
              puStack_194 = (undefined1 *)0x441d30;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441d40;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441d47;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x30;
              puStack_18c = (undefined1 *)0x441d51;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441d61;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441d6e;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0xea3;
              puStack_194 = (undefined1 *)0x441d83;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441d93;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441d9a;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x32;
              puStack_18c = (undefined1 *)0x441da4;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441db4;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441dc1;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0xea5;
              puStack_194 = (undefined1 *)0x441dd6;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441de6;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441ded;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x34;
              puStack_18c = (undefined1 *)0x441df7;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x50) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441e07;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441e14;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x5c0;
              puStack_194 = (undefined1 *)0x441e28;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441e38;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441e3f;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
              puStack_18c = (undefined1 *)0x441e49;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -100) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441e59;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441e66;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x5c1;
              puStack_194 = (undefined1 *)0x441e84;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441e94;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441e9b;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x38;
              puStack_18c = (undefined1 *)0x441ea5;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x4c);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441eb5;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441ec2;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x5c2;
              puStack_194 = (undefined1 *)0x441ed8;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441ee8;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441eef;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x3a;
              puStack_18c = (undefined1 *)0x441ef9;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441f09;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441f16;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x5c3;
              puStack_194 = (undefined1 *)0x441f2c;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441f3c;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441f43;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x3c;
              puStack_18c = (undefined1 *)0x441f4d;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441f5d;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441f6a;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x110e;
              puStack_194 = (undefined1 *)0x441f7f;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441f8f;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441f96;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x3e;
              puStack_18c = (undefined1 *)0x441fa0;
              iVar4 = FUN_00412550();
              *(uint *)(unaff_EBP + -0x1c) = (uint)(iVar4 != 0);
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441fb6;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                iStack_188 = 0x441fc3;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x110e;
              puStack_194 = (undefined1 *)0x441fd4;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x441fe4;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x441feb;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x40;
              puStack_18c = (undefined1 *)0x441ff5;
              iVar4 = FUN_00412550();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x44200a;
              iVar5 = FUN_00402bc3();
              if (iVar5 < 0) {
                iStack_188 = 0x442017;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x14) = &iStack_188;
              puStack_18c = (undefined1 *)0x1110;
              puStack_194 = (undefined1 *)0x44202b;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x44203b;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x442042;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x42;
              puStack_18c = (undefined1 *)0x44204c;
              iVar5 = FUN_00412550();
              *(uint *)(unaff_EBP + -0x14) = (uint)(iVar5 != 0);
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x442062;
              iVar5 = FUN_00402bc3();
              if (iVar5 < 0) {
                iStack_188 = 0x44206f;
                FUN_00878dfb();
              }
              puStack_190 = (undefined1 *)&iStack_188;
              *(int **)(unaff_EBP + -0x78) = &iStack_188;
              puStack_18c = (undefined1 *)0x110f;
              puStack_194 = (undefined1 *)0x442083;
              FUN_00679e4e();
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x442093;
              FUN_0040263d();
              puStack_190 = (undefined1 *)0x44209a;
              iStack_188 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x44;
              puStack_18c = (undefined1 *)0x4420a4;
              uVar3 = FUN_00412550();
              *(undefined4 *)(unaff_EBP + -0x78) = uVar3;
              puStack_18c = (undefined1 *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              puStack_190 = (undefined1 *)0x4420b4;
              iVar5 = FUN_00402bc3();
              if (iVar5 < 0) {
                iStack_188 = 0x4420c1;
                FUN_00878dfb();
              }
              iVar5 = *(int *)(unaff_EBP + -0x84);
              piVar7 = *(int **)(iVar5 + 0xcb0);
              *(int **)(unaff_EBP + -0x38) = piVar7;
              if (piVar7 != (int *)0x0) {
                iStack_188 = 0x4420da;
                (**(code **)(*piVar7 + 4))();
              }
              if (*(int *)(unaff_EBP + -0x1c) == 0) {
                iVar2 = *(int *)(unaff_EBP + 0x10);
                if ((iVar2 < 0) ||
                   (((4 < iVar2 && (iVar2 != 9)) &&
                    ((iVar2 < 0xc || ((0xd < iVar2 && ((iVar2 < 0xf || (0x10 < iVar2)))))))))) {
                  pIVar10 = *(IBinding **)(iVar5 + 0xcb4);
                }
                else {
                  pIVar10 = *(IBinding **)(iVar5 + 0xcb0);
                }
                iStack_188 = 0x44211a;
                _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                          ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x38),
                           pIVar10);
              }
              *(undefined4 *)(unaff_EBP + -0xf0) = 0;
              *(undefined4 *)(unaff_EBP + -0xec) = 0;
              *(undefined4 *)(unaff_EBP + -0xe8) = 0;
              *(undefined4 *)(unaff_EBP + -0x9c) = 0;
              *(undefined1 *)(unaff_EBP + -4) = 0x46;
              iStack_188 = 0x442145;
              FUN_00435553();
              iStack_188 = 0x442153;
              _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                        ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0xec),
                         *(IBinding **)(unaff_EBP + -0x38));
              piVar7 = *(int **)(unaff_EBP + -0xe8);
              if (piVar7 != *(int **)(iVar5 + 0xcc4)) {
                *(int **)(unaff_EBP + -0xe8) = *(int **)(iVar5 + 0xcc4);
                FUN_00424ed4();
                if (piVar7 != (int *)0x0) {
                  iStack_188 = 0x44217e;
                  (**(code **)(*piVar7 + 8))();
                }
              }
              *(undefined4 *)(unaff_EBP + -0xe4) = *(undefined4 *)(unaff_EBP + -0x5c);
              *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0x58);
              *(undefined4 *)(unaff_EBP + -0xdc) = *(undefined4 *)(unaff_EBP + -0x54);
              *(undefined4 *)(unaff_EBP + -0xd8) = *(undefined4 *)(unaff_EBP + -0x50);
              *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(unaff_EBP + -100);
              *(undefined4 *)(unaff_EBP + -0xd0) = *(undefined4 *)(unaff_EBP + -0x60);
              *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -0x44);
              *(undefined4 *)(unaff_EBP + -200) = *(undefined4 *)(unaff_EBP + -0x40);
              *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(unaff_EBP + -0x3c);
              *(undefined4 *)(unaff_EBP + -0xc0) = *(undefined4 *)(unaff_EBP + -0x8c);
              *(undefined4 *)(unaff_EBP + -0xbc) = *(undefined4 *)(unaff_EBP + -0x7c);
              *(undefined4 *)(unaff_EBP + -0xb8) = *(undefined4 *)(unaff_EBP + -0x98);
              *(undefined4 *)(unaff_EBP + -0xb4) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + -0x78);
              *(uint *)(unaff_EBP + -0xac) = (uint)(iVar4 != 0);
              iStack_188 = 0x4421fd;
              iVar4 = FUN_004029b9();
              *(int *)(unaff_EBP + 0x10) = iVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x47;
              if (iVar4 == 0) {
                iVar5 = 0;
              }
              else {
                iStack_188 = unaff_EBP + -0xf0;
                puStack_18c = (undefined1 *)0x442219;
                iVar5 = FUN_0054d2e2();
              }
              iVar4 = *(int *)(unaff_EBP + 8);
              *(int *)(iVar4 + 4) = iVar5;
              if (iVar5 != 0) {
                iStack_188 = 0x442231;
                InterlockedIncrement((LONG *)(iVar5 + 4));
              }
              *(undefined4 *)(unaff_EBP + -0x30) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 0x45;
              FUN_0043c3b7();
              *(undefined1 *)(unaff_EBP + -4) = 0x20;
              if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
                iStack_188 = 0x442258;
                (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              FUN_00438c5b();
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
                iStack_188 = 0x442275;
                (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              FUN_00402676();
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
                iStack_188 = 0x442292;
                (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
              }
              *(undefined1 *)(unaff_EBP + -4) = 7;
              if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
                iStack_188 = 0x4422a3;
                (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
              }
              piVar7 = *(int **)(unaff_EBP + -0x20);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              goto LAB_00442303;
            }
            FUN_0087a1b0();
            iStack_188 = 0;
            puStack_194 = (undefined1 *)0x441a84;
            puStack_190 = (undefined1 *)uVar9;
            puStack_18c = &stack0xfffffe80;
            puStack_190 = (undefined1 *)FUN_00412335();
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_18c;
            puStack_194 = (undefined1 *)0x441a90;
            FUN_004033a1();
            puStack_190 = (undefined1 *)(unaff_EBP + -0x5c);
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            puStack_194 = (undefined1 *)0x441aa0;
            FUN_0040263d();
            puStack_194 = (undefined1 *)0x441aa7;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            puStack_18c = (undefined1 *)0x441ab2;
            iVar4 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x3c) = iVar4;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            if (iVar4 != 0) {
              iStack_188 = 0x441ac8;
              iVar4 = FUN_00404b30();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                iStack_188 = 0x441ad9;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iStack_188 = 0x441ae6;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_188 = 0x441af1;
              FUN_00878dfb();
            }
            piVar7 = (int *)0x0;
            if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_00441b29;
            iVar4 = FUN_0040cf4d();
            if (iVar4 == 0) break;
            iStack_188 = 0x441b0f;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                       (*(int *)(unaff_EBP + -0x34) + uVar9 * 4),*(IBinding **)(unaff_EBP + -0x1c));
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              iStack_188 = 0x441b20;
              (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            }
            uVar9 = uVar9 + 1;
          }
          piVar7 = *(int **)(unaff_EBP + -0x1c);
LAB_00441b29:
          iVar4 = *(int *)(unaff_EBP + 8);
          *(undefined4 *)(iVar4 + 4) = 0;
          *(undefined4 *)(unaff_EBP + -0x30) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          if (piVar7 != (int *)0x0) {
            iStack_188 = 0x441b44;
            (**(code **)(*piVar7 + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00438c5b();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            iStack_188 = 0x441b65;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          iStack_188 = 0x4422e9;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          iStack_188 = 0x4422fa;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        piVar7 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_00442303:
        if (piVar7 != (int *)0x0) {
          iStack_188 = 0x44230b;
          (**(code **)(*piVar7 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      goto LAB_00442319;
    }
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    FUN_004027eb();
    FUN_004027eb();
    FUN_004027eb();
    psVar1 = *(short **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  if (psVar1 != (short *)0x0) {
    iStack_188 = 0x441644;
    FUN_00403384();
  }
LAB_00442319:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


