/* FUN_004b1b2f - 0x004b1b2f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b1b2f(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  uint uVar8;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar9;
  int unaff_EBP;
  int iVar10;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x40) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  FUN_00498b1f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004b2362();
  if (*(int *)(extraout_ECX + 0x48) == 0) {
    FUN_004125e6();
  }
  else {
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar3 = (undefined4 *)FUN_004b2768();
    *(undefined4 *)(unaff_EBP + -0x3c) = *puVar3;
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x14);
    }
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + -0x38) = piVar5;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < 0) {
      iStack_f8 = *(int *)(unaff_EBP + -0x38);
      uStack_100 = 0x4b1bea;
      iStack_fc = iVar4;
      FUN_00878e09();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_f8 = 0x4b1bff;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_f8 = 0x4b1c0a;
      FUN_00878dfb();
    }
    uVar8 = *(uint *)(extraout_ECX + 0x4c);
    iVar4 = extraout_ECX;
    if (uVar8 != 0) {
      do {
        uVar9 = *(uint *)(iVar4 + 0x4c);
        iVar10 = 0;
        if (uVar9 == 0) {
LAB_004b1c4c:
          iVar10 = -1;
        }
        else {
          do {
            if (uVar9 == uVar8) break;
            iVar10 = iVar10 + 1;
            iVar6 = *(int *)((-(uint)(uVar9 != 0) & uVar9 - 0x10) + 4);
            uVar9 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
          } while (uVar9 != 0);
          if (uVar9 == 0) goto LAB_004b1c4c;
        }
        *(uint *)(unaff_EBP + -0x28) = uVar8;
        iVar6 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
        uVar8 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
        *(int *)(unaff_EBP + -0x18) = iVar10;
        *(uint *)(unaff_EBP + -0x3c) = uVar8;
        if (uVar8 == 0) {
          iStack_f8 = 0xff;
          iStack_fc = 0x4b1d29;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_f8 = 2;
          iStack_fc = unaff_EBP + -0x4c;
          uStack_100 = 0x4b1d43;
          puVar3 = (undefined4 *)FUN_004b2768();
          piVar5 = *(int **)(unaff_EBP + -0x14);
          uVar7 = *puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
          if (piVar5 == (int *)0x0) {
            iStack_f8 = 0x4b1d5d;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + -0x14);
          }
          iVar10 = *(int *)(*(int *)(unaff_EBP + -0x28) + 8);
          iVar6 = *piVar5;
          uStack_100 = *(undefined4 *)(unaff_EBP + -0xa0);
          iStack_fc = *(int *)(unaff_EBP + -0x9c);
          iStack_f8 = *(int *)(unaff_EBP + -0x98);
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar10 = (**(code **)(iVar6 + 0x80))
                             (piVar5,iVar10 + *(int *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1c));
          if (iVar10 < 0) {
            iStack_f8 = *(int *)(unaff_EBP + -0x10);
            uStack_100 = 0x4b1d9d;
            iStack_fc = iVar10;
            FUN_00878e09();
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          iStack_f8 = 0xff;
          iStack_fc = 0x4b1c9a;
          FUN_004031b7();
          iStack_f8 = 1;
          iStack_fc = unaff_EBP + -0x44;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          uStack_100 = 0x4b1cac;
          puVar3 = (undefined4 *)FUN_004b2768();
          piVar5 = *(int **)(unaff_EBP + -0x14);
          uVar7 = *puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
          if (piVar5 == (int *)0x0) {
            iStack_f8 = 0x4b1cc6;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + -0x14);
          }
          iVar10 = *(int *)(*(int *)(unaff_EBP + -0x28) + 8);
          iVar6 = *piVar5;
          uStack_100 = *(undefined4 *)(unaff_EBP + -0x80);
          iStack_fc = *(int *)(unaff_EBP + -0x7c);
          iStack_f8 = *(int *)(unaff_EBP + -0x78);
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar10 = (**(code **)(iVar6 + 0x80))
                             (piVar5,iVar10 + *(int *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x1c));
          if (iVar10 < 0) {
            iStack_f8 = *(int *)(unaff_EBP + -0x10);
            uStack_100 = 0x4b1d03;
            iStack_fc = iVar10;
            FUN_00878e09();
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        iStack_f8 = 0x4b1db5;
        iVar10 = FUN_00402bc3();
        if (iVar10 < 0) {
          iStack_f8 = 0x4b1dc0;
          FUN_00878dfb();
        }
        iStack_f8 = 3;
        iStack_fc = unaff_EBP + -0x38;
        uStack_100 = 0x4b1dd9;
        FUN_004b2768();
        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x28) + 4);
        iVar10 = *(int *)(*(int *)(unaff_EBP + -0x28) + 8);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        *(int *)(unaff_EBP + -0x10) = iVar6;
        if (iVar6 < iVar10) {
          *(int *)(unaff_EBP + -0x2c) = iVar6 + *(int *)(unaff_EBP + 8);
          do {
            iStack_f8 = 0xff;
            iStack_fc = 0x4b1e09;
            FUN_004031b7();
            piVar5 = *(int **)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (piVar5 == (int *)0x0) {
              iStack_f8 = 0x4b1e1e;
              FUN_00878dfb();
              piVar5 = *(int **)(unaff_EBP + -0x14);
            }
            iVar10 = *piVar5;
            uStack_100 = *(undefined4 *)(unaff_EBP + -0xc0);
            iStack_fc = *(int *)(unaff_EBP + -0xbc);
            iStack_f8 = *(int *)(unaff_EBP + -0xb8);
            *(int **)(unaff_EBP + -0x1c) = piVar5;
            iVar10 = (**(code **)(iVar10 + 0x80))
                               (piVar5,*(undefined4 *)(unaff_EBP + -0x2c),
                                *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x38))
            ;
            if (iVar10 < 0) {
              iStack_f8 = *(int *)(unaff_EBP + -0x1c);
              uStack_100 = 0x4b1e57;
              iStack_fc = iVar10;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iStack_f8 = 0x4b1e67;
            iVar10 = FUN_00402bc3();
            if (iVar10 < 0) {
              iStack_f8 = 0x4b1e72;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            piVar5 = *(int **)(unaff_EBP + -0x28);
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
          } while (*(int *)(unaff_EBP + -0x10) < piVar5[2]);
          iVar10 = *(int *)(unaff_EBP + -0x18);
        }
        else {
          iVar10 = *(int *)(unaff_EBP + -0x18);
          piVar5 = *(int **)(unaff_EBP + -0x28);
        }
        iVar6 = piVar5[2];
        iVar1 = piVar5[1];
        iVar2 = *piVar5;
        *(int *)(unaff_EBP + -0x1c) = iVar6 - iVar1;
        if (iVar2 == 0) {
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          iStack_f8 = 0x4b1fe2;
          FUN_00419192();
          puVar3 = (undefined4 *)(iVar4 + 0x58);
          if (iVar10 != *(int *)(iVar4 + 0x3c)) {
            puVar3 = (undefined4 *)(iVar4 + 0x54);
          }
          *(undefined4 *)(unaff_EBP + -0x30) = *puVar3;
          FUN_0045e787();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_f8 = 0x4b200f;
          FUN_00403191();
          iStack_f8 = (iVar6 - iVar1) + 4;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_fc = 0x4b2026;
          uStack_100 = FUN_00411641();
          *(int **)(unaff_EBP + -0x34) = &iStack_fc;
          iStack_fc = extraout_ECX_00;
          FUN_004033a1();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          uStack_100 = 0x4b203e;
          FUN_0044974c();
          uStack_100 = 0x4b2045;
          iVar10 = FUN_0047077a();
          *(int *)(unaff_EBP + -0x10) = iVar10;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_f8 = 0x4b205a;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            iStack_f8 = 0x4b2065;
            FUN_00878dfb();
          }
          iStack_f8 = 0x4b2071;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x24) + -4) >> 1;
          }
          if (iVar10 < (int)uVar8) {
            iStack_f8 = unaff_EBP + -0x50;
            iStack_fc = 0x4b2096;
            FUN_0046fcad();
            *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 1;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
          }
          iStack_f8 = 0x4b20b1;
          iStack_fc = FUN_00411641();
          *(int **)(unaff_EBP + -0x34) = &iStack_f8;
          uStack_100 = 0x4b20bd;
          FUN_004033a1();
          *(undefined4 *)(unaff_EBP + -4) = 0x10;
          iStack_fc = 0x4b20cc;
          FUN_0044974c();
          iStack_fc = 0x4b20d3;
          uVar7 = FUN_00448ebb();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar7;
          *(undefined4 *)(unaff_EBP + -4) = 0xf;
          if ((*(byte *)(unaff_EBP + -0x20) & 1) != 0) {
            *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
            FUN_00402676();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_f8 = 0x4b20ff;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            iStack_f8 = 0x4b210a;
            FUN_00878dfb();
          }
          if (iVar10 != 0) {
            iStack_f8 = 0x4b211e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
            iStack_f8 = unaff_EBP + -0x60;
            iStack_fc = 0x4b2128;
            iVar10 = FUN_00402e32();
            if (iVar10 < 0) {
              iStack_f8 = 0x4b2134;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            iStack_f8 = 0x4b213e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
            iStack_f8 = unaff_EBP + -0x70;
            iStack_fc = 0x4b2148;
            iVar10 = FUN_00402e32();
            if (iVar10 < 0) {
              iStack_f8 = 0x4b2154;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (*(int *)(unaff_EBP + -0x24) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x24) + -4) >> 1;
            }
            if (*(int *)(unaff_EBP + -0x10) < (int)uVar8) {
              iStack_f8 = unaff_EBP + -0x48;
              iStack_fc = 0x4b217c;
              FUN_0046fcad();
              *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) | 2;
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
            }
            iVar10 = *(int *)(iVar4 + 100);
            if (*(int *)(unaff_EBP + -0x18) == *(int *)(iVar4 + 0x3c)) {
              iVar4 = -0x10;
            }
            else {
              iVar4 = -0xf;
            }
            iStack_f8 = unaff_EBP + -0x70;
            iStack_fc = 0x4b21ae;
            iStack_fc = FUN_00449749();
            uStack_100 = 0x4b21b6;
            uVar7 = FUN_00411641();
            *(undefined4 **)(unaff_EBP + -0x10) = &uStack_100;
            uStack_100 = extraout_ECX_01;
            FUN_004033a1(uVar7);
            iVar10 = iVar10 + iVar4 + *(int *)(unaff_EBP + 0xc);
            iVar4 = (*(int *)(unaff_EBP + -0x1c) / 2 - *(int *)(unaff_EBP + -0x34) / 2) +
                    *(int *)(*(int *)(unaff_EBP + -0x28) + 4) + *(int *)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -4) = 0x14;
            FUN_004115d9(iVar4,iVar10);
            FUN_00448e3a(iVar4,iVar10);
            *(undefined4 *)(unaff_EBP + -4) = 0x13;
            if ((*(byte *)(unaff_EBP + -0x20) & 2) != 0) {
              *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffd;
              FUN_00402676();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            iStack_f8 = 0x4b2222;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_f8 = 0x4b222d;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_f8 = 0x4b223a;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              iStack_f8 = 0x4b2245;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
            iStack_f8 = 0x4b2256;
            (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00402676();
        }
        else {
          if (iVar10 == *(int *)(iVar4 + 0x3c)) {
            piVar5 = piVar5 + 6;
          }
          else {
            piVar5 = piVar5 + 5;
          }
          *(int *)(unaff_EBP + -0x18) = *piVar5;
          FUN_004125f3();
          iStack_f8 = 0xff;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_fc = 0x4b1ed4;
          FUN_004031b7();
          iVar4 = *(int *)(iVar4 + 0x60);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if ((iVar4 == 0) || (iVar4 == 3)) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          else {
            *(uint *)(unaff_EBP + -0x10) = ((iVar4 != 5) - 1 & 0xfffffffd) + 2;
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_f8 = 0x4b1f0c;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              iStack_f8 = 0x4b1f18;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            iStack_f8 = 0x4b1f27;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x14);
          *(int **)(unaff_EBP + -0x2c) = piVar5;
          *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x18);
          uVar8 = FUN_0040e53d();
          iVar4 = *(int *)(*(int *)(unaff_EBP + -0x40) + 100);
          iVar10 = *(int *)(unaff_EBP + -0x10);
          iVar6 = *(int *)(unaff_EBP + 0xc);
          uVar9 = FUN_0040e48b();
          uStack_100 = *(undefined4 *)(unaff_EBP + -0x90);
          iStack_fc = *(int *)(unaff_EBP + -0x8c);
          iStack_f8 = *(int *)(unaff_EBP + -0x88);
          iVar4 = (**(code **)(*piVar5 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x2c),
                             (*(int *)(unaff_EBP + -0x1c) / 2 - (uVar9 >> 1)) +
                             *(int *)(*(int *)(unaff_EBP + -0x28) + 4) + *(int *)(unaff_EBP + 8),
                             (iVar4 / 2 - (uVar8 >> 1)) + iVar10 + iVar6,
                             *(undefined4 *)(unaff_EBP + -0x34));
          if (iVar4 < 0) {
            iStack_f8 = *(int *)(unaff_EBP + -0x2c);
            uStack_100 = 0x4b1fa0;
            iStack_fc = iVar4;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_f8 = 0x4b1fb0;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            iStack_f8 = 0x4b1fbb;
            FUN_00878dfb();
          }
          FUN_004125e6();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
          iStack_f8 = 0x4b2273;
          (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
        }
        if (*(int *)(unaff_EBP + -0x3c) == 0) break;
        iVar4 = *(int *)(unaff_EBP + -0x40);
        uVar8 = *(uint *)(unaff_EBP + -0x3c);
      } while( true );
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_f8 = 0x4b228e;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


