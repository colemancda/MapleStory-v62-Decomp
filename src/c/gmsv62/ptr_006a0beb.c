/* ptr_006a0beb - 0x006a0beb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a0beb(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  undefined4 uVar8;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  if (in_EAX < 0) {
    iStack_4 = 0x6a0bf8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_4 = 0x6a0c05;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4 = 0x6a0c10;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_4 = 0x6a0c1d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4 = 0x6a0c28;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_4 = 0x6a0c35;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_4 = 0x6a0c40;
    FUN_00878dfb();
  }
  iStack_4 = unaff_EBP + -0x28;
  iStack_8 = 0x6a0c53;
  piVar3 = (int *)FUN_00679e4e();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar2 == 0) {
    iStack_4 = 0;
  }
  else {
    iStack_4 = FUN_00409205();
  }
  iStack_8 = unaff_EBP + -0x10;
  uStack_c = 0x6a0c8a;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  iStack_4 = 0xff;
  iStack_8 = 0x6a0ca8;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_4 = 0x6a0cb5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_4 = 0x6a0cc2;
  FUN_00403191();
  iStack_4 = 0;
  iStack_8 = 0xffffffff;
  uStack_c = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_10 = 0;
  uStack_14 = 0;
  iStack_18 = 0x6a0cd5;
  (*DAT_0097b4c8)();
  iStack_18 = 0x6a0ce2;
  FUN_0087a1b0();
  iStack_18 = 0;
  uStack_1c = 0;
  iStack_20 = unaff_EBP + -0x48;
  iStack_24 = unaff_EBP + -0x58;
  uStack_28 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_28;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_20 = 0x6a0d32;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_18 = unaff_EBP + -0x28;
    uStack_1c = 0x6a0d48;
    iStack_18 = FUN_0041a581();
    if ((iStack_18 < 0) && (iStack_18 != -0x7fffbffe)) {
      uStack_1c = 0x6a0d59;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar3 == (int *)0x0) {
    iStack_18 = 0x80004003;
    uStack_1c = 0x6a0d74;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_24 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_1c = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iStack_18 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_3c = *(int *)(unaff_EBP + -0x20);
    iStack_44 = 0x6a0dab;
    iStack_40 = iVar2;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_3c = 0x6a0dc0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0dcb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_3c = 0x6a0dd8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0de3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_3c = 0x6a0df0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0dfb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x6a0e08;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0e13;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x1c;
  iStack_40 = 0x6a0e1e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_3c = 0x6a0e2d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_3c = 0x6a0e45;
  iStack_40 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_3c;
  iStack_44 = 0x6a0e51;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_40 = 0x6a0e5d;
  FUN_0044974c();
  iStack_40 = 0x6a0e64;
  iVar2 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_3c = 0x6a0e73;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_3c = 0x6a0e7e;
    FUN_00878dfb();
  }
  iStack_3c = 0x6a0e87;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_3c = 0x6a0e94;
  FUN_00403191();
  iStack_3c = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_40 = 0x6a0ea8;
  iStack_40 = FUN_00449749();
  iStack_44 = 0x6a0eb0;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_44;
  FUN_00448a17(uVar5);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  uVar5 = 0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0x50);
  iVar6 = FUN_0040e48b();
  uVar7 = (uint)(iVar6 - iVar2) >> 1;
  FUN_004115d9(uVar7);
  FUN_00448e3a(uVar7,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_3c = 0x6a0ef5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0f00;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_3c = 0x6a0f0d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a0f18;
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(iVar4 + 0x94);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_3c = 0x6a0f41;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_3c = unaff_EBP + -0x48;
    iStack_40 = 0x6a0f4b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a0f57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_3c = 0x6a0f61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_3c = unaff_EBP + -0x38;
    iStack_40 = 0x6a0f6b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a0f77;
      FUN_00878dfb();
    }
    iStack_3c = unaff_EBP + -0x38;
    iStack_44 = unaff_EBP + -0x24;
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_40 = 0x6a0f9b;
    iStack_40 = FUN_00449749();
    iStack_44 = 0xf07;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_44 = 0x6a0fba;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_44;
    FUN_00448a17(uVar5);
    uVar8 = 0x6e;
    uVar5 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_004115d9(0x34,0x6e);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_3c = 0x6a0ffa;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_3c = 0x6a1007;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1012;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_3c = 0x6a101f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a102a;
      FUN_00878dfb();
    }
    iStack_3c = 0x6a1030;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_3c = unaff_EBP + -0x38;
    iStack_40 = 0x6a103a;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1046;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_3c = 0x6a1050;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_3c = unaff_EBP + -0x48;
    iStack_40 = 0x6a105a;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1066;
      FUN_00878dfb();
    }
    iStack_3c = unaff_EBP + -0x48;
    iStack_44 = unaff_EBP + -0x28;
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_40 = 0x6a108a;
    iStack_40 = FUN_00449749();
    iStack_44 = 0x6a1092;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_44;
    FUN_00448a17(uVar5);
    uVar8 = 0x6e;
    uVar5 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_004115d9(0x5c,0x6e);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_3c = 0x6a10c6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_3c = 0x6a10d3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a10de;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_3c = 0x6a10eb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a10f6;
      FUN_00878dfb();
    }
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_3c = 0x6a1117;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_3c = unaff_EBP + -0x38;
    iStack_40 = 0x6a1121;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a112d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_3c = 0x6a1137;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_3c = unaff_EBP + -0x48;
    iStack_40 = 0x6a1141;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a114d;
      FUN_00878dfb();
    }
    iStack_3c = unaff_EBP + -0x48;
    iStack_44 = unaff_EBP + -0x24;
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_40 = 0x6a1171;
    iStack_40 = FUN_00449749();
    iStack_44 = 0xf08;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_44 = 0x6a1190;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_44;
    FUN_00448a17(uVar5);
    uVar8 = 0x82;
    uVar5 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_004115d9(0x34,0x82);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_3c = 0x6a11d4;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_3c = 0x6a11e1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a11ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_3c = 0x6a11f9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1204;
      FUN_00878dfb();
    }
    iStack_3c = 0x6a120a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_3c = unaff_EBP + -0x38;
    iStack_40 = 0x6a1214;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1220;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_3c = 0x6a122a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_3c = unaff_EBP + -0x48;
    iStack_40 = 0x6a1234;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1240;
      FUN_00878dfb();
    }
    iStack_3c = unaff_EBP + -0x48;
    iStack_44 = unaff_EBP + -0x28;
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_40 = 0x6a1264;
    iStack_40 = FUN_00449749();
    iStack_44 = 0x6a1273;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_44;
    FUN_00448a17(uVar5);
    uVar8 = 0x82;
    uVar5 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9(0x5c,0x82);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_3c = 0x6a12a6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_3c = 0x6a12b3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a12be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_3c = 0x6a12cb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a12d6;
      FUN_00878dfb();
    }
  }
  iStack_3c = 0x6a12dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_3c = unaff_EBP + -0x38;
  iStack_40 = 0x6a12e6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a12f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_3c = 0x6a12fc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_3c = unaff_EBP + -0x48;
  iStack_40 = 0x6a1306;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a1312;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x48;
  iStack_44 = unaff_EBP + -0x24;
  iStack_40 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_40 = 0x6a1336;
  iStack_40 = FUN_00449749();
  iStack_44 = 0xf09;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_44 = 0x6a1357;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_44;
  FUN_00448a17(uVar5);
  uVar8 = 0x9d;
  uVar5 = 0x2d;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9(0x2d,0x9d);
  FUN_00448e3a(uVar5,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_3c = 0x6a139a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_3c = 0x6a13a7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a13b2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_3c = 0x6a13bf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a13ca;
    FUN_00878dfb();
  }
  iStack_3c = 0x6a13d0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_3c = unaff_EBP + -0x38;
  iStack_40 = 0x6a13da;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a13e6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_3c = 0x6a13f0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_3c = unaff_EBP + -0x48;
  iStack_40 = 0x6a13fa;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a1406;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x48;
  iStack_44 = unaff_EBP + -0x24;
  iStack_40 = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  iStack_40 = 0x6a142a;
  iStack_40 = FUN_00449749();
  iStack_44 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_44 = 0x6a1446;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_44;
  FUN_00448a17(uVar5);
  uVar8 = 0xca;
  uVar5 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_004115d9(0x26,0xca);
  FUN_00448e3a(uVar5,uVar8);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_3c = 0x6a1489;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_3c = 0x6a1496;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a14a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_3c = 0x6a14ae;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a14b9;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    iStack_3c = 0x6a14cf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_3c = unaff_EBP + -0x38;
    iStack_40 = 0x6a14d9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a14e5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_3c = 0x6a14ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_3c = unaff_EBP + -0x48;
    iStack_40 = 0x6a14f9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_3c = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_3c = unaff_EBP + -0x48;
    iStack_44 = unaff_EBP + -0x24;
    iStack_40 = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iStack_40 = 0x6a1529;
    iStack_40 = FUN_00449749();
    iStack_44 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_44 = 0x6a1545;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_44;
    FUN_00448a17(uVar5);
    uVar8 = 0x9e;
    uVar5 = 0x77;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x77,0x9e);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_3c = 0x6a1588;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_3c = 0x6a1595;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a15a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_3c = 0x6a15ad;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_3c = 0x6a15b8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_3c = 0x6a15c9;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_3c = 0x6a15e6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


