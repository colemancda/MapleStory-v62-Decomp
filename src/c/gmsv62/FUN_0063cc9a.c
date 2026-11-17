/* FUN_0063cc9a - 0x0063cc9a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063cc9a(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined1 *puStack_84;
  
  FUN_00879bb8();
  FUN_008162ff();
  iVar4 = FUN_007d1e08();
  iVar7 = *(int *)(extraout_ECX + 0xe8);
  *(int *)(unaff_EBP + -0x14) = iVar4;
  if (iVar7 != 0) {
    FUN_0043fd71();
  }
  if ((*(int *)(extraout_ECX + 0x94) != 0) &&
     (*(int *)(extraout_ECX + 0x94) < iVar4 - *(int *)(extraout_ECX + 0x90))) {
    *(int *)(extraout_ECX + 0x8c) = (*(int *)(extraout_ECX + 0x8c) + 1) % 3;
    *(int *)(extraout_ECX + 0x90) = iVar4;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *(int *)(extraout_ECX + 0x90) = iVar4;
    iVar7 = *(int *)(extraout_ECX + 0x88);
    if (-1 < iVar7) {
      iVar4 = __ftol();
      *(int *)(extraout_ECX + 0x94) = iVar4;
      if ((0x2cf < iVar4) && (*(int *)(extraout_ECX + 0x8c) == iVar7)) {
        *(undefined4 *)(extraout_ECX + 0x94) = 0;
        FUN_0063c703();
      }
    }
    puStack_84 = (undefined1 *)0x63cd55;
    FUN_008161f1();
    puStack_84 = (undefined1 *)(unaff_EBP + -0x18);
    puVar5 = (undefined4 *)FUN_00679d86();
    puStack_84 = (undefined1 *)*puVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d40d5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  iVar7 = *(int *)(extraout_ECX + 0x98);
  if (iVar7 != 0) {
    if (*(int *)(unaff_EBP + -0x14) == iVar7 || *(int *)(unaff_EBP + -0x14) - iVar7 < 0) {
      iVar7 = iVar7 - *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + -0x18) = iVar7;
      if (iVar7 % 1000 < 0x1e) {
        if (*(int *)(unaff_EBP + -0x18) < 10000) {
          puStack_84 = (undefined1 *)(unaff_EBP + -0x18);
          puVar5 = (undefined4 *)FUN_00679d86();
          puStack_84 = (undefined1 *)*puVar5;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_007d40d5();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
        }
        puStack_84 = (undefined1 *)0x63ce4e;
        FUN_008161f1();
      }
    }
    else {
      puStack_84 = (undefined1 *)0x0;
      FUN_0060142b();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      puStack_84 = (undefined1 *)0x63cdb9;
      FUN_00457cda();
      puStack_84 = (undefined1 *)0x63cdc8;
      FUN_004751b2();
      *(undefined4 *)(extraout_ECX + 0x98) = 0;
      piVar6 = (int *)(extraout_ECX + 200);
      *(undefined4 *)(unaff_EBP + -0x10) = 3;
      do {
        puStack_84 = (undefined1 *)0x63cde6;
        (**(code **)(*(int *)(*piVar6 + 4) + 0x1c))();
        piVar6 = piVar6 + 2;
        piVar1 = (int *)(unaff_EBP + -0x10);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  iVar7 = *(int *)(extraout_ECX + 0xa4);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  if ((iVar7 == 0) || (iVar4 == iVar7 || iVar4 - iVar7 < 0)) {
    iVar7 = *(int *)(extraout_ECX + 0xa8);
    if ((iVar7 != 0) && (iVar4 != iVar7 && -1 < iVar4 - iVar7)) {
      puStack_84 = (undefined1 *)0xfffffffe;
      *(undefined4 *)(extraout_ECX + 0xa8) = 0;
      FUN_004031b7();
      iVar7 = *(int *)(extraout_ECX + 0x108);
      *(undefined4 *)(unaff_EBP + -4) = 10;
      if (iVar7 == 0) {
        puStack_84 = (undefined1 *)0x63d06b;
        FUN_00878dfb();
      }
      puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
      FUN_0041141a();
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        puStack_84 = (undefined1 *)0x63d089;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_84 = (undefined1 *)0x63d096;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        puStack_84 = (undefined1 *)0x63d0a1;
        FUN_00878dfb();
      }
      puStack_84 = (undefined1 *)0x0;
      FUN_0043f7b6();
      if (*(int *)(extraout_ECX + 0x84) == *(int *)(extraout_ECX + 0x88)) {
        *(undefined4 *)(extraout_ECX + 0x88) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x94) = 0x78;
        iVar7 = FUN_007d1e08();
        *(int *)(extraout_ECX + 0x90) = iVar7;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(extraout_ECX + 0x90) = iVar7;
        iVar7 = FUN_007d1e08();
        iVar7 = iVar7 + 30000;
        *(int *)(extraout_ECX + 0x98) = iVar7;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(extraout_ECX + 0x98) = iVar7;
        piVar6 = (int *)(extraout_ECX + 200);
        iVar7 = 3;
        do {
          puStack_84 = (undefined1 *)0x63d116;
          (**(code **)(*(int *)(*piVar6 + 4) + 0x1c))();
          piVar6 = piVar6 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      else {
        puStack_84 = (undefined1 *)0x63d13f;
        FUN_0063d9d1();
        puStack_84 = (undefined1 *)0x63d14f;
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xe0) + 4) + 0x1c))();
      }
    }
  }
  else {
    puStack_84 = (undefined1 *)0x63ce79;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    puStack_84 = (undefined1 *)0x63ce89;
    FUN_00403191();
    iVar7 = *(int *)(extraout_ECX + 0x108);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar7 == 0) {
      puStack_84 = (undefined1 *)0x63cea5;
      FUN_00878dfb();
    }
    puStack_84 = (undefined1 *)0x63ceb0;
    piVar6 = (int *)FUN_004113e5();
    iVar7 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar7 == 0) {
      puStack_84 = (undefined1 *)0x63cec4;
      FUN_00878dfb();
    }
    iVar7 = *(int *)*piVar6;
    puStack_84 = *(undefined1 **)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x18) = (int *)*piVar6;
    iVar7 = (**(code **)(iVar7 + 0x90))();
    if (iVar7 < 0) {
      puStack_84 = *(undefined1 **)(unaff_EBP + -0x18);
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      puStack_84 = (undefined1 *)0x63cf16;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_84 = (undefined1 *)0x63cf23;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      puStack_84 = (undefined1 *)0x63cf2e;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_84 = (undefined1 *)0x63cf3b;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      puStack_84 = (undefined1 *)0x63cf46;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iVar7 = *(int *)(extraout_ECX + 0x9c);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (iVar7 < 0) {
      puVar10 = (undefined1 *)0x4;
      puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_84 = (undefined1 *)0x63cf7b;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 6;
    }
    else if (*(int *)(extraout_ECX + 0x84) == *(int *)(extraout_ECX + 0x88)) {
      puVar10 = (undefined1 *)0x3;
      puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_84 = (undefined1 *)0x63cfb5;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 6;
    }
    else {
      puVar10 = (undefined1 *)0x2;
      puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_84 = (undefined1 *)0x63cfe1;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 6;
    }
    FUN_00402676();
    puStack_84 = puVar10;
    FUN_0043f7b6();
    puStack_84 = *(undefined1 **)(unaff_EBP + -0x14);
    FUN_007d40d5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0xa4) = 0;
    FUN_00402676();
  }
  uVar2 = *(uint *)(*(int *)(extraout_ECX + 0xc0) + 0x14);
  iVar7 = (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xc0) + 4) + 0x20))();
  *(int *)(unaff_EBP + -0x14) = iVar7;
  uVar8 = iVar7 << 0x1f | uVar2;
  uVar3 = *(uint *)(extraout_ECX + 0xac);
  *(uint *)(unaff_EBP + -0x18) = uVar8;
  if ((uVar3 == uVar8) &&
     (((uVar2 != 3000 && (uVar2 != 0xbb9)) || (*(int *)(unaff_EBP + -0x14) != 0)))) {
    if (*(int *)(extraout_ECX + 0xb0) < 0x10f) goto LAB_0063d9bc;
    *(int *)(extraout_ECX + 0xb4) = *(int *)(extraout_ECX + 0xb4) + -1;
    if (*(int *)(extraout_ECX + 0xb4) + *(int *)(extraout_ECX + 0xb0) < 0) {
      *(undefined4 *)(extraout_ECX + 0xb4) = 0x10e;
    }
  }
  else {
    puStack_84 = &DAT_00978474;
    FUN_00414edd();
    if (uVar2 == 3000) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        if (*(int *)(extraout_ECX + 0x98) == 0) goto LAB_0063d44b;
        puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
        puVar5 = (undefined4 *)FUN_00679d22();
        puVar10 = (undefined1 *)*puVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_007d1e08();
        puStack_84 = puVar10;
        FUN_00434e21();
        puStack_84 = (undefined1 *)0x63d274;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
        FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -4) = 0xb;
        puStack_84 = (undefined1 *)0x63d205;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
LAB_0063d446:
      FUN_00414ebb();
    }
    else {
      if (uVar2 == 0xbb9) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          if (*(int *)(extraout_ECX + 0x98) == 0) goto LAB_0063d44b;
          puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
          puVar5 = (undefined4 *)FUN_00679d22();
          puVar10 = (undefined1 *)*puVar5;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0x10;
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_007d1e08();
          puStack_84 = puVar10;
          FUN_00434e21();
          puStack_84 = (undefined1 *)0x63d35a;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
          puVar5 = (undefined4 *)FUN_00679d22();
          puStack_84 = (undefined1 *)*puVar5;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0xe;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_00434e21();
          puStack_84 = (undefined1 *)0x63d2df;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        goto LAB_0063d446;
      }
      if (uVar2 == 0xbba) {
        if (*(int *)(extraout_ECX + 0x9c) < 10) {
          if (*(int *)(extraout_ECX + 0x88) < 0) {
            puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
            FUN_00679d22();
            *(undefined4 *)(unaff_EBP + -4) = 0x13;
            puStack_84 = (undefined1 *)0x63d3e0;
            FUN_00414f8b();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else if (*(int *)(extraout_ECX + 0xa0) == 0) {
            puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
            FUN_00679d22();
            *(undefined4 *)(unaff_EBP + -4) = 0x15;
            puStack_84 = (undefined1 *)0x63d43f;
            FUN_00414f8b();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else {
            puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
            FUN_00679d22();
            *(undefined4 *)(unaff_EBP + -4) = 0x14;
            puStack_84 = (undefined1 *)0x63d414;
            FUN_00414f8b();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
        }
        else {
          puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
          FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -4) = 0x12;
          puStack_84 = (undefined1 *)0x63d3a9;
          FUN_00414f8b();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        goto LAB_0063d446;
      }
    }
LAB_0063d44b:
    uVar9 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined4 *)(extraout_ECX + 0xb4) = 0;
    *(undefined4 *)(extraout_ECX + 0xac) = uVar9;
    puStack_84 = (undefined1 *)0x63d465;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    puStack_84 = (undefined1 *)(unaff_EBP + -0x2c);
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      puStack_84 = (undefined1 *)0x63d47f;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    puStack_84 = (undefined1 *)0x63d491;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_84;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_0044974c();
    uVar9 = FUN_00448ebb();
    *(undefined4 *)(extraout_ECX + 0xb0) = uVar9;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      puStack_84 = (undefined1 *)0x63d4d7;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_84 = (undefined1 *)0x63d4e4;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      puStack_84 = (undefined1 *)0x63d4ef;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0xb0) < 0x10f) {
      *(int *)(extraout_ECX + 0xb4) = (0x10e - *(int *)(extraout_ECX + 0xb0)) / 2;
    }
    else {
      *(undefined4 *)(extraout_ECX + 0xb4) = 0x87;
    }
  }
  puStack_84 = (undefined1 *)0xfffffffe;
  FUN_004031b7();
  iVar7 = *(int *)(extraout_ECX + 0x11c);
  *(undefined4 *)(unaff_EBP + -4) = 0x1a;
  if (iVar7 == 0) {
    puStack_84 = (undefined1 *)0x63d53e;
    FUN_00878dfb();
  }
  puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
  FUN_0041141a();
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    puStack_84 = (undefined1 *)0x63d55e;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_84 = (undefined1 *)0x63d56b;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    puStack_84 = (undefined1 *)0x63d576;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_84 = (undefined1 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0x1b;
  FUN_00679d86();
  puStack_84 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00402676();
  puStack_84 = (undefined1 *)0x63d5bf;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x3c);
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    puStack_84 = (undefined1 *)0x63d5da;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_84 = (undefined1 *)0x63d5e4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x2c);
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    puStack_84 = (undefined1 *)0x63d5fa;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (piVar6 == (int *)0x0) {
    puStack_84 = (undefined1 *)0x63d60f;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x10);
  }
  iVar7 = *piVar6;
  puStack_84 = *(undefined1 **)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x1c) = piVar6;
  iVar7 = (**(code **)(iVar7 + 0x2c))();
  if (iVar7 < 0) {
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_b8 = 0x63d64c;
    iStack_b4 = iVar7;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_b0 = 0x63d659;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_b0 = 0x63d664;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_b0 = 0x63d671;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_b0 = 0x63d67c;
    FUN_00878dfb();
  }
  iStack_b0 = 0x63d688;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_b0 = unaff_EBP + -0x3c;
  iStack_b4 = 0x63d696;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_b0 = 0x63d6a2;
    FUN_00878dfb();
  }
  iStack_b0 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_b4 = 0x63d6b5;
  FUN_004031b7();
  uStack_b8 = *(undefined4 *)(extraout_ECX + 0xb8);
  iStack_b0 = 0;
  iStack_b4 = 0xffffffff;
  uStack_bc = 0;
  uStack_c0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c0;
  iStack_c8 = unaff_EBP + -0x6c;
  iStack_d0 = unaff_EBP + -0x18;
  iStack_cc = 1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_cc = 0x63d704;
  iStack_cc = FUN_00449749();
  iStack_d0 = -1;
  uVar9 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x1c));
  uVar9 = FUN_00456ad5(uVar9);
  *(int **)(unaff_EBP + -0x1c) = &iStack_d0;
  FUN_004033a1(uVar9);
  uVar11 = 0;
  uVar9 = *(undefined4 *)(extraout_ECX + 0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_004115d9(uVar9,0);
  FUN_00448e3a(uVar9,uVar11);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_c8 = 0x63d750;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_c8 = 0x63d75d;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d768;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_c8 = 0x63d775;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d780;
    FUN_00878dfb();
  }
  iStack_c8 = 0x63d786;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  iStack_c8 = unaff_EBP + -0x6c;
  iStack_cc = 0x63d795;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d7a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_c8 = 0x63d7ab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_c8 = unaff_EBP + -0x5c;
  iStack_cc = 0x63d7b5;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d7c1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_c8 = 0x63d7cb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_c8 = unaff_EBP + -0x4c;
  iStack_cc = 0x63d7d5;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d7e1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_c8 = 0x63d7eb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_c8 = unaff_EBP + -0x2c;
  iStack_cc = 0x63d7f5;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d801;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_c8 = 0x63d80b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_c8 = unaff_EBP + -0x3c;
  iStack_cc = 0x63d815;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d821;
    FUN_00878dfb();
  }
  iVar7 = *(int *)(extraout_ECX + 0x11c);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar7 == 0) {
    iStack_c8 = 0x63d838;
    FUN_00878dfb();
  }
  iStack_c8 = unaff_EBP + -0x5c;
  iStack_cc = unaff_EBP + -0x4c;
  iStack_d0 = unaff_EBP + -0x2c;
  FUN_004250ac(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x3c);
  iStack_c8 = 0x63d867;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d872;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_c8 = 0x63d87f;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d88a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_c8 = 0x63d897;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d8a2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_c8 = 0x63d8af;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d8ba;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_c8 = 0x63d8c7;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d8d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_c8 = 0x63d8df;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d8ea;
    FUN_00878dfb();
  }
  iStack_c8 = 0x63d8f0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_c8 = unaff_EBP + -0x5c;
  iStack_cc = 0x63d8fa;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d906;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_c8 = 0x63d910;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  iStack_c8 = unaff_EBP + -0x6c;
  iStack_cc = 0x63d91a;
  iVar7 = FUN_00402e32();
  if (iVar7 < 0) {
    iStack_c8 = 0x63d926;
    FUN_00878dfb();
  }
  iVar7 = *(int *)(extraout_ECX + 0x11c);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar7 == 0) {
    iStack_c8 = 0x63d93d;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(extraout_ECX + 0x11c);
  iStack_d0 = *(int *)(unaff_EBP + -0x5c);
  iStack_cc = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x54);
  iVar7 = (**(code **)(*piVar6 + 0x90))
                    (piVar6,0x14,0x126,*(undefined4 *)(unaff_EBP + -0x6c),
                     *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60));
  if (iVar7 < 0) {
    FUN_00878e09(iVar7,piVar6,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar7 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar7 < 0) {
    FUN_00878dfb(iVar7);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar7 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar7 < 0) {
    FUN_00878dfb(iVar7);
  }
  piVar6 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
LAB_0063d9bc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


