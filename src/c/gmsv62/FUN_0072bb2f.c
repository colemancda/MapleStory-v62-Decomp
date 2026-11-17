/* FUN_0072bb2f - 0x0072bb2f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072bb2f(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_178;
  int iStack_174;
  int iStack_170;
  undefined1 *puStack_16c;
  undefined4 *puVar3;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  
  FUN_00879bb8();
  iStack_120 = 0;
  iStack_124 = 0;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_128;
  FUN_00679e4e();
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iStack_120 = 0xb86;
  iStack_124 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_128 = 0x72bb8a;
  iStack_120 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_124 = 0x72bb97;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_120 = 0x72bba2;
  FUN_00402676();
  iStack_120 = 0x578;
  iStack_124 = 0x72bbb1;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_120 = 0;
  }
  else {
    iStack_120 = 0x72bbc3;
    iStack_120 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_124 = 0x72bbd3;
  FUN_00450382();
  iStack_120 = unaff_EBP + -0x38;
  iStack_124 = 0;
  uStack_128 = 2;
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  do {
    puStack_16c = &LAB_00450362;
    iStack_170 = 0x24;
    iStack_174 = 4;
    puStack_178 = (undefined4 *)(unaff_EBP + -0x11c);
    FUN_0087b2f0();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_16c = (undefined1 *)0x72bd01;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    puStack_16c = (undefined1 *)(unaff_EBP + -0x60);
    iStack_170 = 0x72bd0f;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_16c = (undefined1 *)0x72bd1b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_16c = (undefined1 *)0x72bd29;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    puStack_16c = (undefined1 *)(unaff_EBP + -0x4c);
    puVar3 = &DAT_00980690;
    iStack_170 = 0x72bd37;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_16c = (undefined1 *)0x72bd43;
      FUN_00878dfb();
      puVar3 = extraout_ECX_00;
    }
    puStack_16c = (undefined1 *)0x0;
    iStack_170 = unaff_EBP + -0x60;
    iStack_174 = unaff_EBP + -0x4c;
    *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_178;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_178 = puVar3;
    FUN_00679e4e(&puStack_178,0xb89);
    iVar1 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_170 = 0x72bd8d;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x68) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      puStack_16c = (undefined1 *)0x72bda3;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_16c = (undefined1 *)0x72bdb4;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_16c = (undefined1 *)0x72bdc4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_16c = (undefined1 *)0x72bdcf;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_16c = (undefined1 *)0x72bddc;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_16c = (undefined1 *)0x72bde7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_16c = (undefined1 *)0x72bdf4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_16c = (undefined1 *)0x72bdff;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(int *)(unaff_EBP + -0x24) = extraout_ECX + 0xa8 + *(int *)(unaff_EBP + -0x20) * 4;
    do {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar1 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (iVar1 == 0) {
        puStack_16c = (undefined1 *)(unaff_EBP + -0x28);
        iStack_170 = 0x72bece;
        puVar3 = (undefined4 *)FUN_00679d86();
        puStack_16c = (undefined1 *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iStack_170 = unaff_EBP + -0x18;
        iStack_174 = 0x72bee1;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
LAB_0072beeb:
        FUN_00402676();
      }
      else {
        if (iVar1 == 1) {
          puStack_16c = (undefined1 *)(unaff_EBP + -0x3c);
          iStack_170 = 0x72be9f;
          puVar3 = (undefined4 *)FUN_00679d86();
          puStack_16c = (undefined1 *)*puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_170 = unaff_EBP + -0x18;
          iStack_174 = 0x72beb2;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          goto LAB_0072beeb;
        }
        if (iVar1 == 2) {
          puStack_16c = (undefined1 *)(unaff_EBP + -0x6c);
          iStack_170 = 0x72be70;
          puVar3 = (undefined4 *)FUN_00679d86();
          puStack_16c = (undefined1 *)*puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_170 = unaff_EBP + -0x18;
          iStack_174 = 0x72be83;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          goto LAB_0072beeb;
        }
        if (iVar1 == 3) {
          puStack_16c = (undefined1 *)(unaff_EBP + -0x50);
          iStack_170 = 0x72be3e;
          puVar3 = (undefined4 *)FUN_00679d86();
          puStack_16c = (undefined1 *)*puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          iStack_170 = unaff_EBP + -0x18;
          iStack_174 = 0x72be51;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          goto LAB_0072beeb;
        }
      }
      puStack_16c = (undefined1 *)0x0;
      iStack_170 = 0x72befa;
      iStack_174 = FUN_00411641();
      *(int **)(unaff_EBP + -100) = &iStack_170;
      puStack_178 = (undefined4 *)0x72bf06;
      FUN_004033a1();
      iStack_174 = unaff_EBP + -0x7c;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_178 = (undefined4 *)0x72bf16;
      FUN_0040263d();
      puStack_178 = (undefined4 *)0x72bf1d;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_170 = 0x72bf28;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
      puStack_16c = (undefined1 *)0x72bf37;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_16c = (undefined1 *)0x72bf48;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_16c = (undefined1 *)0x72bf55;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72bf60;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00402676();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x10;
    } while (*(int *)(unaff_EBP + -0x14) < 0x24);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      puStack_16c = (undefined1 *)0x72bf8e;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    puStack_16c = (undefined1 *)0x24;
    iStack_170 = 4;
    iStack_174 = unaff_EBP + -0x11c;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_178 = (undefined4 *)0x72bfa6;
    FUN_0087a0b8();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    if (3 < *(int *)(unaff_EBP + -0x20)) {
      puStack_16c = (undefined1 *)0x72bfbd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      puStack_16c = (undefined1 *)(unaff_EBP + -0x4c);
      iStack_170 = 0x72bfcb;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72bfd7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_16c = (undefined1 *)0x72bfe5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
      puStack_16c = (undefined1 *)(unaff_EBP + -0x60);
      puVar3 = &DAT_00980690;
      iStack_170 = 0x72bff3;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72bfff;
        FUN_00878dfb();
        puVar3 = extraout_ECX_01;
      }
      puStack_16c = (undefined1 *)0x0;
      iStack_170 = unaff_EBP + -0x4c;
      iStack_174 = unaff_EBP + -0x60;
      *(undefined4 ***)(unaff_EBP + -100) = &puStack_178;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_178 = puVar3;
      FUN_00679e4e(&puStack_178,0xb85);
      iVar1 = unaff_EBP + -0x7c;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_170 = 0x72c046;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
      puStack_16c = (undefined1 *)0x72c058;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        puStack_16c = (undefined1 *)0x72c069;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_16c = (undefined1 *)0x72c076;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72c081;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_16c = (undefined1 *)0x72c08e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72c099;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_16c = (undefined1 *)0x72c0a5;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        puStack_16c = (undefined1 *)0x72c0b0;
        FUN_00878dfb();
      }
      FUN_0072c0dd();
      puStack_16c = (undefined1 *)0x72c0c0;
      FUN_0072c10b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


