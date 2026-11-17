/* ptr_005b38e8 - 0x005b38e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005b38e8(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int unaff_EBP;
  int unaff_ESI;
  bool bVar9;
  undefined4 uVar10;
  int iStack_130;
  int iStack_12c;
  int *piStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int *piStack_f8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  FUN_005b1a45();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int *)(unaff_EBP + -0x10) != unaff_ESI) {
    FUN_00434e38();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffe0;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_0044974c();
  iVar4 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x30) = iVar4 + 5;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  if (0x49 < *(int *)(unaff_EBP + -0x30)) {
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffe0;
    FUN_0046fcc9();
    FUN_007d3a22();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    FUN_00449713();
    FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffe0;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_0044974c();
    iVar4 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x30) = iVar4 + 5;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iVar4 = FUN_00402bc3();
    if (iVar4 < unaff_ESI) {
      FUN_00878dfb();
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x208) == unaff_ESI) {
    FUN_00878dfb();
  }
  FUN_004a2734();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  FUN_00449749();
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffc0;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  FUN_007d3546();
  FUN_007d3546();
  FUN_007d3546();
  FUN_007d3546();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffa0;
  uStack_6c = 0x5b3c0b;
  uStack_6c = FUN_00449749();
  uStack_70 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_70;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff84;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_0044974c();
  FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_00403191();
  uStack_6c = 0xffffffff;
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff88;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff70;
  uStack_9c = 0x5b3d4c;
  uStack_9c = FUN_00449749();
  uStack_a0 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_a0;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff54;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_0044974c();
  FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  uStack_9c = 0x5b3e28;
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  uStack_9c = 0x5b3e4c;
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  uStack_9c = 0xffffffff;
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff40;
  uStack_cc = 0x5b3ed8;
  uStack_cc = FUN_00449749();
  uStack_d0 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_d0;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff24;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_0044974c();
  FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
  uStack_cc = 0x5b3fc0;
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  uStack_cc = 0x5b3fe4;
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  uStack_cc = 0xffffffff;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff28;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar4 = FUN_00402e32();
  if (iVar4 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff10;
  piStack_f8 = (int *)(unaff_EBP + -0x7c);
  iStack_fc = 0x5b406d;
  iStack_fc = FUN_00449749();
  uStack_100 = 0xffffffff;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_108 = 0x5b407a;
  iStack_108 = FUN_00449713();
  uStack_104 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_100;
  iStack_108 = 0x5b408d;
  FUN_004033a1();
  uStack_104 = 0xd7;
  iStack_108 = unaff_EBP + -0x40;
  iStack_110 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_114 = 0x5b40a6;
  iStack_114 = FUN_00449713();
  uStack_118 = 0x5b40ac;
  iStack_110 = FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffef4;
  iStack_114 = 0x5b40b9;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_110 = 0x5b40cb;
  FUN_0044974c();
  iStack_110 = 0x5b40d2;
  iStack_108 = FUN_00448ebb();
  iStack_108 = 0x227 - iStack_108;
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  piStack_f8 = (int *)0x5b40fa;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    piStack_f8 = (int *)0x5b4105;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  piStack_f8 = (int *)0x5b4112;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    piStack_f8 = (int *)0x5b411d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_f8 = (int *)0x5b412d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < unaff_ESI) {
    piStack_f8 = (int *)0x5b4138;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x708) == 1) {
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    piStack_f8 = (int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    iStack_fc = 0x5b4168;
    puVar5 = (undefined4 *)FUN_00679d22();
    piStack_f8 = (int *)*puVar5;
    iStack_fc = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    uStack_100 = 0x5b417b;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_00414ebb();
    piStack_f8 = (int *)(unaff_EBP + -0x10);
    iStack_fc = 0x5b4199;
    puVar5 = (undefined4 *)FUN_00679d22();
    piStack_f8 = (int *)*puVar5;
    iStack_fc = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    uStack_100 = 0x5b41ac;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_f8 = (int *)0x5b41cc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    piStack_f8 = (int *)(unaff_EBP + -0x7c);
    iStack_fc = 0x5b41d6;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_f8 = (int *)0x5b41e2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    piStack_f8 = (int *)0x5b41f0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    piStack_f8 = (int *)(unaff_EBP + -0x40);
    iStack_fc = 0x5b41fa;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_f8 = (int *)0x5b4206;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x14);
    iVar6 = *(int *)(iVar4 + 0x700);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    if (iVar6 == 0) {
      puVar5 = (undefined4 *)(unaff_EBP + -0x30);
      if (*(int *)(iVar4 + 0xc0) != 0) {
        puVar5 = (undefined4 *)(unaff_EBP + -0x6c);
      }
    }
    else {
      puVar5 = (undefined4 *)(unaff_EBP + -0x6c);
      if (*(int *)(iVar4 + 0xc0) != 0) {
        puVar5 = (undefined4 *)(unaff_EBP + -0x30);
      }
    }
    uStack_100 = *puVar5;
    piStack_f8 = (int *)0x0;
    iStack_fc = -1;
    uStack_104 = 0;
    iStack_108 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iVar6 = *(int *)(iVar4 + 0x700);
    *(int **)(unaff_EBP + -0x18) = &iStack_108;
    if (iVar6 == 0) {
      iVar6 = unaff_EBP + -0x30;
      if (*(int *)(iVar4 + 0xc0) != 0) {
        iVar6 = unaff_EBP + -0x6c;
      }
    }
    else {
      iVar6 = unaff_EBP + -0x6c;
      if (*(int *)(iVar4 + 0xc0) != 0) {
        iVar6 = unaff_EBP + -0x30;
      }
    }
    *(int *)(unaff_EBP + -0x10) = iVar6;
    iStack_110 = unaff_EBP + -0x40;
    iStack_114 = 0x5b428e;
    iStack_114 = FUN_00449749();
    uStack_118 = 0xffffffff;
    uStack_11c = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_120 = 0x5b429c;
    uStack_120 = FUN_00449713();
    uStack_11c = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_118;
    uStack_120 = 0x5b42af;
    FUN_004033a1();
    uStack_11c = 0x194;
    uStack_120 = 0xd;
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_110 = 0x5b42d6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_110 = 0x5b42e1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_110 = 0x5b42ee;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      iStack_110 = 0x5b42f9;
      FUN_00878dfb();
    }
    iStack_110 = unaff_EBP + -0x18;
    iStack_114 = 0x5b430c;
    puVar5 = (undefined4 *)FUN_00679d22();
    iStack_110 = *puVar5;
    iStack_114 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    uStack_118 = 0x5b4322;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    FUN_00414ebb();
    iStack_110 = 0x5b433b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_110 = unaff_EBP + -0x7c;
    iStack_114 = 0x5b4345;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      iStack_110 = 0x5b4351;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    iStack_110 = 0x5b435f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_110 = unaff_EBP + -0x40;
    iStack_114 = 0x5b4369;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      iStack_110 = 0x5b4375;
      FUN_00878dfb();
    }
    iStack_110 = 0;
    iStack_114 = 0xffffffff;
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    uStack_11c = 0;
    uStack_120 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_120;
    piStack_128 = (int *)(unaff_EBP + -0x40);
    iStack_12c = 0x5b43ab;
    iStack_12c = FUN_00449749();
    iStack_130 = -1;
    uVar7 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
    uVar7 = FUN_00456ad5(uVar7);
    *(int **)(unaff_EBP + -0x18) = &iStack_130;
    FUN_004033a1(uVar7);
    uVar10 = 0x194;
    uVar7 = 0x127;
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    FUN_004115d9(0x127,0x194);
    FUN_00448e3a(uVar7,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    piStack_128 = (int *)0x5b43f6;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_128 = (int *)0x5b4401;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_128 = (int *)0x5b440e;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      piStack_128 = (int *)0x5b4419;
      FUN_00878dfb();
    }
    if (*(int *)(iVar4 + 0x1f8) == 0) {
      piStack_128 = (int *)0x5b4435;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_128 = (int *)(unaff_EBP + -0x40);
      iStack_12c = 0x5b443f;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b444b;
        FUN_00878dfb();
      }
      piStack_128 = (int *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      iStack_12c = 0x5b445b;
      FUN_004031b7();
      bVar9 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      if (bVar9) {
        piStack_128 = (int *)0x5b4472;
        FUN_00878dfb();
      }
      piStack_128 = (int *)(unaff_EBP + -0x2c);
      iStack_12c = 5;
      iStack_130 = 0;
      piVar8 = (int *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0);
      piVar8 = (int *)*piVar8;
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      if (piVar2 != piVar8) {
        *piVar1 = (int)piVar8;
        FUN_00424ed4();
        if (piVar2 != (int *)0x0) {
          piStack_128 = (int *)0x5b44bd;
          (**(code **)(*piVar2 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        piStack_128 = (int *)0x5b44ce;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      piStack_128 = (int *)0x5b44db;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b44e6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_128 = (int *)0x5b44f3;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b44fe;
        FUN_00878dfb();
      }
      piStack_128 = (int *)0x5b450a;
      puVar5 = (undefined4 *)FUN_004489f5();
      piVar8 = (int *)*puVar5;
      *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
      *(int **)(unaff_EBP + -0x38) = piVar8;
      iVar4 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      piStack_128 = (int *)0x5b451f;
      (**(code **)(iVar4 + 4))();
      iVar4 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      if (iVar4 == 0) {
        piStack_128 = (int *)0x80004003;
        iStack_12c = 0x5b4532;
        FUN_00878dfb();
      }
      iStack_130 = *(int *)(unaff_EBP + -0x3c);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      iVar4 = *piVar1;
      iStack_12c = *(int *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x18) = piVar1;
      piStack_128 = *(int **)(unaff_EBP + -0x34);
      iVar4 = (**(code **)(iVar4 + 100))(piVar1,*(undefined4 *)(unaff_EBP + -0x40));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar4 = *(int *)(unaff_EBP + -0x14);
      puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
      piVar1 = (int *)*puVar5;
      *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
      *(int **)(unaff_EBP + -0x38) = piVar1;
      iVar6 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      (**(code **)(iVar6 + 4))(piVar1);
      iVar4 = *(int *)(iVar4 + 0x1f8);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      iVar4 = *piVar1;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      iVar4 = (**(code **)(iVar4 + 0xfc))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1f8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = (int *)*piVar1;
      iVar4 = (**(code **)(*piVar8 + 0xe0))(piVar8,0xffffffff);
      if (iVar4 < 0) {
        iStack_130 = 0x5b4662;
        iStack_12c = iVar4;
        piStack_128 = piVar8;
        FUN_00878e09();
      }
      piStack_128 = (int *)0x5b466e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      piStack_128 = (int *)(unaff_EBP + -0x2c);
      iStack_12c = 0x5b4678;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b4684;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_128 = (int *)0x5b468e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      piStack_128 = (int *)(unaff_EBP + -0x68);
      iStack_12c = 0x5b4698;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b46a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_128 = (int *)0x5b46b1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
      piStack_128 = (int *)(unaff_EBP + -0x8c);
      iStack_12c = 0x5b46be;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b46ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      piStack_128 = (int *)0x5b46d4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
      piStack_128 = (int *)(unaff_EBP + -0x7c);
      iStack_12c = 0x5b46de;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b46ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      piStack_128 = (int *)0x5b46f4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_128 = (int *)(unaff_EBP + -0x40);
      iStack_12c = 0x5b46fe;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b470a;
        FUN_00878dfb();
      }
      piStack_128 = (int *)0x0;
      *(int **)(unaff_EBP + -0x90) = &iStack_12c;
      iStack_130 = 0x62d;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_00679e4e(&iStack_12c);
      iStack_130 = unaff_EBP + -0xb0;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      iStack_12c = 0x5b4756;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        piStack_128 = (int *)0x5b476c;
        iVar4 = FUN_0041a581();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          piStack_128 = (int *)0x5b477d;
          FUN_00878dfb();
        }
      }
      iVar4 = *piVar1;
      uVar7 = *(undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      if (iVar4 == 0) {
        piStack_128 = (int *)0x5b4793;
        FUN_00878dfb();
      }
      piStack_128 = (int *)(unaff_EBP + -0x68);
      iStack_12c = unaff_EBP + -0x8c;
      iStack_130 = unaff_EBP + -0x7c;
      FUN_004250ac(unaff_EBP + -0xa0,uVar7,unaff_EBP + -0x40);
      piStack_128 = (int *)0x5b47c5;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b47d0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_128 = (int *)0x5b47e1;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      piStack_128 = (int *)0x5b47f1;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b47fc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      piStack_128 = (int *)0x5b4809;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b4814;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      piStack_128 = (int *)0x5b4821;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b482c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      piStack_128 = (int *)0x5b483c;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b4847;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      piStack_128 = (int *)0x5b4854;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b485f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_128 = (int *)0x5b486c;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_128 = (int *)0x5b4877;
        FUN_00878dfb();
      }
    }
    piStack_128 = (int *)0x5b4883;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    piStack_128 = (int *)(unaff_EBP + -0x68);
    iStack_12c = 0x5b488d;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_128 = (int *)0x5b4899;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    piStack_128 = (int *)0x5b48a3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    piStack_128 = (int *)(unaff_EBP + -0x2c);
    iStack_12c = 0x5b48ad;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_128 = (int *)0x5b48b9;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x14);
    iVar6 = *(int *)(iVar4 + 0x700);
    iVar3 = *(int *)(iVar4 + 0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 99;
    if (iVar6 == 0) {
      iVar6 = (-(uint)(iVar3 != 0) & 0xffffffaa) + 0x1e8;
    }
    else {
      iVar6 = (-(uint)(iVar3 != 0) & 0x56) + 0x192;
    }
    iVar4 = *(int *)(iVar4 + 0x1f8);
    *(int *)(unaff_EBP + -0x10) = iVar6;
    if (iVar4 == 0) {
      piStack_128 = (int *)0x5b4905;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f8);
    iStack_130 = *(int *)(unaff_EBP + -0x68);
    iStack_12c = *(int *)(unaff_EBP + -100);
    piStack_128 = *(int **)(unaff_EBP + -0x60);
    iVar4 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x10),0x37,
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
    if (iVar4 < 0) {
      uStack_100 = 0x5b4949;
      iStack_fc = iVar4;
      piStack_f8 = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    piStack_f8 = (int *)0x5b4956;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_f8 = (int *)0x5b4961;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    piStack_f8 = (int *)0x5b496e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_f8 = (int *)0x5b4979;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00414ebb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x708) == 2) {
    piStack_f8 = *(int **)(unaff_EBP + 8);
    *(undefined1 **)(unaff_EBP + -0x90) = &stack0xffffff0c;
    if (piStack_f8 != (int *)0x0) {
      iStack_fc = 0x5b4a39;
      (**(code **)(*piStack_f8 + 4))();
    }
    piStack_f8 = (int *)0x5b4a40;
    FUN_005b6478();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_f8 = (int *)0x5b4a99;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


