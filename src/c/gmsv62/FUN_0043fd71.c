/* FUN_0043fd71 - 0x0043fd71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00440e1f) */

void FUN_0043fd71(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_00879bb8();
  iVar4 = extraout_ECX[299];
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) goto LAB_00441161;
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
  uVar3 = FUN_0043f90a(0);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  if (extraout_ECX[0x11a] == 0) {
LAB_0043fdbf:
    if (0x6d < *(int *)(unaff_EBP + -0x14)) goto LAB_00441161;
  }
  else if (0x1b < *(int *)(unaff_EBP + -0x14)) {
    if (extraout_ECX[0x11a] != 0) goto LAB_00441161;
    goto LAB_0043fdbf;
  }
  if ((0 < extraout_ECX[300]) &&
     (iVar4 = extraout_ECX[300] + -0x1e, extraout_ECX[300] = iVar4, iVar4 < 0)) {
    extraout_ECX[300] = 0;
    if ((extraout_ECX[0x12d] & 0xfffffffeU) == 8) {
      (**(code **)(*extraout_ECX + 0xc))(extraout_ECX[0x12d] & 1U | 4,0);
    }
  }
  if (extraout_ECX[0x11a] != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    uVar5 = FUN_0043f6fe();
    extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] =
         extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] + -0x1e;
    if (extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] < 1) {
      uVar5 = FUN_0043f6fe();
      iVar4 = *(int *)(unaff_EBP + -0x14);
      puVar1 = (uint *)(extraout_ECX + (uint)(uVar5 < 0x80000000) * 0xfd + 0x12f);
      *(uint **)(unaff_EBP + -0x1c) = puVar1;
      *(uint **)(unaff_EBP + -0x24) = puVar1 + iVar4 + 0xe0;
      if (((iVar4 == 9) || (iVar4 == 10)) && (extraout_ECX[0x33b] == extraout_ECX[0x339])) {
        puVar1[1] = 0;
      }
      else {
        *puVar1 = *puVar1 + 1;
        if ((**(int **)(unaff_EBP + -0x24) == 0) ||
           (*(uint *)(**(int **)(unaff_EBP + -0x24) + -4) <= *puVar1)) {
          iVar4 = FUN_0043f6fe();
          if (-1 < iVar4) {
            extraout_ECX[0x12e] = -1;
            FUN_00441501(1);
            (**(code **)(*extraout_ECX + 0x10))(6,100,0);
            goto LAB_0044007d;
          }
          *puVar1 = 0;
        }
        iVar4 = **(int **)(unaff_EBP + -0x24);
        if (((iVar4 == 0) || (*(int *)(iVar4 + -4) == 0)) ||
           (iVar4 = *(int *)(iVar4 + 4 + *puVar1 * 8), iVar4 == 0)) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          FUN_00444e82(0);
        }
        else {
          piVar9 = *(int **)(unaff_EBP + -0x24);
          piVar6 = *(int **)(unaff_EBP + -0x1c);
          extraout_ECX[0x11b] = *(int *)(iVar4 + 0x10);
          extraout_ECX[0x11c] = *(int *)(iVar4 + 0x14);
          extraout_ECX[0x11d] = *(int *)(iVar4 + 0x18);
          extraout_ECX[0x11e] = *(int *)(iVar4 + 0x1c);
          iVar4 = *(int *)(*piVar9 + 4 + *piVar6 * 8);
          iVar7 = *(int *)(iVar4 + 0x20);
          *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar4 + 0x24);
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_00403191(&DAT_00980690);
          iVar4 = extraout_ECX[0x32f];
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar4 = FUN_0043210d();
          if (iVar4 != 0) {
            iVar7 = -iVar7;
          }
          iVar4 = extraout_ECX[0x32c];
          *(int *)(unaff_EBP + -0x24) = iVar7;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x32c];
          iVar4 = *piVar9;
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar4 + 0x90))
                            (piVar9,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_004031b7(1,3);
          iVar4 = extraout_ECX[0x331];
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x331];
          iVar4 = *piVar9;
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar4 + 0x10c))
                            (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          piVar9 = *(int **)(unaff_EBP + -0x1c);
          piVar9[1] = piVar9[1] + *(int *)(piVar9[3] + *piVar9 * 4);
        }
      }
    }
