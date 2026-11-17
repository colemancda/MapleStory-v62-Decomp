/* FUN_005a3a5d - 0x005a3a5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a3a5d(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  int *piStack_1ec;
  int *piStack_1e8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x40) = extraout_ECX;
  iVar4 = *(int *)(extraout_ECX + 0x30);
  piStack_1e8 = (int *)0x3;
  piStack_1ec = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_1e8 = (int *)0x80004003;
    piStack_1ec = (int *)0x5a3aa1;
    FUN_00878dfb();
  }
  piStack_1e8 = (int *)(unaff_EBP + -0xf4);
  piStack_1ec = (int *)(unaff_EBP + -0x10);
  FUN_00425067();
  piStack_1e8 = (int *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_1ec = (int *)0x5a3ac4;
  piStack_1e8 = (int *)FUN_00402bc3();
  if ((int)piStack_1e8 < 0) {
    piStack_1ec = (int *)0x5a3acf;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_1e8 = (int *)0x80004003;
    piStack_1ec = (int *)0x5a3ada;
    FUN_00878dfb();
  }
  piStack_1e8 = (int *)0x5a3ae2;
  uVar2 = FUN_0040eea9();
  *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_1e8 = (int *)0x80004003;
    piStack_1ec = (int *)0x5a3af0;
    FUN_00878dfb();
  }
  piStack_1e8 = (int *)0x5a3af8;
  uVar2 = FUN_0040eed0();
  uVar10 = *(uint *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x50) = uVar2;
  if (uVar10 == 0) {
    if (*(int *)(unaff_EBP + 0x20) == 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_1e8 = (int *)0x80004003;
        piStack_1ec = (int *)0x5a3b1b;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_1e8 = (int *)0x80004003;
        piStack_1ec = (int *)0x5a3b27;
        FUN_00878dfb();
      }
      piStack_1e8 = (int *)0x5a3b2f;
      bVar1 = FUN_005a4630();
      piStack_1e8 = (int *)0x5a3b42;
      iVar9 = FUN_0042fb0a();
      uVar10 = (1 - (1 << (bVar1 & 0x1f))) + iVar9;
    }
    else {
      uVar10 = *(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x24);
    }
    *(uint *)(unaff_EBP + 0x10) = uVar10;
  }
  iVar9 = *(int *)(unaff_EBP + 0x14);
  if (iVar9 == 0) {
    if (*(int *)(unaff_EBP + 0x20) == 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_1e8 = (int *)0x80004003;
        piStack_1ec = (int *)0x5a3b6b;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_1e8 = (int *)0x80004003;
        piStack_1ec = (int *)0x5a3b7b;
        FUN_00878dfb();
      }
      piStack_1e8 = (int *)0x5a3b83;
      bVar1 = FUN_005a4630();
      piStack_1e8 = (int *)0x5a3b96;
      iVar9 = FUN_0042fb34();
      iVar9 = (1 - (1 << (bVar1 & 0x1f))) + iVar9;
    }
    else {
      iVar9 = *(int *)(iVar4 + 0x30) - *(int *)(iVar4 + 0x28);
    }
    *(int *)(unaff_EBP + 0x14) = iVar9;
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 1;
  *(uint *)(unaff_EBP + -0x38) = uVar3;
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = 1;
    if (uVar10 != 0) {
      uVar3 = uVar10;
    }
    if (DAT_0097c1ac == 0) {
      piStack_1e8 = (int *)0x80004003;
      piStack_1ec = (int *)0x5a3bc1;
      FUN_00878dfb();
    }
    piStack_1e8 = (int *)0x5a3bcc;
    iVar4 = FUN_005a4681();
    iVar4 = ((iVar4 + -2 + uVar10 * 2) / uVar3) * uVar10;
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(uint *)(unaff_EBP + -0x34) = uVar3;
  if (uVar3 == 0) {
    iVar5 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0xc) = 1;
    if (iVar9 != 0) {
      *(int *)(unaff_EBP + 0xc) = iVar9;
    }
    if (DAT_0097c1ac == 0) {
      piStack_1e8 = (int *)0x80004003;
      piStack_1ec = (int *)0x5a3c0c;
      FUN_00878dfb();
    }
    piStack_1e8 = (int *)0x5a3c17;
    iVar5 = FUN_005a46a8();
    iVar5 = ((uint)(iVar5 + -2 + iVar9 * 2) / *(uint *)(unaff_EBP + 0xc)) * iVar9;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(int *)(unaff_EBP + -0x30) = iVar5;
  *(int *)(unaff_EBP + -0x48) = iVar5 + iVar9;
  if (0 < iVar5 + iVar9) {
    *(uint *)(unaff_EBP + -0x28) = iVar4 + uVar10;
    do {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (0 < *(int *)(unaff_EBP + -0x28)) {
        do {
          piStack_1e8 = &DAT_00980690;
          piStack_1ec = (int *)0x5a3c63;
          FUN_00403191();
          piStack_1e8 = (int *)0x3;
          piStack_1ec = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_004031b7();
          bVar11 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (bVar11) {
            piStack_1e8 = (int *)0x80004003;
            piStack_1ec = (int *)0x5a3c89;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)(unaff_EBP + -0xb4);
          piStack_1ec = (int *)(unaff_EBP + -0x174);
          FUN_0042a39f(unaff_EBP + 0xc,0,0,0,0,0);
          piStack_1e8 = (int *)(unaff_EBP + -0x174);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          piStack_1ec = (int *)0x5a3cbb;
          piStack_1e8 = (int *)FUN_00402bc3();
          if ((int)piStack_1e8 < 0) {
            piStack_1ec = (int *)0x5a3cc6;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)(unaff_EBP + -0xb4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          piStack_1ec = (int *)0x5a3cd6;
          piStack_1e8 = (int *)FUN_00402bc3();
          if ((int)piStack_1e8 < 0) {
            piStack_1ec = (int *)0x5a3ce1;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          while( true ) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              piStack_1e8 = (int *)0x80004003;
              piStack_1ec = (int *)0x5a3cef;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)0x5a3cf7;
            uVar10 = FUN_0042d476();
            if (uVar10 <= *(uint *)(unaff_EBP + -0x18)) break;
            piStack_1e8 = (int *)0x3;
            piStack_1ec = *(int **)(unaff_EBP + -0x18);
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (*(int *)(unaff_EBP + 8) == 0) {
              piStack_1e8 = (int *)0x80004003;
              piStack_1ec = (int *)0x5a3d1f;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x154);
            piStack_1ec = (int *)(unaff_EBP + -0x1c);
            FUN_00425067();
            piStack_1e8 = (int *)(unaff_EBP + -0x154);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_1ec = (int *)0x5a3d42;
            iVar4 = FUN_00402bc3();
            piStack_1ec = piStack_1e8;
            if (iVar4 < 0) {
              piStack_1ec = (int *)0x5a3d4d;
              piStack_1e8 = (int *)iVar4;
              FUN_00878dfb();
              piStack_1ec = extraout_ECX_00;
            }
            piStack_1e8 = (int *)0x78;
            *(int ***)(unaff_EBP + -0x14) = &piStack_1ec;
            FUN_00679e4e(&piStack_1ec,0x474);
            iVar4 = unaff_EBP + -0x6c;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_004115d9(iVar4);
            FUN_00404e7f(iVar4);
            iVar4 = unaff_EBP + -0x1a4;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            FUN_0040263d(iVar4);
            piStack_1ec = (int *)FUN_004048a4(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            uVar2 = FUN_00412550();
            *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            piStack_1e8 = (int *)FUN_00402bc3(unaff_EBP + -0x1a4);
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a3dc1;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_1e8 = (int *)0x5a3dcd;
            FUN_004027eb();
            piStack_1e8 = (int *)0xffffffff;
            *(int ***)(unaff_EBP + -0x14) = &piStack_1ec;
            FUN_00679e4e(&piStack_1ec,0x3b6);
            iVar4 = unaff_EBP + -0x70;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            FUN_004115d9(iVar4);
            FUN_00404e7f(iVar4);
            iVar4 = unaff_EBP + -0x1d4;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0040263d(iVar4);
            piStack_1ec = (int *)FUN_004048a4(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            piVar6 = (int *)FUN_00412550();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            piStack_1e8 = (int *)FUN_00402bc3(unaff_EBP + -0x1d4);
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a3e3b;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_1e8 = (int *)0x5a3e47;
            FUN_004027eb();
            piStack_1e8 = (int *)0xffffffff;
            *(int ***)(unaff_EBP + -0x14) = &piStack_1ec;
            FUN_00679e4e(&piStack_1ec,0x3b7);
            iVar4 = unaff_EBP + -0x58;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_004115d9(iVar4);
            FUN_00404e7f(iVar4);
            iVar4 = unaff_EBP + -0x1b4;
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            FUN_0040263d(iVar4);
            piStack_1ec = (int *)FUN_004048a4(iVar4);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            piVar7 = (int *)FUN_00412550();
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            piStack_1e8 = (int *)FUN_00402bc3(unaff_EBP + -0x1b4);
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a3eb5;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_1e8 = (int *)0x5a3ec1;
            FUN_004027eb();
            iVar4 = *(int *)(unaff_EBP + -0x40);
            if (0 < *(int *)(iVar4 + 0xcc)) {
              piStack_1ec = *(int **)(unaff_EBP + -0x1c);
              if (piStack_1ec == (int *)0x0) {
                piStack_1e8 = (int *)0x80004003;
                piStack_1ec = (int *)0x5a3ee4;
                FUN_00878dfb();
                piStack_1ec = *(int **)(unaff_EBP + -0x1c);
              }
              piStack_1e8 = *(int **)(iVar4 + 0xcc);
              iVar4 = *piStack_1ec;
              *(int **)(unaff_EBP + -0x14) = piStack_1ec;
              iVar4 = (**(code **)(iVar4 + 0x5c))();
              if (iVar4 < 0) {
                piStack_1e8 = (int *)&DAT_00963cc8;
                piStack_1ec = *(int **)(unaff_EBP + -0x14);
                FUN_00878e09(iVar4);
              }
            }
            if (*(int *)(unaff_EBP + 0x18) != 0xff) {
              iVar4 = 0xff - *(int *)(unaff_EBP + 0x18);
              if ((-1 < (int)piVar6) && (piVar6 = (int *)((int)piVar6 - iVar4), (int)piVar6 < 0)) {
                piVar6 = (int *)0x0;
              }
              if ((-1 < (int)piVar7) && (piVar7 = (int *)((int)piVar7 - iVar4), (int)piVar7 < 0)) {
                piVar7 = (int *)0x0;
              }
            }
            piStack_1e8 = &DAT_00980690;
            piStack_1ec = (int *)0x5a3f37;
            FUN_00403191();
            piStack_1e8 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            piStack_1ec = (int *)0x5a3f47;
            FUN_00403191();
            piStack_1e8 = (int *)0x3;
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            piStack_1ec = piVar7;
            FUN_004031b7();
            piStack_1e8 = (int *)0x3;
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_1ec = piVar6;
            FUN_004031b7();
            piStack_1e8 = (int *)0x3;
            piStack_1ec = *(int **)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              piStack_1e8 = (int *)0x80004003;
              piStack_1ec = (int *)0x5a3f93;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x114);
            piStack_1ec = (int *)(unaff_EBP + -0x184);
            FUN_004250ac(unaff_EBP + -0x1c4,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0xd4,
                         unaff_EBP + -0x194,unaff_EBP + -0x84);
            piStack_1e8 = (int *)(unaff_EBP + -0x1c4);
            piStack_1ec = (int *)0x5a3fd4;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a3fdf;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0xd4);
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            piStack_1ec = (int *)0x5a3fef;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a3ffa;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x194);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_1ec = (int *)0x5a400a;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a4015;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x84);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            piStack_1ec = (int *)0x5a4025;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a4030;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x184);
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            piStack_1ec = (int *)0x5a4040;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a404b;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x114);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            piStack_1ec = (int *)0x5a405b;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a4066;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_1e8 = (int *)0x5a4072;
            FUN_004125e6();
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_1e8 = (int *)0x80004003;
            piStack_1ec = (int *)0x5a408c;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)(unaff_EBP + -0x60);
          piStack_1ec = (int *)0x5a4098;
          piVar6 = (int *)FUN_0042fb5e();
          iVar4 = *piVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (iVar4 == 0) {
            piStack_1e8 = (int *)0x80004003;
            piStack_1ec = (int *)0x5a40ae;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)(unaff_EBP + -0x1e4);
          piStack_1ec = (int *)0x5a40bc;
          puVar8 = (undefined4 *)FUN_004308ad();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            piStack_1e8 = (int *)0x80004003;
            piStack_1ec = (int *)0x5a40ce;
            FUN_00878dfb();
          }
          piStack_1e8 = (int *)(unaff_EBP + -0x68);
          piStack_1ec = (int *)0x5a40da;
          piVar6 = (int *)FUN_0042fb5e();
          iVar4 = *piVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          if (iVar4 == 0) {
            piStack_1e8 = (int *)0x80004003;
            piStack_1ec = (int *)0x5a40eb;
            FUN_00878dfb();
          }
          piVar6 = (int *)*piVar6;
          piStack_1ec = (int *)puVar8[2];
          piStack_1e8 = (int *)puVar8[3];
          iVar4 = (**(code **)(*piVar6 + 100))(piVar6,*puVar8,puVar8[1]);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar6,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x1e4);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_004125d9();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = (int *)FUN_0042fb5e(unaff_EBP + -0x5c);
          iVar4 = *piVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = (int *)*piVar6;
          iVar4 = (**(code **)(*piVar6 + 0x90))
                            (piVar6,*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x54),
                             *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x164),*(undefined4 *)(unaff_EBP + -0x160)
                             ,*(undefined4 *)(unaff_EBP + -0x15c),
                             *(undefined4 *)(unaff_EBP + -0x158),*(undefined4 *)(unaff_EBP + -0x134)
                             ,*(undefined4 *)(unaff_EBP + -0x130),*(undefined4 *)(unaff_EBP + -300),
                             *(undefined4 *)(unaff_EBP + -0x128));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar6,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x164);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x134);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0xffff;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x48);
          }
          if (*(int *)(unaff_EBP + -0x38) == 0) {
            *(undefined4 *)(unaff_EBP + -0x3c) = 0xffff;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x28);
          }
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            *(undefined4 *)(unaff_EBP + -0x20) = 0xffff8001;
          }
          else {
            *(int *)(unaff_EBP + -0x20) =
                 -(*(int *)(unaff_EBP + -0x30) / 2) - *(int *)(unaff_EBP + 0x14);
          }
          if (*(int *)(unaff_EBP + -0x38) == 0) {
            *(undefined4 *)(unaff_EBP + -0x14) = 0xffff8001;
          }
          else {
            *(int *)(unaff_EBP + -0x14) =
                 -(*(int *)(unaff_EBP + -0x44) / 2) - *(int *)(unaff_EBP + 0x10);
          }
          if (DAT_0097c1ac == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar8 = (undefined4 *)FUN_00429328(unaff_EBP + -0x4c);
          FUN_0040ee87(*puVar8,1);
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = (int *)FUN_0042fb5e(unaff_EBP + -100);
          iVar4 = *piVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = (int *)*piVar6;
          iVar4 = (**(code **)(*piVar6 + 0x9c))
                            (piVar6,*(undefined4 *)(unaff_EBP + -0x94),
                             *(undefined4 *)(unaff_EBP + -0x90),*(undefined4 *)(unaff_EBP + -0x8c),
                             *(undefined4 *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                             *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0xa4),
                             *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c),
                             *(undefined4 *)(unaff_EBP + -0x98));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar6,&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x94);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_004125d9();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar4 = FUN_00402bc3(unaff_EBP + -0xa4);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_0040ee87(*(undefined4 *)(unaff_EBP + 8),1);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + 0xc);
          iVar4 = (**(code **)(*piVar6 + 0xfc))
                            (piVar6,*(undefined4 *)(unaff_EBP + -0xc4),
                             *(undefined4 *)(unaff_EBP + -0xc0),*(undefined4 *)(unaff_EBP + -0xbc),
                             *(undefined4 *)(unaff_EBP + -0xb8));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar6,&DAT_00963df8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar4 = FUN_00402bc3(unaff_EBP + -0xc4);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + 0xc);
          iVar4 = (**(code **)(*piVar6 + 0xe0))(piVar6,0xffffffff);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar6,&DAT_00963df8);
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + 0xc);
          uVar2 = FUN_0043210d();
          iVar4 = (**(code **)(*piVar6 + 0xd8))(piVar6,uVar2);
          if (iVar4 < 0) {
            piStack_1e8 = (int *)&DAT_00963df8;
            piStack_1ec = piVar6;
            FUN_00878e09(iVar4);
          }
          if (*(int *)(unaff_EBP + 0x18) != 0xff) {
            piStack_1e8 = &DAT_00980690;
            piStack_1ec = (int *)0x5a4470;
            FUN_00424aee();
            piStack_1e8 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            piStack_1ec = (int *)0x5a4480;
            FUN_00424aee();
            piStack_1e8 = (int *)(unaff_EBP + -0x74);
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            piStack_1ec = (int *)0x5a4490;
            FUN_00424e27();
            piStack_1ec = (int *)0x5a4497;
            FUN_004113e5();
            piStack_1e8 = (int *)(unaff_EBP + -0x104);
            piStack_1ec = (int *)(unaff_EBP + -0xe4);
            uVar12 = 0xff;
            uVar2 = *(undefined4 *)(unaff_EBP + 0x18);
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            FUN_00424df4(uVar2,0xff);
            FUN_00424f2f(uVar2,uVar12);
            piStack_1e8 = (int *)0x5a44c3;
            FUN_004125d9();
            piStack_1e8 = (int *)(unaff_EBP + -0xe4);
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            piStack_1ec = (int *)0x5a44d3;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a44de;
              FUN_00878dfb();
            }
            piStack_1e8 = (int *)(unaff_EBP + -0x104);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piStack_1ec = (int *)0x5a44ee;
            piStack_1e8 = (int *)FUN_00402bc3();
            if ((int)piStack_1e8 < 0) {
              piStack_1ec = (int *)0x5a44f9;
              FUN_00878dfb();
            }
          }
          piStack_1e8 = (int *)0x5a4501;
          FUN_00424e27();
          piStack_1e8 = (int *)0x5a4508;
          piStack_1e8 = (int *)FUN_005a4657();
          piStack_1ec = (int *)0x5a4511;
          FUN_00424e27();
          piStack_1ec = (int *)0x5a4518;
          FUN_004a2f57();
          if (*(int *)(unaff_EBP + 0x20) == 0) {
            if (*(int *)(unaff_EBP + 0x1c) != 0) {
              piStack_1e8 = &DAT_00980690;
              piStack_1ec = (int *)0x5a454d;
              FUN_00424aee();
              piStack_1e8 = &DAT_00980690;
              *(undefined1 *)(unaff_EBP + -4) = 0x2c;
              piStack_1ec = (int *)0x5a455d;
              FUN_00424aee();
              piStack_1e8 = (int *)(unaff_EBP + -0x144);
              piStack_1ec = (int *)(unaff_EBP + -0x124);
              uVar2 = 0x20;
              *(undefined1 *)(unaff_EBP + -4) = 0x2d;
              FUN_00424e27(0x20);
              FUN_00425139(uVar2);
              piStack_1e8 = (int *)(unaff_EBP + -0x124);
              *(undefined1 *)(unaff_EBP + -4) = 0x2c;
              piStack_1ec = (int *)0x5a4590;
              piStack_1e8 = (int *)FUN_00402bc3();
              if ((int)piStack_1e8 < 0) {
                piStack_1ec = (int *)0x5a459b;
                FUN_00878dfb();
              }
              piStack_1e8 = (int *)(unaff_EBP + -0x144);
              *(undefined1 *)(unaff_EBP + -4) = 8;
              piStack_1ec = (int *)0x5a45ab;
              piStack_1e8 = (int *)FUN_00402bc3();
              if ((int)piStack_1e8 < 0) {
                piStack_1ec = (int *)0x5a45b6;
                FUN_00878dfb();
              }
            }
          }
          else {
            piStack_1e8 = *(int **)(unaff_EBP + 0x1c);
            *(int ***)(unaff_EBP + -0x14) = &piStack_1ec;
            FUN_0041160e(unaff_EBP + 0xc);
            FUN_005a8715();
          }
          piStack_1e8 = (int *)(unaff_EBP + 0xc);
          piStack_1ec = (int *)0x5a45d3;
          FUN_005a9ee3();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          piStack_1e8 = (int *)0x5a45df;
          FUN_00412600();
          iVar4 = *(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x10);
          *(int *)(unaff_EBP + -0x24) = iVar4;
        } while (iVar4 < *(int *)(unaff_EBP + -0x28));
      }
      iVar4 = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + 0x14);
      *(int *)(unaff_EBP + -0x2c) = iVar4;
    } while (iVar4 < *(int *)(unaff_EBP + -0x48));
  }
  piStack_1e8 = (int *)0x5a460b;
  FUN_004125e6();
  piStack_1e8 = (int *)0x5a4613;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_1e8 = (int *)0x5a461f;
  FUN_005aa080();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


