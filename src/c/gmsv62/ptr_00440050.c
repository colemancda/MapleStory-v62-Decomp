/* ptr_00440050 - 0x00440050 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00440e1f) */

void ptr_00440050(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piVar7 = *(int **)(unaff_EBP + -0x1c);
  piVar7[1] = piVar7[1] + *(int *)(piVar7[3] + *piVar7 * 4);
  unaff_EBX[0x33a] = unaff_EBX[0x338];
  unaff_EBX[0x33b] = unaff_EBX[0x339];
  FUN_00403191();
  iVar2 = unaff_EBX[0x32a];
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb();
  }
  piVar7 = (int *)unaff_EBX[0x32a];
  iVar2 = *piVar7;
  *(int **)(unaff_EBP + -0x2c) = piVar7;
  iVar2 = (**(code **)(iVar2 + 0x8c))
                    (piVar7,unaff_EBX + 0x338,unaff_EBX + 0x339,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar2 = unaff_EBX[0x32d];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar7 = (int *)unaff_EBX[0x32d];
  iVar2 = *piVar7;
  *(int **)(unaff_EBP + -0x2c) = piVar7;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_00441161;
  uVar3 = FUN_0043f6fe();
  unaff_EBX[(uint)(uVar3 < 0x80000000) * 0xfd + 0x130] =
       unaff_EBX[(uint)(uVar3 < 0x80000000) * 0xfd + 0x130] + -0x1e;
  if (unaff_EBX[(uint)(uVar3 < 0x80000000) * 0xfd + 0x130] < 1) {
    uVar3 = FUN_0043f6fe();
    iVar2 = *(int *)(unaff_EBP + -0x14);
    piVar7 = unaff_EBX + (uint)(uVar3 < 0x80000000) * 0xfd + 0x12f;
    *(int **)(unaff_EBP + -0x24) = piVar7 + iVar2 + 4;
    *(int **)(unaff_EBP + -0x1c) = piVar7;
    *(int **)(unaff_EBP + -0x14) = piVar7 + iVar2 + 0x72;
    if (((((iVar2 == 0x24) || (iVar2 == 0x25)) || (iVar2 == 0x69)) || (iVar2 == 0x68)) &&
       (unaff_EBX[0x33b] == unaff_EBX[0x339])) {
      piVar7[1] = 0;
    }
    else {
      if ((unaff_EBX[0x121] / 10000 == 0xbe) || (unaff_EBX[0x121] / 10000 == 0xc1)) {
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      else {
        piVar4 = *(int **)(unaff_EBP + -0x24);
      }
      iVar5 = 0;
      if (*piVar4 != 0) {
        iVar5 = *(int *)(*piVar4 + -4);
      }
      *piVar7 = *piVar7 + 1;
      if (iVar5 <= *piVar7) {
        iVar5 = FUN_0043f6fe();
        if (-1 < iVar5) {
          unaff_EBX[0x12e] = -1;
          FUN_00441501(1);
          (**(code **)(*unaff_EBX + 0x10))(6,100,0);
          goto LAB_00440f0e;
        }
        *piVar7 = 0;
      }
      *(undefined **)(unaff_EBP + -0x10) = &DAT_00978678 + iVar2 * 0x18;
      if ((unaff_EBX[0x121] / 10000 == 0xbe) || (unaff_EBX[0x121] / 10000 == 0xc1)) {
        if ((**(int **)(unaff_EBP + -0x14) != 0) &&
           (*(int *)(**(int **)(unaff_EBP + -0x14) + -4) != 0)) {
          FUN_004031b7(1,3);
          iVar2 = unaff_EBX[0x334];
          *(undefined4 *)(unaff_EBP + -4) = 6;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)unaff_EBX[0x334];
          iVar2 = *piVar7;
          *(int **)(unaff_EBP + -0x2c) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x10c))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_004031b7(1,3);
          iVar2 = unaff_EBX[0x333];
          *(undefined4 *)(unaff_EBP + -4) = 7;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)unaff_EBX[0x333];
          iVar2 = *piVar7;
          *(int **)(unaff_EBP + -0x2c) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x10c))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          iVar2 = *(int *)(**(int **)(unaff_EBP + -0x14) + 4 + **(int **)(unaff_EBP + -0x1c) * 8);
          iVar5 = *(int *)(**(int **)(unaff_EBP + -0x24) + 4 + unaff_EBX[0x126] * 8);
          iVar1 = *(int *)(iVar2 + 0x2c);
          iVar9 = *(int *)(iVar2 + 0x28) - *(int *)(iVar5 + 0x1c);
          iVar2 = *(int *)(iVar5 + 0x20);
          if (unaff_EBX[0x334] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar5 = FUN_0043210d();
          if (iVar5 != 0) {
            iVar9 = -iVar9;
          }
          unaff_EBX[0x128] = iVar1 - iVar2;
          unaff_EBX[0x127] = iVar9;
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 8;
          FUN_00403191(&DAT_00980690);
          iVar2 = unaff_EBX[0x32d];
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)unaff_EBX[0x32d];
          iVar2 = unaff_EBX[0x128];
          iVar5 = *piVar7;
          iVar1 = unaff_EBX[0x127];
          *(int **)(unaff_EBP + -0x2c) = piVar7;
          iVar2 = (**(code **)(iVar5 + 0x90))
                            (piVar7,iVar1,iVar2,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          iVar2 = *(int *)(**(int **)(unaff_EBP + -0x14) + 4 + **(int **)(unaff_EBP + -0x1c) * 8);
          unaff_EBX[0x122] = *(int *)(iVar2 + 0x14);
          unaff_EBX[0x123] = *(int *)(iVar2 + 0x18);
          unaff_EBX[0x124] = *(int *)(iVar2 + 0x1c);
          unaff_EBX[0x125] = *(int *)(iVar2 + 0x20);
          goto LAB_0044071d;
        }
      }
      else if ((**(int **)(unaff_EBP + -0x24) != 0) &&
              (*(int *)(**(int **)(unaff_EBP + -0x24) + -4) != 0)) {
        FUN_004031b7(1,3);
        iVar2 = unaff_EBX[0x331];
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x331];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x10c))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_004031b7(1,3);
        iVar2 = unaff_EBX[0x330];
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x330];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x10c))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_004031b7(1,3);
        iVar2 = unaff_EBX[0x332];
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x332];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x10c))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        FUN_00403191(&DAT_00980690);
        iVar2 = unaff_EBX[0x32d];
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32d];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x90))
                          (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
LAB_0044071d:
        if ((unaff_EBX[0x121] / 10000 == 0xbe) || (unaff_EBX[0x121] / 10000 == 0xc1)) {
          iVar2 = unaff_EBX[0x126];
          piVar7 = *(int **)(unaff_EBP + -0x1c);
        }
        else {
          piVar7 = *(int **)(unaff_EBP + -0x1c);
          iVar2 = *piVar7;
        }
        iVar5 = *(int *)(**(int **)(unaff_EBP + -0x24) + 4 + iVar2 * 8);
        piVar7[1] = piVar7[1] + *(int *)(piVar7[3] + iVar2 * 4);
        iVar1 = unaff_EBX[0x331];
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar5 + 0x14);
        uVar8 = *(undefined4 *)(iVar5 + 0x18);
        *(int *)(unaff_EBP + -0x34) = iVar5;
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar8;
        if (iVar1 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x331];
        iVar5 = (**(code **)(*piVar7 + 0xd8))(piVar7,unaff_EBX[0x33d]);
        if (iVar5 < 0) {
          FUN_00878e09(iVar5,piVar7,&DAT_00963df8);
        }
        if (unaff_EBX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        *(int *)(unaff_EBP + -0x2c) = unaff_EBX[0x331];
        *(int *)(unaff_EBP + -0x14) = iVar2 << 5;
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14);
        iVar5 = *(int *)(unaff_EBP + -0x14);
        if (unaff_EBX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x331];
        uVar3 = FUN_0043210d();
        iVar2 = (**(code **)(*piVar7 + 0xd8))(piVar7,uVar3 ^ *(uint *)(iVar2 + iVar5 + 0x10));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963df8);
        }
        if (unaff_EBX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (unaff_EBX[0x330] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x330];
        uVar8 = FUN_0043210d();
        iVar2 = (**(code **)(*piVar7 + 0xd8))(piVar7,uVar8);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963df8);
        }
        if (unaff_EBX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (unaff_EBX[0x32f] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32f];
        uVar8 = FUN_0043210d();
        iVar2 = (**(code **)(*piVar7 + 0xd8))(piVar7,uVar8);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963df8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0xf;
        FUN_00403191(&DAT_00980690);
        iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x14 +
                        *(int *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (iVar2 == 0) {
          if (unaff_EBX[0x32f] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar2 = FUN_0043210d();
          if (iVar2 == 0) goto LAB_0044090f;
          iVar2 = -*(int *)(unaff_EBP + -0x20);
        }
        else {
LAB_0044090f:
          iVar2 = *(int *)(unaff_EBP + -0x20);
        }
        iVar5 = unaff_EBX[0x32c];
        *(int *)(unaff_EBP + -0x24) = iVar2;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32c];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x90))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0xc +
                    *(int *)(unaff_EBP + -0x14)) == 0) {
          puVar6 = &DAT_0097bb30;
        }
        else {
          if (unaff_EBX[0x331] == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar6 = (undefined4 *)FUN_004113e5(unaff_EBP + -0x1c);
          FUN_0040ee87(*puVar6,1);
          *(undefined4 *)(unaff_EBP + -0x18) = 3;
          puVar6 = (undefined4 *)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -4) = 0x12;
        }
        if (unaff_EBX[0x32f] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x24);
        iVar2 = *piVar7;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        iVar2 = *piVar7;
        uVar8 = *puVar6;
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 100))(piVar7,uVar8,uVar10,uVar11,puVar6[3]);
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
          FUN_004125d9();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        FUN_00403191(&DAT_00980690);
        iVar2 = unaff_EBX[0x32b];
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32b];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x90))
                          (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x16;
        FUN_00403191(&DAT_00980690);
        iVar5 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + *(int *)(unaff_EBP + -0x14);
        iVar2 = *(int *)(iVar5 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if ((iVar2 == 0) && (unaff_EBX[0x33d] != 0)) {
          iVar2 = -*(int *)(iVar5 + 0x18);
        }
        else {
          iVar2 = *(int *)(iVar5 + 0x18);
        }
        iVar5 = unaff_EBX[0x32b];
        *(int *)(unaff_EBP + -0x24) = iVar2;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        uVar8 = *(undefined4 *)
                 (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x1c + *(int *)(unaff_EBP + -0x14))
        ;
        piVar7 = (int *)unaff_EBX[0x32b];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x94))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x24),uVar8,
                           *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          FUN_00878dfb();
        }
        if (unaff_EBX[0x32f] == 0) {
          FUN_00878dfb();
        }
        iVar2 = FUN_0043210d();
        if ((iVar2 != 0) &&
           (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x14 +
                    *(int *)(unaff_EBP + -0x14)) != 0)) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          FUN_00403191();
          iVar2 = unaff_EBX[0x32a];
          *(undefined4 *)(unaff_EBP + -4) = 0x18;
          if (iVar2 == 0) {
            FUN_00878dfb();
          }
          piVar7 = (int *)unaff_EBX[0x32a];
          iVar2 = *piVar7;
          *(int **)(unaff_EBP + -0x2c) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x8c))
                            (piVar7,unaff_EBP + -0x24,0,0,0,0,0,0,0,
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                             *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (unaff_EBX[0x32b] == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)unaff_EBX[0x32b];
          iVar2 = (**(code **)(*piVar7 + 0x88))(piVar7,*(undefined4 *)(unaff_EBP + -0x24));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
          }
        }
        if (unaff_EBX[0x32b] == 0) {
          FUN_00878dfb();
        }
        piVar7 = (int *)unaff_EBX[0x32b];
        iVar2 = (**(code **)(*piVar7 + 0x80))
                          (piVar7,(double)*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) +
                                                   0x14 + *(int *)(unaff_EBP + -0x14)));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,piVar7,&DAT_00963de8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x19;
        FUN_00403191(&DAT_00980690);
        iVar2 = unaff_EBX[0x32f];
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_004113e5(unaff_EBP + -0x24);
        iVar2 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar7;
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x2c) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x90))
                          (piVar7,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        if (unaff_EBX[0x336] != 0) {
          piVar7 = (int *)unaff_EBX[0x336];
          iVar2 = (**(code **)(*piVar7 + 0xd8))(piVar7,unaff_EBX[0x33d]);
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963df8);
          }
        }
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x24);
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x28);
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x1c;
        FUN_00403191(&DAT_00980690);
        iVar5 = unaff_EBX[0x33d];
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (iVar5 != 0) {
          iVar2 = -iVar2;
        }
        iVar5 = unaff_EBX[0x32e];
        *(int *)(unaff_EBP + -0x24) = iVar2;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32e];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x34) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x90))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
      }
    }
  }