LAB_0044007d:
    extraout_ECX[0x33a] = extraout_ECX[0x338];
    extraout_ECX[0x33b] = extraout_ECX[0x339];
    FUN_00403191(&DAT_00980690);
    iVar4 = extraout_ECX[0x32a];
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)extraout_ECX[0x32a];
    iVar4 = *piVar9;
    *(int **)(unaff_EBP + -0x2c) = piVar9;
    iVar4 = (**(code **)(iVar4 + 0x8c))
                      (piVar9,extraout_ECX + 0x338,extraout_ECX + 0x339,0,0,0,0,0,0,
                       *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar4 = extraout_ECX[0x32d];
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar9 = (int *)extraout_ECX[0x32d];
    iVar4 = *piVar9;
    *(int **)(unaff_EBP + -0x2c) = piVar9;
    iVar4 = (**(code **)(iVar4 + 0x90))
                      (piVar9,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) goto LAB_00441161;
  }
  uVar5 = FUN_0043f6fe();
  extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] =
       extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] + -0x1e;
  if (extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x130] < 1) {
    uVar5 = FUN_0043f6fe();
    iVar4 = *(int *)(unaff_EBP + -0x14);
    piVar9 = extraout_ECX + (uint)(uVar5 < 0x80000000) * 0xfd + 0x12f;
    *(int **)(unaff_EBP + -0x24) = piVar9 + iVar4 + 4;
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    *(int **)(unaff_EBP + -0x14) = piVar9 + iVar4 + 0x72;
    if (((((iVar4 == 0x24) || (iVar4 == 0x25)) || (iVar4 == 0x69)) || (iVar4 == 0x68)) &&
       (extraout_ECX[0x33b] == extraout_ECX[0x339])) {
      piVar9[1] = 0;
    }
    else {
      if ((extraout_ECX[0x121] / 10000 == 0xbe) || (extraout_ECX[0x121] / 10000 == 0xc1)) {
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      else {
        piVar6 = *(int **)(unaff_EBP + -0x24);
      }
      iVar7 = 0;
      if (*piVar6 != 0) {
        iVar7 = *(int *)(*piVar6 + -4);
      }
      *piVar9 = *piVar9 + 1;
      if (iVar7 <= *piVar9) {
        iVar7 = FUN_0043f6fe();
        if (-1 < iVar7) {
          extraout_ECX[0x12e] = -1;
          FUN_00441501(1);
          (**(code **)(*extraout_ECX + 0x10))(6,100,0);
          goto LAB_00440f0e;
        }
        *piVar9 = 0;
      }
      *(undefined **)(unaff_EBP + -0x10) = &DAT_00978678 + iVar4 * 0x18;
      if ((extraout_ECX[0x121] / 10000 == 0xbe) || (extraout_ECX[0x121] / 10000 == 0xc1)) {
        if ((**(int **)(unaff_EBP + -0x14) != 0) &&
           (*(int *)(**(int **)(unaff_EBP + -0x14) + -4) != 0)) {
          FUN_004031b7(1,3);
          iVar4 = extraout_ECX[0x334];
          *(undefined4 *)(unaff_EBP + -4) = 6;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x334];
          iVar4 = *piVar9;
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar4 + 0x10c))
                            (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          FUN_004031b7(1,3);
          iVar4 = extraout_ECX[0x333];
          *(undefined4 *)(unaff_EBP + -4) = 7;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x333];
          iVar4 = *piVar9;
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar4 + 0x10c))
                            (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          iVar4 = *(int *)(**(int **)(unaff_EBP + -0x14) + 4 + **(int **)(unaff_EBP + -0x1c) * 8);
          iVar7 = *(int *)(**(int **)(unaff_EBP + -0x24) + 4 + extraout_ECX[0x126] * 8);
          iVar2 = *(int *)(iVar4 + 0x2c);
          iVar10 = *(int *)(iVar4 + 0x28) - *(int *)(iVar7 + 0x1c);
          iVar4 = *(int *)(iVar7 + 0x20);
          if (extraout_ECX[0x334] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_0043210d();
          if (iVar7 != 0) {
            iVar10 = -iVar10;
          }
          extraout_ECX[0x128] = iVar2 - iVar4;
          extraout_ECX[0x127] = iVar10;
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 8;
          FUN_00403191(&DAT_00980690);
          iVar4 = extraout_ECX[0x32d];
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x32d];
          iVar4 = extraout_ECX[0x128];
          iVar7 = *piVar9;
          iVar2 = extraout_ECX[0x127];
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar7 + 0x90))
                            (piVar9,iVar2,iVar4,*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          iVar4 = *(int *)(**(int **)(unaff_EBP + -0x14) + 4 + **(int **)(unaff_EBP + -0x1c) * 8);
          extraout_ECX[0x122] = *(int *)(iVar4 + 0x14);
          extraout_ECX[0x123] = *(int *)(iVar4 + 0x18);
          extraout_ECX[0x124] = *(int *)(iVar4 + 0x1c);
          extraout_ECX[0x125] = *(int *)(iVar4 + 0x20);
          goto LAB_0044071d;
        }
      }
      else if ((**(int **)(unaff_EBP + -0x24) != 0) &&
              (*(int *)(**(int **)(unaff_EBP + -0x24) + -4) != 0)) {
        FUN_004031b7(1,3);
        iVar4 = extraout_ECX[0x331];
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x331];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x10c))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_004031b7(1,3);
        iVar4 = extraout_ECX[0x330];
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x330];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x10c))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_004031b7(1,3);
        iVar4 = extraout_ECX[0x332];
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x332];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x10c))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x32d];
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32d];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar9,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
LAB_0044071d:
        if ((extraout_ECX[0x121] / 10000 == 0xbe) || (extraout_ECX[0x121] / 10000 == 0xc1)) {
          iVar4 = extraout_ECX[0x126];
          piVar9 = *(int **)(unaff_EBP + -0x1c);
        }
        else {
          piVar9 = *(int **)(unaff_EBP + -0x1c);
          iVar4 = *piVar9;
        }
        iVar7 = *(int *)(**(int **)(unaff_EBP + -0x24) + 4 + iVar4 * 8);
        piVar9[1] = piVar9[1] + *(int *)(piVar9[3] + iVar4 * 4);
        iVar2 = extraout_ECX[0x331];
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar7 + 0x14);
        uVar3 = *(undefined4 *)(iVar7 + 0x18);
        *(int *)(unaff_EBP + -0x34) = iVar7;
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x331];
        iVar7 = (**(code **)(*piVar9 + 0xd8))(piVar9,extraout_ECX[0x33d]);
        if (iVar7 < 0) {
          FUN_00878e09(iVar7,piVar9,&DAT_00963df8);
        }
        if (extraout_ECX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        *(int *)(unaff_EBP + -0x2c) = extraout_ECX[0x331];
        *(int *)(unaff_EBP + -0x14) = iVar4 << 5;
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14);
        iVar7 = *(int *)(unaff_EBP + -0x14);
        if (extraout_ECX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x331];
        uVar5 = FUN_0043210d();
        iVar4 = (**(code **)(*piVar9 + 0xd8))(piVar9,uVar5 ^ *(uint *)(iVar4 + iVar7 + 0x10));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar9,&DAT_00963df8);
        }
        if (extraout_ECX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (extraout_ECX[0x330] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x330];
        uVar3 = FUN_0043210d();
        iVar4 = (**(code **)(*piVar9 + 0xd8))(piVar9,uVar3);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar9,&DAT_00963df8);
        }
        if (extraout_ECX[0x331] == 0) {
          FUN_00878dfb(0x80004003);
        }
        if (extraout_ECX[0x32f] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32f];
        uVar3 = FUN_0043210d();
        iVar4 = (**(code **)(*piVar9 + 0xd8))(piVar9,uVar3);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar9,&DAT_00963df8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0xf;
        FUN_00403191(&DAT_00980690);
        iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x14 +
                        *(int *)(unaff_EBP + -0x14));
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (iVar4 == 0) {
          if (extraout_ECX[0x32f] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar4 = FUN_0043210d();
          if (iVar4 == 0) goto LAB_0044090f;
          iVar4 = -*(int *)(unaff_EBP + -0x20);
        }
        else {
LAB_0044090f:
          iVar4 = *(int *)(unaff_EBP + -0x20);
        }
        iVar7 = extraout_ECX[0x32c];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32c];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0xc +
                    *(int *)(unaff_EBP + -0x14)) == 0) {
          puVar8 = &DAT_0097bb30;
        }
        else {
          if (extraout_ECX[0x331] == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar8 = (undefined4 *)FUN_004113e5(unaff_EBP + -0x1c);
          FUN_0040ee87(*puVar8,1);
          *(undefined4 *)(unaff_EBP + -0x18) = 3;
          puVar8 = (undefined4 *)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -4) = 0x12;
        }
        if (extraout_ECX[0x32f] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)FUN_004113e5(unaff_EBP + -0x24);
        iVar4 = *piVar9;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)*piVar9;
        iVar4 = *piVar9;
        uVar3 = *puVar8;
        uVar11 = puVar8[1];
        uVar12 = puVar8[2];
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 100))(piVar9,uVar3,uVar11,uVar12,puVar8[3]);
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
          FUN_004125d9();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x32b];
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32b];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar9,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x16;
        FUN_00403191(&DAT_00980690);
        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + *(int *)(unaff_EBP + -0x14);
        iVar4 = *(int *)(iVar7 + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if ((iVar4 == 0) && (extraout_ECX[0x33d] != 0)) {
          iVar4 = -*(int *)(iVar7 + 0x18);
        }
        else {
          iVar4 = *(int *)(iVar7 + 0x18);
        }
        iVar7 = extraout_ECX[0x32b];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        uVar3 = *(undefined4 *)
                 (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x1c + *(int *)(unaff_EBP + -0x14))
        ;
        piVar9 = (int *)extraout_ECX[0x32b];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x94))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x24),uVar3,
                           *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                           *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          FUN_00878dfb();
        }
        if (extraout_ECX[0x32f] == 0) {
          FUN_00878dfb();
        }
        iVar4 = FUN_0043210d();
        if ((iVar4 != 0) &&
           (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) + 0x14 +
                    *(int *)(unaff_EBP + -0x14)) != 0)) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          FUN_00403191();
          iVar4 = extraout_ECX[0x32a];
          *(undefined4 *)(unaff_EBP + -4) = 0x18;
          if (iVar4 == 0) {
            FUN_00878dfb();
          }
          piVar9 = (int *)extraout_ECX[0x32a];
          iVar4 = *piVar9;
          *(int **)(unaff_EBP + -0x2c) = piVar9;
          iVar4 = (**(code **)(iVar4 + 0x8c))
                            (piVar9,unaff_EBP + -0x24,0,0,0,0,0,0,0,
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                             *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          if (extraout_ECX[0x32b] == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar9 = (int *)extraout_ECX[0x32b];
          iVar4 = (**(code **)(*piVar9 + 0x88))(piVar9,*(undefined4 *)(unaff_EBP + -0x24));
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar9,&DAT_00963de8);
          }
        }
        if (extraout_ECX[0x32b] == 0) {
          FUN_00878dfb();
        }
        piVar9 = (int *)extraout_ECX[0x32b];
        iVar4 = (**(code **)(*piVar9 + 0x80))
                          (piVar9,(double)*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) +
                                                   0x14 + *(int *)(unaff_EBP + -0x14)));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,piVar9,&DAT_00963de8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x19;
        FUN_00403191(&DAT_00980690);
        iVar4 = extraout_ECX[0x32f];
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)FUN_004113e5(unaff_EBP + -0x24);
        iVar4 = *piVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)*piVar9;
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x2c) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar9,0,0,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        if (extraout_ECX[0x336] != 0) {
          piVar9 = (int *)extraout_ECX[0x336];
          iVar4 = (**(code **)(*piVar9 + 0xd8))(piVar9,extraout_ECX[0x33d]);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar9,&DAT_00963df8);
          }
        }
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x24);
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x28);
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x1c;
        FUN_00403191(&DAT_00980690);
        iVar7 = extraout_ECX[0x33d];
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (iVar7 != 0) {
          iVar4 = -iVar4;
        }
        iVar7 = extraout_ECX[0x32e];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar7 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32e];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x34) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x90))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
      }
    }
  }
