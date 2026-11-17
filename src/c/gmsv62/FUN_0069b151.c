/* FUN_0069b151 - 0x0069b151 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069b151(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  undefined4 uVar7;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  undefined4 *puStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  int iStack_dc;
  undefined4 *puStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int *piStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int *piStack_94;
  undefined *puStack_90;
  int *piStack_8c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x68);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_8c = (int *)0x69b174;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  piStack_8c = (int *)0x69b182;
  FUN_00403191();
  piStack_8c = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_90 = (undefined *)0x69b191;
  FUN_004031b7();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar6) {
    piStack_8c = (int *)0x69b1a7;
    FUN_00878dfb();
  }
  piStack_8c = (int *)(unaff_EBP + -0x34);
  puStack_90 = (undefined *)0x0;
  piStack_94 = (int *)0x0;
  iStack_98 = 0;
  uStack_9c = 0;
  piStack_a0 = (int *)0x0;
  puStack_a4 = (undefined *)(unaff_EBP + -0x1c);
  uStack_a8 = 0x69b1c3;
  puVar3 = (undefined4 *)FUN_0042a39f();
  piStack_8c = (int *)0x69b1cc;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_8c = (int *)0x69b1e1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_8c = (int *)0x69b1ec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_8c = (int *)0x69b1f9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_8c = (int *)0x69b204;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    piStack_8c = (int *)0x69b212;
    FUN_00878dfb();
  }
  piVar1 = *(int **)this;
  puStack_90 = (undefined *)0x69b21f;
  piStack_8c = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar4 < 0) {
    puStack_90 = &DAT_00963df8;
    uStack_9c = 0x69b22f;
    iStack_98 = iVar4;
    piStack_94 = piVar1;
    FUN_00878e09();
  }
  puStack_90 = (undefined *)(unaff_EBP + -0x20);
  piStack_94 = (int *)0x69b23b;
  puVar3 = (undefined4 *)FUN_004489f5();
  piStack_94 = (int *)*puVar3;
  puStack_90 = (undefined *)0x1;
  iStack_98 = 0x69b248;
  FUN_0040ee87();
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar4 == 0) {
    puStack_90 = (undefined *)0x80004003;
    piStack_94 = (int *)0x69b25b;
    FUN_00878dfb();
  }
  piStack_a0 = *(int **)this;
  iVar4 = *piStack_a0;
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x40);
  piStack_94 = *(int **)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x1c) = piStack_a0;
  puStack_90 = *(undefined **)(unaff_EBP + -0x38);
  puStack_a4 = (undefined *)0x69b272;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    puStack_a4 = &DAT_00963de8;
    uStack_a8 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_b0 = 0x69b284;
    iStack_ac = iVar4;
    FUN_00878e09();
  }
  puStack_a4 = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_a8 = 0x69b291;
  puStack_a4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    uStack_a8 = 0x69b29c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_a4 = (undefined *)0x69b2a8;
  FUN_00412600();
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_a4 = (undefined *)(unaff_EBP + -0x1c);
  uStack_a8 = 0x69b2b6;
  puVar3 = (undefined4 *)FUN_004489f5();
  uStack_a8 = *puVar3;
  puStack_a4 = (undefined *)0x1;
  iStack_ac = 0x69b2c3;
  FUN_0040ee87();
  piStack_b4 = (int *)(iVar4 + 0x68);
  iVar4 = *piStack_b4;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar4 == 0) {
    puStack_a4 = (undefined *)0x80004003;
    uStack_a8 = 0x69b2d9;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)*piStack_b4;
  iVar4 = *piStack_b4;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_ac = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_b4;
  puStack_a4 = *(undefined **)(unaff_EBP + -0x38);
  puStack_b8 = (undefined *)0x69b2f3;
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    puStack_b8 = &DAT_00963df8;
    piStack_bc = *(int **)(unaff_EBP + -0x20);
    piStack_c4 = (int *)0x69b307;
    puStack_c0 = (undefined4 *)iVar4;
    FUN_00878e09();
  }
  puStack_b8 = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_bc = (int *)0x69b314;
  puStack_b8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    piStack_bc = (int *)0x69b31f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_b8 = (undefined *)0x69b32b;
  FUN_00412600();
  iVar4 = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(iVar4 + 0x68) == 0) {
    puStack_b8 = (undefined *)0x80004003;
    piStack_bc = (int *)0x69b340;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(iVar4 + 0x68);
  puStack_b8 = (undefined *)0x1;
  puStack_c0 = (undefined4 *)0x69b34d;
  piStack_bc = piVar1;
  iStack_c8 = (**(code **)(*piVar1 + 0xb4))();
  if (iStack_c8 < 0) {
    puStack_c0 = (undefined4 *)&DAT_00963df8;
    uStack_cc = 0x69b35d;
    piStack_c4 = piVar1;
    FUN_00878e09();
  }
  piStack_c4 = (int *)(unaff_EBP + -0x18);
  puStack_c0 = (undefined4 *)0x3;
  iStack_c8 = 0x69b368;
  FUN_007d4a9a();
  puStack_c0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_c4 = (int *)0x69b377;
  FUN_00403191();
  puStack_c0 = (undefined4 *)0x0;
  piStack_c4 = (int *)0x0;
  iStack_c8 = 0xffffffff;
  uStack_cc = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_d0 = 0;
  uStack_d4 = 0;
  puStack_d8 = (undefined4 *)0x69b38a;
  (*DAT_0097b4c8)();
  puStack_d8 = (undefined4 *)0x69b397;
  FUN_0087a1b0();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_dc = -1;
  uStack_e4 = 0x69b3a8;
  puStack_e0 = (undefined1 *)&uStack_d4;
  uStack_e4 = FUN_00449713();
  uStack_e8 = 0x69b3ae;
  puStack_e0 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x24) = &iStack_dc;
  uStack_e4 = 0x69b3bb;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_e0 = (undefined1 *)0x69b3c7;
  FUN_0044974c();
  puStack_e0 = (undefined1 *)0x69b3ce;
  iVar4 = FUN_00448ebb();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x44);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_dc = 0x69b3e0;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    iStack_dc = 0x69b3eb;
    FUN_00878dfb();
  }
  if (iVar4 < 1) {
    if (DAT_0097bce4 != 0) {
      puStack_d8 = (undefined4 *)0x69b3fe;
      FUN_00815de9();
      if (DAT_0097bce4 != 0) {
        puStack_d8 = (undefined4 *)0x1;
        iStack_dc = 0x69b410;
        (*(code *)**(undefined4 **)(DAT_0097bce4 + 8))();
      }
    }
    puStack_d8 = (undefined4 *)0x69b418;
    FUN_004497b5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      puStack_d8 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
      iStack_dc = 0x69b430;
      FUN_00434e38();
    }
  }
  else {
    *(int *)(unaff_EBP + -0x24) = (iVar4 + 800) * 0xf;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    puStack_d8 = (undefined4 *)0x3af;
    iStack_dc = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_e0 = (undefined1 *)0x69b45c;
    puStack_e0 = (undefined1 *)FUN_00679d86();
    puStack_e0 = *(undefined1 **)puStack_e0;
    puStack_d8 = (undefined4 *)0x0;
    iStack_dc = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_e4 = 0x69b46d;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      puStack_d8 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
      iStack_dc = 0x69b484;
      FUN_00403384();
    }
    puStack_d8 = &DAT_00980690;
    iStack_dc = 0x69b48e;
    FUN_00403191();
    puStack_d8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_dc = 0x69b49b;
    FUN_00403191();
    piStack_100 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piStack_100 == (int *)0x0) {
      puStack_d8 = (undefined4 *)0x80004003;
      iStack_dc = 0x69b4b0;
      FUN_00878dfb();
      piStack_100 = *(int **)(unaff_EBP + -0x14);
    }
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x34);
    puStack_e0 = *(undefined1 **)(unaff_EBP + -0x30);
    iVar4 = *piStack_100;
    iStack_dc = *(int *)(unaff_EBP + -0x2c);
    puStack_d8 = *(undefined4 **)(unaff_EBP + -0x28);
    uStack_f4 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_f8 = 0x17;
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_ec = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x20) = piStack_100;
    uStack_e8 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_104 = (undefined4 *)0x69b4d9;
    iVar4 = (**(code **)(iVar4 + 0x2c))();
    if (iVar4 < 0) {
      puStack_104 = (undefined4 *)&DAT_00963cc8;
      uStack_108 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_110 = 0x69b4ed;
      iStack_10c = iVar4;
      FUN_00878e09();
    }
    puStack_104 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_108 = 0x69b4fa;
    puStack_104 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_104 < 0) {
      uStack_108 = 0x69b505;
      FUN_00878dfb();
    }
    puStack_104 = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_108 = 0x69b512;
    puStack_104 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_104 < 0) {
      uStack_108 = 0x69b51d;
      FUN_00878dfb();
    }
    puStack_104 = &DAT_00980690;
    uStack_108 = 0x69b526;
    FUN_00403191();
    puStack_104 = (undefined4 *)0x3;
    uStack_108 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_10c = 0x69b539;
    FUN_004031b7();
    puStack_104 = (undefined4 *)0x0;
    uStack_108 = 0;
    iStack_10c = 0xffffffff;
    uStack_110 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_114 = 0;
    uStack_118 = 0;
    puStack_11c = (undefined4 *)0x69b54c;
    (*DAT_0097b4c8)();
    puStack_11c = (undefined4 *)0x69b559;
    FUN_0087a1b0();
    puStack_11c = (undefined4 *)(unaff_EBP + -0x34);
    iStack_120 = unaff_EBP + -0x44;
    iStack_124 = 0x69b56b;
    iStack_124 = FUN_00449749();
    iStack_128 = -1;
    uVar5 = FUN_00449713(&uStack_118);
    uVar5 = FUN_00456ad5(uVar5);
    *(int **)(unaff_EBP + -0x20) = &iStack_128;
    FUN_004033a1(uVar5);
    uVar7 = 5;
    uVar5 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_004115d9(0,5);
    FUN_00448e3a(uVar5,uVar7);
    puStack_11c = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_120 = 0x69b5ad;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b5b8;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_120 = 0x69b5c5;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b5d0;
      FUN_00878dfb();
    }
    puStack_11c = &DAT_00980690;
    iStack_120 = 0x69b5d9;
    FUN_00403191();
    puStack_11c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_120 = 0x69b5e6;
    FUN_00403191();
    puStack_11c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_120 = 0x69b5f3;
    FUN_00403191();
    puStack_11c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_120 = 0x69b600;
    FUN_00403191();
    puStack_11c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_120 = 0x69b60d;
    FUN_00403191();
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x68);
    piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar4 == 0) {
      puStack_11c = (undefined4 *)0x80004003;
      iStack_120 = 0x69b626;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x74);
    iStack_120 = unaff_EBP + -100;
    iStack_124 = unaff_EBP + -0x54;
    iStack_128 = unaff_EBP + -0x34;
    FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x44);
    puStack_11c = (undefined4 *)(unaff_EBP + -0x84);
    iStack_120 = 0x69b657;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b662;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_120 = 0x69b66f;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b67a;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_120 = 0x69b687;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b692;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_120 = 0x69b69f;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b6aa;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_120 = 0x69b6b7;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b6c2;
      FUN_00878dfb();
    }
    puStack_11c = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_120 = 0x69b6cf;
    puStack_11c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      iStack_120 = 0x69b6da;
      FUN_00878dfb();
    }
    puStack_11c = &DAT_00980690;
    iStack_120 = 0x69b6e3;
    FUN_00403191();
    puStack_11c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_120 = 0x69b6f0;
    FUN_00403191();
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar4 == 0) {
      puStack_11c = (undefined4 *)0x80004003;
      iStack_120 = 0x69b702;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    iStack_128 = *(int *)(unaff_EBP + -100);
    iStack_124 = *(undefined4 *)(unaff_EBP + -0x60);
    iStack_120 = *(undefined4 *)(unaff_EBP + -0x5c);
    puStack_11c = *(undefined4 **)(unaff_EBP + -0x58);
    iVar4 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,800,0,*(undefined4 *)(unaff_EBP + -0x74),
                       *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(0x10000000,3);
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x68);
    piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_0042a378();
    FUN_004031b7(iVar4 + *(int *)(unaff_EBP + -0x24),3);
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar1;
    iVar4 = *piVar2;
    *(int **)(unaff_EBP + -0x24) = piVar2;
    iVar4 = (**(code **)(iVar4 + 0x90))
                      (piVar2,-1 - *(int *)(unaff_EBP + -0x1c),0,*(undefined4 *)(unaff_EBP + -0x74),
                       *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100),
                       *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(0,3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x24);
    FUN_0040ee87(*puVar3,1);
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    iVar4 = (**(code **)(*piVar1 + 0x9c))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                       *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       -*(int *)(unaff_EBP + -0x1c),0,*(int *)(unaff_EBP + -0x1c) + 800,0,
                       *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_004125e6();
    FUN_004497b5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