LAB_00440f0e:
  iVar2 = FUN_00413367(unaff_EBX + 0x116,unaff_EBX[0x118]);
  if (iVar2 == 0) {
    if (unaff_EBX[0x113] == 0) {
      if (*(int *)(unaff_EBP + -0x28) != unaff_EBX[0x114] &&
          -1 < *(int *)(unaff_EBP + -0x28) - unaff_EBX[0x114]) {
        iVar2 = _rand();
        iVar2 = iVar2 % 3 + 1;
        if (0 < iVar2) {
          *(int *)(unaff_EBP + -0x28) = iVar2;
          do {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 0x1f;
            FUN_00403191(&DAT_00980690);
            iVar2 = unaff_EBX[0x32f];
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            if (iVar2 == 0) {
              FUN_00878dfb(0x80004003);
            }
            FUN_00425139(0x100,unaff_EBP + -0x58,unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            piVar7 = (int *)(unaff_EBP + -0x28);
            *piVar7 = *piVar7 + -1;
          } while (*piVar7 != 0);
        }
        unaff_EBX[0x113] = 1;
      }
    }
    else {
      if (unaff_EBX[0x32f] == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_00432a57();
      if (iVar2 == 0) {
        FUN_004031b7(1,3);
        iVar2 = unaff_EBX[0x32f];
        *(undefined4 *)(unaff_EBP + -4) = 0x1e;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)unaff_EBX[0x32f];
        iVar2 = *piVar7;
        *(int **)(unaff_EBP + -0x34) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x10c))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_0044239f();
      }
    }
  }
  else if (*(int *)(unaff_EBP + -0x28) != unaff_EBX[0x115] &&
           -1 < *(int *)(unaff_EBP + -0x28) - unaff_EBX[0x115]) {
    FUN_0043f7b6(0,0xffffffff);
    unaff_EBX[0x119] = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  do {
    iVar2 = unaff_EBX[0xd8] + *(int *)(unaff_EBP + -0x24);
    if (*(int *)(iVar2 + 4) != 0) {
      piVar7 = *(int **)(iVar2 + 4);
      iVar2 = *piVar7;
      *(int **)(unaff_EBP + -0x34) = piVar7;
      FUN_00424e27();
      uVar8 = FUN_0043210d();
      (**(code **)(iVar2 + 8))(uVar8);
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
  } while (*(int *)(unaff_EBP + -0x24) < 0x188);
  piVar7 = unaff_EBX + 0x338;
  unaff_EBX[0x33a] = unaff_EBX[0x338];
  unaff_EBX[0x33b] = unaff_EBX[0x339];
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x68;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = 0;
  piVar4 = unaff_EBX + 0x339;
  *(undefined4 *)(unaff_EBP + -4) = 0x21;
  FUN_00424df4(piVar7,piVar4,0,0,0,0,0,0,iVar2);
  FUN_00441575(piVar7,piVar4,uVar8,uVar10,uVar11,uVar12,uVar13,uVar14,iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
LAB_00441161:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


