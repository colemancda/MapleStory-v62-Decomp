/* FUN_004b75f1 - 0x004b75f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined8 FUN_004b75f1(void)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_ECX;
  undefined1 *puVar6;
  undefined1 *extraout_ECX_00;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  
  FUN_00879bb8();
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  puStack_6c = (undefined1 *)0x8;
  puStack_70 = (undefined1 *)(unaff_EBP + -0x38);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  puStack_74 = (undefined1 *)0x4b7616;
  FUN_004245d2();
  uVar5 = *(uint *)(unaff_EBP + -0x38);
  if ((uVar5 & 1) != 0) {
    puStack_6c = *(undefined1 **)(unaff_EBP + 0xc);
    puStack_74 = (undefined1 *)0x4b762f;
    puStack_70 = (undefined1 *)uVar4;
    FUN_004b50bc();
    puStack_6c = (undefined1 *)0x4b7636;
    uVar3 = FUN_0042452b();
    uVar5 = *(uint *)(unaff_EBP + -0x38);
    *(uint *)(extraout_ECX + 0x473) = uVar3 & 0xff;
  }
  if ((uVar5 & 2) != 0) {
    puStack_70 = (undefined1 *)0x4b7655;
    puStack_6c = (undefined1 *)uVar4;
    FUN_004b52db();
  }
  puStack_6c = &LAB_004b8ab0;
  puStack_70 = &LAB_004b8aaa;
  puStack_74 = (undefined1 *)0x6;
  FUN_0087b2f0(unaff_EBP + -0x68,4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_6c = &LAB_004b8ab0;
  puStack_70 = &LAB_004b8aaa;
  puStack_74 = (undefined1 *)0x6;
  FUN_0087b2f0(unaff_EBP + -0x50,4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    if ((*(uint *)(unaff_EBP + -0x38) & 4) != 0) {
      iVar9 = -1;
      piVar12 = (int *)(extraout_ECX + 0xdf);
      do {
        iVar10 = *piVar12;
        if ((iVar10 != 0) &&
           (puVar6 = (undefined1 *)(*(uint *)(iVar10 + 0x18) | *(uint *)(iVar10 + 0x1c)),
           puVar6 != (undefined1 *)0x0)) {
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          puStack_74 = puVar6;
          puStack_70 = puVar6;
          puStack_6c = (undefined1 *)iVar9;
          FUN_004b8a5d(piVar12 + -1);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_004b99cc(0xffffffff);
          FUN_004b81f8();
        }
        iVar10 = piVar12[0x62];
        if ((iVar10 != 0) &&
           (puVar6 = (undefined1 *)(*(uint *)(iVar10 + 0x18) | *(uint *)(iVar10 + 0x1c)),
           puVar6 != (undefined1 *)0x0)) {
          puStack_6c = (undefined1 *)(iVar9 + -100);
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          puStack_74 = puVar6;
          puStack_70 = puVar6;
          FUN_004b8a5d(piVar12 + 0x61);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_004b99cc(0xffffffff);
          FUN_004b81f8();
        }
        iVar9 = iVar9 + -1;
        piVar12 = piVar12 + 2;
      } while (-0x31 < iVar9);
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    do {
      iVar9 = *(int *)(unaff_EBP + -0x14);
      if (iVar9 == 1) {
        puStack_6c = (undefined1 *)0x4;
      }
      else if (iVar9 == 2) {
        puStack_6c = (undefined1 *)0x8;
      }
      else if (iVar9 == 3) {
        puStack_6c = (undefined1 *)0x10;
      }
      else if (iVar9 == 4) {
        puStack_6c = (undefined1 *)0x20;
      }
      else if (iVar9 == 5) {
        puStack_6c = (undefined1 *)0x40;
      }
      else {
        puStack_6c = (undefined1 *)0x0;
      }
      if (((uint)puStack_6c & *(uint *)(unaff_EBP + -0x38)) != 0) {
        piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x3e3 + *(int *)(unaff_EBP + -0x14) * 4);
        iVar9 = *piVar12;
        iVar10 = 0;
        if (iVar9 != 0) {
          iVar10 = *(int *)(iVar9 + -4);
        }
        iVar9 = 1;
        if (0 < iVar10 + -1) {
          do {
            iVar13 = *(int *)(*piVar12 + 4 + iVar9 * 8);
            if ((iVar13 != 0) && (*(int *)(iVar13 + 0x18) != 0 || *(int *)(iVar13 + 0x1c) != 0)) {
              puStack_74 = (undefined1 *)0x4b77a7;
              puStack_70 = (undefined1 *)iVar9;
              puStack_6c = (undefined1 *)iVar9;
              uVar4 = FUN_004b9844();
              *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
              puStack_74 = extraout_ECX_00;
              puStack_70 = extraout_ECX_00;
              FUN_004b8a5d(uVar4);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              FUN_004b99cc(0xffffffff);
              FUN_004b81f8();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 <= iVar10 + -1);
        }
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) < 6);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  do {
    piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x3e3 + *(int *)(unaff_EBP + -0x14) * 4);
    iVar9 = *piVar12;
    iVar10 = 0;
    *(int **)(unaff_EBP + -0x24) = piVar12;
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar9 + -4);
    }
    uVar5 = iVar9 - 1;
    if ((*(uint *)(unaff_EBP + -0x38) & 0x80) != 0) {
      puStack_6c = (undefined1 *)0x4b781e;
      uVar5 = FUN_0042452b();
      uVar5 = uVar5 & 0xff;
    }
    if (*piVar12 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*piVar12 + -4);
    }
    if (uVar5 != iVar9 - 1U) {
      puStack_6c = (undefined1 *)(unaff_EBP + -0xd);
      puStack_70 = (undefined1 *)0x0;
      puStack_74 = (undefined1 *)(uVar5 + 1);
      FUN_00465664();
    }
    iVar9 = *(int *)(unaff_EBP + -0x14);
    if (iVar9 == 1) {
      puStack_6c = (undefined1 *)0x4;
    }
    else if (iVar9 == 2) {
      puStack_6c = (undefined1 *)0x8;
    }
    else if (iVar9 == 3) {
      puStack_6c = (undefined1 *)0x10;
    }
    else if (iVar9 == 4) {
      puStack_6c = (undefined1 *)0x20;
    }
    else if (iVar9 == 5) {
      puStack_6c = (undefined1 *)0x40;
    }
    else {
      puStack_6c = (undefined1 *)0x0;
    }
    if ((((uint)puStack_6c & *(uint *)(unaff_EBP + -0x38)) != 0) && (-1 < (int)uVar5)) {
      do {
        iVar9 = **(int **)(unaff_EBP + -0x24);
        if (*(int *)(iVar9 + 4 + iVar10 * 8) != 0) {
          puStack_6c = (undefined1 *)0x0;
          puStack_70 = (undefined1 *)0x4b7894;
          FUN_00449913();
          *(undefined4 *)(iVar9 + iVar10 * 8 + 4) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 <= (int)uVar5);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 6);
  if ((*(uint *)(unaff_EBP + -0x38) & 4) != 0) {
    piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0xd7);
    iVar9 = 0x31;
    do {
      if (*piVar12 != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b78d5;
        FUN_00449913();
        *piVar12 = 0;
      }
      piVar12 = piVar12 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    while( true ) {
      puStack_6c = (undefined1 *)0x4b78e5;
      uVar5 = FUN_0042452b();
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 0) break;
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x28);
      puStack_74 = (undefined1 *)0x4b78fc;
      FUN_004b57d7();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((uVar5 != 0) && (uVar5 < 0x31)) {
        if ((*(int *)(unaff_EBP + 0xc) == 0) ||
           (puStack_70 = (undefined1 *)
                         (*(uint *)(*(int *)(unaff_EBP + -0x24) + 0x18) |
                         *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x1c)),
           puStack_70 == (undefined1 *)0x0)) {
          puStack_6c = (undefined1 *)(unaff_EBP + -0x28);
          puStack_70 = (undefined1 *)0x4b795c;
          FUN_004653ef();
        }
        else {
          puStack_6c = (undefined1 *)-uVar5;
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          puStack_74 = puStack_70;
          FUN_004b8a5d(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_004b99cc(0xffffffff);
          FUN_004b81f8();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b7972;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
    piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x25f);
    iVar9 = 0x31;
    do {
      if (*piVar12 != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b7993;
        FUN_00449913();
        *piVar12 = 0;
      }
      piVar12 = piVar12 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    while( true ) {
      puStack_6c = (undefined1 *)0x4b79a3;
      uVar5 = FUN_0042452b();
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 0) break;
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x28);
      puStack_74 = (undefined1 *)0x4b79ba;
      FUN_004b57d7();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if ((uVar5 != 0) && (uVar5 < 0x31)) {
        if ((*(int *)(unaff_EBP + 0xc) == 0) ||
           (puStack_70 = (undefined1 *)
                         (*(uint *)(*(int *)(unaff_EBP + -0x24) + 0x18) |
                         *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x1c)),
           puStack_70 == (undefined1 *)0x0)) {
          puStack_6c = (undefined1 *)(unaff_EBP + -0x28);
          puStack_70 = (undefined1 *)0x4b7a1d;
          FUN_004653ef();
        }
        else {
          puStack_6c = (undefined1 *)(-100 - uVar5);
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          puStack_74 = puStack_70;
          FUN_004b8a5d(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_004b99cc(0xffffffff);
          FUN_004b81f8();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b7a33;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
    iVar9 = *(int *)(*(int *)(unaff_EBP + -0x18) + 999);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar9 + -4);
    }
    while( true ) {
      puStack_6c = (undefined1 *)0x4b7a5a;
      uVar5 = FUN_0042452b();
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 0) break;
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x28);
      puStack_74 = (undefined1 *)0x4b7a71;
      FUN_004b57d7();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if ((uVar5 != 0) && ((int)uVar5 <= iVar9 + -1)) {
        if ((*(int *)(unaff_EBP + 0xc) == 0) ||
           (puStack_70 = (undefined1 *)
                         (*(uint *)(*(int *)(unaff_EBP + -0x24) + 0x18) |
                         *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x1c)),
           puStack_70 == (undefined1 *)0x0)) {
          puStack_6c = (undefined1 *)(unaff_EBP + -0x28);
          puStack_70 = (undefined1 *)0x4b7ad0;
          FUN_004653ef();
        }
        else {
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
          puStack_74 = puStack_70;
          puStack_6c = (undefined1 *)uVar5;
          FUN_004b8a5d(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_004b99cc(0xffffffff);
          FUN_004b81f8();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b7ae6;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 2;
  do {
    iVar9 = *(int *)(unaff_EBP + -0x14);
    if (iVar9 == 1) {
      puStack_6c = (undefined1 *)0x4;
    }
    else if (iVar9 == 2) {
      puStack_6c = (undefined1 *)0x8;
    }
    else if (iVar9 == 3) {
      puStack_6c = (undefined1 *)0x10;
    }
    else if (iVar9 == 4) {
      puStack_6c = (undefined1 *)0x20;
    }
    else if (iVar9 == 5) {
      puStack_6c = (undefined1 *)0x40;
    }
    else {
      puStack_6c = (undefined1 *)0x0;
    }
    if (((uint)puStack_6c & *(uint *)(unaff_EBP + -0x38)) != 0) {
      iVar9 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x3e3 + *(int *)(unaff_EBP + -0x14) * 4);
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + -4);
      }
      while( true ) {
        puStack_6c = (undefined1 *)0x4b7b4f;
        uVar5 = FUN_0042452b();
        uVar5 = uVar5 & 0xff;
        if (uVar5 == 0) break;
        puStack_6c = *(undefined1 **)(unaff_EBP + 8);
        puStack_70 = (undefined1 *)(unaff_EBP + -0x28);
        puStack_74 = (undefined1 *)0x4b7b66;
        FUN_004b57d7();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if ((uVar5 == 0) || (iVar10 + -1 < (int)uVar5)) {
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puStack_6c = (undefined1 *)0x0;
            puStack_70 = (undefined1 *)0x4b7bfb;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
          }
        }
        else {
          if ((*(int *)(unaff_EBP + 0xc) == 0) ||
             (puStack_70 = (undefined1 *)
                           (*(uint *)(*(int *)(unaff_EBP + -0x24) + 0x18) |
                           *(uint *)(*(int *)(unaff_EBP + -0x24) + 0x1c)),
             puStack_70 == (undefined1 *)0x0)) {
            puStack_6c = (undefined1 *)(unaff_EBP + -0x28);
            puStack_70 = (undefined1 *)0x4b7bc3;
            FUN_004653ef();
          }
          else {
            *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_74;
            puStack_74 = puStack_70;
            puStack_6c = (undefined1 *)uVar5;
            FUN_004b8a5d(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_004b99cc(0xffffffff);
            FUN_004b81f8();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            puStack_6c = (undefined1 *)0x0;
            puStack_70 = (undefined1 *)0x4b7bdb;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
          }
        }
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 6);
  if ((*(uint *)(unaff_EBP + -0x38) & 0x100) != 0) {
    puStack_6c = (undefined1 *)0x4b7c2b;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7c45;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      puStack_6c = (undefined1 *)0x4b7c50;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      puStack_6c = (undefined1 *)(unaff_EBP + -0x24);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x20);
      puStack_74 = (undefined1 *)0x4b7c62;
      FUN_004b8f75();
      iVar9 = *(int *)(unaff_EBP + -0x20) / 10000;
      if ((iVar9 % 100 != 0) && (iVar9 % 10 == 2)) {
        puStack_6c = (undefined1 *)0x4b7c8e;
        uVar4 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        puStack_6c = (undefined1 *)(unaff_EBP + -0x1c);
        puStack_70 = (undefined1 *)(unaff_EBP + -0x20);
        puStack_74 = (undefined1 *)0x4b7ca7;
        FUN_004b8f75();
      }
    }
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x8000) != 0) {
    puStack_6c = (undefined1 *)0x4b7cc8;
    FUN_004b9178();
    puStack_6c = (undefined1 *)0x4b7cd0;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7ce1;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      puStack_6c = (undefined1 *)0x4b7cec;
      uVar4 = FUN_00424561();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      puStack_6c = (undefined1 *)(unaff_EBP + -0x24);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x20);
      puStack_74 = (undefined1 *)0x4b7cfe;
      FUN_004b90a6();
    }
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x200) != 0) {
    puStack_6c = (undefined1 *)0x4b7d17;
    uVar2 = FUN_00424561();
    puStack_6c = (undefined1 *)0x4b7d23;
    FUN_004b8268();
    for (uVar5 = (uint)uVar2; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7d2f;
      puVar6 = (undefined1 *)FUN_00424561();
      puStack_6c = (undefined1 *)(unaff_EBP + -0x24);
      puStack_70 = (undefined1 *)0x4b7d3d;
      FUN_0045cdbc();
      puStack_6c = (undefined1 *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_74 = (undefined1 *)0x4b7d4d;
      puStack_70 = puVar6;
      FUN_004b823b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_6c = (undefined1 *)0x4b7d59;
      FUN_00414ebb();
    }
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x4000) != 0) {
    puStack_6c = (undefined1 *)0x4b7d72;
    uVar2 = FUN_00424561();
    puStack_6c = (undefined1 *)0x4b7d84;
    FUN_004b930d();
    for (uVar5 = (uint)uVar2; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7d90;
      uVar4 = FUN_00424561();
      puStack_6c = (undefined1 *)0x8;
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      puStack_70 = (undefined1 *)(unaff_EBP + -0x30);
      puStack_74 = (undefined1 *)0x4b7da1;
      FUN_004245d2();
      puStack_6c = (undefined1 *)(unaff_EBP + -0x30);
      puStack_70 = (undefined1 *)(unaff_EBP + -0x24);
      puStack_74 = (undefined1 *)0x4b7db0;
      FUN_004b922e();
    }
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x400) != 0) {
    puStack_6c = (undefined1 *)0x4b7dcd;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_6c = (undefined1 *)0x4b7df3;
      FUN_004b8b70();
      puVar11 = *(undefined4 **)(unaff_EBP + -0x2c);
      puStack_6c = (undefined1 *)0x4b7dfe;
      uVar4 = FUN_0042459a();
      *puVar11 = uVar4;
      iVar9 = *(int *)(unaff_EBP + -0x2c);
      puStack_6c = (undefined1 *)0x4b7e0b;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(iVar9 + 4) = uVar4;
      iVar9 = *(int *)(unaff_EBP + -0x2c);
      puStack_6c = (undefined1 *)0x4b7e19;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(iVar9 + 8) = uVar4;
      iVar9 = *(int *)(unaff_EBP + -0x2c);
      puStack_6c = (undefined1 *)0x4b7e27;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(iVar9 + 0xc) = uVar4;
      iVar9 = *(int *)(unaff_EBP + -0x2c);
      puStack_6c = (undefined1 *)0x4b7e35;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(iVar9 + 0x10) = uVar4;
      puStack_6c = (undefined1 *)(unaff_EBP + -0x30);
      puStack_70 = *(undefined1 **)(unaff_EBP + -0x2c);
      puStack_74 = (undefined1 *)0x4b7e46;
      FUN_004b93c8();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        puStack_6c = (undefined1 *)0x0;
        puStack_70 = (undefined1 *)0x4b7e5a;
        FUN_004b8bd2();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
    }
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x800) != 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_6c = (undefined1 *)0x4b7e82;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7e9b;
      FUN_004b9519();
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)0x4b7ea5;
      FUN_004b6a05();
    }
    puStack_6c = (undefined1 *)0x4b7eb0;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7ec9;
      FUN_004b9557();
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)0x4b7ed3;
      FUN_004b6a23();
    }
    puStack_6c = (undefined1 *)0x4b7ede;
    uVar5 = FUN_00424561();
    for (uVar5 = uVar5 & 0xffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      puStack_6c = (undefined1 *)0x4b7ef7;
      FUN_004b9595();
      puStack_6c = *(undefined1 **)(unaff_EBP + 8);
      puStack_70 = (undefined1 *)0x4b7f01;
      FUN_004b69ab();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_6c = (undefined1 *)0x4b7f10;
    FUN_00414ebb();
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x1000) != 0) {
    iVar9 = *(int *)(unaff_EBP + -0x18);
    puVar11 = (undefined4 *)(iVar9 + 0x4b3);
    iVar10 = 5;
    do {
      puStack_6c = (undefined1 *)0x4b7f32;
      uVar4 = FUN_0042459a();
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar11 = (undefined4 *)(iVar9 + 0x4c7);
    iVar9 = 10;
    do {
      puStack_6c = (undefined1 *)0x4b7f4b;
      uVar4 = FUN_0042459a();
      *puVar11 = uVar4;
      puVar11 = puVar11 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    do {
      iVar9 = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0xc;
      while( true ) {
        iVar10 = *(int *)(unaff_EBP + -0x14);
        iVar13 = *(int *)(unaff_EBP + -0x50 + iVar10 * 4);
        if (iVar13 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar13 + -4);
        }
        if (iVar7 <= *(int *)(unaff_EBP + 0xc)) break;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 0xc) + 1;
        piVar12 = (int *)(iVar13 + 4 + *(int *)(unaff_EBP + -0x20));
        while( true ) {
          if (iVar13 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(iVar13 + -4);
          }
          if (iVar10 <= *(int *)(unaff_EBP + -0x1c)) break;
          iVar10 = *(int *)(iVar13 + 4 + iVar9);
          if ((*(int *)(iVar10 + 0x18) == *(int *)(*piVar12 + 0x18)) &&
             (*(int *)(iVar10 + 0x1c) == *(int *)(*piVar12 + 0x1c))) break;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          piVar12 = piVar12 + 3;
        }
        if (iVar13 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(iVar13 + -4);
        }
        if (*(int *)(unaff_EBP + -0x1c) < iVar10) {
LAB_004b803a:
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + -1;
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + -0xc;
          puStack_6c = (undefined1 *)(iVar13 + iVar9);
          iVar9 = iVar9 + -0xc;
        }
        else {
          iVar10 = *(int *)(unaff_EBP + -0x68 + *(int *)(unaff_EBP + -0x14) * 4);
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(int *)(unaff_EBP + -0x24) = iVar10 + 4;
          while( true ) {
            if (iVar10 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(iVar10 + -4);
            }
            if (iVar7 <= *(int *)(unaff_EBP + -0x1c)) break;
            iVar7 = *(int *)(iVar13 + 4 + iVar9);
            if ((*(int *)(iVar7 + 0x18) == *(int *)(**(int **)(unaff_EBP + -0x24) + 0x18)) &&
               (*(int *)(iVar7 + 0x1c) == *(int *)(**(int **)(unaff_EBP + -0x24) + 0x1c))) break;
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0xc;
          }
          if (iVar10 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar10 + -4);
          }
          if (iVar7 <= *(int *)(unaff_EBP + -0x1c)) goto LAB_004b803a;
          puStack_6c = *(undefined1 **)(iVar13 + 4 + iVar9);
          iVar13 = *(int *)(unaff_EBP + -0x1c) * 0xc;
          puStack_70 = (undefined1 *)0x4b8065;
          (**(code **)(**(int **)(iVar10 + 4 + iVar13) + 0x38))();
          piVar12 = (int *)(unaff_EBP + -0x68 + *(int *)(unaff_EBP + -0x14) * 4);
          puStack_6c = (undefined1 *)(iVar13 + *piVar12);
          puStack_70 = (undefined1 *)0x4b807e;
          FUN_004653ef();
          puStack_6c = (undefined1 *)(iVar13 + *piVar12);
        }
        puStack_70 = (undefined1 *)0x4b8088;
        FUN_004b9a51();
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0xc;
        iVar9 = iVar9 + 0xc;
      }
      iVar9 = *(int *)(unaff_EBP + -0x68 + iVar10 * 4);
      if ((iVar9 != 0) && (*(int *)(iVar9 + -4) != 0)) {
        iVar13 = 0;
        iVar9 = 0;
        while( true ) {
          iVar7 = *(int *)(unaff_EBP + -0x68 + iVar10 * 4);
          if (iVar7 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar7 + -4);
          }
          if (iVar8 <= iVar13) break;
          puStack_70 = (undefined1 *)(iVar7 + iVar9);
          puStack_6c = (undefined1 *)0xffffffff;
          puStack_74 = (undefined1 *)0x4b80cf;
          FUN_004b8ab5();
          iVar13 = iVar13 + 1;
          iVar9 = iVar9 + 0xc;
        }
      }
      iVar9 = 0;
      piVar12 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x3e3 + *(int *)(unaff_EBP + -0x14) * 4);
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while( true ) {
        iVar10 = *(int *)(unaff_EBP + -0x50 + *(int *)(unaff_EBP + -0x14) * 4);
        if (iVar10 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(iVar10 + -4);
        }
        if (iVar13 <= *(int *)(unaff_EBP + 0xc)) break;
        iVar10 = iVar10 + iVar9;
        iVar13 = *piVar12;
        iVar7 = 0;
        if (iVar13 != 0) {
          iVar7 = *(int *)(iVar13 + -4);
        }
        if (((*(int *)(unaff_EBP + -0x14) == 1) && (iVar13 = *(int *)(iVar10 + 8), iVar13 < -100))
           && (-0x95 < iVar13)) {
          iVar13 = *(int *)(unaff_EBP + -0x18) + iVar13 * -8 + -0xc5;
LAB_004b8149:
          if ((iVar13 == 0) || (puStack_6c = (undefined1 *)iVar10, *(int *)(iVar13 + 4) != 0))
          goto LAB_004b8156;
        }
        else {
          iVar13 = *(int *)(iVar10 + 8);
          if ((0 < iVar13) && (iVar13 <= iVar7 + -1)) {
            iVar13 = *piVar12 + iVar13 * 8;
            goto LAB_004b8149;
          }
LAB_004b8156:
          puStack_6c = *(undefined1 **)(unaff_EBP + -0x14);
          puStack_70 = (undefined1 *)0x4b8161;
          iVar13 = FUN_0048aa38();
          puStack_6c = (undefined1 *)iVar10;
          if (iVar13 < 1) {
            puStack_70 = (undefined1 *)0xffffffff;
            puStack_74 = (undefined1 *)0x4b8176;
            FUN_004b8e95();
          }
        }
        puStack_70 = (undefined1 *)0x4b817d;
        FUN_004653ef();
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        iVar9 = iVar9 + 0xc;
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) < 6);
  }
  if ((*(uint *)(unaff_EBP + -0x38) & 0x20000) != 0) {
    puStack_6c = (undefined1 *)0x4b81ab;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x527) = uVar4;
  }
  uVar1 = *(undefined8 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_6c = &LAB_004b8ab0;
  puStack_70 = (undefined1 *)0x6;
  puStack_74 = (undefined1 *)0x4;
  FUN_0087a0b8(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_6c = &LAB_004b8ab0;
  puStack_70 = (undefined1 *)0x6;
  puStack_74 = (undefined1 *)0x4;
  FUN_0087a0b8(unaff_EBP + -0x68);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


