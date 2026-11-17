/* FUN_0072188a - 0x0072188a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072188a(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar8;
  undefined1 *puStack_e4;
  int iStack_e0;
  int iStack_dc;
  int *piStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined1 *puStack_bc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  puStack_bc = (undefined1 *)0x7218aa;
  FUN_0081622a();
  puStack_bc = (undefined1 *)0x7218b5;
  FUN_00448dc6();
  uVar4 = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = uVar4;
  puStack_bc = (undefined1 *)0x7218cd;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(iVar3 + 4);
  FUN_0045e4a2();
  if (*(int *)(*(int *)(extraout_ECX + 0x580) + 0x3c) == 0) {
    puStack_bc = (undefined1 *)0x7218ee;
    uVar4 = FUN_00653ddc();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  }
  else {
    puStack_bc = (undefined1 *)0x7218ff;
    iVar3 = FUN_00455c59();
    puStack_bc = (undefined1 *)(*(int *)(iVar3 + 4) + 0x89);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_c0 = 0x721917;
    sVar2 = FUN_0045f084();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x14) = (int)sVar2;
    FUN_0045e4a2();
  }
  puStack_bc = (undefined1 *)0x721939;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a1b0();
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_c4 = 0x721954;
  puStack_bc = &stack0xffffff4c;
  iStack_c0 = FUN_0048b981();
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_bc;
  uStack_c4 = 0x721960;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_c0 = 0x721971;
  FUN_0044974c();
  iStack_c0 = 0x721978;
  uVar4 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_bc = (undefined1 *)0x721988;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_bc = (undefined1 *)0x721993;
    FUN_00878dfb();
  }
  puStack_bc = (undefined1 *)0x72199c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_bc = (undefined1 *)0x7219a9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff4c;
  puStack_bc = (undefined1 *)(unaff_EBP + -0x40);
  iStack_c0 = 0x7219c7;
  iStack_c0 = FUN_00449749();
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_cc = 0x7219d3;
  uStack_c8 = FUN_0048b981();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_c4;
  iStack_cc = 0x7219df;
  FUN_00448a17();
  uStack_c8 = 0x109;
  iStack_cc = 0x6e - *(int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d0 = 0x7219f7;
  FUN_004115d9();
  iStack_d0 = 0x7219fe;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_bc = (undefined1 *)0x721a0b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_bc = (undefined1 *)0x721a16;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_bc = (undefined1 *)0x721a23;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_bc = (undefined1 *)0x721a2e;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x580) + 0x48) != 0) {
    puStack_bc = (undefined1 *)0x721a47;
    iVar3 = FUN_00722abd();
    *(int *)(unaff_EBP + -0x44) = iVar3;
    if (iVar3 != 0) {
      puStack_bc = (undefined1 *)0xff;
      iStack_c0 = 0x721a63;
      FUN_004031b7();
      piStack_d4 = *(int **)(unaff_EBP + 8);
      uVar4 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      if (piStack_d4 == (int *)0x0) {
        puStack_bc = (undefined1 *)0x721a7e;
        FUN_00878dfb();
        piStack_d4 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piStack_d4;
      uStack_c8 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
      iStack_c0 = *(int *)(unaff_EBP + -0x3c);
      iStack_cc = 0x39;
      iStack_d0 = (-(uint)(*(int *)(extraout_ECX + 0x5e0) != 0) & 0xb4) + 10;
      puStack_bc = *(undefined1 **)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x2c) = piStack_d4;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_bc = *(undefined1 **)(unaff_EBP + -0x2c);
        uStack_c4 = 0x721ac3;
        iStack_c0 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_bc = (undefined1 *)0x721ad0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_bc = (undefined1 *)0x721adb;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      puStack_bc = (undefined1 *)0x721aee;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_bc = (undefined1 *)0x721afb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_bc = (undefined1 *)0x721b0b;
      iStack_c0 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_bc;
      uStack_c4 = 0x721b17;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_c0 = 0x721b2b;
      FUN_0044974c();
      iStack_c0 = 0x721b32;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_bc = (undefined1 *)0x721b42;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_bc = (undefined1 *)0x721b4d;
        FUN_00878dfb();
      }
      puStack_bc = (undefined1 *)0x721b56;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_bc = (undefined1 *)0x721b63;
      FUN_00403191();
      puStack_bc = (undefined1 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_c0 = 0x721b77;
      iStack_c0 = FUN_004458be();
      uStack_c4 = 0x721b7f;
      uStack_c8 = FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_c4;
      iStack_cc = 0x721b8b;
      uStack_c4 = extraout_ECX_00;
      FUN_00448a17();
      uStack_c8 = 0x42;
      iStack_cc = 0x67 - *(int *)(unaff_EBP + -0x10) / 2;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_d0 = 0x721ba6;
      FUN_0044974c();
      iStack_d0 = 0x721bad;
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_bc = (undefined1 *)0x721bba;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_bc = (undefined1 *)0x721bc5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_bc = (undefined1 *)0x721bd2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_bc = (undefined1 *)0x721bdd;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 0x588) + 0x38);
      *(int *)(unaff_EBP + -0x30) = iVar3;
      *(int *)(unaff_EBP + -0x2c) = iVar3 << 3;
      *(undefined4 *)(unaff_EBP + -0x18) = 0x76;
      do {
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x44) + 8);
        if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= *(uint *)(unaff_EBP + -0x30))) break;
        *(undefined4 *)(unaff_EBP + -0x10) =
             *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4 + iVar3);
        puStack_bc = (undefined1 *)0x721c28;
        iVar3 = FUN_008345ae();
        puStack_bc = (undefined1 *)**(undefined4 **)(unaff_EBP + -0x10);
        iStack_c0 = *(undefined4 *)(unaff_EBP + -100);
        uVar1 = (uint)(iVar3 != 0);
        uStack_c4 = 0x721c47;
        uVar4 = FUN_00650dae();
        puStack_bc = (undefined1 *)0xff;
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        iStack_c0 = 0x721c5c;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x1c) =
             *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x5c4 + uVar1 * 4);
        piVar7 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (piVar7 == (int *)0x0) {
          puStack_bc = (undefined1 *)0x721c7e;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 8);
        }
        iVar3 = *piVar7;
        uStack_c8 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_c4 = *(undefined4 *)(unaff_EBP + -0xa4);
        iStack_c0 = *(int *)(unaff_EBP + -0xa0);
        iStack_cc = *(int *)(unaff_EBP + -0x18) + -0x13;
        puStack_bc = *(undefined1 **)(unaff_EBP + -0x9c);
        iStack_d0 = 7;
        *(int **)(unaff_EBP + -0x4c) = piVar7;
        piStack_d4 = piVar7;
        iVar3 = (**(code **)(iVar3 + 0x80))();
        if (iVar3 < 0) {
          iStack_dc = *(int *)(unaff_EBP + -0x4c);
          puStack_e4 = (undefined1 *)0x721cba;
          iStack_e0 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_dc = 0x721cca;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x721cd5;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_dc = 0x721ce8;
        FUN_00414f8b();
        iStack_e0 = *(int *)(unaff_EBP + -0x20) + 0x5d0;
        *(int **)(unaff_EBP + -0x4c) = &iStack_dc;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_e4 = (undefined1 *)0x721d02;
        FUN_0046fcc9();
        iStack_e0 = unaff_EBP + -0x14;
        puStack_e4 = (undefined1 *)0x721d0b;
        FUN_007d3a22();
        iStack_dc = 0x721d1d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
        iStack_dc = unaff_EBP + -0x94;
        iStack_e0 = 0x721d2f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_dc = 0x721d3b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_dc = 0x721d45;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        iStack_dc = unaff_EBP + -0x74;
        iStack_e0 = 0x721d4f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_dc = 0x721d5b;
          FUN_00878dfb();
        }
        iStack_dc = unaff_EBP + -0x74;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_e0 = 0x721d72;
        iStack_e0 = FUN_004458be();
        puStack_e4 = (undefined1 *)0x721d7b;
        uVar4 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x4c) = &puStack_e4;
        FUN_00448a17(uVar4);
        iVar3 = *(int *)(unaff_EBP + -0x18) + -0x12;
        uVar4 = 0x2f;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_0044974c(0x2f,iVar3);
        FUN_005c1d2c(uVar4,iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_dc = 0x721db6;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x721dc1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_dc = 0x721dd1;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x721ddc;
          FUN_00878dfb();
        }
        iStack_dc = 0x721de2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        iStack_dc = unaff_EBP + -0x5c;
        iStack_e0 = 0x721dec;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_dc = 0x721df8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_dc = 0x721e05;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        iStack_dc = unaff_EBP + -0x84;
        iStack_e0 = 0x721e12;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          iStack_dc = 0x721e1e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0087a1b0();
        iStack_dc = unaff_EBP + -0x84;
        iStack_e0 = 0x721e3f;
        iStack_e0 = FUN_004458be();
        puStack_e4 = (undefined1 *)&piStack_d4;
        uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x24));
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_e4;
        FUN_004033a1(uVar4);
        uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar8 = 0x2f;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0044974c(0x2f,uVar4);
        FUN_005c1d2c(uVar8,uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_dc = 0x721e83;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x721e8e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_dc = 0x721e9b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_dc = 0x721ea6;
          FUN_00878dfb();
        }
        if ((uVar1 == 0) ||
           (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x5dc) != *(int *)(unaff_EBP + -0x30))) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        piVar7 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x8c + (iVar3 + uVar1) * 4);
        *(int **)(unaff_EBP + -0x1c) = piVar7;
        if (piVar7 != (int *)0x0) {
          iStack_dc = 0x721edf;
          (**(code **)(*piVar7 + 4))();
        }
        iStack_dc = 0xff;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_e0 = 0x721ef5;
        FUN_004031b7();
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        if (piVar5 == (int *)0x0) {
          iStack_dc = 0x721f0a;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + 8);
        }
        iVar3 = *piVar5;
        puStack_e4 = *(undefined1 **)(unaff_EBP + -0xb4);
        iStack_e0 = *(int *)(unaff_EBP + -0xb0);
        iStack_dc = *(int *)(unaff_EBP + -0xac);
        iVar6 = *(int *)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x24) = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar5,9,iVar6 + -0x11,piVar7);
        if (iVar3 < 0) {
          puStack_bc = *(undefined1 **)(unaff_EBP + -0x24);
          uStack_c4 = 0x721f44;
          iStack_c0 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_bc = (undefined1 *)0x721f54;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_bc = (undefined1 *)0x721f5f;
          FUN_00878dfb();
        }
        if (iVar6 < 0xee) {
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x44) + 8);
          iVar6 = 0;
          if (iVar3 != 0) {
            iVar6 = *(int *)(iVar3 + -4);
          }
          if (*(uint *)(unaff_EBP + -0x30) < iVar6 - 1U) {
            puStack_bc = (undefined1 *)0x721f8c;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
            puStack_bc = (undefined1 *)(unaff_EBP + -0x40);
            iStack_c0 = 0x721f9a;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              puStack_bc = (undefined1 *)0x721fa6;
              FUN_00878dfb();
            }
            uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x5cc);
            piVar7 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            if (piVar7 == (int *)0x0) {
              puStack_bc = (undefined1 *)0x721fc4;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + 8);
            }
            iVar3 = *piVar7;
            uStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
            iStack_c0 = *(int *)(unaff_EBP + -0x3c);
            iStack_cc = *(int *)(unaff_EBP + -0x18) + 0x12;
            puStack_bc = *(undefined1 **)(unaff_EBP + -0x38);
            iStack_d0 = 7;
            *(int **)(unaff_EBP + -0x24) = piVar7;
            piStack_d4 = piVar7;
            uStack_c8 = uVar4;
            iVar3 = (**(code **)(iVar3 + 0x80))();
            if (iVar3 < 0) {
              puStack_bc = *(undefined1 **)(unaff_EBP + -0x24);
              uStack_c4 = 0x721ffb;
              iStack_c0 = iVar3;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            puStack_bc = (undefined1 *)0x722008;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              puStack_bc = (undefined1 *)0x722013;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + -0x1c);
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (piVar7 != (int *)0x0) {
          puStack_bc = (undefined1 *)0x722024;
          (**(code **)(*piVar7 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 8;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x28;
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
      } while (*(int *)(unaff_EBP + -0x18) < 0x116);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    puStack_bc = (undefined1 *)0x722065;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


