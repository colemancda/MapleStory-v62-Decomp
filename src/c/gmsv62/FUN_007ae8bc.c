/* FUN_007ae8bc - 0x007ae8bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_007ae8bc(void)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uStack_160;
  int *piStack_15c;
  undefined1 *puStack_158;
  uint uStack_154;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  switch(uVar1) {
  case 6:
    uVar7 = FUN_00424561();
    for (uVar7 = uVar7 & 0xffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      uVar10 = FUN_00424561();
      FUN_0042459a();
      puStack_158 = (undefined1 *)0x7af45f;
      uStack_154 = uVar10;
      FUN_00849b3c();
    }
    break;
  case 7:
    uVar7 = FUN_00424561();
    for (uVar7 = uVar7 & 0xffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      FUN_00424561();
      uStack_154 = 0x7af48e;
      FUN_00849c12();
    }
    break;
  case 8:
    uStack_154 = 0x7ae901;
    FUN_00455c59();
    FUN_0045e4a2();
    uVar14 = FUN_00424561();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar14;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar14;
    uStack_154 = 0x7ae93c;
    FUN_005ee726();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    uStack_154 = unaff_EBP - 0x48;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_158 = (undefined1 *)0x7ae95d;
    puVar8 = (undefined4 *)FUN_00679d22();
    uStack_154 = (uint)*(ushort *)(unaff_EBP + -0x34);
    puStack_158 = (undefined1 *)*puVar8;
    piStack_15c = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_160 = 0x7ae973;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x48) != 0) {
      uStack_154 = 0x7ae989;
      FUN_00434e38();
    }
    uStack_154 = 0x7ae99b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_154 = 0x7ae9ab;
    FUN_00403191();
    uStack_154 = 0;
    puStack_158 = (undefined1 *)0xffffffff;
    piStack_15c = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_160 = 0;
    (*DAT_0097b4c8)(0);
    FUN_0087a1b0();
    uStack_154 = 0;
    puStack_158 = (undefined1 *)(unaff_EBP + -0xcc);
    piStack_15c = (int *)(unaff_EBP + -0xbc);
    uStack_160 = 0xffffffff;
    uVar14 = FUN_00449713(&stack0xfffffeb4);
    uVar14 = FUN_00456ad5(uVar14);
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_160;
    FUN_004033a1(uVar14);
    iVar6 = unaff_EBP + -0xfc;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_158 = (undefined1 *)0x7aea25;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar6 != 0) {
      uStack_154 = 0x7aea3b;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        uStack_154 = 0x7aea4c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_154 = 0x7aea5c;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aea67;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_154 = 0x7aea77;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aea82;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_154 = 0x7aea92;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aea9d;
      FUN_00878dfb();
    }
    uStack_154 = 0x7aeaa6;
    cVar2 = FUN_00411581();
    if (cVar2 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uStack_154 = 0x7aeac5;
        FUN_00878dfb();
      }
      uStack_154 = 0x7aead1;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_154 = 0x7aeade;
      FUN_004035f5();
      FUN_004027b3();
      uStack_154 = 0x7aeaf0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          uStack_154 = 0x7aeb02;
          FUN_00878dfb();
        }
        piStack_15c = *(int **)(unaff_EBP + -0x1c);
        uStack_154 = unaff_EBP - 0x80;
        puStack_158 = (undefined1 *)0x1;
        uStack_160 = 0x7aeb15;
        iVar6 = (**(code **)(*piStack_15c + 0xc))();
        if (iVar6 != 0) break;
        *(uint **)(unaff_EBP + -0x28) = &uStack_154;
        puStack_158 = *(undefined1 **)(unaff_EBP + -0x78);
        piStack_15c = (int *)0x7aeb30;
        FUN_004033a1();
        puStack_158 = (undefined1 *)(unaff_EBP + -0xdc);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_15c = (int *)0x7aeb43;
        FUN_0040263d();
        piStack_15c = (int *)0x7aeb4a;
        uStack_154 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_158 = (undefined1 *)0x7aeb54;
        uStack_154 = FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        puStack_158 = (undefined1 *)0x7aeb63;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        uStack_154 = 0x7aeb73;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          uStack_154 = 0x7aeb7e;
          FUN_00878dfb();
        }
        pcVar5 = *(char **)(unaff_EBP + -0x20);
        if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
          uStack_154 = 0xffffffff;
          puStack_158 = (undefined1 *)0x7aeb96;
          FUN_004655d4();
          uStack_154 = 0x7aeb9d;
          FUN_00414f8b();
          pcVar5 = *(char **)(unaff_EBP + -0x20);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (pcVar5 != (char *)0x0) {
          uStack_154 = 0x7aebb1;
          FUN_00434e38();
        }
        uStack_154 = 0x7aebbb;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          uStack_154 = 0x7aebca;
          FUN_00878dfb();
        }
      }
      puVar13 = (undefined1 *)0x0;
      do {
        if ((*(int *)(unaff_EBP + -0x14) == 0) ||
           (*(undefined1 **)(*(int *)(unaff_EBP + -0x14) + -4) <= puVar13)) break;
        uStack_154 = 0x7aebf4;
        iVar6 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x28) = iVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_007e62e9();
        }
        uVar7 = -(uint)(iVar6 != 0) & iVar6 + 8U;
        *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar7 != 0) & uVar7 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_004c26c4();
        uStack_154 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_15c = (int *)0x7aec3c;
        puStack_158 = puVar13;
        piStack_15c = (int *)FUN_004726fc();
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_158;
        uStack_160 = 0x7aec48;
        FUN_00450368();
        piStack_15c = *(int **)(unaff_EBP + -0x2c);
        uStack_160 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_004c2677();
        FUN_007eddac();
        uStack_154 = (uint)(0 < (int)puVar13);
        puStack_158 = (undefined1 *)0x7aec85;
        FUN_007edf11();
        FUN_007e6e3c();
        iVar6 = FUN_004bc6a2();
        if (iVar6 == 0x2000) {
          puVar13 = puVar13 + -1;
        }
        else {
          if (iVar6 != 0x2001) {
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_004c26e1();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            uStack_154 = 0x7aecd1;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              uStack_154 = 0x7aecdc;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
              uStack_154 = 0x7aeced;
              (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_0045f10c();
            goto LAB_007aecf9;
          }
          puVar13 = puVar13 + 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_004c26e1();
      } while (-1 < (int)puVar13);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_154 = 0x7aed26;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        uStack_154 = 0x7aed31;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        uStack_154 = 0x7aed42;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_0045f10c();
    }
    *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffeb0;
    uStack_154 = 0xffffffff;
    puStack_158 = &DAT_00978474;
    piStack_15c = (int *)0x7aed61;
    FUN_00414edd();
    uStack_154 = *(uint *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_158 = (undefined1 *)0x0;
    piStack_15c = (int *)0x6;
    uStack_160 = 0x7aed70;
    FUN_004e21db();
    uStack_160 = 0x7aed77;
    FUN_008498d1();
    puVar13 = (undefined1 *)FUN_00424561();
    if ((short)puVar13 != 0) {
      uStack_154 = *(uint *)(unaff_EBP + -0x2c);
      piStack_15c = (int *)0x7aed98;
      puStack_158 = puVar13;
      FUN_0084b9c7();
    }
LAB_007aecf9:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      uStack_154 = 0x7aed09;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_007aed0f;
  case 9:
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_160;
    uVar14 = 0xc6d;
    goto LAB_007af416;
  case 10:
    uStack_154 = 0x7aedac;
    iVar6 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar6 + 4);
    if (*(int *)(unaff_EBP + -0x6c) != 0) {
      uStack_154 = 0x7aedc2;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    }
    uVar7 = FUN_00424561();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(uint *)(unaff_EBP + -0x30) = uVar7;
    uStack_154 = 0x7aede4;
    iVar6 = FUN_005ee726();
    if (iVar6 != 0) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    uStack_154 = unaff_EBP - 0x44;
    *(undefined4 *)(unaff_EBP + -4) = 0x17;
    puStack_158 = (undefined1 *)0x7aee0e;
    puVar8 = (undefined4 *)FUN_00679d86();
    puStack_158 = (undefined1 *)*puVar8;
    uStack_154 = uVar7 & 0xffff;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    piStack_15c = (int *)(unaff_EBP + -0x20);
    uStack_160 = 0x7aee27;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00402676();
    uStack_154 = 0x7aee43;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
    uStack_154 = unaff_EBP - 0x9c;
    puStack_158 = (undefined1 *)0x7aee55;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      uStack_154 = 0x7aee61;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uStack_154 = 0x7aee72;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
    uStack_154 = unaff_EBP - 0xac;
    puStack_158 = (undefined1 *)0x7aee7f;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      uStack_154 = 0x7aee8b;
      FUN_00878dfb();
    }
    uStack_154 = 0;
    puStack_158 = (undefined1 *)(unaff_EBP + -0x9c);
    piStack_15c = (int *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_160 = 0x7aeea7;
    uVar14 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_160;
    uStack_160 = extraout_ECX;
    FUN_004033a1(uVar14);
    iVar6 = unaff_EBP + -0x13c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00405a1d(iVar6);
    FUN_00402660();
    FUN_00404a02(iVar6);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_158 = (undefined1 *)0x7aeedc;
    iVar6 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar6;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar6 != 0) {
      uStack_154 = 0x7aeef2;
      iVar6 = FUN_00404b30();
      if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
        uStack_154 = 0x7aef03;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_154 = 0x7aef13;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aef1e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    uStack_154 = 0x7aef2e;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aef39;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uStack_154 = 0x7aef49;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      uStack_154 = 0x7aef54;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -0x84) = 0;
      *(undefined4 *)(unaff_EBP + -0x80) = 0;
      *(undefined4 *)(unaff_EBP + -0x7c) = 0;
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      *(undefined4 *)(unaff_EBP + -0x74) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          uStack_154 = 0x7aef83;
          FUN_00878dfb();
        }
        uVar7 = FUN_0040cf4d();
        if (uVar7 <= *(uint *)(unaff_EBP + -0x1c)) break;
        FUN_0087a1b0();
        uStack_154 = 0;
        piStack_15c = *(int **)(unaff_EBP + -0x1c);
        uStack_160 = 0x7aefa9;
        puStack_158 = &stack0xfffffeb4;
        piStack_15c = (int *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + 8) = &puStack_158;
        uStack_160 = 0x7aefb5;
        FUN_004033a1();
        piStack_15c = (int *)(unaff_EBP + -0x11c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        uStack_160 = 0x7aefc8;
        FUN_0040263d();
        uStack_160 = 0x7aefcf;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        puStack_158 = (undefined1 *)0x7aefda;
        iVar6 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x50) = iVar6;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar6 != 0) {
          uStack_154 = 0x7aeff0;
          iVar6 = FUN_00404b30();
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            uStack_154 = 0x7af001;
            FUN_00878dfb();
          }
        }
        uVar7 = unaff_EBP - 0x11c;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        uStack_154 = 0x7af011;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          uStack_154 = 0x7af01c;
          FUN_00878dfb();
          uVar7 = extraout_ECX_00;
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_15c = (int *)&uStack_154;
          *(uint **)(unaff_EBP + 8) = &uStack_154;
          puStack_158 = (undefined1 *)0x3cf;
          uStack_160 = 0x7af039;
          uStack_154 = uVar7;
          FUN_00679e4e();
          puStack_158 = (undefined1 *)(unaff_EBP + -0xec);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_15c = (int *)0x7af04c;
          FUN_0040263d();
          piStack_15c = (int *)0x7af053;
          uStack_154 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          puStack_158 = (undefined1 *)0x7af05d;
          iVar6 = FUN_00412550();
          puStack_158 = (undefined1 *)(unaff_EBP + -0xec);
          *(bool *)(unaff_EBP + 0xb) = iVar6 < 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_15c = (int *)0x7af073;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            uStack_154 = 0x7af080;
            FUN_00878dfb();
          }
          if (*(char *)(unaff_EBP + 0xb) == '\0') {
            uStack_154 = *(int *)(unaff_EBP + -0x28) + 0x39;
            puStack_158 = (undefined1 *)0x7af098;
            sVar3 = FUN_0045f084();
            uStack_154 = (int)sVar3 / 100;
            piStack_15c = (int *)&uStack_154;
            *(uint **)(unaff_EBP + 8) = &uStack_154;
            puStack_158 = (undefined1 *)0xc33;
            *(uint *)(unaff_EBP + -0x2c) = uStack_154;
            bVar12 = (byte)uStack_154;
            uStack_160 = 0x7af0c2;
            FUN_00679e4e();
            puStack_158 = (undefined1 *)(unaff_EBP + -0x10c);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_15c = (int *)0x7af0d5;
            FUN_0040263d();
            piStack_15c = (int *)0x7af0dc;
            uStack_154 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            puStack_158 = (undefined1 *)0x7af0e6;
            uVar14 = FUN_00412550();
            *(undefined4 *)(unaff_EBP + -0x30) = uVar14;
            puStack_158 = (undefined1 *)(unaff_EBP + -0x10c);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_15c = (int *)0x7af0f9;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              uStack_154 = 0x7af106;
              FUN_00878dfb();
            }
            piStack_15c = (int *)&uStack_154;
            *(uint **)(unaff_EBP + 8) = &uStack_154;
            puStack_158 = (undefined1 *)0xc50;
            uStack_160 = 0x7af11b;
            FUN_00679e4e();
            puStack_158 = (undefined1 *)(unaff_EBP + -300);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_15c = (int *)0x7af12e;
            FUN_0040263d();
            piStack_15c = (int *)0x7af135;
            uStack_154 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            puStack_158 = (undefined1 *)0x7af13f;
            uVar14 = FUN_00412550();
            *(undefined4 *)(unaff_EBP + 8) = uVar14;
            puStack_158 = (undefined1 *)(unaff_EBP + -300);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            piStack_15c = (int *)0x7af152;
            iVar6 = FUN_00402bc3();
            if (iVar6 < 0) {
              uStack_154 = 0x7af15f;
              FUN_00878dfb();
            }
            if ((((ushort)((ushort)*(undefined4 *)(unaff_EBP + -0x30) &
                          (ushort)(1 << (bVar12 & 0x1f))) != 0) ||
                (*(int *)(unaff_EBP + -0x2c) == 9)) &&
               ((*(int *)(unaff_EBP + 8) == 2 ||
                (*(uint *)(unaff_EBP + 8) == (uint)*(byte *)(*(int *)(unaff_EBP + -0x28) + 0x11)))))
            {
              piStack_15c = (int *)&uStack_154;
              *(uint **)(unaff_EBP + 8) = &uStack_154;
              puStack_158 = (undefined1 *)0x920;
              uStack_160 = 0x7af19d;
              FUN_00679e4e();
              puStack_158 = (undefined1 *)(unaff_EBP + -0x14c);
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              piStack_15c = (int *)0x7af1b0;
              FUN_0040263d();
              piStack_15c = (int *)0x7af1b7;
              uStack_154 = FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x2d;
              puStack_158 = (undefined1 *)0x7af1c1;
              iVar6 = FUN_00412550();
              iVar6 = iVar6 / 1000000;
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              puStack_158 = (undefined1 *)(unaff_EBP + -0x14c);
              piStack_15c = (int *)0x7af1db;
              iVar9 = FUN_00402bc3();
              if (iVar9 < 0) {
                uStack_154 = 0x7af1e8;
                FUN_00878dfb();
              }
              if (*(int *)(unaff_EBP + -0x84 + iVar6 * 4) == 0) {
                *(undefined4 *)(unaff_EBP + -0x84 + iVar6 * 4) = 1;
                if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
                   (**(char **)(unaff_EBP + -0x10) != '\0')) {
                  uStack_154 = unaff_EBP - 0x60;
                  puStack_158 = (undefined1 *)0x7af21d;
                  puVar11 = (uint *)FUN_00679d22();
                  uStack_154 = *puVar11;
                  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
                  puStack_158 = (undefined1 *)0x7af238;
                  FUN_0045efbb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                  FUN_00414ebb();
                }
                if (iVar6 == 1) {
                  uStack_154 = unaff_EBP - 0x54;
                  puStack_158 = (undefined1 *)0x7af2fd;
                  puVar11 = (uint *)FUN_00679d22();
                  uStack_154 = *puVar11;
                  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
                  puStack_158 = (undefined1 *)0x7af318;
                  FUN_0045efbb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                }
                else if (iVar6 == 2) {
                  uStack_154 = unaff_EBP - 0x3c;
                  puStack_158 = (undefined1 *)0x7af2cc;
                  puVar11 = (uint *)FUN_00679d22();
                  uStack_154 = *puVar11;
                  *(undefined1 *)(unaff_EBP + -4) = 0x30;
                  puStack_158 = (undefined1 *)0x7af2e7;
                  FUN_0045efbb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                }
                else if (iVar6 == 3) {
                  uStack_154 = unaff_EBP - 0x40;
                  puStack_158 = (undefined1 *)0x7af29b;
                  puVar11 = (uint *)FUN_00679d22();
                  uStack_154 = *puVar11;
                  *(undefined1 *)(unaff_EBP + -4) = 0x31;
                  puStack_158 = (undefined1 *)0x7af2b6;
                  FUN_0045efbb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                }
                else {
                  if (iVar6 != 4) goto LAB_007af324;
                  uStack_154 = unaff_EBP - 0x58;
                  puStack_158 = (undefined1 *)0x7af267;
                  puVar11 = (uint *)FUN_00679d22();
                  uStack_154 = *puVar11;
                  *(undefined1 *)(unaff_EBP + -4) = 0x32;
                  puStack_158 = (undefined1 *)0x7af282;
                  FUN_0045efbb();
                  *(undefined1 *)(unaff_EBP + -4) = 0x25;
                }
                FUN_00414ebb();
              }
            }
          }
        }
LAB_007af324:
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          uStack_154 = 0x7af335;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      uStack_154 = unaff_EBP - 0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      puStack_158 = (undefined1 *)0x7af354;
      puVar11 = (uint *)FUN_00679d22();
      uStack_154 = *puVar11;
      puStack_158 = (undefined1 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      piStack_15c = (int *)0x7af367;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      FUN_00414ebb();
      uStack_154 = 1;
      puStack_158 = (undefined1 *)0x0;
      piStack_15c = (int *)0x0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_160;
      FUN_00450368(unaff_EBP + -0x34);
      FUN_007db3ad();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        uStack_154 = 0x7af3bb;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    break;
  case 0xb:
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_160;
    uVar14 = 0x116;
    goto LAB_007af416;
  case 0xd:
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_160;
    uVar14 = 0xd2f;
    goto LAB_007af416;
  case 0xe:
    *(undefined4 **)(unaff_EBP + -0x38) = &uStack_160;
    uVar14 = 0xd30;
LAB_007af416:
    uStack_154 = 0;
    puStack_158 = (undefined1 *)0x0;
    piStack_15c = (int *)0x0;
    FUN_00679d22(&uStack_160,uVar14);
    FUN_007db3ad();
    break;
  case 0xf:
    FUN_00424561();
    uStack_154 = 0x7af4ab;
    FUN_00849c12();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    uStack_154 = unaff_EBP - 0x28;
    *(undefined4 *)(unaff_EBP + -4) = 0x35;
    puStack_158 = (undefined1 *)0x7af4c6;
    FUN_00704b95();
    uStack_154 = unaff_EBP - 0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_158 = (undefined1 *)0x7af4dd;
    puVar11 = (uint *)FUN_00679d22();
    uStack_154 = *puVar11;
    puStack_158 = (undefined1 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    piStack_15c = (int *)0x7af4f0;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00414ebb();
    uStack_154 = unaff_EBP + 8;
    puStack_158 = (undefined1 *)0x7af50a;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007aed0f:
    FUN_00414ebb();
    break;
  case 0x10:
    FUN_00424561();
    uStack_154 = 0x7af537;
    FUN_00849cb2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


