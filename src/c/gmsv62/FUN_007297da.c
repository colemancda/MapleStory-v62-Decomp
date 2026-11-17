/* FUN_007297da - 0x007297da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007297da(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  
  FUN_00879bb8();
  puStack_80 = (undefined1 *)0x7297f4;
  FUN_0081622a();
  puStack_80 = *(undefined1 **)(extraout_ECX + 0x90);
  iStack_84 = 0x729804;
  FUN_0072a25d();
  puStack_80 = *(undefined1 **)(extraout_ECX + 0x94);
  iStack_84 = 0x729813;
  FUN_0072a25d();
  puStack_80 = (undefined1 *)0x72981e;
  FUN_00448dc6();
  puStack_80 = (undefined1 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x72982c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_80 = (undefined1 *)0x729841;
  iVar1 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar1 + 4);
  FUN_0045e4a2();
  puStack_80 = (undefined1 *)0x729860;
  uVar2 = FUN_0064d61f();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  puStack_80 = (undefined1 *)0x729874;
  uVar2 = FUN_0064d61f();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  if ((*(int *)(unaff_EBP + -0x1c) == 0) || (*(int *)(unaff_EBP + -0x18) == 0)) {
    FUN_004497b5();
    FUN_004125e6();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    puStack_80 = (undefined1 *)0x72989a;
    FUN_00414f8b();
    iStack_84 = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_80;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_88 = (undefined1 *)0x7298af;
    FUN_0046fcc9();
    iStack_84 = unaff_EBP + -0x10;
    puStack_88 = (undefined1 *)0x7298b8;
    FUN_007d3a22();
    puStack_80 = (undefined1 *)0x7298c9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_80 = (undefined1 *)0x7298d6;
    FUN_00403191();
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_84 = 0x7298ea;
    iStack_84 = FUN_004458be();
    puStack_88 = (undefined1 *)0x7298f3;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_88;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_80 = (undefined1 *)0x729923;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x72992e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_80 = (undefined1 *)0x72993b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729946;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)0x729955;
    FUN_00414f8b();
    iStack_84 = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_80;
    puStack_88 = (undefined1 *)0x729966;
    FUN_0046fcc9();
    iStack_84 = unaff_EBP + -0x10;
    puStack_88 = (undefined1 *)0x72996f;
    FUN_007d3a22();
    puStack_80 = (undefined1 *)0x72997b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_80 = (undefined1 *)0x729988;
    FUN_00403191();
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_84 = 0x72999c;
    iStack_84 = FUN_004458be();
    puStack_88 = (undefined1 *)0x7299a5;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_88;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_80 = (undefined1 *)0x7299d8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x7299e3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_80 = (undefined1 *)0x7299f0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x7299fb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    puStack_80 = (undefined1 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_84 = 0x729a15;
    puVar3 = (undefined4 *)FUN_00679d22();
    puStack_80 = (undefined1 *)*puVar3;
    iStack_84 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_88 = (undefined1 *)0x729a27;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      puStack_80 = (undefined1 *)0x729a3e;
      FUN_00434e38();
    }
    puStack_80 = (undefined1 *)**(undefined4 **)(unaff_EBP + -0x1c);
    iStack_84 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_88 = (undefined1 *)0x729a56;
    iVar1 = FUN_00650dae();
    puStack_80 = (undefined1 *)0x729a61;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0087a1b0();
    iStack_84 = iVar1 + 1;
    puStack_88 = (undefined1 *)0x729a7b;
    puStack_80 = &stack0xffffff88;
    iStack_84 = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x38) = &puStack_80;
    puStack_88 = (undefined1 *)0x729a87;
    FUN_004033a1();
    puStack_88 = (undefined1 *)(unaff_EBP + -0x34);
    iStack_84 = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_84 = 0x729aa3;
    FUN_0044974c();
    iStack_84 = 0x729aaa;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_80 = (undefined1 *)0x729ac2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729acd;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)0x729ad6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_80 = (undefined1 *)0x729ae3;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0087a1b0();
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    iStack_84 = 0x729b01;
    iStack_84 = FUN_004458be();
    puStack_88 = &stack0xffffff88;
    FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_88;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729b4d;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_80 = (undefined1 *)0x729b5a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729b65;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_80 = (undefined1 *)0x729b72;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729b7d;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)0x729b86;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_80 = (undefined1 *)0x729b93;
    FUN_00403191();
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_84 = 0x729ba7;
    iStack_84 = FUN_004458be();
    puStack_88 = (undefined1 *)0x729bb0;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_88;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729bf9;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_80 = (undefined1 *)0x729c06;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729c11;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_80 = (undefined1 *)0x729c1e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729c29;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    puStack_80 = (undefined1 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_84 = 0x729c44;
    puVar3 = (undefined4 *)FUN_00679d22();
    puStack_80 = (undefined1 *)*puVar3;
    iStack_84 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_88 = (undefined1 *)0x729c56;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    puStack_80 = (undefined1 *)**(undefined4 **)(unaff_EBP + -0x18);
    iStack_84 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_88 = (undefined1 *)0x729c7c;
    iVar1 = FUN_00650dae();
    puStack_80 = (undefined1 *)0x729c8a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    puStack_80 = (undefined1 *)(unaff_EBP + -0x58);
    iStack_84 = 0x729c94;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_80 = (undefined1 *)0x729ca0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_0087a1b0();
    iStack_84 = iVar1 + -1;
    puStack_88 = (undefined1 *)0x729cba;
    puStack_80 = &stack0xffffff88;
    iStack_84 = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_80;
    puStack_88 = (undefined1 *)0x729cc6;
    FUN_004033a1();
    puStack_88 = (undefined1 *)(unaff_EBP + -0x38);
    iStack_84 = 4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_84 = 0x729ce2;
    FUN_0044974c();
    iStack_84 = 0x729ce9;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729cfd;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_80 = (undefined1 *)0x729d0a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729d15;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)0x729d1b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    iStack_84 = 0x729d25;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729d31;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_80 = (undefined1 *)0x729d3b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    puStack_80 = (undefined1 *)(unaff_EBP + -0x58);
    iStack_84 = 0x729d45;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729d51;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x38) = &stack0xffffff88;
    puStack_80 = (undefined1 *)(unaff_EBP + -0x58);
    iStack_84 = 0x729d70;
    iStack_84 = FUN_004458be();
    puStack_88 = *(undefined1 **)(unaff_EBP + -0x38);
    FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_88;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729dc2;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_80 = (undefined1 *)0x729dcf;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729dda;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_80 = (undefined1 *)0x729de7;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729df2;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)0x729df8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    puStack_80 = (undefined1 *)(unaff_EBP + -0x58);
    iStack_84 = 0x729e02;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729e0e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_80 = (undefined1 *)0x729e18;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    iStack_84 = 0x729e22;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729e2e;
      FUN_00878dfb();
    }
    puStack_80 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_84 = 0x729e42;
    iStack_84 = FUN_004458be();
    puStack_88 = (undefined1 *)0x729e4b;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_88;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_0044974c();
    FUN_005c1d2c();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729e93;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_80 = (undefined1 *)0x729ea0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729eab;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_80 = (undefined1 *)0x729eb8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      puStack_80 = (undefined1 *)0x729ec3;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x90);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    if (piVar5 != (int *)0x0) {
      puStack_80 = (undefined1 *)0x729ed9;
      (**(code **)(*piVar5 + 4))();
    }
    puStack_80 = (undefined1 *)0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_84 = 0x729eec;
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar5 == (int *)0x0) {
      puStack_80 = (undefined1 *)0x729f01;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar5;
    puStack_88 = *(undefined1 **)(unaff_EBP + -0x68);
    iStack_84 = *(undefined4 *)(unaff_EBP + -100);
    puStack_80 = *(undefined1 **)(unaff_EBP + -0x60);
    *(int **)(unaff_EBP + -0x38) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x24),
               *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0x90));
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x38) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_c8 = 0x729fb9;
      iStack_c4 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_c0 = 0x729fc6;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c0 = 0x729fd3;
      FUN_00878dfb();
    }
    iStack_c0 = 0x729fdf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iStack_c0 = unaff_EBP + -0x58;
    iStack_c4 = 0x729fe9;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_c0 = 0x729ff5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_c0 = 0x729fff;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    iStack_c0 = unaff_EBP + -0x68;
    puStack_cc = &DAT_00980690;
    iStack_c4 = 0x72a009;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_c0 = 0x72a015;
      FUN_00878dfb();
      puStack_cc = extraout_ECX_00;
    }
    iStack_c0 = 0;
    iStack_c4 = unaff_EBP + -0x58;
    iStack_c8 = unaff_EBP + -0x68;
    *(undefined4 ***)(unaff_EBP + -0x3c) = &puStack_cc;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00679e4e(&puStack_cc,0xb33);
    iVar1 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_c4 = 0x72a05f;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar1 != 0) {
      iStack_c0 = 0x72a075;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_c0 = 0x72a086;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_c0 = 0x72a093;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c0 = 0x72a09e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_c0 = 0x72a0ab;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c0 = 0x72a0b6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_c0 = 0x72a0c3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_c0 = 0x72a0ce;
      FUN_00878dfb();
    }
    iStack_c0 = 0x72a0d4;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_c0 = unaff_EBP + -0x48;
    iStack_c4 = 0x72a0de;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_c0 = 0x72a0ea;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (piVar5 == (int *)0x0) {
      iStack_c0 = 0x72a0ff;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piVar5;
    puStack_cc = *(undefined4 **)(unaff_EBP + -0x20);
    iStack_c8 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_c4 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_c0 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x34) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))(piVar5,7,0x85);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iVar1 = FUN_00402e32(unaff_EBP + -0x48,&DAT_00980690);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    iVar1 = (**(code **)(*piVar5 + 0x80))
                      (piVar5,0x1b,0x85,*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                       *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar5,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    piVar5 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    piVar5 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


