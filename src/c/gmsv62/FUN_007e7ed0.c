/* FUN_007e7ed0 - 0x007e7ed0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e7ed0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined4 *puStack_2a8;
  int *piStack_2a4;
  undefined1 *puStack_2a0;
  int iStack_29c;
  undefined4 uStack_298;
  int iStack_294;
  int iStack_290;
  int *piStack_28c;
  undefined4 *puStack_288;
  int *piStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  undefined *puStack_270;
  int *piStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  undefined1 *puStack_25c;
  int iStack_258;
  undefined4 *puStack_254;
  int iStack_250;
  int iStack_24c;
  int *piStack_248;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar3 = *(int *)(extraout_ECX + 0x74);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 < 0) goto LAB_007e8c1b;
  if (4 < iVar3) {
    if (iVar3 == 5) {
      piStack_248 = (int *)0x7e7f53;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      piStack_248 = (int *)(unaff_EBP + -0x60);
      iStack_24c = 0x7e7f62;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_248 = (int *)0x7e7f70;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_248 = (int *)0x7e7f7a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      piStack_248 = (int *)(unaff_EBP + -0x50);
      puStack_254 = &DAT_00980690;
      iStack_24c = 0x7e7f84;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_248 = (int *)0x7e7f90;
        FUN_00878dfb();
        puStack_254 = extraout_ECX_00;
      }
      piStack_248 = (int *)0x0;
      iStack_24c = unaff_EBP + -0x60;
      iStack_250 = unaff_EBP + -0x50;
      puStack_25c = (undefined1 *)&puStack_254;
      *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_254;
      iStack_258 = 0xa56;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_260 = (int *)0x7e7fb6;
      FUN_00679e4e();
      iStack_258 = unaff_EBP + -0x1e0;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_25c = (undefined1 *)0x7e7fc6;
      FUN_00405a1d();
      puStack_25c = (undefined1 *)0x7e7fcd;
      FUN_00402660();
      puStack_25c = (undefined1 *)0x7e7fd4;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_24c = 0x7e7fdf;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x38) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar3 != 0) {
        piStack_248 = (int *)0x7e7ff5;
        iVar3 = FUN_0041a581();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          piStack_248 = (int *)0x7e8006;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      piStack_248 = (int *)0x7e8016;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_248 = (int *)0x7e8021;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      piStack_248 = (int *)0x7e802e;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_248 = (int *)0x7e8039;
        FUN_00878dfb();
      }
      iVar3 = unaff_EBP + -0x60;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_248 = (int *)0x7e8046;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_248 = (int *)0x7e8051;
        FUN_00878dfb();
        iVar3 = extraout_ECX_01;
      }
      piStack_248 = (int *)0x0;
      puStack_254 = &iStack_24c;
      *(int **)(unaff_EBP + -0x18) = &iStack_24c;
      iStack_250 = 0x8ae;
      iStack_258 = 0x7e8066;
      iStack_24c = iVar3;
      FUN_00679e4e();
      iVar3 = *(int *)(unaff_EBP + -0x14);
      iStack_250 = 0x7e8070;
      FUN_008163ca();
      piStack_248 = (int *)0xff;
      iStack_24c = 0x7e8082;
      FUN_004031b7();
      iVar3 = *(int *)(iVar3 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (iVar3 == 0) {
        piStack_248 = (int *)0x7e8095;
        FUN_00878dfb();
      }
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
      puStack_254 = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_250 = *(undefined4 *)(unaff_EBP + -0xf0);
      iStack_24c = *(int *)(unaff_EBP + -0xec);
      iStack_258 = 0xef;
      piStack_248 = *(int **)(unaff_EBP + -0xe8);
      puStack_25c = (undefined1 *)0xae;
      uStack_264 = 0x7e80c0;
      piStack_260 = piVar2;
      iVar3 = (**(code **)(*piVar2 + 0x80))();
      if (iVar3 < 0) {
        iStack_250 = 0x7e80d0;
        iStack_24c = iVar3;
        piStack_248 = piVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_248 = (int *)0x7e80e0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_248 = (int *)0x7e80eb;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_248 = (int *)0x7e8100;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      goto LAB_007e8c1b;
    }
    if (iVar3 == 6) {
      piStack_248 = (int *)0x0;
      puStack_254 = &iStack_24c;
      *(int **)(unaff_EBP + -0x20) = &iStack_24c;
      iStack_250 = 0x8af;
      iStack_258 = 0x7e7f3a;
      iStack_24c = extraout_ECX;
      FUN_00679e4e();
      iStack_250 = 0x7e7f42;
      FUN_008163ca();
      goto LAB_007e8c1b;
    }
    if ((iVar3 < 7) || (8 < iVar3)) goto LAB_007e8c1b;
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar3 + 0x9c) == 0) {
    piStack_248 = (int *)(unaff_EBP + -0x40);
    iStack_24c = 0x7e86a3;
    piVar2 = (int *)FUN_00679d86();
    iStack_24c = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_250 = 0x7e86b4;
    piStack_248 = (int *)(iVar3 + 0x60);
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      piStack_248 = (int *)0x7e86cb;
      FUN_00403384();
    }
    piStack_248 = (int *)0x7e86dd;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_248 = (int *)0x7e86ed;
    FUN_00403191();
    iVar3 = *(int *)(iVar3 + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar3 == 0) {
      piStack_248 = (int *)0x7e86ff;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    piStack_26c = *(int **)(iVar3 + 0x60);
    uStack_264 = *(undefined4 *)(iVar3 + 0x20);
    iStack_250 = *(undefined4 *)(unaff_EBP + -0x150);
    iStack_24c = *(int *)(unaff_EBP + -0x14c);
    piStack_248 = *(int **)(unaff_EBP + -0x148);
    piStack_260 = *(int **)(unaff_EBP + -400);
    puStack_25c = *(undefined1 **)(unaff_EBP + -0x18c);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 0x1c);
    uStack_268 = *(undefined4 *)(unaff_EBP + -0x18);
    iVar3 = *piStack_26c;
    iStack_258 = *(undefined4 *)(unaff_EBP + -0x188);
    *(int **)(unaff_EBP + -0x10) = piStack_26c;
    puStack_254 = *(undefined4 **)(unaff_EBP + -0x184);
    puStack_270 = (undefined *)0x7e8739;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_270 = &DAT_00963cc8;
      uStack_274 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_27c = 0x7e874b;
      iStack_278 = iVar3;
      FUN_00878e09();
    }
    puStack_270 = (undefined *)(unaff_EBP + -400);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_274 = 0x7e875b;
    puStack_270 = (undefined *)FUN_00402bc3();
    if ((int)puStack_270 < 0) {
      uStack_274 = 0x7e8766;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_270 = (undefined *)(unaff_EBP + -0x150);
    uStack_274 = 0x7e8776;
    puStack_270 = (undefined *)FUN_00402bc3();
    if ((int)puStack_270 < 0) {
      uStack_274 = 0x7e8781;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    iVar1 = *(int *)(iVar3 + 0x60);
    *(int *)(unaff_EBP + -0x10) = iVar3 + 0x60;
    if (iVar1 == 0) {
      puStack_270 = (undefined *)0x80004003;
      uStack_274 = 0x7e879a;
      FUN_00878dfb();
    }
    piVar2 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
    uStack_274 = *(undefined4 *)(iVar3 + 0x20);
    iStack_278 = *(int *)(iVar3 + 0x1c);
    puStack_270 = (undefined *)0xffffff;
    uStack_27c = 0;
    uStack_280 = 0;
    puStack_288 = (undefined4 *)0x7e87b9;
    piStack_284 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x8c))();
    if (iVar3 < 0) {
      puStack_288 = (undefined4 *)&DAT_00963cc8;
      iStack_294 = 0x7e87c9;
      iStack_290 = iVar3;
      piStack_28c = piVar2;
      FUN_00878e09();
    }
    puStack_288 = &DAT_00980690;
    piStack_28c = (int *)0x7e87d2;
    FUN_00403191();
    puStack_288 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_28c = (int *)0x7e87e2;
    FUN_00403191();
    puStack_288 = (undefined4 *)0x0;
    piStack_28c = (int *)0x0;
    iStack_290 = unaff_EBP + -0x80;
    iStack_294 = unaff_EBP + -0x1b0;
    puStack_2a0 = (undefined1 *)&uStack_298;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_298;
    iStack_29c = 0xa51;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_2a4 = (int *)0x7e880b;
    FUN_00679e4e();
    iStack_29c = unaff_EBP + -0x200;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_2a0 = (undefined1 *)0x7e881b;
    FUN_00405a1d();
    puStack_2a0 = (undefined1 *)0x7e8822;
    FUN_00402660();
    puStack_2a0 = (undefined1 *)0x7e8829;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_290 = 0x7e8834;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    puStack_288 = (undefined4 *)(unaff_EBP + -0x28);
    piStack_28c = (int *)0x7e8843;
    puStack_288 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_288 < 0) && (puStack_288 != (undefined4 *)0x80004002)) {
      piStack_28c = (int *)0x7e8854;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)(unaff_EBP + -0x200);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_28c = (int *)0x7e8864;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e886f;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)(unaff_EBP + -0x1b0);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_28c = (int *)0x7e887f;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e888a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_288 = (undefined4 *)(unaff_EBP + -0x80);
    piStack_28c = (int *)0x7e8897;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e88a2;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)0x3;
    piStack_28c = (int *)0xff;
    iStack_290 = 0x7e88b4;
    FUN_004031b7();
    iVar3 = **(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    if (iVar3 == 0) {
      puStack_288 = (undefined4 *)0x80004003;
      piStack_28c = (int *)0x7e88c9;
      FUN_00878dfb();
    }
    uStack_298 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_294 = *(undefined4 *)(unaff_EBP + -0xa0);
    iStack_290 = *(int *)(unaff_EBP + -0x9c);
    iStack_29c = 0;
    piStack_2a4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
    iVar3 = *piStack_2a4;
    piStack_28c = *(int **)(unaff_EBP + -0x98);
    puStack_2a0 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x18) = piStack_2a4;
    puStack_288 = *(undefined4 **)(unaff_EBP + -0x94);
    puStack_2a8 = (undefined4 *)0x7e88f3;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_2a8 = (undefined4 *)&DAT_00963cc8;
      uStack_2ac = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_2b4 = 0x7e8905;
      iStack_2b0 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0xa0);
    uStack_2ac = 0x7e8915;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e8920;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x1c;
    if (0x1c < iVar3 + -0x3a) {
      do {
        puStack_2a8 = &DAT_00980690;
        uStack_2ac = 0x7e8946;
        FUN_00403191();
        puStack_2a8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        uStack_2ac = 0x7e8956;
        FUN_00403191();
        puStack_2a8 = (undefined4 *)0x0;
        uStack_2ac = 0;
        iStack_2b0 = unaff_EBP + -0xe0;
        iStack_2b4 = unaff_EBP + -0xc0;
        *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2b8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00679e4e(&uStack_2b8,0xa52);
        iVar3 = unaff_EBP + -0x220;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_2b0 = 0x7e89ab;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x30);
        uStack_2ac = 0x7e89ba;
        puStack_2a8 = (undefined4 *)FUN_0041a581();
        if (((int)puStack_2a8 < 0) && (puStack_2a8 != (undefined4 *)0x80004002)) {
          uStack_2ac = 0x7e89cb;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x220);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        uStack_2ac = 0x7e89db;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e89e6;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        uStack_2ac = 0x7e89f6;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e8a01;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0xe0);
        uStack_2ac = 0x7e8a11;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e8a1c;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)0x3;
        uStack_2ac = 0xff;
        iStack_2b0 = 0x7e8a2e;
        FUN_004031b7();
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (iVar3 == 0) {
          puStack_2a8 = (undefined4 *)0x80004003;
          uStack_2ac = 0x7e8a46;
          FUN_00878dfb();
        }
        uStack_2b8 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x100);
        iStack_2b0 = *(int *)(unaff_EBP + -0xfc);
        piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
        iVar3 = *piVar2;
        uStack_2ac = *(undefined4 *)(unaff_EBP + -0xf8);
        *(int **)(unaff_EBP + -0x18) = piVar2;
        puStack_2a8 = *(undefined4 **)(unaff_EBP + -0xf4);
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar2,0,*(undefined4 *)(unaff_EBP + -0x10));
        if (iVar3 < 0) {
          puStack_2a8 = (undefined4 *)&DAT_00963cc8;
          uStack_2ac = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_2b4 = 0x7e8a83;
          iStack_2b0 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x100);
        uStack_2ac = 0x7e8a93;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e8a9e;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
      } while (*(int *)(unaff_EBP + -0x10) < iVar3 + -0x3a);
    }
    puStack_2a8 = &DAT_00980690;
    uStack_2ac = 0x7e8ac3;
    FUN_00403191();
    puStack_2a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_2ac = 0x7e8ad3;
    FUN_00403191();
    puStack_2a8 = (undefined4 *)0x0;
    uStack_2ac = 0;
    iStack_2b0 = unaff_EBP + -0x140;
    iStack_2b4 = unaff_EBP + -0x120;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2b8;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00679e4e(&uStack_2b8,0xa53);
    iVar3 = unaff_EBP + -0x240;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_2b0 = 0x7e8b28;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x20);
    uStack_2ac = 0x7e8b37;
    puStack_2a8 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_2a8 < 0) && (puStack_2a8 != (undefined4 *)0x80004002)) {
      uStack_2ac = 0x7e8b48;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x240);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_2ac = 0x7e8b58;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e8b63;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x120);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_2ac = 0x7e8b73;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e8b7e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x140);
    uStack_2ac = 0x7e8b8e;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e8b99;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)0x3;
    uStack_2ac = 0xff;
    iStack_2b0 = 0x7e8bab;
    FUN_004031b7();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar3 == 0) {
      puStack_2a8 = (undefined4 *)0x80004003;
      uStack_2ac = 0x7e8bc3;
      FUN_00878dfb();
    }
    piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
    uStack_2b8 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x160);
    iStack_2b0 = *(int *)(unaff_EBP + -0x15c);
    uStack_2ac = *(undefined4 *)(unaff_EBP + -0x158);
    puStack_2a8 = *(undefined4 **)(unaff_EBP + -0x154);
    iVar3 = (**(code **)(*piVar2 + 0x80))
                      (piVar2,0,*(int *)(*(int *)(unaff_EBP + -0x14) + 0x94) + -0x3a);
    if (iVar3 < 0) {
      iStack_250 = 0x7e8c00;
      iStack_24c = iVar3;
      piStack_248 = piVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    piStack_248 = (int *)(unaff_EBP + -0x3c);
    iStack_24c = 0x7e8129;
    piVar2 = (int *)FUN_00679d86();
    iStack_24c = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_250 = 0x7e813a;
    piStack_248 = (int *)(iVar3 + 0x60);
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      piStack_248 = (int *)0x7e8151;
      FUN_00403384();
    }
    piStack_248 = (int *)0x7e8163;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_248 = (int *)0x7e8173;
    FUN_00403191();
    iVar3 = *(int *)(iVar3 + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      piStack_248 = (int *)0x7e8185;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    piStack_26c = *(int **)(iVar3 + 0x60);
    uStack_264 = *(undefined4 *)(iVar3 + 0x20);
    iStack_250 = *(undefined4 *)(unaff_EBP + -0x170);
    iStack_24c = *(int *)(unaff_EBP + -0x16c);
    piStack_248 = *(int **)(unaff_EBP + -0x168);
    piStack_260 = *(int **)(unaff_EBP + -0x90);
    puStack_25c = *(undefined1 **)(unaff_EBP + -0x8c);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 0x1c);
    uStack_268 = *(undefined4 *)(unaff_EBP + -0x10);
    iVar3 = *piStack_26c;
    iStack_258 = *(undefined4 *)(unaff_EBP + -0x88);
    *(int **)(unaff_EBP + -0x18) = piStack_26c;
    puStack_254 = *(undefined4 **)(unaff_EBP + -0x84);
    puStack_270 = (undefined *)0x7e81bf;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_270 = &DAT_00963cc8;
      uStack_274 = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_27c = 0x7e81d1;
      iStack_278 = iVar3;
      FUN_00878e09();
    }
    puStack_270 = (undefined *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_274 = 0x7e81e1;
    puStack_270 = (undefined *)FUN_00402bc3();
    if ((int)puStack_270 < 0) {
      uStack_274 = 0x7e81ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_270 = (undefined *)(unaff_EBP + -0x170);
    uStack_274 = 0x7e81fc;
    puStack_270 = (undefined *)FUN_00402bc3();
    if ((int)puStack_270 < 0) {
      uStack_274 = 0x7e8207;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    iVar1 = *(int *)(iVar3 + 0x60);
    *(int *)(unaff_EBP + -0x10) = iVar3 + 0x60;
    if (iVar1 == 0) {
      puStack_270 = (undefined *)0x80004003;
      uStack_274 = 0x7e8220;
      FUN_00878dfb();
    }
    piVar2 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
    uStack_274 = *(undefined4 *)(iVar3 + 0x20);
    iStack_278 = *(int *)(iVar3 + 0x1c);
    puStack_270 = (undefined *)0xffffff;
    uStack_27c = 0;
    uStack_280 = 0;
    puStack_288 = (undefined4 *)0x7e823f;
    piStack_284 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x8c))();
    if (iVar3 < 0) {
      puStack_288 = (undefined4 *)&DAT_00963cc8;
      iStack_294 = 0x7e824f;
      iStack_290 = iVar3;
      piStack_28c = piVar2;
      FUN_00878e09();
    }
    puStack_288 = &DAT_00980690;
    piStack_28c = (int *)0x7e825b;
    FUN_00403191();
    puStack_288 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_28c = (int *)0x7e826b;
    FUN_00403191();
    puStack_288 = (undefined4 *)0x0;
    piStack_28c = (int *)0x0;
    iStack_290 = unaff_EBP + -0x1d0;
    iStack_294 = unaff_EBP + -0xb0;
    puStack_2a0 = (undefined1 *)&uStack_298;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_298;
    iStack_29c = 0xa45;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_2a4 = (int *)0x7e8297;
    FUN_00679e4e();
    iStack_29c = unaff_EBP + -0x230;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_2a0 = (undefined1 *)0x7e82a7;
    FUN_00405a1d();
    puStack_2a0 = (undefined1 *)0x7e82ae;
    FUN_00402660();
    puStack_2a0 = (undefined1 *)0x7e82b5;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_290 = 0x7e82c0;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
    puStack_288 = (undefined4 *)(unaff_EBP + -0x2c);
    piStack_28c = (int *)0x7e82cf;
    puStack_288 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_288 < 0) && (puStack_288 != (undefined4 *)0x80004002)) {
      piStack_28c = (int *)0x7e82e0;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)(unaff_EBP + -0x230);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_28c = (int *)0x7e82f0;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e82fb;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_28c = (int *)0x7e830b;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e8316;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_288 = (undefined4 *)(unaff_EBP + -0x1d0);
    piStack_28c = (int *)0x7e8326;
    puStack_288 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_288 < 0) {
      piStack_28c = (int *)0x7e8331;
      FUN_00878dfb();
    }
    puStack_288 = (undefined4 *)0x3;
    piStack_28c = (int *)0xff;
    iStack_290 = 0x7e8343;
    FUN_004031b7();
    iVar3 = **(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar3 == 0) {
      puStack_288 = (undefined4 *)0x80004003;
      piStack_28c = (int *)0x7e8358;
      FUN_00878dfb();
    }
    uStack_298 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_294 = *(undefined4 *)(unaff_EBP + -0xd0);
    iStack_290 = *(int *)(unaff_EBP + -0xcc);
    iStack_29c = 0;
    piStack_2a4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
    iVar3 = *piStack_2a4;
    piStack_28c = *(int **)(unaff_EBP + -200);
    puStack_2a0 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x18) = piStack_2a4;
    puStack_288 = *(undefined4 **)(unaff_EBP + -0xc4);
    puStack_2a8 = (undefined4 *)0x7e8382;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_2a8 = (undefined4 *)&DAT_00963cc8;
      uStack_2ac = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_2b4 = 0x7e8394;
      iStack_2b0 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0xd0);
    uStack_2ac = 0x7e83a4;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e83af;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
    *(undefined4 *)(unaff_EBP + -0x10) = 0x15;
    if (0x15 < iVar3 + -0x4e) {
      do {
        puStack_2a8 = &DAT_00980690;
        uStack_2ac = 0x7e83d2;
        FUN_00403191();
        puStack_2a8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_2ac = 0x7e83e2;
        FUN_00403191();
        puStack_2a8 = (undefined4 *)0x0;
        uStack_2ac = 0;
        iStack_2b0 = unaff_EBP + -0x70;
        iStack_2b4 = unaff_EBP + -0x1c0;
        *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2b8;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00679e4e(&uStack_2b8,0xa46);
        iVar3 = unaff_EBP + -0x210;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_2b0 = 0x7e8434;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x24);
        uStack_2ac = 0x7e8443;
        puStack_2a8 = (undefined4 *)FUN_0041a581();
        if (((int)puStack_2a8 < 0) && (puStack_2a8 != (undefined4 *)0x80004002)) {
          uStack_2ac = 0x7e8454;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x210);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uStack_2ac = 0x7e8464;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e846f;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x1c0);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_2ac = 0x7e847f;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e848a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x70);
        uStack_2ac = 0x7e8497;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e84a2;
          FUN_00878dfb();
        }
        puStack_2a8 = (undefined4 *)0x3;
        uStack_2ac = 0xff;
        iStack_2b0 = 0x7e84b4;
        FUN_004031b7();
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar3 == 0) {
          puStack_2a8 = (undefined4 *)0x80004003;
          uStack_2ac = 0x7e84cc;
          FUN_00878dfb();
        }
        uStack_2b8 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x1a0);
        iStack_2b0 = *(int *)(unaff_EBP + -0x19c);
        piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
        iVar3 = *piVar2;
        uStack_2ac = *(undefined4 *)(unaff_EBP + -0x198);
        *(int **)(unaff_EBP + -0x18) = piVar2;
        puStack_2a8 = *(undefined4 **)(unaff_EBP + -0x194);
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar2,0,*(undefined4 *)(unaff_EBP + -0x10));
        if (iVar3 < 0) {
          puStack_2a8 = (undefined4 *)&DAT_00963cc8;
          uStack_2ac = *(undefined4 *)(unaff_EBP + -0x18);
          iStack_2b4 = 0x7e8509;
          iStack_2b0 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_2a8 = (undefined4 *)(unaff_EBP + -0x1a0);
        uStack_2ac = 0x7e8519;
        puStack_2a8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2a8 < 0) {
          uStack_2ac = 0x7e8524;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
      } while (*(int *)(unaff_EBP + -0x10) < iVar3 + -0x4e);
    }
    puStack_2a8 = &DAT_00980690;
    uStack_2ac = 0x7e8549;
    FUN_00403191();
    puStack_2a8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_2ac = 0x7e8559;
    FUN_00403191();
    puStack_2a8 = (undefined4 *)0x0;
    uStack_2ac = 0;
    iStack_2b0 = unaff_EBP + -0x180;
    iStack_2b4 = unaff_EBP + -0x110;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2b8;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00679e4e(&uStack_2b8,0xa48);
    iVar3 = unaff_EBP + -0x1f0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_2b0 = 0x7e85ae;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x34);
    uStack_2ac = 0x7e85bd;
    puStack_2a8 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_2a8 < 0) && (puStack_2a8 != (undefined4 *)0x80004002)) {
      uStack_2ac = 0x7e85ce;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x1f0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_2ac = 0x7e85de;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e85e9;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x110);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_2ac = 0x7e85f9;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e8604;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_2a8 = (undefined4 *)(unaff_EBP + -0x180);
    uStack_2ac = 0x7e8614;
    puStack_2a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a8 < 0) {
      uStack_2ac = 0x7e861f;
      FUN_00878dfb();
    }
    puStack_2a8 = (undefined4 *)0x3;
    uStack_2ac = 0xff;
    iStack_2b0 = 0x7e8631;
    FUN_004031b7();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar3 == 0) {
      puStack_2a8 = (undefined4 *)0x80004003;
      uStack_2ac = 0x7e8649;
      FUN_00878dfb();
    }
    piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
    uStack_2b8 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_2b4 = *(undefined4 *)(unaff_EBP + -0x130);
    iStack_2b0 = *(int *)(unaff_EBP + -300);
    uStack_2ac = *(undefined4 *)(unaff_EBP + -0x128);
    puStack_2a8 = *(undefined4 **)(unaff_EBP + -0x124);
    iVar3 = (**(code **)(*piVar2 + 0x80))
                      (piVar2,0,*(int *)(*(int *)(unaff_EBP + -0x14) + 0x94) + -0x4e);
    if (iVar3 < 0) {
      iStack_250 = 0x7e8686;
      iStack_24c = iVar3;
      piStack_248 = piVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  piStack_248 = (int *)0x7e8c10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_248 = (int *)0x7e8c1b;
    FUN_00878dfb();
  }
LAB_007e8c1b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_248 = (int *)0x7e8c2c;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


