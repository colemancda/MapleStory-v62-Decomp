/* FUN_0044e9fa - 0x0044e9fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044e9fa(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  int iVar5;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_68;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_68 = 0xc;
  iStack_6c = 0x44ea20;
  FUN_00450550();
  iVar5 = 0;
  do {
    iStack_68 = unaff_EBP + -0x14;
    iStack_6c = 0x44ea37;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_6c = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_68 = iVar5 + *(int *)(extraout_ECX + 0x564);
    puStack_70 = (undefined4 *)0x44ea4a;
    FUN_004506a3();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x30);
  iStack_68 = 0x44ea6e;
  FUN_00403191();
  iStack_68 = 0xff000000;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44eaa4;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44eaab;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44eab8;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44eac3;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44ead4;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x44eae4;
  FUN_0044f5f6();
  iStack_68 = 0xff000000;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44eb17;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44eb1e;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x44eb2b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44eb36;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44eb53;
  FUN_00403191();
  iStack_68 = 0xffff0000;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44eb89;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44eb90;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44eb9d;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44eba8;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44ebb4;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x44ebc4;
  FUN_0044f5f6();
  iStack_68 = 0xffff0000;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ebf7;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ebfe;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_68 = 0x44ec0b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ec16;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44ec30;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  puStack_70 = &DAT_00980690;
  iStack_6c = 0x44ec3e;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44ec4a;
    FUN_00878dfb();
    puStack_70 = extraout_ECX_00;
  }
  iStack_68 = 0xff00ff00;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ec80;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ec87;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44ec94;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ec9f;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44ecab;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x44ecbb;
  FUN_0044f5f6();
  iStack_68 = 0xff00ff00;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x5;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ecee;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ecf5;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x44ed02;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ed0d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44ed27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  puStack_70 = &DAT_00980690;
  iStack_6c = 0x44ed35;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44ed41;
    FUN_00878dfb();
    puStack_70 = extraout_ECX_01;
  }
  iStack_68 = 0xff0000ff;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x6;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ed77;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ed7e;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44ed8b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ed96;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44eda2;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  iStack_68 = 0x44edb2;
  FUN_0044f5f6();
  iStack_68 = 0xff0000ff;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x7;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ede5;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44edec;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_68 = 0x44edf9;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ee04;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44ee1e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  puStack_70 = &DAT_00980690;
  iStack_6c = 0x44ee2c;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44ee38;
    FUN_00878dfb();
    puStack_70 = extraout_ECX_02;
  }
  iStack_68 = 0xffffffff;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ee6b;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ee72;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44ee7f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ee8a;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44ee96;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0x17;
  iStack_68 = 0x44eea6;
  FUN_0044f5f6();
  iStack_68 = 0xffffffff;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0x9;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44eed6;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44eedd;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_68 = 0x44eeea;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44eef5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44ef0f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  puStack_70 = &DAT_00980690;
  iStack_6c = 0x44ef1d;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44ef29;
    FUN_00878dfb();
    puStack_70 = extraout_ECX_03;
  }
  iStack_68 = 0xff51378c;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined4 *)(unaff_EBP + -4) = 0x1a;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44ef5f;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44ef66;
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44ef73;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44ef7e;
    FUN_00878dfb();
  }
  iStack_68 = unaff_EBP + -0x14;
  iStack_6c = 0x44ef8a;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  iStack_68 = 0x44ef9a;
  FUN_0044f5f6();
  iStack_68 = 0xff51378c;
  iStack_6c = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_70;
  puStack_74 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00679e4e(&puStack_70);
  puStack_74 = (undefined4 *)0xb;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00450708();
  puStack_74 = (undefined4 *)0x44efcd;
  FUN_0044974c();
  puStack_74 = (undefined4 *)0x44efd4;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_68 = 0x44efe1;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_68 = 0x44efec;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  iStack_68 = 0x44f008;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_68 = unaff_EBP + -0x50;
  iStack_6c = 0x44f017;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44f023;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x44f030;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  puVar2 = &DAT_00980690;
  iStack_6c = 0x44f03a;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_68 = 0x44f048;
    FUN_00878dfb();
    puVar2 = extraout_ECX_04;
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x50;
  puStack_70 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_74 = puVar2;
  FUN_00679e4e(&puStack_74,0xb1c);
  iVar5 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_6c = 0x44f08f;
  iVar5 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar5;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar5 != 0) {
    iStack_68 = 0x44f0a5;
    iVar5 = FUN_0041a581();
    if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
      iStack_68 = 0x44f0b6;
      FUN_00878dfb();
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  iStack_68 = 0x44f0c7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0x56c),
             *(IBinding **)(unaff_EBP + -0x14));
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_68 = 0x44f0d4;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_68 = 0x44f0e1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f0ec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x44f0f9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f104;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44f111;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f11c;
    FUN_00878dfb();
  }
  iStack_68 = 0x44f122;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x44f130;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_68 = 0x44f13c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x23;
  iStack_68 = 0x44f149;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_68 = unaff_EBP + -0x50;
  puVar2 = &DAT_00980690;
  iStack_6c = 0x44f157;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_68 = 0x44f165;
    FUN_00878dfb();
    puVar2 = extraout_ECX_05;
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x40;
  puStack_70 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_74 = puVar2;
  FUN_00679e4e(&puStack_74,0xb1d);
  iVar3 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_6c = 0x44f1ac;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    iStack_68 = 0x44f1c2;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_68 = 0x44f1d3;
      FUN_00878dfb();
    }
  }
  piVar1 = *(int **)(iVar5 + 0x570);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar1 != *(int **)(unaff_EBP + -0x14)) {
    *(int **)(iVar5 + 0x570) = *(int **)(unaff_EBP + -0x14);
    FUN_004125f3();
    if (piVar1 != (int *)0x0) {
      iStack_68 = 0x44f1fb;
      (**(code **)(*piVar1 + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_68 = 0x44f20c;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_68 = 0x44f219;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f226;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_68 = 0x44f233;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f23e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_68 = 0x44f24b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_68 = 0x44f256;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_68 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -4) = 0x28;
  iStack_6c = 0x44f27d;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_68 = 0x44f28a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iStack_68 = 0x44f2a7;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_68 = 0x44f2cd;
  FUN_00450382();
  iStack_68 = 0;
  iStack_6c = 0x11f;
  puStack_70 = (undefined4 *)0x22;
  puStack_74 = (undefined4 *)0x3e8;
  (**(code **)(**(int **)(iVar5 + 0x578) + 0x20))(iVar5);
  uVar4 = FUN_00679d86(unaff_EBP + -0x1c,0xd32);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar5 + 0x580) + 0x20))(iVar5,0x3e9,0x193,0x11f,0,unaff_EBP + -0x30);
  uVar4 = FUN_00679d86(unaff_EBP + -0x20,0xd33);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar5 + 0x588) + 0x20))(iVar5,2,0x1ae,10,0,unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


