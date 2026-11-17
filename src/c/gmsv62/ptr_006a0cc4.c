/* ptr_006a0cc4 - 0x006a0cc4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a0cc4(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uVar8;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_1c = unaff_EBP + -0x48;
  iStack_20 = unaff_EBP + -0x58;
  uStack_24 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_24;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_1c = 0x6a0d32;
  piVar2 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x28) = piVar2;
  *(int **)(unaff_EBP + -0x18) = unaff_ESI;
  if (piVar2 != unaff_ESI) {
    iVar3 = FUN_0041a581();
    if ((iVar3 < (int)unaff_ESI) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar2 == unaff_ESI) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar2;
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_1c = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x20) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_38 = *(int *)(unaff_EBP + -0x20);
    iStack_40 = 0x6a0dab;
    iStack_3c = iVar3;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_38 = 0x6a0dc0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0dcb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_38 = 0x6a0dd8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0de3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_38 = 0x6a0df0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0dfb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x6a0e08;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0e13;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x1c;
  iStack_3c = 0x6a0e1e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_38 = 0x6a0e2d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_38 = 0x6a0e45;
  iStack_3c = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_38;
  iStack_40 = 0x6a0e51;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_3c = 0x6a0e5d;
  FUN_0044974c();
  iStack_3c = 0x6a0e64;
  iVar3 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_38 = 0x6a0e73;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_38 = 0x6a0e7e;
    FUN_00878dfb();
  }
  iStack_38 = 0x6a0e87;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_38 = 0x6a0e94;
  FUN_00403191();
  iStack_38 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_3c = 0x6a0ea8;
  iStack_3c = FUN_00449749();
  iStack_40 = 0x6a0eb0;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_40;
  FUN_00448a17(uVar5);
  iVar4 = *(int *)(unaff_EBP + -0x14);
  uVar5 = 0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0x50);
  iVar6 = FUN_0040e48b();
  uVar7 = (uint)(iVar6 - iVar3) >> 1;
  FUN_004115d9(uVar7);
  FUN_00448e3a(uVar7,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_38 = 0x6a0ef5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0f00;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_38 = 0x6a0f0d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a0f18;
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(iVar4 + 0x94);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_38 = 0x6a0f41;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_38 = unaff_EBP + -0x48;
    iStack_3c = 0x6a0f4b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a0f57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_38 = 0x6a0f61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_38 = unaff_EBP + -0x38;
    iStack_3c = 0x6a0f6b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a0f77;
      FUN_00878dfb();
    }
    iStack_38 = unaff_EBP + -0x38;
    iStack_40 = unaff_EBP + -0x24;
    iStack_3c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_3c = 0x6a0f9b;
    iStack_3c = FUN_00449749();
    iStack_40 = 0xf07;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_40 = 0x6a0fba;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_40;
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
      iStack_38 = 0x6a0ffa;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_38 = 0x6a1007;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1012;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6a101f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a102a;
      FUN_00878dfb();
    }
    iStack_38 = 0x6a1030;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_38 = unaff_EBP + -0x38;
    iStack_3c = 0x6a103a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1046;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_38 = 0x6a1050;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_38 = unaff_EBP + -0x48;
    iStack_3c = 0x6a105a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1066;
      FUN_00878dfb();
    }
    iStack_38 = unaff_EBP + -0x48;
    iStack_40 = unaff_EBP + -0x28;
    iStack_3c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_3c = 0x6a108a;
    iStack_3c = FUN_00449749();
    iStack_40 = 0x6a1092;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_40;
    FUN_00448a17(uVar5);
    uVar8 = 0x6e;
    uVar5 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_004115d9(0x5c,0x6e);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_38 = 0x6a10c6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_38 = 0x6a10d3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a10de;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6a10eb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a10f6;
      FUN_00878dfb();
    }
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_38 = 0x6a1117;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_38 = unaff_EBP + -0x38;
    iStack_3c = 0x6a1121;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a112d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_38 = 0x6a1137;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_38 = unaff_EBP + -0x48;
    iStack_3c = 0x6a1141;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a114d;
      FUN_00878dfb();
    }
    iStack_38 = unaff_EBP + -0x48;
    iStack_40 = unaff_EBP + -0x24;
    iStack_3c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_3c = 0x6a1171;
    iStack_3c = FUN_00449749();
    iStack_40 = 0xf08;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_40 = 0x6a1190;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_40;
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
      iStack_38 = 0x6a11d4;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_38 = 0x6a11e1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a11ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6a11f9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1204;
      FUN_00878dfb();
    }
    iStack_38 = 0x6a120a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_38 = unaff_EBP + -0x38;
    iStack_3c = 0x6a1214;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1220;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_38 = 0x6a122a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_38 = unaff_EBP + -0x48;
    iStack_3c = 0x6a1234;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1240;
      FUN_00878dfb();
    }
    iStack_38 = unaff_EBP + -0x48;
    iStack_40 = unaff_EBP + -0x28;
    iStack_3c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_3c = 0x6a1264;
    iStack_3c = FUN_00449749();
    iStack_40 = 0x6a1273;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_40;
    FUN_00448a17(uVar5);
    uVar8 = 0x82;
    uVar5 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9(0x5c,0x82);
    FUN_00448e3a(uVar5,uVar8);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_38 = 0x6a12a6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_38 = 0x6a12b3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a12be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6a12cb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a12d6;
      FUN_00878dfb();
    }
  }
  iStack_38 = 0x6a12dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_38 = unaff_EBP + -0x38;
  iStack_3c = 0x6a12e6;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6a12f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_38 = 0x6a12fc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_38 = unaff_EBP + -0x48;
  iStack_3c = 0x6a1306;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6a1312;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x48;
  iStack_40 = unaff_EBP + -0x24;
  iStack_3c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_3c = 0x6a1336;
  iStack_3c = FUN_00449749();
  iStack_40 = 0xf09;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_40 = 0x6a1357;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_40;
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
    iStack_38 = 0x6a139a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_38 = 0x6a13a7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a13b2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_38 = 0x6a13bf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a13ca;
    FUN_00878dfb();
  }
  iStack_38 = 0x6a13d0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_38 = unaff_EBP + -0x38;
  iStack_3c = 0x6a13da;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6a13e6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_38 = 0x6a13f0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_38 = unaff_EBP + -0x48;
  iStack_3c = 0x6a13fa;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x6a1406;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x48;
  iStack_40 = unaff_EBP + -0x24;
  iStack_3c = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  iStack_3c = 0x6a142a;
  iStack_3c = FUN_00449749();
  iStack_40 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_40 = 0x6a1446;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_40;
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
    iStack_38 = 0x6a1489;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_38 = 0x6a1496;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a14a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_38 = 0x6a14ae;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x6a14b9;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    iStack_38 = 0x6a14cf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_38 = unaff_EBP + -0x38;
    iStack_3c = 0x6a14d9;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a14e5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_38 = 0x6a14ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_38 = unaff_EBP + -0x48;
    iStack_3c = 0x6a14f9;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_38 = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_38 = unaff_EBP + -0x48;
    iStack_40 = unaff_EBP + -0x24;
    iStack_3c = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iStack_3c = 0x6a1529;
    iStack_3c = FUN_00449749();
    iStack_40 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_40 = 0x6a1545;
    uVar5 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_40;
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
      iStack_38 = 0x6a1588;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_38 = 0x6a1595;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a15a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x6a15ad;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_38 = 0x6a15b8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_38 = 0x6a15c9;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_38 = 0x6a15e6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