LAB_00440f0e:
  iVar4 = FUN_00413367(extraout_ECX + 0x116,extraout_ECX[0x118]);
  if (iVar4 == 0) {
    if (extraout_ECX[0x113] == 0) {
      if (*(int *)(unaff_EBP + -0x28) != extraout_ECX[0x114] &&
          -1 < *(int *)(unaff_EBP + -0x28) - extraout_ECX[0x114]) {
        iVar4 = _rand();
        iVar4 = iVar4 % 3 + 1;
        if (0 < iVar4) {
          *(int *)(unaff_EBP + -0x28) = iVar4;
          do {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 0x1f;
            FUN_00403191(&DAT_00980690);
            iVar4 = extraout_ECX[0x32f];
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            if (iVar4 == 0) {
              FUN_00878dfb(0x80004003);
            }
            FUN_00425139(0x100,unaff_EBP + -0x58,unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
            if (iVar4 < 0) {
              FUN_00878dfb(iVar4);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
            if (iVar4 < 0) {
              FUN_00878dfb(iVar4);
            }
            piVar9 = (int *)(unaff_EBP + -0x28);
            *piVar9 = *piVar9 + -1;
          } while (*piVar9 != 0);
        }
        extraout_ECX[0x113] = 1;
      }
    }
    else {
      if (extraout_ECX[0x32f] == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar4 = FUN_00432a57();
      if (iVar4 == 0) {
        FUN_004031b7(1,3);
        iVar4 = extraout_ECX[0x32f];
        *(undefined4 *)(unaff_EBP + -4) = 0x1e;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar9 = (int *)extraout_ECX[0x32f];
        iVar4 = *piVar9;
        *(int **)(unaff_EBP + -0x34) = piVar9;
        iVar4 = (**(code **)(iVar4 + 0x10c))
                          (piVar9,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_0044239f();
      }
    }
  }
  else if (*(int *)(unaff_EBP + -0x28) != extraout_ECX[0x115] &&
           -1 < *(int *)(unaff_EBP + -0x28) - extraout_ECX[0x115]) {
    FUN_0043f7b6(0,0xffffffff);
    extraout_ECX[0x119] = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  do {
    iVar4 = extraout_ECX[0xd8] + *(int *)(unaff_EBP + -0x24);
    if (*(int *)(iVar4 + 4) != 0) {
      piVar9 = *(int **)(iVar4 + 4);
      iVar4 = *piVar9;
      *(int **)(unaff_EBP + -0x34) = piVar9;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      (**(code **)(iVar4 + 8))(uVar3);
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
  } while (*(int *)(unaff_EBP + -0x24) < 0x188);
  piVar9 = extraout_ECX + 0x338;
  extraout_ECX[0x33a] = extraout_ECX[0x338];
  extraout_ECX[0x33b] = extraout_ECX[0x339];
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -0x68;
  uVar15 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar3 = 0;
  piVar6 = extraout_ECX + 0x339;
  *(undefined4 *)(unaff_EBP + -4) = 0x21;
  FUN_00424df4(piVar9,piVar6,0,0,0,0,0,0,iVar4);
  FUN_00441575(piVar9,piVar6,uVar3,uVar11,uVar12,uVar13,uVar14,uVar15,iVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
LAB_00441161:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


