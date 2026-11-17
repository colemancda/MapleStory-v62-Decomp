/* ptr_004065f8 - 0x004065f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004065f8(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int iVar6;
  int iVar7;
  int unaff_EBP;
  int unaff_ESI;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_EDI;
  undefined4 *puVar10;
  int *piStack_8;
  int *piStack_4;
  
  do {
    if (*(int *)(unaff_EBP + -0x34) == 0) {
      piStack_4 = (int *)0x80004003;
      piStack_8 = (int *)0x406608;
      FUN_00878dfb();
    }
    piStack_4 = (int *)0x406610;
    uVar4 = FUN_00404abb();
    *(undefined4 *)(unaff_ESI + 0x1c) = uVar4;
    piStack_8 = extraout_ECX_01;
    while( true ) {
      piStack_4 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x38) = &piStack_8;
      FUN_00679e4e(&piStack_8);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_0040263d();
      piStack_8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iVar5 = FUN_00412550();
      *(uint *)(unaff_ESI + 0xc) = (uint)(iVar5 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_4 = (int *)FUN_00402bc3();
      if ((int)piStack_4 < 0) {
        piStack_8 = (int *)0x40667c;
        FUN_00878dfb();
      }
      unaff_EDI[-2] = unaff_EDI[-2] + *(int *)(unaff_ESI + 8);
      piStack_4 = *(int **)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (piStack_4 != (int *)0x0) {
        piStack_8 = (int *)0x406693;
        (**(code **)(*piStack_4 + 8))();
      }
      piStack_4 = *(int **)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piStack_4 != (int *)0x0) {
        piStack_8 = (int *)0x4066a4;
        (**(code **)(*piStack_4 + 8))();
      }
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x20;
      if (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + -0x2c)) {
        do {
          iVar5 = *(int *)(unaff_EBP + -0x10);
          if (*(int *)(unaff_EBP + -0x18) < iVar5) {
            iVar5 = iVar5 - *(int *)(unaff_EBP + -0x18);
            iVar7 = *(int *)(unaff_EBP + -0x18) << 5;
            iVar8 = iVar5 * 0x20;
            *(int *)(unaff_EBP + -0x14) = iVar8;
            *(int *)(unaff_EBP + -0x2c) = iVar5;
            while( true ) {
              iVar5 = *unaff_EDI;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -0x20;
              puVar1 = (undefined4 *)(iVar7 + iVar5);
              puVar9 = (undefined4 *)(iVar8 + iVar5);
              puVar10 = puVar1;
              for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              puVar1[1] = 0;
              unaff_EDI = *(int **)(unaff_EBP + -0x20);
              unaff_EDI[-2] = unaff_EDI[-2] + puVar1[2];
              iVar7 = iVar7 + 0x20;
              piVar3 = (int *)(unaff_EBP + -0x2c);
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) break;
              iVar8 = *(int *)(unaff_EBP + -0x14);
            }
            iVar5 = *(int *)(unaff_EBP + -0x10);
          }
          if (unaff_EDI[-4] == 0) {
            iVar5 = unaff_EDI[-2] - *(int *)(iVar5 * 0x20 + -0x18 + *unaff_EDI);
          }
          else {
            iVar5 = 0;
          }
          unaff_EDI[-1] = iVar5;
          while( true ) {
            piStack_4 = *(int **)(unaff_EBP + -0x1c);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (piStack_4 != (int *)0x0) {
              piStack_8 = (int *)0x406731;
              (**(code **)(*piStack_4 + 8))();
            }
            do {
              piVar3 = unaff_EDI;
              *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
              unaff_EDI = piVar3 + 6;
              *(int **)(unaff_EBP + -0x20) = unaff_EDI;
              if (0x9790db < (int)unaff_EDI) {
                ExceptionList = *(void **)(unaff_EBP + -0xc);
                return;
              }
            } while (unaff_EDI == (int *)&DAT_00978a4c);
            piStack_4 = (int *)0x0;
            piStack_8 = (int *)0x0;
            *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffff4;
            FUN_004833ff(&stack0xfffffff4,*(undefined4 *)(unaff_EBP + -0x44));
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar5 = unaff_EBP + -0x130;
            FUN_0040263d(iVar5);
            FUN_004048a4(iVar5);
            *(undefined4 *)(unaff_EBP + -4) = 1;
            iVar5 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x60) = iVar5;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            if (iVar5 != 0) {
              piStack_4 = (int *)(unaff_EBP + -0x60);
              piStack_8 = (int *)0x405fae;
              piStack_4 = (int *)FUN_00404b30();
              if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
                piStack_8 = (int *)0x405fbf;
                FUN_00878dfb();
              }
            }
            piStack_4 = (int *)(unaff_EBP + -0x130);
            *(undefined1 *)(unaff_EBP + -4) = 3;
            piStack_8 = (int *)0x405fcf;
            piStack_4 = (int *)FUN_00402bc3();
            if ((int)piStack_4 < 0) {
              piStack_8 = (int *)0x405fda;
              FUN_00878dfb();
            }
            piVar3[4] = 0;
            if (piVar3[3] == 0) break;
            if (*(int *)(unaff_EBP + -0x1c) == 0) {
              piStack_4 = (int *)0x80004003;
              piStack_8 = (int *)0x405ff5;
              FUN_00878dfb();
            }
            piStack_4 = (int *)0x405ffd;
            piStack_8 = (int *)FUN_0040cf4d();
            piStack_4 = (int *)(unaff_EBP + -0x45);
            *(int **)(unaff_EBP + -0x14) = piStack_8;
            FUN_004134ed();
            iVar5 = *(int *)(unaff_EBP + -0x14);
            piVar3[2] = 0;
            piVar3[5] = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            if (0 < iVar5) {
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
              do {
                piStack_4 = (int *)0x40602d;
                FUN_0087a1b0();
                piStack_4 = (int *)0x0;
                piStack_8 = (int *)0x0;
                uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x18));
                *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff4;
                FUN_004033a1(uVar4);
                iVar5 = unaff_EBP + -0x90;
                *(undefined1 *)(unaff_EBP + -4) = 3;
                FUN_0040263d(iVar5);
                FUN_004048a4(iVar5);
                *(undefined1 *)(unaff_EBP + -4) = 5;
                iVar5 = FUN_004032b4();
                *(int *)(unaff_EBP + -0x54) = iVar5;
                *(undefined4 *)(unaff_EBP + -0x24) = 0;
                if (iVar5 != 0) {
                  piStack_4 = (int *)(unaff_EBP + -0x54);
                  piStack_8 = (int *)0x406081;
                  piStack_4 = (int *)FUN_00404b30();
                  if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
                    piStack_8 = (int *)0x406092;
                    FUN_00878dfb();
                  }
                }
                piStack_4 = (int *)(unaff_EBP + -0x90);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_8 = (int *)0x4060a2;
                piVar2 = (int *)FUN_00402bc3();
                if ((int)piVar2 < 0) {
                  piStack_8 = (int *)0x4060ad;
                  piStack_4 = piVar2;
                  FUN_00878dfb();
                  piStack_4 = extraout_ECX;
                }
                piVar2 = (int *)(*unaff_EDI + *(int *)(unaff_EBP + -0x20));
                *(int ***)(unaff_EBP + -0x10) = &piStack_4;
                piStack_8 = (int *)0x43e;
                FUN_00679e4e();
                piStack_8 = (int *)(unaff_EBP + -0xf0);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_8 = (int *)FUN_004048a4();
                *(int ***)(unaff_EBP + -0x10) = &piStack_4;
                *(undefined1 *)(unaff_EBP + -4) = 9;
                FUN_0040675b();
                piStack_8 = (int *)0x4060f4;
                iVar5 = FUN_0048342d();
                *piVar2 = iVar5;
                piStack_8 = (int *)(unaff_EBP + -0xf0);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x406112;
                  FUN_00878dfb();
                }
                piStack_4 = (int *)0x0;
                *(int ***)(unaff_EBP + -0x10) = &piStack_8;
                FUN_00679e4e(&piStack_8);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_8 = (int *)FUN_004048a4();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                iVar5 = FUN_00412550();
                piVar2[1] = iVar5;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x40616b;
                  FUN_00878dfb();
                }
                piStack_4 = (int *)0x96;
                *(int ***)(unaff_EBP + -0x10) = &piStack_8;
                FUN_00679e4e(&piStack_8);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_8 = (int *)FUN_004048a4();
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                iVar5 = FUN_00412550();
                piVar2[2] = iVar5;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x4061c1;
                  FUN_00878dfb();
                }
                piStack_4 = (int *)0x0;
                *(int ***)(unaff_EBP + -0x10) = &piStack_8;
                FUN_00679e4e(&piStack_8);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_8 = (int *)FUN_004048a4();
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                iVar5 = FUN_00412550();
                piVar2[4] = (uint)(iVar5 != 0);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x406220;
                  FUN_00878dfb();
                }
                piStack_4 = (int *)0x0;
                *(int ***)(unaff_EBP + -0x10) = &piStack_8;
                FUN_00679e4e(&piStack_8);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_8 = (int *)FUN_004048a4();
                *(undefined1 *)(unaff_EBP + -4) = 0x11;
                iVar5 = FUN_00412550();
                piVar2[5] = iVar5;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x406279;
                  FUN_00878dfb();
                }
                *(int ***)(unaff_EBP + -0x10) = &piStack_4;
                piStack_8 = (int *)0x3ef;
                FUN_00679e4e();
                piStack_8 = (int *)(unaff_EBP + -0x80);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                FUN_0040263d();
                piStack_4 = (int *)FUN_004048a4();
                piStack_8 = (int *)(unaff_EBP + -0x4c);
                *(undefined1 *)(unaff_EBP + -4) = 0x13;
                piStack_4 = (int *)FUN_00412348();
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                piStack_8 = (int *)0x4062c0;
                FUN_00416f14();
                piStack_4 = *(int **)(unaff_EBP + -0x4c);
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                if (piStack_4 != (int *)0x0) {
                  piStack_8 = (int *)0x4062d1;
                  (**(code **)(*piStack_4 + 8))();
                }
                piStack_4 = (int *)(unaff_EBP + -0x80);
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                piStack_8 = (int *)0x4062de;
                piStack_4 = (int *)FUN_00402bc3();
                if ((int)piStack_4 < 0) {
                  piStack_8 = (int *)0x4062e9;
                  FUN_00878dfb();
                }
                if (*(int *)(unaff_EBP + -0x30) == 0) {
                  piVar2[7] = 0;
                  piVar2[6] = 0;
                }
                else {
                  piStack_4 = (int *)0x4062f5;
                  iVar5 = FUN_00404a94();
                  piVar2[6] = iVar5;
                  if (*(int *)(unaff_EBP + -0x30) == 0) {
                    piStack_4 = (int *)0x80004003;
                    piStack_8 = (int *)0x406308;
                    FUN_00878dfb();
                  }
                  piStack_4 = (int *)0x406310;
                  iVar5 = FUN_00404abb();
                  piVar2[7] = iVar5;
                }
                piVar2[3] = *(int *)((&DAT_0097868c)[*piVar2 * 6] + 0xc + piVar2[1] * 0x20);
                if (piVar2[2] < 0) {
                  iVar5 = -piVar2[2];
                  piVar2[2] = iVar5;
                  piVar3[5] = piVar3[5] + iVar5;
                }
                piVar3[4] = piVar3[4] + piVar2[2];
                piStack_4 = *(int **)(unaff_EBP + -0x30);
                *(undefined1 *)(unaff_EBP + -4) = 7;
                if (piStack_4 != (int *)0x0) {
                  piStack_8 = (int *)0x40635c;
                  (**(code **)(*piStack_4 + 8))();
                }
                piStack_4 = *(int **)(unaff_EBP + -0x24);
                *(undefined1 *)(unaff_EBP + -4) = 3;
                if (piStack_4 != (int *)0x0) {
                  piStack_8 = (int *)0x40636d;
                  (**(code **)(*piStack_4 + 8))();
                }
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x20;
              } while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x14));
            }
          }
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            piStack_4 = (int *)0x80004003;
            piStack_8 = (int *)0x406396;
            FUN_00878dfb();
          }
          piStack_4 = (int *)0x40639e;
          iVar5 = FUN_0040cf4d();
          iVar8 = piVar3[2];
          *(int *)(unaff_EBP + -0x18) = iVar5;
          if (iVar8 != 0) {
            iVar5 = iVar5 * 2 + -2;
          }
          *(int *)(unaff_EBP + -0x10) = iVar5;
          piStack_4 = (int *)(unaff_EBP + -0x3d);
          piStack_8 = *(int **)(unaff_EBP + -0x10);
          FUN_004134ed();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        } while (*(int *)(unaff_EBP + -0x18) < 1);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      piStack_4 = (int *)0x4063d6;
      FUN_0087a1b0();
      piStack_4 = (int *)0x0;
      piStack_8 = (int *)0x0;
      uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x2c));
      *(undefined1 **)(unaff_EBP + -0x38) = &stack0xfffffff4;
      FUN_004033a1(uVar4);
      iVar5 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar5);
      FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x50) = iVar5;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar5 != 0) {
        piStack_4 = (int *)(unaff_EBP + -0x50);
        piStack_8 = (int *)0x40642a;
        piStack_4 = (int *)FUN_00404b30();
        if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
          piStack_8 = (int *)0x40643b;
          FUN_00878dfb();
        }
      }
      piStack_4 = (int *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_8 = (int *)0x40644b;
      piVar3 = (int *)FUN_00402bc3();
      piStack_8 = piStack_4;
      if ((int)piVar3 < 0) {
        piStack_8 = (int *)0x406456;
        piStack_4 = piVar3;
        FUN_00878dfb();
        piStack_8 = extraout_ECX_00;
      }
      unaff_ESI = *unaff_EDI + *(int *)(unaff_EBP + -0x14);
      piStack_4 = (int *)0x96;
      *(undefined4 *)(unaff_ESI + 4) = 0;
      *(int ***)(unaff_EBP + -0x38) = &piStack_8;
      FUN_00679e4e(&piStack_8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      piStack_8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_ESI + 8) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_4 = (int *)FUN_00402bc3();
      if ((int)piStack_4 < 0) {
        piStack_8 = (int *)0x4064bb;
        FUN_00878dfb();
      }
      piStack_4 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x38) = &piStack_8;
      FUN_00679e4e(&piStack_8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      piStack_8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iVar5 = FUN_00412550();
      *(uint *)(unaff_ESI + 0x10) = (uint)(iVar5 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_4 = (int *)FUN_00402bc3();
      if ((int)piStack_4 < 0) {
        piStack_8 = (int *)0x40651a;
        FUN_00878dfb();
      }
      piStack_4 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x38) = &piStack_8;
      FUN_00679e4e(&piStack_8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      piStack_8 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_ESI + 0x14) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_4 = (int *)FUN_00402bc3();
      if ((int)piStack_4 < 0) {
        piStack_8 = (int *)0x406573;
        FUN_00878dfb();
      }
      *(int ***)(unaff_EBP + -0x38) = &piStack_4;
      piStack_8 = (int *)0x3ef;
      FUN_00679e4e();
      piStack_8 = (int *)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_0040263d();
      piStack_4 = (int *)FUN_004048a4();
      piStack_8 = (int *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_4 = (int *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_8 = (int *)0x4065bd;
      FUN_00416f14();
      piStack_4 = *(int **)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (piStack_4 != (int *)0x0) {
        piStack_8 = (int *)0x4065ce;
        (**(code **)(*piStack_4 + 8))();
      }
      piStack_4 = (int *)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_8 = (int *)0x4065de;
      piStack_4 = (int *)FUN_00402bc3();
      if ((int)piStack_4 < 0) {
        piStack_8 = (int *)0x4065e9;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x34) != 0) break;
      *(undefined4 *)(unaff_ESI + 0x1c) = 0;
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
      piStack_8 = (int *)0x0;
    }
    piStack_4 = (int *)0x4065f5;
    uVar4 = FUN_00404a94();
    *(undefined4 *)(unaff_ESI + 0x18) = uVar4;
  } while( true );
}


