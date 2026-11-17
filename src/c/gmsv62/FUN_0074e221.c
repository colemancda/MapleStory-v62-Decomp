/* FUN_0074e221 - 0x0074e221 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074e221(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int extraout_ECX;
  int iVar11;
  uint uVar12;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  uint uVar13;
  undefined4 uVar14;
  int iStack_a0;
  undefined1 *puStack_9c;
  uint uStack_98;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_98 = 0x74e244;
  cVar3 = FUN_00433bfa();
  if (((cVar3 != '\0') || (*(int *)(extraout_ECX + 0x14) != *(int *)(unaff_EBP + 8))) ||
     (*(int *)(extraout_ECX + 0x18) != *(int *)(unaff_EBP + 0xc))) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    puVar8 = *(undefined1 **)(unaff_EBP + 0x10);
    iVar4 = *(int *)(puVar8 + 0x18);
    iVar6 = *(int *)(puVar8 + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_98 = (uint)(iVar4 != 0 || iVar6 != 0);
    puStack_9c = (undefined1 *)(unaff_EBP + -0x34);
    iStack_a0 = *(int *)(unaff_EBP + 0x14);
    FUN_007511e2(puVar8 + 0x20);
    if ((*(char **)(unaff_EBP + -0x34) != (char *)0x0) && (**(char **)(unaff_EBP + -0x34) != '\0'))
    {
      uStack_98 = 0xffffffff;
      puStack_9c = (undefined1 *)0x74e2af;
      FUN_004655d4();
      uStack_98 = 0x74e2b6;
      FUN_00414f8b();
    }
    *(undefined1 **)(unaff_EBP + 0x14) = puVar8 + 0xc;
    FUN_0045e2eb();
    uStack_98 = unaff_EBP + -0x44;
    puStack_9c = (undefined1 *)0x74e2d3;
    FUN_004497f5();
    puStack_9c = &stack0xffffff6c;
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff6c;
    uStack_98 = 0xa6e;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_a0 = 0x74e2ed;
    FUN_00679e4e();
    uStack_98 = unaff_EBP + -0x90;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_9c = (undefined1 *)0x74e300;
    FUN_0040263d();
    puStack_9c = (undefined1 *)0x74e307;
    FUN_004048a4();
    uStack_98 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_9c = (undefined1 *)0x74e315;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_98 = 0x74e324;
    FUN_004172b7();
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_98 = 0x74e33c;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      uStack_98 = 0x74e347;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0040e53d();
      iVar4 = iVar4 + 5;
    }
    *(int *)(unaff_EBP + -0x40) = iVar4;
    if ((*(int *)(unaff_EBP + 0x18) == 0) ||
       (*(int *)(unaff_EBP + 0x18) == *(int *)(unaff_EBP + 0x1c))) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0x23;
    }
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(unaff_EBP + -0x20) + -4);
    }
    uStack_98 = iVar11 * 0x10 + iVar6 + 0x8e + iVar4;
    puStack_9c = (undefined1 *)0xec;
    iStack_a0 = 8;
    FUN_0074d72a();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    uStack_98 = unaff_EBP + -0x3c;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_a0 = 0x74e3b7;
    puStack_9c = puVar8;
    FUN_007518a4();
    uStack_98 = 0x74e3c0;
    FUN_00751b98();
    FUN_0045e2eb();
    uStack_98 = unaff_EBP + -0x18;
    puStack_9c = (undefined1 *)0x74e3da;
    FUN_0075572d();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar4 = FUN_0045e2eb();
    if ((iVar4 / 100 == 0x2b70) && (iVar4 != 0x10f7c0)) {
      uStack_98 = 0x74e414;
      iVar4 = FUN_00455c59();
      iVar4 = *(int *)(iVar4 + 4);
      FUN_0045e4a2();
      uVar12 = *(uint *)(iVar4 + 0x483);
      while (uVar13 = uVar12, uVar13 != 0) {
        iVar4 = *(int *)((-(uint)(uVar13 != 0) & uVar13 - 0x10) + 4);
        uVar12 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        if ((*(int *)(uVar13 + 0x11) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x18)) &&
           (*(int *)(uVar13 + 0x15) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x1c))) {
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          uStack_98 = unaff_EBP + -0x14;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_9c = (undefined1 *)0x74e477;
          puVar5 = (undefined4 *)FUN_00679d22();
          uStack_98 = *puVar5;
          puStack_9c = (undefined1 *)(unaff_EBP + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_a0 = 0x74e48b;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00414ebb();
          uStack_98 = 0x74e4a6;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
        }
      }
    }
    iVar4 = FUN_0045e2eb();
    if ((iVar4 / 100 == 0x2b78) && (iVar4 % 10 < 3)) {
      uStack_98 = 0x74e4f5;
      iVar4 = FUN_00455c59();
      iVar4 = *(int *)(iVar4 + 4);
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        uStack_98 = 0x74e506;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      uVar12 = *(uint *)(iVar4 + 0x497);
      while (uVar13 = uVar12, uVar13 != 0) {
        iVar4 = *(int *)((-(uint)(uVar13 != 0) & uVar13 - 0x10) + 4);
        uVar12 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        if ((*(int *)(uVar13 + 0x11) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x18)) &&
           (*(int *)(uVar13 + 0x15) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x1c))) {
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          uStack_98 = unaff_EBP + -0x14;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_9c = (undefined1 *)0x74e561;
          puVar5 = (undefined4 *)FUN_00679d22();
          uStack_98 = *puVar5;
          puStack_9c = (undefined1 *)(unaff_EBP + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_a0 = 0x74e575;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00414ebb();
          uStack_98 = 0x74e590;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
        }
      }
    }
    iVar4 = FUN_0045e2eb();
    if ((((iVar4 == 0x10fae3) || (iVar4 == 0x10fae6)) || (iVar4 == 0x10fae7)) || (iVar4 == 0x10fae9)
       ) {
      iVar4 = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(iVar4 + 0x4e4) == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978368;
        uStack_98 = 0x74e5ed;
        iVar6 = FUN_00455c59();
        iVar6 = *(int *)(iVar6 + 4);
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          uStack_98 = 0x74e5fe;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
        if (*(int *)(iVar6 + 0x4a7) != 0) {
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          uStack_98 = unaff_EBP + -0x14;
          puStack_9c = (undefined1 *)0x74e63c;
          puVar5 = (undefined4 *)FUN_00679d22();
          uStack_98 = *puVar5;
          puStack_9c = (undefined1 *)(unaff_EBP + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_a0 = 0x74e64d;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_00414ebb();
          uStack_98 = 0x74e668;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00414ebb();
        }
      }
    }
    else {
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
    if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) && (**(char **)(unaff_EBP + -0x18) != '\0'))
    {
      uStack_98 = 0;
      *(undefined1 ***)(unaff_EBP + 0x14) = &puStack_9c;
      iStack_a0 = 7;
      FUN_00756efd(&puStack_9c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_a0 = 0x74e6a3;
      iStack_a0 = FUN_00449713();
      iVar6 = FUN_00757d85(10,0xdd,0);
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + iVar6;
      *(int *)(unaff_EBP + -0x38) = iVar6;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uStack_98 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_9c = (undefined1 *)0x74e6ce;
    FUN_00750398();
    uStack_98 = 0;
    puStack_9c = (undefined1 *)0x1;
    iStack_a0 = *(int *)(unaff_EBP + 0xc);
    FUN_0075699b(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 8));
    puStack_9c = &stack0xffffff6c;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff6c;
    uStack_98 = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_a0 = 0x74e6f8;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_98 = 0x74e704;
    uStack_98 = FUN_00449713();
    puStack_9c = (undefined1 *)0xa;
    iStack_a0 = 0x74e70e;
    FUN_00758757();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0x1d;
    while (iVar6 = *(int *)(unaff_EBP + -0x20), iVar6 != 0) {
      if (*(uint *)(iVar6 + -4) <= *(uint *)(unaff_EBP + 0xc)) {
        if (iVar6 != 0) {
          iVar4 = *(int *)(iVar6 + -4);
          goto LAB_0074e8ab;
        }
        break;
      }
      uStack_98 = 0xff;
      puStack_9c = (undefined1 *)0x74e73e;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(iVar4 + 0x4dc);
      piVar7 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (piVar7 == (int *)0x0) {
        uStack_98 = 0x74e75c;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + -0x24);
      }
      iVar4 = *piVar7;
      iStack_a0 = *(int *)(unaff_EBP + -0x60);
      puStack_9c = *(undefined1 **)(unaff_EBP + -0x5c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x14) = piVar7;
      puVar8 = (undefined1 *)
               (**(code **)(iVar4 + 0x80))
                         (piVar7,10,*(int *)(unaff_EBP + 8) + 4,*(undefined4 *)(unaff_EBP + 0x14));
      if ((int)puVar8 < 0) {
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_a0 = 0x74e795;
        puStack_9c = puVar8;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_98 = 0x74e7a2;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_98 = 0x74e7ad;
        FUN_00878dfb();
      }
      uStack_98 = 0x74e7b9;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      uStack_98 = unaff_EBP + -0x80;
      puStack_9c = (undefined1 *)0x74e7c8;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_98 = 0x74e7d4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      uStack_98 = 0x74e7de;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      uStack_98 = unaff_EBP + -0x70;
      puStack_9c = (undefined1 *)0x74e7e8;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        uStack_98 = 0x74e7f4;
        FUN_00878dfb();
      }
      uStack_98 = unaff_EBP + -0x70;
      puStack_9c = (undefined1 *)0xe;
      iStack_a0 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      puStack_9c = (undefined1 *)0x74e819;
      puStack_9c = (undefined1 *)FUN_00449749();
      iStack_a0 = *(int *)(unaff_EBP + 0xc);
      FUN_0075bcb4();
      iStack_a0 = 0x74e82c;
      uVar9 = FUN_00449713();
      *(int **)(unaff_EBP + 0x14) = &iStack_a0;
      iStack_a0 = extraout_ECX_00;
      FUN_00448a17(uVar9);
      uVar9 = *(undefined4 *)(unaff_EBP + 8);
      uVar14 = 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9(0x10,uVar9);
      FUN_00448e3a(uVar14,uVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        uStack_98 = 0x74e861;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      uStack_98 = 0x74e86e;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_98 = 0x74e879;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_98 = 0x74e886;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_98 = 0x74e891;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
    iVar4 = 0;
LAB_0074e8ab:
    uStack_98 = iVar4 << 4;
    puStack_9c = (undefined1 *)0x74e8b9;
    FUN_007520ff();
    uStack_98 = 0x74e8d2;
    FUN_00757413();
    puVar8 = extraout_ECX_01;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      uStack_98 = 0xff;
      puStack_9c = (undefined1 *)0x74e8ea;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
      }
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        uStack_98 = 0x74e90c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        uStack_98 = 0x74e91c;
        FUN_00878dfb();
      }
      piVar7 = *(int **)(unaff_EBP + -0x24);
      iVar6 = *(int *)(unaff_EBP + -0x10);
      iVar11 = *(int *)(iVar6 + 8);
      iVar1 = *(int *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + 0x10) = piVar7;
      iVar2 = *(int *)(unaff_EBP + -0x38);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x30);
      iVar10 = FUN_0040e48b();
      iStack_a0 = *(int *)(unaff_EBP + -0x60);
      puStack_9c = *(undefined1 **)(unaff_EBP + -0x5c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x58);
      puVar8 = (undefined1 *)
               (**(code **)(*piVar7 + 0x80))
                         (*(undefined4 *)(unaff_EBP + 0x10),
                          (uint)(*(int *)(iVar6 + 0xc) - iVar10) >> 1,
                          (((iVar11 + iVar4 * -0x10) - iVar1) - iVar2) + -3,
                          *(undefined4 *)(unaff_EBP + 0xc));
      if ((int)puVar8 < 0) {
        uStack_98 = *(undefined4 *)(unaff_EBP + 0x10);
        iStack_a0 = 0x74e97a;
        puStack_9c = puVar8;
        FUN_00878e09();
      }
      puVar8 = (undefined1 *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_98 = 0x74e987;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_98 = 0x74e992;
        FUN_00878dfb();
        puVar8 = extraout_ECX_02;
      }
    }
    if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0'))
    {
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
    else {
      iVar4 = *(int *)(unaff_EBP + -0x10);
      uStack_98 = 1;
      *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_9c;
      iStack_a0 = 7;
      puStack_9c = puVar8;
      FUN_00756efd(&puStack_9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_a0 = 0x74e9c1;
      iStack_a0 = FUN_00449713();
      iVar6 = FUN_006a7cca();
      FUN_00757d85(10,0xdd,((*(int *)(iVar4 + 8) + iVar6 * -0x10) - *(int *)(unaff_EBP + -0x38)) +
                           -3);
    }
    iVar6 = *(int *)(unaff_EBP + 0x18);
    if ((iVar6 != 0) && (iVar6 != *(int *)(unaff_EBP + 0x1c))) {
      iVar11 = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        iVar11 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
      }
      puStack_9c = (undefined1 *)
                   ((((*(int *)(iVar4 + 8) + iVar11 * -0x10) - *(int *)(unaff_EBP + -0x40)) -
                    *(int *)(unaff_EBP + -0x38)) + -0x27);
      iStack_a0 = 0x74ea1f;
      uStack_98 = iVar6;
      FUN_00759249();
    }
    if (*(int *)(unaff_EBP + 0x20) != 0) {
      iVar6 = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
      }
      uStack_98 = *(int *)(iVar4 + 8) + iVar6 * -0x10;
      puStack_9c = (undefined1 *)0x74ea43;
      FUN_007509d5();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      uStack_98 = 0x74ea54;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      uStack_98 = 0x74ea89;
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      uStack_98 = 0x74ea9a;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045f10c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


