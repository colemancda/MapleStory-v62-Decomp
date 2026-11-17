/* FUN_007e6ea3 - 0x007e6ea3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e6ea3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int iStack_15c;
  undefined4 *puStack_158;
  int iStack_154;
  int iStack_150;
  undefined1 *puStack_14c;
  
  FUN_00879bb8();
  puStack_14c = (undefined1 *)0x7e6ec0;
  FUN_0081622a();
  puStack_14c = (undefined1 *)0x7e6ecb;
  FUN_00448dc6();
  puStack_14c = (undefined1 *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_150 = 0x7e6edf;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    puStack_14c = (undefined1 *)0x7e6ef2;
    FUN_00878dfb();
  }
  puStack_14c = (undefined1 *)(*(int *)(extraout_ECX + 0x84) + -2);
  iStack_150 = 0x7e6f0c;
  iStack_150 = FUN_007e6d32();
  iStack_150 = iStack_150 + -2;
  iStack_154 = *(int *)(extraout_ECX + 0x7c) + 1;
  puStack_158 = (undefined4 *)(*(int *)(extraout_ECX + 0x78) + 1);
  iStack_15c = unaff_EBP + -0x144;
  FUN_00545a5c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_14c = (undefined1 *)0x7e6f37;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_14c = (undefined1 *)0x7e6f42;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  do {
    if ((*(int *)(extraout_ECX + 0x67c) == 0) ||
       (*(uint *)(*(int *)(extraout_ECX + 0x67c) + -4) <= *(uint *)(unaff_EBP + -0x1c))) {
      uVar7 = 0;
      if (*(int *)(extraout_ECX + 0x67c) != 0) {
        uVar7 = *(uint *)(*(int *)(extraout_ECX + 0x67c) + -4);
      }
      if (uVar7 <= *(uint *)(extraout_ECX + 0x688)) {
        *(undefined4 *)(extraout_ECX + 0x690) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_14c = (undefined1 *)0x7e7967;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_14c = (undefined1 *)0x7e7972;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x74) == 6) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iVar3 = *(int *)(extraout_ECX + 0x124);
        iVar1 = *(int *)(extraout_ECX + 0x120);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        *(int *)(unaff_EBP + -0x2c) = iVar1 + iVar3 * 0x14;
        puStack_14c = (undefined1 *)0x7e79a3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        iStack_150 = 0x7e79b1;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e79bd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_14c = (undefined1 *)0x7e79cd;
        iStack_150 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_14c;
        iStack_154 = 0x7e79d9;
        FUN_00448a17();
        iStack_154 = unaff_EBP + -0x10;
        iStack_150 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        puStack_158 = (undefined4 *)0x7e79e8;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iStack_150 = 0x7e79f5;
        FUN_0044974c();
        iStack_150 = 0x7e79fc;
        uVar8 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          puStack_14c = (undefined1 *)0x7e7a10;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7a1d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7a28;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)0xff;
        iStack_150 = 0x7e7a37;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xf8);
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (piVar5 == (int *)0x0) {
          puStack_14c = (undefined1 *)0x7e7a55;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + 8);
        }
        iVar3 = *piVar5;
        puStack_158 = *(undefined4 **)(unaff_EBP + -0x10);
        iStack_154 = *(int *)(unaff_EBP + -0x74);
        iStack_150 = *(undefined4 *)(unaff_EBP + -0x70);
        iStack_15c = 0xdc;
        puStack_14c = *(undefined1 **)(unaff_EBP + -0x6c);
        *(int **)(unaff_EBP + -0x30) = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar5,0x7b);
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x30),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x74);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        iVar3 = FUN_00402e32(unaff_EBP + -0x54,&DAT_00980690);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        iVar3 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_007d4a9a(unaff_EBP + -0x10,0,unaff_EBP + -0x40,unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_150 = 0x7e7b0f;
        iStack_150 = FUN_00449749();
        iStack_154 = 0x7e7b1b;
        puStack_158 = (undefined4 *)FUN_00449713();
        *(int **)(unaff_EBP + -0x30) = &iStack_154;
        iStack_15c = 0x7e7b27;
        FUN_00448a17();
        iStack_15c = 0xd2 - *(int *)(unaff_EBP + -0x20) / 2;
        puStack_158 = (undefined4 *)0xe0;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          puStack_14c = (undefined1 *)0x7e7b60;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        puStack_14c = (undefined1 *)0x7e7b6d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7b78;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7b85;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7b90;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)(unaff_EBP + -0x10);
        iStack_150 = 0x7e7ba3;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_14c = (undefined1 *)*puVar4;
        iStack_150 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_154 = 0x7e7bb9;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_00414ebb();
        puStack_14c = (undefined1 *)0x7e7bce;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        iStack_150 = 0x7e7bd8;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7be4;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        puStack_14c = (undefined1 *)0x7e7bf4;
        iStack_150 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_14c;
        iStack_154 = 0x7e7c00;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x684;
        iStack_150 = 0x7e7c12;
        FUN_0044974c();
        iStack_150 = 0x7e7c19;
        uVar8 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7c29;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7c34;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)0x7e7c3a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x54);
        iStack_150 = 0x7e7c44;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7c50;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        puStack_14c = (undefined1 *)0x7e7c5a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        iStack_150 = 0x7e7c64;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7c70;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        iStack_150 = 0x7e7c84;
        iStack_150 = FUN_00449749();
        iStack_154 = 0x7e7c8d;
        puStack_158 = (undefined4 *)FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_154;
        iStack_15c = 0x7e7c99;
        FUN_00448a17();
        iStack_15c = 0xbc - *(int *)(unaff_EBP + -0x20) / 2;
        puStack_158 = (undefined4 *)0xf3;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        puStack_14c = (undefined1 *)0x7e7ccf;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7cda;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7ce7;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7cf2;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)(unaff_EBP + -0x10);
        iStack_150 = 0x7e7d05;
        puVar4 = (undefined4 *)FUN_00679d22();
        puStack_14c = (undefined1 *)*puVar4;
        iStack_150 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        iStack_154 = 0x7e7d1b;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_00414ebb();
        puStack_14c = (undefined1 *)0x7e7d30;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        iStack_150 = 0x7e7d3a;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7d46;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        puStack_14c = (undefined1 *)0x7e7d56;
        iStack_150 = FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_14c;
        iStack_154 = 0x7e7d62;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        iStack_150 = 0x7e7d6e;
        FUN_0044974c();
        iStack_150 = 0x7e7d75;
        uVar8 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7d85;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7d90;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)0x7e7d96;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x54);
        iStack_150 = 0x7e7da0;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7dac;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        puStack_14c = (undefined1 *)0x7e7db6;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        iStack_150 = 0x7e7dc0;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7dcc;
          FUN_00878dfb();
        }
        puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        iStack_150 = 0x7e7de0;
        iStack_150 = FUN_00449749();
        iStack_154 = 0x7e7de9;
        puStack_158 = (undefined4 *)FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_154;
        iStack_15c = 0x7e7df5;
        iStack_154 = extraout_ECX_03;
        FUN_00448a17();
        iStack_15c = 0x112 - *(int *)(unaff_EBP + -0x20) / 2;
        puStack_158 = (undefined4 *)0xf3;
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        puStack_14c = (undefined1 *)0x7e7e26;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7e31;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_14c = (undefined1 *)0x7e7e3e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7e49;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        puStack_14c = (undefined1 *)0x7e7e66;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar3 = *(uint *)(unaff_EBP + -0x1c) * 0x3c + *(int *)(extraout_ECX + 0x67c);
    *(int *)(unaff_EBP + -0x14) = iVar3;
    iVar3 = *(int *)(iVar3 + 0x1c) - *(int *)(extraout_ECX + 0x88);
    if ((-0x31 < iVar3) && (iVar3 < *(int *)(extraout_ECX + 0x84) + 0x18)) {
      piVar5 = *(int **)(unaff_EBP + -0x14);
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        if (piVar5[10] == -1) {
          if (piVar5[0xe] == 0) {
            if (*(int *)(extraout_ECX + 0x9c) == 0) {
              if (*(int *)(unaff_EBP + -0x1c) <= *(int *)(extraout_ECX + 0x688)) {
                if (*(int *)(unaff_EBP + -0x1c) != *(int *)(extraout_ECX + 0x688))
                goto LAB_007e75ab;
                if (((char *)piVar5[4] == (char *)0x0) || (*(char *)piVar5[4] == '\0')) {
                  piVar6 = (int *)&DAT_0097812c;
                }
                else {
                  iStack_154 = piVar5[4];
                  puStack_14c = (undefined1 *)0x0;
                  iStack_150 = 0xffffffff;
                  puStack_158 = (undefined4 *)0x0;
                  iStack_15c = 0;
                  piVar6 = &iStack_15c;
                  (*DAT_0097b4c8)();
                  FUN_0087a1b0();
                  (*DAT_0097b4c8)(0,0,piVar5[4],0xffffffff,&iStack_15c,0x3fffffff);
                }
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                iStack_150 = 0x7e7445;
                puStack_14c = (undefined1 *)piVar6;
                FUN_004184ca();
                iVar3 = *(int *)(unaff_EBP + -0x20);
                iVar1 = *(int *)(extraout_ECX + 0x68c);
                *(undefined1 *)(unaff_EBP + -4) = 8;
                *(int *)(unaff_EBP + -0x18) = iVar1;
                if (iVar3 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(uint *)(iVar3 + -4) >> 1;
                }
                if ((int)uVar7 < iVar1) {
                  *(int *)(extraout_ECX + 0x688) = *(int *)(extraout_ECX + 0x688) + 1;
                  *(undefined4 *)(extraout_ECX + 0x68c) = 0;
                  if (iVar3 == 0) {
                    *(undefined4 *)(unaff_EBP + -0x18) = 0;
                  }
                  else {
                    *(uint *)(unaff_EBP + -0x18) = *(uint *)(iVar3 + -4) >> 1;
                  }
                }
                puStack_14c = (undefined1 *)0x7e7494;
                FUN_00403191();
                *(undefined1 *)(unaff_EBP + -4) = 9;
                puStack_14c = (undefined1 *)0x7e74a4;
                FUN_00403191();
                puStack_14c = (undefined1 *)(unaff_EBP + -0x60);
                *(undefined1 *)(unaff_EBP + -4) = 10;
                iStack_150 = 0x7e74b7;
                piVar6 = (int *)FUN_0046fcad();
                iStack_15c = *piVar6;
                puStack_14c = (undefined1 *)0x0;
                iStack_150 = 0;
                iStack_154 = 0;
                puStack_158 = (undefined4 *)0xffffffff;
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                (*DAT_0097b4cc)(0,0);
                FUN_0087a1b0();
                *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffebc;
                puStack_14c = (undefined1 *)(unaff_EBP + -0x84);
                iStack_150 = 0x7e74f2;
                iStack_150 = FUN_00449749();
                iStack_154 = *(int *)(unaff_EBP + -0x18);
                puStack_158 = (undefined4 *)(unaff_EBP + -0x5c);
                iStack_15c = 0x7e7502;
                FUN_0046fcad();
                iStack_154 = -1;
                puStack_158 = *(undefined4 **)(unaff_EBP + -0x24);
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                iStack_15c = 0x7e7512;
                iStack_15c = FUN_00411641();
                puStack_158 = (undefined4 *)FUN_0045010e();
                *(int **)(unaff_EBP + -0x10) = &iStack_154;
                iStack_15c = 0x7e7525;
                FUN_00448a17();
                puStack_158 = (undefined4 *)
                              ((piVar5[7] - *(int *)(extraout_ECX + 0x88)) +
                              *(int *)(extraout_ECX + 0x7c));
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                iStack_15c = piVar5[6] + *(int *)(extraout_ECX + 0x78);
                FUN_004115d9();
                FUN_00448e3a();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                FUN_00402676();
                *(undefined1 *)(unaff_EBP + -4) = 10;
                FUN_00402676();
                *(undefined1 *)(unaff_EBP + -4) = 9;
                puStack_14c = (undefined1 *)0x7e7574;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  puStack_14c = (undefined1 *)0x7e757f;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 8;
                puStack_14c = (undefined1 *)0x7e758f;
                iVar3 = FUN_00402bc3();
                if (iVar3 < 0) {
                  puStack_14c = (undefined1 *)0x7e759a;
                  FUN_00878dfb();
                }
                *(undefined1 *)(unaff_EBP + -4) = 3;
                FUN_00402676();
              }
            }
            else {
LAB_007e75ab:
              puStack_14c = (undefined1 *)0x7e75bc;
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              puStack_14c = (undefined1 *)0x7e75cc;
              FUN_00403191();
              puStack_14c = (undefined1 *)(unaff_EBP + -0x114);
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              iStack_150 = 0x7e75e6;
              iStack_150 = FUN_00449749();
              iStack_154 = 0x7e75ef;
              puStack_158 = (undefined4 *)FUN_00449713();
              *(int **)(unaff_EBP + -0x10) = &iStack_154;
              iStack_15c = 0x7e75fb;
              iStack_154 = extraout_ECX_01;
              FUN_00448a17();
              puStack_158 = (undefined4 *)
                            ((piVar5[7] - *(int *)(extraout_ECX + 0x88)) +
                            *(int *)(extraout_ECX + 0x7c));
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              iStack_15c = piVar5[6] + *(int *)(extraout_ECX + 0x78);
              FUN_004115d9();
              FUN_00448e3a();
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              puStack_14c = (undefined1 *)0x7e7632;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                puStack_14c = (undefined1 *)0x7e763d;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              puStack_14c = (undefined1 *)0x7e764d;
              iVar3 = FUN_00402bc3();
              if (iVar3 < 0) {
                puStack_14c = (undefined1 *)0x7e765c;
                FUN_00878dfb();
              }
            }
            goto LAB_007e788d;
          }
        }
        else if ((piVar5[10] ==
                  *(int *)(*(int *)(*(int *)(extraout_ECX + 0xe0) +
                                   *(int *)(extraout_ECX + 0xdc) * 4) + 0x28)) &&
                (iVar3 = (piVar5[8] + 8) / 3, 0 < iVar3)) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(uint *)(unaff_EBP + -0x24) = iVar3 + 1U >> 1;
          do {
            puStack_14c = (undefined1 *)0x7e76b0;
            FUN_00403191();
            piVar5 = *(int **)(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 4;
            if (piVar5 == (int *)0x0) {
              puStack_14c = (undefined1 *)0x7e76c5;
              FUN_00878dfb();
              piVar5 = *(int **)(unaff_EBP + 8);
            }
            iVar3 = *(int *)(unaff_EBP + -0x14);
            iVar1 = *(int *)(iVar3 + 0x18);
            *(int *)(unaff_EBP + -0x28) =
                 (*(int *)(iVar3 + 0x2c) - *(int *)(extraout_ECX + 0x88)) + *(int *)(iVar3 + 0x1c) +
                 *(int *)(extraout_ECX + 0x7c);
            iVar3 = *(int *)(extraout_ECX + 0x78);
            *(int *)(unaff_EBP + -0x30) = iVar1 + iVar3 + 3 + *(int *)(unaff_EBP + -0x18);
            iVar2 = *piVar5;
            puStack_158 = (undefined4 *)0xff919191;
            iStack_15c = *(int *)(unaff_EBP + -0x28);
            iStack_154 = *(int *)(unaff_EBP + -0xa4);
            iStack_150 = *(int *)(unaff_EBP + -0xa0);
            puStack_14c = *(undefined1 **)(unaff_EBP + -0x9c);
            *(int **)(unaff_EBP + -0x10) = piVar5;
            iVar3 = (**(code **)(iVar2 + 0x90))
                              (piVar5,iVar1 + iVar3 + *(int *)(unaff_EBP + -0x18),
                               *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x30)
                              );
            if (iVar3 < 0) {
              puStack_14c = *(undefined1 **)(unaff_EBP + -0x10);
              iStack_154 = 0x7e7732;
              iStack_150 = iVar3;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            puStack_14c = (undefined1 *)0x7e7742;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              puStack_14c = (undefined1 *)0x7e774d;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 6;
            piVar5 = (int *)(unaff_EBP + -0x24);
            *piVar5 = *piVar5 + -1;
          } while (*piVar5 != 0);
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        if ((piVar5[10] != -1) && (piVar5[10] == *(int *)(extraout_ECX + 0xd8))) {
          if (*(int *)(unaff_EBP + 8) == 0) {
            puStack_14c = (undefined1 *)0x7e777d;
            FUN_00878dfb();
          }
          iStack_154 = (piVar5[0xb] - *(int *)(extraout_ECX + 0x88)) + piVar5[7] +
                       *(int *)(extraout_ECX + 0x7c);
          puStack_158 = (undefined4 *)(piVar5[6] + *(int *)(extraout_ECX + 0x78));
          puStack_14c = (undefined1 *)0x1;
          iStack_150 = piVar5[8] + 8;
          iStack_15c = *(int *)(unaff_EBP + 8);
          *(int **)(unaff_EBP + -0x10) = *(int **)(unaff_EBP + 8);
          iVar3 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x8c))();
          if (iVar3 < 0) {
            puStack_14c = *(undefined1 **)(unaff_EBP + -0x10);
            iStack_154 = 0x7e77c5;
            iStack_150 = iVar3;
            FUN_00878e09();
          }
        }
        puStack_14c = (undefined1 *)0x7e77d6;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_14c = (undefined1 *)0x7e77e6;
        FUN_00403191();
        puStack_14c = (undefined1 *)(unaff_EBP + -0xc4);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_150 = 0x7e7800;
        iStack_150 = FUN_00449749();
        iStack_154 = 0x7e7809;
        puStack_158 = (undefined4 *)FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_154;
        iStack_15c = 0x7e7815;
        iStack_154 = extraout_ECX_02;
        FUN_00448a17();
        puStack_158 = (undefined4 *)
                      ((piVar5[7] - *(int *)(extraout_ECX + 0x88)) + *(int *)(extraout_ECX + 0x7c));
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_15c = piVar5[6] + *(int *)(extraout_ECX + 0x78);
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_14c = (undefined1 *)0x7e784c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7857;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_007e7861:
        puStack_14c = (undefined1 *)0x7e7867;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7872;
          FUN_00878dfb();
        }
LAB_007e7872:
        if (*(int *)(extraout_ECX + 0x688) == *(int *)(unaff_EBP + -0x1c)) {
          *(undefined4 *)(extraout_ECX + 0x68c) = 0;
          *(int *)(extraout_ECX + 0x688) = *(int *)(extraout_ECX + 0x688) + 1;
        }
      }
      else {
        if (iVar3 == 1) {
          if ((piVar5[10] != -1) || (piVar5[0xe] != 0)) {
LAB_007e731b:
            puStack_14c = (undefined1 *)0xff;
            iStack_150 = 0x7e732d;
            FUN_004031b7();
            piVar6 = *(int **)(unaff_EBP + 8);
            iVar3 = piVar5[5];
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            *(int *)(unaff_EBP + -0x24) = iVar3;
            if (piVar6 == (int *)0x0) {
              puStack_14c = (undefined1 *)0x7e7348;
              FUN_00878dfb();
              piVar6 = *(int **)(unaff_EBP + 8);
            }
            iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18);
            iStack_15c = (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) -
                         *(int *)(extraout_ECX + 0x88)) + *(int *)(extraout_ECX + 0x7c);
            iVar1 = *(int *)(extraout_ECX + 0x78);
            puStack_158 = *(undefined4 **)(unaff_EBP + -0x24);
            iStack_154 = *(int *)(unaff_EBP + -0xb4);
            iStack_150 = *(int *)(unaff_EBP + -0xb0);
            puStack_14c = *(undefined1 **)(unaff_EBP + -0xac);
            *(int **)(unaff_EBP + -0x28) = piVar6;
            iVar3 = (**(code **)(*piVar6 + 0x80))(*(undefined4 *)(unaff_EBP + 8),iVar3 + iVar1);
            if (iVar3 < 0) {
              puStack_14c = *(undefined1 **)(unaff_EBP + -0x28);
              iStack_154 = 0x7e7394;
              iStack_150 = iVar3;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 3;
            goto LAB_007e7861;
          }
          if (*(int *)(unaff_EBP + -0x1c) <= *(int *)(extraout_ECX + 0x688)) {
            piVar5 = *(int **)(unaff_EBP + -0x14);
            goto LAB_007e731b;
          }
          goto LAB_007e7872;
        }
        if (iVar3 == 2) {
          puStack_14c = (undefined1 *)0xff;
          iStack_150 = 0x7e7287;
          FUN_004031b7();
          piVar6 = *(int **)(unaff_EBP + 8);
          iVar3 = piVar5[5];
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          *(int *)(unaff_EBP + -0x24) = iVar3;
          if (piVar6 == (int *)0x0) {
            puStack_14c = (undefined1 *)0x7e72a2;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18);
          iStack_15c = (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) - *(int *)(extraout_ECX + 0x88)
                       ) + *(int *)(extraout_ECX + 0x7c);
          iVar1 = *(int *)(extraout_ECX + 0x78);
          puStack_158 = *(undefined4 **)(unaff_EBP + -0x24);
          iStack_154 = *(int *)(unaff_EBP + -0xf4);
          iStack_150 = *(int *)(unaff_EBP + -0xf0);
          puStack_14c = *(undefined1 **)(unaff_EBP + -0xec);
          *(int **)(unaff_EBP + -0x28) = piVar6;
          iVar3 = (**(code **)(*piVar6 + 0x80))(*(undefined4 *)(unaff_EBP + 8),iVar3 + iVar1);
          if (iVar3 < 0) {
            puStack_14c = *(undefined1 **)(unaff_EBP + -0x28);
            iStack_154 = 0x7e72ee;
            iStack_150 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          goto LAB_007e7861;
        }
        if (iVar3 == 3) {
          if (*(int *)(unaff_EBP + -0x1c) != *(int *)(extraout_ECX + 0x688)) {
            if (*(int *)(extraout_ECX + 0x67c) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(extraout_ECX + 0x67c) + -4);
            }
            if (*(int *)(extraout_ECX + 0x688) != iVar3) goto LAB_007e788d;
          }
          puStack_14c = (undefined1 *)piVar5[0xd];
          if ((-1 < (int)puStack_14c) && ((int)puStack_14c < 4)) {
            iStack_150 = 0x7e724a;
            FUN_00747bcb();
          }
          if (*(int *)(extraout_ECX + 0x67c) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(extraout_ECX + 0x67c) + -4);
          }
          if (*(int *)(unaff_EBP + -0x1c) != iVar3) {
            *(int *)(extraout_ECX + 0x688) = *(int *)(extraout_ECX + 0x688) + 1;
            *(undefined4 *)(extraout_ECX + 0x68c) = 0;
          }
        }
        else if (iVar3 == 4) {
          puStack_14c = (undefined1 *)(unaff_EBP + -0x44);
          iStack_150 = 0x7e6fd0;
          FUN_00679e4e();
          iVar1 = piVar5[10];
          iVar3 = *(int *)(extraout_ECX + 0xd8);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if ((iVar1 == iVar3) ||
             (iVar1 == *(int *)(*(int *)(*(int *)(extraout_ECX + 0xe0) +
                                        *(int *)(extraout_ECX + 0xdc) * 4) + 0x28))) {
            puStack_14c = (undefined1 *)(unaff_EBP + -0x58);
            iStack_150 = 0x7e7003;
            puVar4 = (undefined4 *)FUN_00679e4e();
            FUN_00408b49();
            FUN_00402fa6();
            *(undefined4 *)(unaff_EBP + -0x44) = *puVar4;
            if (*(int *)(unaff_EBP + -0x58) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x58) = 0;
            }
          }
          puStack_14c = (undefined1 *)0x7e7035;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          puStack_14c = (undefined1 *)(unaff_EBP + -0x40);
          iStack_150 = 0x7e7044;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e7050;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          puStack_14c = (undefined1 *)0x7e705a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
          puStack_14c = (undefined1 *)(unaff_EBP + -0x54);
          puVar4 = &DAT_00980690;
          iStack_150 = 0x7e7064;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e7072;
            FUN_00878dfb();
            puVar4 = extraout_ECX_00;
          }
          puStack_14c = (undefined1 *)0x0;
          iStack_150 = unaff_EBP + -0x40;
          iStack_154 = unaff_EBP + -0x54;
          iStack_15c = unaff_EBP + -0x44;
          *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_158;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_158 = puVar4;
          FUN_004059fd();
          iStack_15c = unaff_EBP + -0x134;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          FUN_00405a1d();
          FUN_00402660();
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iStack_150 = 0x7e70b8;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -100) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          if (iVar3 != 0) {
            puStack_14c = (undefined1 *)0x7e70ce;
            iVar3 = FUN_0041a581();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              puStack_14c = (undefined1 *)0x7e70df;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_14c = (undefined1 *)0x7e70ef;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e70fa;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          puStack_14c = (undefined1 *)0x7e7107;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e7112;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_14c = (undefined1 *)0x7e711f;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e712a;
            FUN_00878dfb();
          }
          puStack_14c = (undefined1 *)0xff;
          iStack_150 = 0x7e713c;
          FUN_004031b7();
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (piVar5 == (int *)0x0) {
            puStack_14c = (undefined1 *)0x7e7151;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iStack_15c = (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) - *(int *)(extraout_ECX + 0x88)
                       ) + 2 + *(int *)(extraout_ECX + 0x7c);
          puStack_158 = *(undefined4 **)(unaff_EBP + -0x2c);
          iStack_154 = *(int *)(unaff_EBP + -0x104);
          iStack_150 = *(int *)(unaff_EBP + -0x100);
          *(int *)(unaff_EBP + -0x24) =
               *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18) + 10 + *(int *)(extraout_ECX + 0x78);
          iVar3 = *piVar5;
          puStack_14c = *(undefined1 **)(unaff_EBP + -0xfc);
          *(int **)(unaff_EBP + -0x28) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0x80))(piVar5,*(undefined4 *)(unaff_EBP + -0x24));
          if (iVar3 < 0) {
            puStack_14c = *(undefined1 **)(unaff_EBP + -0x28);
            iStack_154 = 0x7e71a8;
            iStack_150 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_14c = (undefined1 *)0x7e71b8;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_14c = (undefined1 *)0x7e71c3;
            FUN_00878dfb();
          }
          if (*(int *)(extraout_ECX + 0x688) == *(int *)(unaff_EBP + -0x1c)) {
            *(undefined4 *)(extraout_ECX + 0x68c) = 0;
            *(int *)(extraout_ECX + 0x688) = *(int *)(extraout_ECX + 0x688) + 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            puStack_14c = (undefined1 *)0x7e71ef;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int *)(unaff_EBP + -0x44) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
          }
        }
      }
LAB_007e788d:
      if ((*(int *)(*(int *)(unaff_EBP + -0x14) + 0x28) == 0) &&
         (*(int *)(*(int *)(unaff_EBP + -0x14) + 8) == 0)) {
        puStack_14c = (undefined1 *)0xff;
        iStack_150 = 0x7e78b3;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xf4);
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (piVar5 == (int *)0x0) {
          puStack_14c = (undefined1 *)0x7e78d1;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + 8);
        }
        puStack_158 = *(undefined4 **)(unaff_EBP + -0x10);
        iStack_154 = *(int *)(unaff_EBP + -0x74);
        iStack_150 = *(int *)(unaff_EBP + -0x70);
        iStack_15c = (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) - *(int *)(extraout_ECX + 0x88))
                     + -10 + *(int *)(extraout_ECX + 0x7c);
        iVar3 = *piVar5;
        uVar8 = *(undefined4 *)(extraout_ECX + 0x78);
        puStack_14c = *(undefined1 **)(unaff_EBP + -0x6c);
        *(int **)(unaff_EBP + -0x30) = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar5,uVar8);
        if (iVar3 < 0) {
          puStack_14c = *(undefined1 **)(unaff_EBP + -0x30);
          iStack_154 = 0x7e7918;
          iStack_150 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_14c = (undefined1 *)0x7e7925;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_14c = (undefined1 *)0x7e7930;
          FUN_00878dfb();
        }
      }
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
  } while( true );
}


