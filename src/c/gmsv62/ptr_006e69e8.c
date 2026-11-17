/* ptr_006e69e8 - 0x006e69e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006e69e8(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x28) = piVar2;
  *(int **)(unaff_EBP + -0x34) = unaff_ESI;
  if (piVar2 != unaff_ESI) {
    iVar3 = FUN_0041a581();
    if ((iVar3 < (int)unaff_ESI) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_ESI) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar2 == unaff_ESI) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x18);
  }
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_10 = *(int *)(unaff_EBP + -0x10);
    uStack_18 = 0x6e6aed;
    iStack_14 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_10 = 0x6e6afa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6b05;
    FUN_00878dfb();
  }
  if (DAT_00979168 != 0) {
    iStack_10 = 0xff;
    iStack_14 = 0x6e6b21;
    FUN_004031b7();
    iStack_10 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_14 = 0x6e6b3a;
    puVar4 = (undefined4 *)FUN_005e01b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar4;
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piVar2 == (int *)0x0) {
      iStack_10 = 0x6e6b54;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar2;
    uStack_18 = *(undefined4 *)(unaff_EBP + -0x60);
    iStack_14 = *(int *)(unaff_EBP + -0x5c);
    iStack_10 = *(int *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x24) = piVar2;
    iVar3 = (**(code **)(iVar3 + 0x80))(piVar2,0x4d,0x12,*(undefined4 *)(unaff_EBP + -0x10));
    if (iVar3 < 0) {
      iStack_10 = *(int *)(unaff_EBP + -0x24);
      uStack_18 = 0x6e6b88;
      iStack_14 = iVar3;
      FUN_00878e09();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_10 = 0x6e6b9d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_10 = 0x6e6ba8;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_10 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_14 = 0x6e6bbb;
  FUN_007d4a9a();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_10 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_14 = 0x6e6bdd;
  piVar2 = (int *)FUN_00679d22();
  iStack_10 = *piVar2;
  iStack_14 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_18 = 0x6e6bf3;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_10 = 0x6e6c0a;
    FUN_00434e38();
  }
  iStack_10 = 0x6e6c14;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_10 = 0x6e6c24;
  iStack_14 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_10;
  uStack_18 = 0x6e6c30;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_14 = 0x6e6c3c;
  FUN_0044974c();
  iStack_14 = 0x6e6c43;
  uVar5 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6c53;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6c5e;
    FUN_00878dfb();
  }
  iStack_10 = 0x6e6c67;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_10 = 0x6e6c74;
  FUN_00403191();
  iStack_10 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_14 = 0x6e6c88;
  iStack_14 = FUN_00449749();
  uStack_18 = 0x6e6c91;
  uVar5 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_18;
  FUN_00448a17(uVar5);
  iVar3 = 0x8c - *(int *)(unaff_EBP + -0x30);
  uVar5 = 0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9(iVar3,0x54);
  FUN_00448e3a(iVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_10 = 0x6e6cc8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6cd3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6ce0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6ceb;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_10 = unaff_EBP + -0x24;
  iStack_14 = 0x6e6cfd;
  piVar2 = (int *)FUN_00679d22();
  iStack_10 = *piVar2;
  iStack_14 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_18 = 0x6e6d13;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_10 = 0x6e6d2a;
    FUN_00434e38();
  }
  iStack_10 = 0x6e6d34;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_10 = 0x6e6d44;
  iStack_14 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_10;
  uStack_18 = 0x6e6d50;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_14 = 0x6e6d5c;
  FUN_0044974c();
  iStack_14 = 0x6e6d63;
  uVar5 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6d73;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6d7e;
    FUN_00878dfb();
  }
  iStack_10 = 0x6e6d87;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_10 = 0x6e6d94;
  FUN_00403191();
  iStack_10 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_14 = 0x6e6da8;
  iStack_14 = FUN_00449749();
  uStack_18 = 0x6e6db1;
  uVar5 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_18;
  FUN_00448a17(uVar5);
  iVar3 = 0x8c - *(int *)(unaff_EBP + -0x30);
  uVar5 = 0x87;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004115d9(iVar3,0x87);
  FUN_00448e3a(iVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_10 = 0x6e6deb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6df6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6e03;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6e0e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_10 = unaff_EBP + -0x24;
  iStack_14 = 0x6e6e20;
  piVar2 = (int *)FUN_00679d22();
  iStack_10 = *piVar2;
  iStack_14 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_18 = 0x6e6e36;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_10 = 0x6e6e4d;
    FUN_00434e38();
  }
  iStack_10 = 0x6e6e57;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_10 = 0x6e6e67;
  iStack_14 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_10;
  uStack_18 = 0x6e6e73;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_14 = 0x6e6e7f;
  FUN_0044974c();
  iStack_14 = 0x6e6e86;
  uVar5 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6e96;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6ea1;
    FUN_00878dfb();
  }
  iStack_10 = 0x6e6eaa;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_10 = 0x6e6eb7;
  FUN_00403191();
  iStack_10 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_14 = 0x6e6ecb;
  iStack_14 = FUN_00449749();
  uStack_18 = 0x6e6ed4;
  uVar5 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_18;
  FUN_00448a17(uVar5);
  iVar3 = 0x8c - *(int *)(unaff_EBP + -0x30);
  uVar5 = 0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(iVar3,0xa8);
  FUN_00448e3a(iVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_10 = 0x6e6f0e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6f19;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6f26;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6f31;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_10 = unaff_EBP + -0x24;
  iStack_14 = 0x6e6f43;
  piVar2 = (int *)FUN_00679d22();
  iStack_10 = *piVar2;
  iStack_14 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_18 = 0x6e6f59;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    iStack_10 = 0x6e6f70;
    FUN_00434e38();
  }
  iStack_10 = 0x6e6f7a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_10 = 0x6e6f8a;
  iStack_14 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_10;
  uStack_18 = 0x6e6f96;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_14 = 0x6e6fa2;
  FUN_0044974c();
  iStack_14 = 0x6e6fa9;
  iVar6 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e6fb8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e6fc3;
    FUN_00878dfb();
  }
  iStack_10 = 0x6e6fcc;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_10 = 0x6e6fd9;
  FUN_00403191();
  iStack_10 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_14 = 0x6e6fed;
  iStack_14 = FUN_00449749();
  uStack_18 = 0x6e6ff6;
  uVar5 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_18;
  FUN_00448a17(uVar5);
  uVar5 = 0xbb;
  iVar6 = 0x8c - iVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004115d9(iVar6,0xbb);
  FUN_00448e3a(iVar6,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_10 = 0x6e7031;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e703c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_10 = 0x6e7049;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e7054;
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x38) + 0x20);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_10 = 0x6e7074;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_10 = 0x6e7084;
    FUN_006ea9f9();
    iStack_10 = 0x6e708e;
    iStack_14 = FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_10;
    uStack_18 = 0x6e709a;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_14 = 0x6e70a6;
    FUN_0044974c();
    iStack_14 = 0x6e70ad;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_10 = 0x6e70bc;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_10 = 0x6e70c7;
      FUN_00878dfb();
    }
    iStack_10 = 0x6e70d0;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_10 = 0x6e70dd;
    FUN_00403191();
    iStack_10 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_14 = 0x6e70f1;
    iStack_14 = FUN_00449749();
    uStack_18 = 0x6e70fa;
    FUN_006ea9f9();
    uStack_18 = 0x6e7104;
    uVar5 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_18;
    FUN_00448a17(uVar5);
    uVar5 = 0xe1;
    iVar3 = 0x8c - iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_004115d9(iVar3,0xe1);
    FUN_00448e3a(iVar3,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_10 = 0x6e7138;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_10 = 0x6e7143;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_10 = 0x6e7150;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_10 = 0x6e715b;
      FUN_00878dfb();
    }
  }
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iStack_10 = 0x6e7177;
    FUN_00434e38();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_006eabaf();
  iStack_10 = 0x6e7b69;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
  iStack_10 = unaff_EBP + -0x74;
  iStack_14 = 0x6e7b73;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_10 = 0x6e7b7f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x8c) + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  if (iVar3 == 0) {
    iStack_10 = 0x6e7ba2;
    FUN_00878dfb();
  }
  iStack_10 = unaff_EBP + -0x78;
  iStack_14 = 0x6e7bb3;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iStack_10 = 0x6e7bc0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_10 = 0x6e7bcb;
    FUN_00878dfb();
  }
  iStack_10 = 0x6e7bd4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
  iStack_10 = unaff_EBP + -0x88;
  iStack_14 = 0x6e7be1;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_10 = 0x6e7bed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (*(int *)(unaff_EBP + -0x78) == 0) {
    iStack_10 = 0x6e7c01;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x78);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x88);
  iStack_14 = *(undefined4 *)(unaff_EBP + -0x84);
  iStack_10 = *(int *)(unaff_EBP + -0x80);
  iVar3 = (**(code **)(*piVar2 + 0x80))(piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x88);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


