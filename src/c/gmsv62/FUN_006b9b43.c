/* FUN_006b9b43 - 0x006b9b43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b9b43(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 *puStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 *puVar3;
  undefined4 local_64;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = &local_64;
  local_64 = 0;
  FUN_004184ca();
  FUN_0078a024();
  local_64 = 0x6b9b7c;
  FUN_006ba244();
  local_64 = 0x74;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    local_64 = 0;
  }
  else {
    local_64 = 0x6b9b9b;
    local_64 = FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9();
  local_64 = 0;
  (**(code **)(**(int **)(extraout_ECX + 0x630) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x630) + 0x34) = 300;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_004ae046();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00495c26();
  (**(code **)(**(int **)(extraout_ECX + 0x640) + 0x20))();
  FUN_004ae221();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x600) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x600) + 4) + 0x24))();
  iStack_bc = 0x6b9cf9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x6b9d06;
  FUN_00403191();
  iStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x40;
  iStack_c4 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&puStack_c8,0xe44);
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_c0 = 0x6b9d50;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_bc = 0x6b9d62;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_bc = 0x6b9d73;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_bc = 0x6b9d80;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9d8b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x6b9d98;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9da3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_bc = 0x6b9db0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9dbb;
    FUN_00878dfb();
  }
  iStack_bc = 0x6b9dc5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_bc = unaff_EBP + -0x50;
  iStack_c0 = 0x6b9dcf;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9ddb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_bc = 0x6b9de9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_bc = unaff_EBP + -0x40;
  puStack_c8 = &DAT_00980690;
  iStack_c0 = 0x6b9df3;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9dff;
    FUN_00878dfb();
    puStack_c8 = extraout_ECX_00;
  }
  iStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x50;
  iStack_c4 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e(&puStack_c8,0xe45);
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_c0 = 0x6b9e49;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_bc = 0x6b9e5b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_bc = 0x6b9e6c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_bc = 0x6b9e79;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9e84;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_bc = 0x6b9e91;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9e9c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_bc = 0x6b9ea9;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9eb4;
    FUN_00878dfb();
  }
  iStack_bc = 0x6b9ebe;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_bc = unaff_EBP + -0x40;
  iStack_c0 = 0x6b9ec8;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9ed4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_bc = 0x6b9ee2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_bc = unaff_EBP + -0x50;
  puVar3 = &DAT_00980690;
  iStack_c0 = 0x6b9eec;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9ef8;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x40;
  iStack_c4 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_c8 = puVar3;
  FUN_00679e4e(&puStack_c8,0xe46);
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_c0 = 0x6b9f42;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_bc = 0x6b9f54;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_bc = 0x6b9f65;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_bc = 0x6b9f72;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9f7d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_bc = 0x6b9f8a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9f95;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_bc = 0x6b9fa2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6b9fad;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x654;
  do {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_bc = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_c0 = 0x6b9fd3;
    puVar3 = (undefined4 *)FUN_00679d22();
    iStack_bc = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_c0 = unaff_EBP + -0x10;
    iStack_c4 = 0x6b9fe6;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00414ebb();
    iStack_bc = 0x6b9fff;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_bc = unaff_EBP + -0x40;
    iStack_c0 = 0x6ba009;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_bc = 0x6ba015;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_bc = 0x6ba023;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    iStack_bc = unaff_EBP + -0x50;
    iStack_c0 = 0x6ba02d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_bc = 0x6ba039;
      FUN_00878dfb();
    }
    iStack_bc = 0;
    iStack_c0 = unaff_EBP + -0x40;
    iStack_c4 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_c8 = (undefined4 *)0x6ba04f;
    uVar2 = FUN_00449713();
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c8;
    puStack_c8 = extraout_ECX_02;
    FUN_00448a17(uVar2);
    iVar1 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_c0 = 0x6ba081;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    iStack_bc = 0x6ba090;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_bc = 0x6ba0a1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_bc = 0x6ba0ae;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_bc = 0x6ba0b9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_bc = 0x6ba0c6;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_bc = 0x6ba0d1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_bc = 0x6ba0de;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_bc = 0x6ba0e9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + 8) < 7);
  iStack_bc = 0x6ba110;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_bc = unaff_EBP + -0x40;
  iStack_c0 = 0x6ba11a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6ba126;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_bc = 0x6ba134;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_bc = unaff_EBP + -0x50;
  puStack_c8 = &DAT_00980690;
  iStack_c0 = 0x6ba13e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_bc = 0x6ba14a;
    FUN_00878dfb();
    puStack_c8 = extraout_ECX_03;
  }
  iStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x40;
  iStack_c4 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679e4e(&puStack_c8,0xe47);
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_c0 = 0x6ba194;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_bc = 0x6ba1a6;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_bc = 0x6ba1b7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_bc = 0x6ba1c4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6ba1cf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_bc = 0x6ba1dc;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6ba1e7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_bc = 0x6ba1f4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_bc = 0x6ba1ff;
    FUN_00878dfb();
  }
  FUN_006bd2ae();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


