/* FUN_00405efe - 0x00405efe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00405efe(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int *extraout_ECX_02;
  undefined1 *puVar6;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int iVar7;
  undefined1 *extraout_ECX_07;
  int iVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined1 *puStack_14c;
  int *piStack_148;
  int *piStack_144;
  
  FUN_00879bb8();
  piStack_144 = (int *)0x405f18;
  FUN_004011ba();
  piStack_144 = (int *)0x7d0;
  piStack_148 = (int *)(unaff_EBP + -0x3c);
  puStack_14c = (undefined1 *)0x405f28;
  iVar2 = FUN_004084c5();
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(iVar2 + 4);
  puVar6 = extraout_ECX;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    piStack_144 = (int *)0x0;
    piStack_148 = (int *)0x405f3e;
    FUN_00412f17();
    puVar6 = extraout_ECX_00;
  }
  piVar10 = &DAT_0097868c;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 **)(unaff_EBP + -0x20) = &DAT_0097868c;
  do {
    if (piVar10 != (int *)&DAT_00978a4c) {
      piStack_144 = (int *)0x0;
      piStack_148 = (int *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_14c;
      puStack_14c = puVar6;
      FUN_004833ff(&puStack_14c,*(undefined4 *)(unaff_EBP + -0x44));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = unaff_EBP + -0x130;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puStack_14c = (undefined1 *)0x405f98;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x60) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar2 != 0) {
        piStack_144 = (int *)(unaff_EBP + -0x60);
        piStack_148 = (int *)0x405fae;
        piStack_144 = (int *)FUN_00404b30();
        if (((int)piStack_144 < 0) && (piStack_144 != (int *)0x80004002)) {
          piStack_148 = (int *)0x405fbf;
          FUN_00878dfb();
        }
      }
      piStack_144 = (int *)(unaff_EBP + -0x130);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_148 = (int *)0x405fcf;
      piStack_144 = (int *)FUN_00402bc3();
      if ((int)piStack_144 < 0) {
        piStack_148 = (int *)0x405fda;
        FUN_00878dfb();
      }
      piVar10[-2] = 0;
      if (piVar10[-3] == 0) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_144 = (int *)0x80004003;
          piStack_148 = (int *)0x406396;
          FUN_00878dfb();
        }
        piStack_144 = (int *)0x40639e;
        iVar2 = FUN_0040cf4d();
        iVar5 = piVar10[-4];
        *(int *)(unaff_EBP + -0x18) = iVar2;
        if (iVar5 != 0) {
          iVar2 = iVar2 * 2 + -2;
        }
        *(int *)(unaff_EBP + -0x10) = iVar2;
        piStack_144 = (int *)(unaff_EBP + -0x3d);
        piStack_148 = *(int **)(unaff_EBP + -0x10);
        puStack_14c = (undefined1 *)0x4063bb;
        FUN_004134ed();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        if (0 < *(int *)(unaff_EBP + -0x18)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          do {
            piStack_144 = (int *)0x4063d6;
            FUN_0087a1b0();
            piStack_144 = (int *)0x0;
            piStack_148 = (int *)0x0;
            puStack_14c = &stack0xfffffec0;
            uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x2c));
            *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_14c;
            FUN_004033a1(uVar3);
            iVar2 = unaff_EBP + -0xa0;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            puStack_14c = (undefined1 *)0x406414;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x50) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
            if (iVar2 != 0) {
              piStack_144 = (int *)(unaff_EBP + -0x50);
              piStack_148 = (int *)0x40642a;
              piStack_144 = (int *)FUN_00404b30();
              if (((int)piStack_144 < 0) && (piStack_144 != (int *)0x80004002)) {
                piStack_148 = (int *)0x40643b;
                FUN_00878dfb();
              }
            }
            piStack_144 = (int *)(unaff_EBP + -0xa0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_148 = (int *)0x40644b;
            piVar4 = (int *)FUN_00402bc3();
            piStack_148 = piStack_144;
            if ((int)piVar4 < 0) {
              piStack_148 = (int *)0x406456;
              piStack_144 = piVar4;
              FUN_00878dfb();
              piStack_148 = extraout_ECX_05;
            }
            iVar2 = *piVar10 + *(int *)(unaff_EBP + -0x14);
            piStack_144 = (int *)0x96;
            *(undefined4 *)(iVar2 + 4) = 0;
            *(int ***)(unaff_EBP + -0x38) = &piStack_148;
            puStack_14c = (undefined1 *)0x474;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xc0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            puStack_14c = (undefined1 *)0x40649b;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar2 + 8) = uVar3;
            puStack_14c = (undefined1 *)(unaff_EBP + -0xc0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x4064bb;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x38) = &piStack_148;
            puStack_14c = (undefined1 *)0xfed;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xe0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            puStack_14c = (undefined1 *)0x4064f4;
            iVar5 = FUN_00412550();
            *(uint *)(iVar2 + 0x10) = (uint)(iVar5 != 0);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xe0);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x40651a;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x38) = &piStack_148;
            puStack_14c = (undefined1 *)0xfee;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0x100);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            puStack_14c = (undefined1 *)0x406553;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar2 + 0x14) = uVar3;
            puStack_14c = (undefined1 *)(unaff_EBP + -0x100);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x406573;
              FUN_00878dfb();
            }
            puStack_14c = (undefined1 *)&piStack_144;
            *(int ***)(unaff_EBP + -0x38) = &piStack_144;
            piStack_148 = (int *)0x3ef;
            FUN_00679e4e();
            piStack_148 = (int *)(unaff_EBP + -0x120);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            puStack_14c = (undefined1 *)0x406599;
            FUN_0040263d();
            puStack_14c = (undefined1 *)0x4065a0;
            piStack_144 = (int *)FUN_004048a4();
            piStack_148 = (int *)(unaff_EBP + -0x58);
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            puStack_14c = (undefined1 *)0x4065ae;
            piStack_144 = (int *)FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            piStack_148 = (int *)0x4065bd;
            FUN_00416f14();
            piStack_144 = *(int **)(unaff_EBP + -0x58);
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x4065ce;
              (**(code **)(*piStack_144 + 8))();
            }
            piStack_144 = (int *)(unaff_EBP + -0x120);
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            piStack_148 = (int *)0x4065de;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x4065e9;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x34) == 0) {
              *(undefined4 *)(iVar2 + 0x1c) = 0;
              *(undefined4 *)(iVar2 + 0x18) = 0;
              piStack_148 = (int *)0x0;
            }
            else {
              piStack_144 = (int *)0x4065f5;
              uVar3 = FUN_00404a94();
              *(undefined4 *)(iVar2 + 0x18) = uVar3;
              if (*(int *)(unaff_EBP + -0x34) == 0) {
                piStack_144 = (int *)0x80004003;
                piStack_148 = (int *)0x406608;
                FUN_00878dfb();
              }
              piStack_144 = (int *)0x406610;
              uVar3 = FUN_00404abb();
              *(undefined4 *)(iVar2 + 0x1c) = uVar3;
              piStack_148 = extraout_ECX_06;
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x38) = &piStack_148;
            puStack_14c = (undefined1 *)0x43b;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0x140);
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            puStack_14c = (undefined1 *)0x406656;
            iVar5 = FUN_00412550();
            *(uint *)(iVar2 + 0xc) = (uint)(iVar5 != 0);
            puStack_14c = (undefined1 *)(unaff_EBP + -0x140);
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x40667c;
              FUN_00878dfb();
            }
            piVar10[-2] = piVar10[-2] + *(int *)(iVar2 + 8);
            piStack_144 = *(int **)(unaff_EBP + -0x34);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x406693;
              (**(code **)(*piStack_144 + 8))();
            }
            piStack_144 = *(int **)(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x4066a4;
              (**(code **)(*piStack_144 + 8))();
            }
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x20;
          } while (*(int *)(unaff_EBP + -0x2c) < *(int *)(unaff_EBP + -0x18));
        }
        puVar6 = *(undefined1 **)(unaff_EBP + -0x10);
        if (*(int *)(unaff_EBP + -0x18) < (int)puVar6) {
          iVar5 = (int)puVar6 - *(int *)(unaff_EBP + -0x18);
          iVar8 = *(int *)(unaff_EBP + -0x18) << 5;
          iVar2 = iVar5 * 0x20;
          *(int *)(unaff_EBP + -0x14) = iVar2;
          *(int *)(unaff_EBP + -0x2c) = iVar5;
          while( true ) {
            iVar5 = *piVar10;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -0x20;
            puVar1 = (undefined4 *)(iVar8 + iVar5);
            puVar9 = (undefined4 *)(iVar2 + iVar5);
            puVar11 = puVar1;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar1[1] = 0;
            piVar10 = *(int **)(unaff_EBP + -0x20);
            piVar10[-2] = piVar10[-2] + puVar1[2];
            iVar8 = iVar8 + 0x20;
            piVar4 = (int *)(unaff_EBP + -0x2c);
            *piVar4 = *piVar4 + -1;
            if (*piVar4 == 0) break;
            iVar2 = *(int *)(unaff_EBP + -0x14);
          }
          puVar6 = *(undefined1 **)(unaff_EBP + -0x10);
        }
        if (piVar10[-4] == 0) {
          puVar6 = (undefined1 *)((int)puVar6 * 0x20);
          iVar2 = piVar10[-2] - *(int *)(puVar6 + *piVar10 + -0x18);
        }
        else {
          iVar2 = 0;
        }
        piVar10[-1] = iVar2;
      }
      else {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_144 = (int *)0x80004003;
          piStack_148 = (int *)0x405ff5;
          FUN_00878dfb();
        }
        piStack_144 = (int *)0x405ffd;
        piStack_148 = (int *)FUN_0040cf4d();
        piStack_144 = (int *)(unaff_EBP + -0x45);
        *(int **)(unaff_EBP + -0x14) = piStack_148;
        puStack_14c = (undefined1 *)0x40600c;
        FUN_004134ed();
        iVar2 = *(int *)(unaff_EBP + -0x14);
        piVar10[-4] = 0;
        piVar10[-1] = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        puVar6 = extraout_ECX_01;
        if (0 < iVar2) {
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          do {
            piStack_144 = (int *)0x40602d;
            FUN_0087a1b0();
            piStack_144 = (int *)0x0;
            piStack_148 = (int *)0x0;
            puStack_14c = &stack0xfffffec0;
            uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x18));
            *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_14c;
            FUN_004033a1(uVar3);
            iVar2 = unaff_EBP + -0x90;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 5;
            puStack_14c = (undefined1 *)0x40606b;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x54) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
            if (iVar2 != 0) {
              piStack_144 = (int *)(unaff_EBP + -0x54);
              piStack_148 = (int *)0x406081;
              piStack_144 = (int *)FUN_00404b30();
              if (((int)piStack_144 < 0) && (piStack_144 != (int *)0x80004002)) {
                piStack_148 = (int *)0x406092;
                FUN_00878dfb();
              }
            }
            piStack_144 = (int *)(unaff_EBP + -0x90);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_148 = (int *)0x4060a2;
            piVar4 = (int *)FUN_00402bc3();
            if ((int)piVar4 < 0) {
              piStack_148 = (int *)0x4060ad;
              piStack_144 = piVar4;
              FUN_00878dfb();
              piStack_144 = extraout_ECX_02;
            }
            piVar4 = (int *)(*piVar10 + *(int *)(unaff_EBP + -0x20));
            puStack_14c = (undefined1 *)&piStack_144;
            *(int ***)(unaff_EBP + -0x10) = &piStack_144;
            piStack_148 = (int *)0x43e;
            FUN_00679e4e();
            piStack_148 = (int *)(unaff_EBP + -0xf0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            puStack_14c = (undefined1 *)0x4060d8;
            FUN_0040263d();
            puStack_14c = (undefined1 *)0x4060df;
            piStack_148 = (int *)FUN_004048a4();
            *(int ***)(unaff_EBP + -0x10) = &piStack_144;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            puStack_14c = (undefined1 *)0x4060ef;
            FUN_0040675b();
            piStack_148 = (int *)0x4060f4;
            iVar2 = FUN_0048342d();
            *piVar4 = iVar2;
            piStack_148 = (int *)(unaff_EBP + -0xf0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            puStack_14c = (undefined1 *)0x406106;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x406112;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x10) = &piStack_148;
            puStack_14c = (undefined1 *)0x43f;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xb0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            puStack_14c = (undefined1 *)0x40614b;
            iVar2 = FUN_00412550();
            piVar4[1] = iVar2;
            puStack_14c = (undefined1 *)(unaff_EBP + -0xb0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x40616b;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x96;
            *(int ***)(unaff_EBP + -0x10) = &piStack_148;
            puStack_14c = (undefined1 *)0x474;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0x70);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_14c = (undefined1 *)0x4061a4;
            iVar2 = FUN_00412550();
            piVar4[2] = iVar2;
            puStack_14c = (undefined1 *)(unaff_EBP + -0x70);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x4061c1;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x10) = &piStack_148;
            puStack_14c = (undefined1 *)0xfed;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xd0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_14c = (undefined1 *)0x4061fa;
            iVar2 = FUN_00412550();
            piVar4[4] = (uint)(iVar2 != 0);
            puStack_14c = (undefined1 *)(unaff_EBP + -0xd0);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x406220;
              FUN_00878dfb();
            }
            piStack_144 = (int *)0x0;
            *(int ***)(unaff_EBP + -0x10) = &piStack_148;
            puStack_14c = (undefined1 *)0xfee;
            FUN_00679e4e(&piStack_148);
            puStack_14c = (undefined1 *)(unaff_EBP + -0x110);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_0040263d();
            piStack_148 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            puStack_14c = (undefined1 *)0x406259;
            iVar2 = FUN_00412550();
            piVar4[5] = iVar2;
            puStack_14c = (undefined1 *)(unaff_EBP + -0x110);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x406279;
              FUN_00878dfb();
            }
            puStack_14c = (undefined1 *)&piStack_144;
            *(int ***)(unaff_EBP + -0x10) = &piStack_144;
            piStack_148 = (int *)0x3ef;
            FUN_00679e4e();
            piStack_148 = (int *)(unaff_EBP + -0x80);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            puStack_14c = (undefined1 *)0x40629c;
            FUN_0040263d();
            puStack_14c = (undefined1 *)0x4062a3;
            piStack_144 = (int *)FUN_004048a4();
            piStack_148 = (int *)(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            puStack_14c = (undefined1 *)0x4062b1;
            piStack_144 = (int *)FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            piStack_148 = (int *)0x4062c0;
            FUN_00416f14();
            piStack_144 = *(int **)(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x4062d1;
              (**(code **)(*piStack_144 + 8))();
            }
            piStack_144 = (int *)(unaff_EBP + -0x80);
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            piStack_148 = (int *)0x4062de;
            piStack_144 = (int *)FUN_00402bc3();
            if ((int)piStack_144 < 0) {
              piStack_148 = (int *)0x4062e9;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x30) == 0) {
              piVar4[7] = 0;
              piVar4[6] = 0;
            }
            else {
              piStack_144 = (int *)0x4062f5;
              iVar2 = FUN_00404a94();
              piVar4[6] = iVar2;
              if (*(int *)(unaff_EBP + -0x30) == 0) {
                piStack_144 = (int *)0x80004003;
                piStack_148 = (int *)0x406308;
                FUN_00878dfb();
              }
              piStack_144 = (int *)0x406310;
              iVar2 = FUN_00404abb();
              piVar4[7] = iVar2;
            }
            puVar6 = (undefined1 *)(piVar4[1] * 0x20);
            piVar4[3] = *(int *)(puVar6 + (&DAT_0097868c)[*piVar4 * 6] + 0xc);
            if (piVar4[2] < 0) {
              iVar2 = -piVar4[2];
              piVar4[2] = iVar2;
              piVar10[-1] = piVar10[-1] + iVar2;
            }
            piVar10[-2] = piVar10[-2] + piVar4[2];
            piStack_144 = *(int **)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x40635c;
              (**(code **)(*piStack_144 + 8))();
              puVar6 = extraout_ECX_03;
            }
            piStack_144 = *(int **)(unaff_EBP + -0x24);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (piStack_144 != (int *)0x0) {
              piStack_148 = (int *)0x40636d;
              (**(code **)(*piStack_144 + 8))();
              puVar6 = extraout_ECX_04;
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x20;
          } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x14));
        }
      }
      piStack_144 = *(int **)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_144 != (int *)0x0) {
        piStack_148 = (int *)0x406731;
        (**(code **)(*piStack_144 + 8))();
        puVar6 = extraout_ECX_07;
      }
    }
    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
    piVar10 = piVar10 + 6;
    *(int **)(unaff_EBP + -0x20) = piVar10;
  } while ((int)piVar10 < 0x9790dc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


