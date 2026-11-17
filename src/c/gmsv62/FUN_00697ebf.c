/* FUN_00697ebf - 0x00697ebf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00697ebf(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined1 *puStack_100;
  undefined4 *puStack_fc;
  
  FUN_00879bb8();
  puStack_fc = &DAT_00980690;
  puStack_100 = (undefined1 *)0x697ee2;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_100 = (undefined1 *)0x697ef0;
  FUN_00403191();
  puStack_fc = (undefined4 *)0x0;
  puStack_100 = (undefined1 *)0x0;
  iStack_104 = unaff_EBP + -0x34;
  iStack_108 = unaff_EBP + -0x24;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_104 = 0x697f3c;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x10);
  puStack_100 = (undefined1 *)0x697f4b;
  puStack_fc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_fc < 0) && (puStack_fc != (undefined4 *)0x80004002)) {
    puStack_100 = (undefined1 *)0x697f5c;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_100 = (undefined1 *)0x697f69;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x697f74;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x24);
  puStack_100 = (undefined1 *)0x697f81;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x697f8c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x34);
  puStack_100 = (undefined1 *)0x697f99;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x697fa4;
    FUN_00878dfb();
  }
  puStack_fc = &DAT_00980690;
  puStack_100 = (undefined1 *)0x697fad;
  FUN_00403191();
  puStack_fc = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  puStack_100 = (undefined1 *)0x697fbd;
  FUN_00403191();
  puStack_fc = (undefined4 *)0x0;
  puStack_100 = (undefined1 *)0x0;
  iStack_104 = unaff_EBP + -0x34;
  iStack_108 = unaff_EBP + -0x24;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_104 = 0x698006;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x10);
  puStack_100 = (undefined1 *)0x698015;
  puStack_fc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_fc < 0) && (puStack_fc != (undefined4 *)0x80004002)) {
    puStack_100 = (undefined1 *)0x698026;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_100 = (undefined1 *)0x698033;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x69803e;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_100 = (undefined1 *)0x69804b;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x698056;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_fc = (undefined4 *)(unaff_EBP + -0x34);
  puStack_100 = (undefined1 *)0x698063;
  puStack_fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_fc < 0) {
    puStack_100 = (undefined1 *)0x69806e;
    FUN_00878dfb();
  }
  puStack_fc = (undefined4 *)0x698079;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x88) = 1;
  puStack_fc = (undefined4 *)0xa;
  puStack_100 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x84) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x80) = 1;
  *(undefined4 *)(unaff_EBP + -0x7c) = 1;
  *(undefined4 *)(unaff_EBP + -0x70) = 0xff000000;
  iStack_104 = 0x6980b4;
  puVar2 = (undefined4 *)FUN_00679e4e();
  puStack_fc = (undefined4 *)0x6980bd;
  FUN_00408b49();
  puStack_fc = (undefined4 *)0x6980c5;
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_fc = (undefined4 *)0x6980d8;
    FUN_004030b1();
  }
  puStack_fc = (undefined4 *)0x6980e3;
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0xb4;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_fc = (undefined4 *)0x69811c;
  FUN_0048f37f();
  puStack_fc = (undefined4 *)0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0xf8) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0xf4) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0xf0) = 0xff999999;
  puStack_100 = (undefined1 *)0x69814f;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    puStack_fc = (undefined4 *)0x0;
  }
  else {
    puStack_fc = (undefined4 *)0x698161;
    puStack_fc = (undefined4 *)FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_100 = (undefined1 *)0x698175;
  FUN_0045e196();
  puStack_fc = (undefined4 *)0xffffffff;
  puStack_100 = &DAT_00978474;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0x1e;
  iStack_104 = 0x69818e;
  FUN_00414edd();
  puStack_fc = (undefined4 *)(unaff_EBP + -0x8c);
  puStack_100 = (undefined1 *)0xf;
  iStack_104 = 0xda;
  iStack_108 = 0x32;
  uStack_10c = 0x19;
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0045e196();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xc;
  FUN_00434e21();
  (**(code **)(**(int **)(extraout_ECX + 0xa0) + 8))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa0) + 4) + 0x1c))();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 != 0) {
    FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0045e1ff();
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))();
  FUN_00499fb8();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar3 != 0) {
    FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00495bdd();
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x20))();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xb0) + 4) + 0x1c))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb8) + 0x20))();
  iStack_1a4 = 0x698480;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_1a4 = unaff_EBP + -0x24;
  iStack_1a8 = 0x69848e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1a4 = 0x69849a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_1a4 = 0x6984a4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1a4 = unaff_EBP + -0x34;
  puStack_1b0 = &DAT_00980690;
  iStack_1a8 = 0x6984b2;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1a4 = 0x6984be;
    FUN_00878dfb();
    puStack_1b0 = extraout_ECX_00;
  }
  iStack_1a4 = 0;
  iStack_1a8 = unaff_EBP + -0x24;
  iStack_1ac = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1b0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679e4e(&puStack_1b0,0xab5);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_1a8 = 0x698507;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_1a4 = 0x698516;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1a4 = 0x698527;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_1a4 = 0x698534;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x69853f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_1a4 = 0x69854c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x698557;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_1a4 = 0x698564;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x69856f;
    FUN_00878dfb();
  }
  iStack_1a4 = 0x698575;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1a4 = unaff_EBP + -0x34;
  iStack_1a8 = 0x698583;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1a4 = 0x69858f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_1a4 = 0x698599;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_1a4 = unaff_EBP + -0x24;
  puVar2 = &DAT_00980690;
  iStack_1a8 = 0x6985a7;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1a4 = 0x6985b5;
    FUN_00878dfb();
    puVar2 = extraout_ECX_01;
  }
  iStack_1a4 = 0;
  iStack_1a8 = unaff_EBP + -0x34;
  iStack_1ac = unaff_EBP + -0x24;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_1b0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_1b0 = puVar2;
  FUN_00679e4e(&puStack_1b0,0xab6);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_1a8 = 0x6985fc;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_1a4 = 0x69860e;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1a4 = 0x69861f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_1a4 = 0x69862c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x698637;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_1a4 = 0x698644;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x69864f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_1a4 = 0x69865c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1a4 = 0x698667;
    FUN_00878dfb();
  }
  iStack_1a4 = unaff_EBP + -0x10;
  iStack_1a8 = 0x698672;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  iStack_1a4 = 0x698681;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x84),
             (IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_1a4 = 0x69868e;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  iStack_1a4 = unaff_EBP + -0x14;
  iStack_1a8 = 0x698699;
  puVar2 = (undefined4 *)FUN_007d4a9a();
  iStack_1a4 = 0x6986a8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x88),
             (IBinding *)*puVar2);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_1a4 = 0x6986b5;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_1a4 = 0x6986c2;
  FUN_008164fd();
  if (*(int *)(unaff_EBP + -0xc0) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


