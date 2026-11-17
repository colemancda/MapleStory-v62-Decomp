/* FUN_0042ad64 - 0x0042ad64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042ad64(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 extraout_ECX;
  undefined *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  bool bVar8;
  int *piStack_e8;
  int *piStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  int *piStack_d4;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined *puStack_c8;
  int *piStack_c4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x6c) = extraout_ECX;
  piStack_c4 = (int *)0x42ad8b;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_c4 = (int *)0x42ad9c;
  FUN_00403191();
  piStack_c4 = (int *)0x0;
  puStack_c8 = (undefined *)(unaff_EBP + -0xac);
  piStack_cc = (int *)(unaff_EBP + -0x9c);
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_d0;
  piStack_d4 = (int *)0x3c1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x42adc8;
  FUN_00679e4e();
  piStack_d4 = (int *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d8 = (undefined1 *)0x42add8;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x42addf;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x42ade6;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_c8 = (undefined *)0x42adf1;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    piStack_c4 = (int *)0x42ae07;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_c4 = (int *)0x42ae18;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_c4 = (int *)0x42ae28;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c4 = (int *)0x42ae33;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_c4 = (int *)0x42ae43;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c4 = (int *)0x42ae4e;
    FUN_00878dfb();
  }
  puVar7 = (undefined *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_c4 = (int *)0x42ae5e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_c4 = (int *)0x42ae69;
    FUN_00878dfb();
    puVar7 = extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_c4 = (int *)0x0;
  puStack_d0 = &puStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_c8 = puVar7;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(undefined ***)(unaff_EBP + -0x44) = &puStack_c8;
    piStack_cc = (int *)0xe1c;
    piStack_d4 = (int *)0x42afed;
    FUN_00679e4e();
    piStack_cc = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_d0 = (undefined4 *)0x42affd;
    FUN_0040263d();
    puStack_d0 = (undefined4 *)0x42b004;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_c8 = (undefined *)0x42b00f;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
    piStack_c4 = (int *)0x42b01e;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_c4 = (int *)0x42b02f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_c4 = (int *)0x42b03c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b047;
      FUN_00878dfb();
    }
    piStack_c4 = (int *)0x42b050;
    FUN_00403191();
    piStack_c4 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_c8 = (undefined *)0x42b05f;
    FUN_004031b7();
    bVar8 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (bVar8) {
      piStack_c4 = (int *)0x42b075;
      FUN_00878dfb();
    }
    piStack_c4 = (int *)(unaff_EBP + -0x40);
    puStack_c8 = (undefined *)0x0;
    piStack_cc = (int *)0x0;
    puStack_d0 = (undefined4 *)0x0;
    piStack_d4 = (int *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    iStack_dc = unaff_EBP + 0x10;
    iStack_e0 = 0x42b091;
    puVar2 = (undefined4 *)FUN_0042a39f();
    piStack_c4 = (int *)0x42b09b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar2);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_c4 = (int *)0x42b0b0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b0bb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_c4 = (int *)0x42b0c8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b0d3;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_c4 = (int *)0x42b0e2;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    puStack_c8 = (undefined *)0x42b0f3;
    piStack_c4 = piVar3;
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0xb4))();
    if ((int)puVar2 < 0) {
      puStack_c8 = &DAT_00963df8;
      piStack_d4 = (int *)0x42b103;
      puStack_d0 = puVar2;
      piStack_cc = piVar3;
      FUN_00878e09();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_c8 = (undefined *)0x80004003;
      piStack_cc = (int *)0x42b112;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    puStack_c8 = (undefined *)0xffffffff;
    puStack_d0 = (undefined4 *)0x42b120;
    piStack_cc = piVar3;
    puVar5 = (undefined1 *)(**(code **)(*piVar3 + 0xe0))();
    if ((int)puVar5 < 0) {
      puStack_d0 = (undefined4 *)&DAT_00963df8;
      iStack_dc = 0x42b130;
      puStack_d8 = puVar5;
      piStack_d4 = piVar3;
      FUN_00878e09();
    }
    puStack_d0 = &DAT_00980690;
    piStack_d4 = (int *)0x42b139;
    FUN_00403191();
    puStack_d0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d4 = (int *)0x42b146;
    FUN_00403191();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_d8 = (undefined1 *)0x42b15a;
    FUN_004031b7();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_d8 = (undefined1 *)0x42b169;
    FUN_004031b7();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0xc8;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d8 = (undefined1 *)0x42b17c;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      piStack_d4 = (int *)0x42b18f;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x30);
    piStack_d4 = (int *)(unaff_EBP + -100);
    puStack_d8 = (undefined1 *)(unaff_EBP + -0x7c);
    iStack_dc = unaff_EBP + -0x40;
    iStack_e0 = unaff_EBP + -0x54;
    piStack_e4 = *(int **)(unaff_EBP + -0x14);
    piStack_e8 = (int *)(unaff_EBP + -0x8c);
    FUN_004250ac();
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x8c);
    piStack_d4 = (int *)0x42b1c1;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b1cc;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_d4 = (int *)0x42b1d9;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b1e4;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_d4 = (int *)0x42b1f1;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b1fc;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_d4 = (int *)0x42b209;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b214;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d4 = (int *)0x42b221;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b22c;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_d4 = (int *)0x42b239;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b244;
      FUN_00878dfb();
    }
    puStack_d0 = &DAT_00980690;
    piStack_d4 = (int *)0x42b24d;
    FUN_00403191();
    puStack_d0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_d4 = (int *)0x42b25a;
    FUN_00403191();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_d8 = (undefined1 *)0x42b269;
    FUN_004031b7();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_d8 = (undefined1 *)0x42b278;
    FUN_004031b7();
    puStack_d0 = (undefined4 *)0x3;
    piStack_d4 = (int *)0xc8;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_d8 = (undefined1 *)0x42b28b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      piStack_d4 = (int *)0x42b29e;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x40);
    piStack_d4 = (int *)(unaff_EBP + -0x54);
    puStack_d8 = (undefined1 *)(unaff_EBP + -0x7c);
    iStack_dc = unaff_EBP + -100;
    iStack_e0 = unaff_EBP + -0x30;
    piStack_e4 = *(int **)(unaff_EBP + -0x14);
    piStack_e8 = (int *)(unaff_EBP + -0x8c);
    FUN_004250ac();
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x8c);
    piStack_d4 = (int *)0x42b2d0;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b2db;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_d4 = (int *)0x42b2e8;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b2f3;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_d4 = (int *)0x42b300;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b30b;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_d4 = (int *)0x42b318;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b323;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    piStack_d4 = (int *)0x42b330;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b33b;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_d4 = (int *)0x42b348;
    puStack_d0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_d0 < 0) {
      piStack_d4 = (int *)0x42b353;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      piStack_d4 = (int *)0x42b362;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)0x42b36a;
    iVar1 = FUN_0040e48b();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_d0 = (undefined4 *)0x80004003;
      piStack_d4 = (int *)0x42b37b;
      FUN_00878dfb();
    }
    puStack_d0 = (undefined4 *)0x42b383;
    iVar6 = FUN_0040e53d();
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8) - iVar1 / 2;
    puStack_d0 = &DAT_00980690;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 0xc) - iVar6;
    piStack_d4 = (int *)0x42b3a7;
    FUN_00403191();
    puStack_d0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_d4 = (int *)0x42b3b4;
    FUN_00403191();
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (piVar3 == (int *)0x0) {
      puStack_d0 = (undefined4 *)0x80004003;
      piStack_d4 = (int *)0x42b3c9;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_dc = *(undefined4 *)(unaff_EBP + -100);
    puStack_d8 = *(undefined1 **)(unaff_EBP + -0x60);
    iVar1 = *piVar3;
    piStack_d4 = *(int **)(unaff_EBP + -0x5c);
    puStack_d0 = *(undefined4 **)(unaff_EBP + -0x58);
    piStack_e8 = *(int **)(unaff_EBP + -0x2c);
    piStack_e4 = *(int **)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + 0xc) = piVar3;
    iStack_e0 = *(int *)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(iVar1 + 0x90))
                      (piVar3,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 8),
                       *(undefined4 *)(unaff_EBP + -0x30));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar1 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iVar1 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0042a378();
    FUN_004031b7(iVar1 + 400,3);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + 0xc) = piVar3;
    puVar7 = (undefined *)
             (**(code **)(iVar1 + 0x90))
                       (piVar3,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 8),
                        *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                        *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                        *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                        *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
    if ((int)puVar7 < 0) {
      piStack_c4 = *(int **)(unaff_EBP + 0xc);
      piStack_cc = (int *)0x42b4d8;
      puStack_c8 = puVar7;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_c4 = (int *)0x42b4e5;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b4f0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_c4 = (int *)0x42b4fd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b508;
      FUN_00878dfb();
    }
LAB_0042b508:
    piStack_c4 = (int *)0x42b512;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    piStack_c4 = (int *)(unaff_EBP + -0x40);
    puStack_c8 = (undefined *)0x42b51c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42b528;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_c4 = (int *)0x42b535;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_c4 = (int *)0x42b549;
      FUN_00878dfb();
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    piStack_cc = *(int **)(unaff_EBP + -0x40);
    puStack_c8 = *(undefined **)(unaff_EBP + -0x3c);
    piStack_c4 = *(int **)(unaff_EBP + -0x38);
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_d8 = *(undefined1 **)(unaff_EBP + -0x2c);
    piStack_d4 = *(int **)(unaff_EBP + -0x28);
    iStack_e0 = 0;
    puStack_d0 = *(undefined4 **)(unaff_EBP + -0x24);
    piStack_e8 = (int *)0x42b56f;
    piStack_e4 = piVar3;
    iVar1 = (**(code **)(*piVar3 + 0x110))();
    if (iVar1 < 0) {
      piStack_e8 = (int *)&DAT_00963df8;
      FUN_00878e09(iVar1,piVar3);
    }
    piStack_e8 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_e8 = (int *)FUN_00402bc3();
    if ((int)piStack_e8 < 0) {
      FUN_00878dfb();
    }
    piStack_e8 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_e8 = (int *)FUN_00402bc3();
    if ((int)piStack_e8 < 0) {
      FUN_00878dfb();
    }
    piStack_e8 = *(int **)(unaff_EBP + -0x10);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(int ***)(unaff_EBP + 8) = &piStack_e8;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    FUN_00427af9();
    piStack_e8 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
    }
    piStack_e8 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
    }
    piStack_e8 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_e8 != (int *)0x0) {
      (**(code **)(*piStack_e8 + 8))();
    }
  }
  else {
    *(undefined ***)(unaff_EBP + -0x44) = &puStack_c8;
    piStack_cc = (int *)0xe1b;
    piStack_d4 = (int *)0x42ae91;
    puStack_d0 = &puStack_c8;
    FUN_00679e4e();
    piStack_cc = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_d0 = (undefined4 *)0x42aea1;
    FUN_0040263d();
    puStack_d0 = (undefined4 *)0x42aea8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_c8 = (undefined *)0x42aeb3;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    if (iVar1 != 0) {
      piStack_c4 = (int *)0x42aec9;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_c4 = (int *)0x42aeda;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_c4 = (int *)0x42aee7;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_c4 = (int *)0x42aef2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      piStack_c4 = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_c8 = (undefined *)0x42af12;
      puVar2 = (undefined4 *)FUN_00679d86();
      puStack_c8 = (undefined *)*puVar2;
      piStack_c4 = (int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_cc = (int *)0x42af23;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piVar3 = extraout_ECX_01;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        piVar3 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        piStack_c4 = (int *)0x42af3a;
        FUN_00403384();
      }
      piStack_c4 = (int *)0xff;
      puStack_c8 = (undefined *)0xc00614a4;
      *(int ***)(unaff_EBP + -0x44) = &piStack_cc;
      puStack_d0 = (undefined4 *)0x0;
      piStack_d4 = (int *)0x42af52;
      piStack_cc = piVar3;
      FUN_00424e0a();
      puStack_d0 = *(undefined4 **)(unaff_EBP + 0xc);
      iStack_dc = unaff_EBP + -0x20;
      piStack_d4 = *(int **)(unaff_EBP + 8);
      *(undefined1 ***)(unaff_EBP + 8) = &puStack_d8;
      iStack_e0 = 0x42af67;
      puStack_d8 = extraout_ECX_02;
      FUN_00433bdf();
      iStack_dc = 0;
      piStack_e4 = (int *)(unaff_EBP + 0x10);
      *(int **)(unaff_EBP + 8) = &iStack_e0;
      piStack_e8 = (int *)0x42af77;
      iStack_e0 = extraout_ECX_03;
      FUN_00424dbc();
      piStack_e4 = (int *)(unaff_EBP + -0x1c);
      piStack_e8 = (int *)0x42af80;
      puVar2 = (undefined4 *)FUN_0042e5bf();
      piStack_c4 = (int *)0x42af8d;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar2);
      FUN_00412600();
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004027eb();
        goto LAB_0042b508;
      }
      FUN_004125d9();
    }
    FUN_004027eb();
    FUN_00412600();
    FUN_004125e6();
    FUN_004027eb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


