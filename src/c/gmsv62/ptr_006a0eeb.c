/* ptr_006a0eeb - 0x006a0eeb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a0eeb(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uVar4;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_8 = 0x6a0ef5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a0f00;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_8 = 0x6a0f0d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a0f18;
    FUN_00878dfb();
  }
  if ((*(char **)(unaff_ESI + 0x94) != (char *)0x0) && (**(char **)(unaff_ESI + 0x94) != '\0')) {
    iStack_8 = 0x6a0f41;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_8 = unaff_EBP + -0x48;
    uStack_c = 0x6a0f4b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a0f57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_8 = 0x6a0f61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_8 = unaff_EBP + -0x38;
    uStack_c = 0x6a0f6b;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a0f77;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x38;
    iStack_10 = unaff_EBP + -0x24;
    uStack_c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    uStack_c = 0x6a0f9b;
    uStack_c = FUN_00449749();
    iStack_10 = 0xf07;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_10 = 0x6a0fba;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x6e;
    uVar3 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_004115d9(0x34,0x6e);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_8 = 0x6a0ffa;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_8 = 0x6a1007;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1012;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_8 = 0x6a101f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a102a;
      FUN_00878dfb();
    }
    iStack_8 = 0x6a1030;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_8 = unaff_EBP + -0x38;
    uStack_c = 0x6a103a;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1046;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_8 = 0x6a1050;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_8 = unaff_EBP + -0x48;
    uStack_c = 0x6a105a;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1066;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x48;
    iStack_10 = unaff_EBP + -0x28;
    uStack_c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_c = 0x6a108a;
    uStack_c = FUN_00449749();
    iStack_10 = 0x6a1092;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x6e;
    uVar3 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_004115d9(0x5c,0x6e);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_8 = 0x6a10c6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_8 = 0x6a10d3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a10de;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_8 = 0x6a10eb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a10f6;
      FUN_00878dfb();
    }
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_8 = 0x6a1117;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_8 = unaff_EBP + -0x38;
    uStack_c = 0x6a1121;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a112d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_8 = 0x6a1137;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_8 = unaff_EBP + -0x48;
    uStack_c = 0x6a1141;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a114d;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x48;
    iStack_10 = unaff_EBP + -0x24;
    uStack_c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_c = 0x6a1171;
    uStack_c = FUN_00449749();
    iStack_10 = 0xf08;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_10 = 0x6a1190;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x82;
    uVar3 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_004115d9(0x34,0x82);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_8 = 0x6a11d4;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_8 = 0x6a11e1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a11ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_8 = 0x6a11f9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1204;
      FUN_00878dfb();
    }
    iStack_8 = 0x6a120a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_8 = unaff_EBP + -0x38;
    uStack_c = 0x6a1214;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1220;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_8 = 0x6a122a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_8 = unaff_EBP + -0x48;
    uStack_c = 0x6a1234;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1240;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x48;
    iStack_10 = unaff_EBP + -0x28;
    uStack_c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    uStack_c = 0x6a1264;
    uStack_c = FUN_00449749();
    iStack_10 = 0x6a1273;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x82;
    uVar3 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9(0x5c,0x82);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_8 = 0x6a12a6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_8 = 0x6a12b3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a12be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_8 = 0x6a12cb;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a12d6;
      FUN_00878dfb();
    }
  }
  iStack_8 = 0x6a12dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_8 = unaff_EBP + -0x38;
  uStack_c = 0x6a12e6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_8 = 0x6a12f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_8 = 0x6a12fc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_8 = unaff_EBP + -0x48;
  uStack_c = 0x6a1306;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_8 = 0x6a1312;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x48;
  iStack_10 = unaff_EBP + -0x24;
  uStack_c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  uStack_c = 0x6a1336;
  uStack_c = FUN_00449749();
  iStack_10 = 0xf09;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_10 = 0x6a1357;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_10;
  FUN_00448a17(uVar3);
  uVar4 = 0x9d;
  uVar3 = 0x2d;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9(0x2d,0x9d);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_8 = 0x6a139a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_8 = 0x6a13a7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a13b2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_8 = 0x6a13bf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a13ca;
    FUN_00878dfb();
  }
  iStack_8 = 0x6a13d0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_8 = unaff_EBP + -0x38;
  uStack_c = 0x6a13da;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_8 = 0x6a13e6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_8 = 0x6a13f0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_8 = unaff_EBP + -0x48;
  uStack_c = 0x6a13fa;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_8 = 0x6a1406;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x48;
  iStack_10 = unaff_EBP + -0x24;
  uStack_c = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  uStack_c = 0x6a142a;
  uStack_c = FUN_00449749();
  iStack_10 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_10 = 0x6a1446;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_10;
  FUN_00448a17(uVar3);
  uVar4 = 0xca;
  uVar3 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_004115d9(0x26,0xca);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_8 = 0x6a1489;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_8 = 0x6a1496;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a14a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_8 = 0x6a14ae;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a14b9;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    iStack_8 = 0x6a14cf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_8 = unaff_EBP + -0x38;
    uStack_c = 0x6a14d9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a14e5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_8 = 0x6a14ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_8 = unaff_EBP + -0x48;
    uStack_c = 0x6a14f9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_8 = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_8 = unaff_EBP + -0x48;
    iStack_10 = unaff_EBP + -0x24;
    uStack_c = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    uStack_c = 0x6a1529;
    uStack_c = FUN_00449749();
    iStack_10 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_10 = 0x6a1545;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_10;
    FUN_00448a17(uVar3);
    uVar4 = 0x9e;
    uVar3 = 0x77;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x77,0x9e);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_8 = 0x6a1588;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_8 = 0x6a1595;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a15a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_8 = 0x6a15ad;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_8 = 0x6a15b8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_8 = 0x6a15c9;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_8 = 0x6a15e6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


