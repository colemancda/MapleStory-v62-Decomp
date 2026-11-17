/* FUN_00565e42 - 0x00565e42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00565e42(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  bool bVar5;
  undefined4 uStack_94;
  int iStack_90;
  undefined1 *puStack_8c;
  undefined *puStack_88;
  int *piStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_78 = 0x565e5f;
  FUN_0081622a();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x84);
  if (*(int *)this == 0) {
    iStack_78 = 0x565e7d;
    FUN_00403191();
    iStack_78 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_7c = 0x565e8b;
    FUN_004031b7();
    bVar5 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar5) {
      iStack_78 = 0x565ea1;
      FUN_00878dfb();
    }
    iStack_78 = unaff_EBP + -0x30;
    iStack_7c = 1;
    iStack_80 = 0;
    piStack_84 = (int *)0x0;
    puStack_88 = (undefined *)0x0;
    puStack_8c = (undefined1 *)0x0;
    iStack_90 = unaff_EBP + 8;
    uStack_94 = 0x565ebe;
    puVar1 = (undefined4 *)FUN_0042a39f();
    iStack_78 = 0x565ec7;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_78 = 0x565edc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_78 = 0x565ee7;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_78 = 0x565ef4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_78 = 0x565eff;
      FUN_00878dfb();
    }
    iStack_78 = 0x565f08;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iStack_78 = 0x565f18;
    FUN_00403191();
    iStack_78 = 0;
    iStack_7c = unaff_EBP + -0x30;
    iStack_80 = unaff_EBP + -0x40;
    puStack_8c = (undefined1 *)&piStack_84;
    *(int ***)(unaff_EBP + -0x18) = &piStack_84;
    puStack_88 = (undefined *)0x55a;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_90 = 0x565f3c;
    FUN_00679e4e();
    puStack_88 = (undefined *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_8c = (undefined1 *)0x565f49;
    FUN_00405a1d();
    puStack_8c = (undefined1 *)0x565f50;
    FUN_00402660();
    puStack_8c = (undefined1 *)0x565f57;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_7c = 0x565f62;
    uVar3 = FUN_004032b4();
    iStack_78 = 0xff;
    iStack_7c = 0;
    *(int **)(unaff_EBP + -0x18) = &iStack_80;
    piStack_84 = (int *)0x0;
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    puStack_88 = (undefined *)0x565f78;
    FUN_00424e0a();
    piStack_84 = (int *)0x0;
    puStack_88 = (undefined *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_8c;
    iStack_90 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_94 = 0x565f8a;
    FUN_00424dd7();
    iStack_90 = 0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_94;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_94 = extraout_ECX_00;
    FUN_004251a3(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puVar1 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x14);
    iStack_78 = 0x565fb7;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_78 = 0x565fcc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_78 = 0x565fd7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_78 = 0x565fe4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_78 = 0x565fef;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_78 = 0x565ffc;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_78 = 0x566007;
      FUN_00878dfb();
    }
    iStack_78 = 0x566013;
    puVar1 = (undefined4 *)FUN_004489f5();
    iStack_78 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    iStack_7c = 0x566027;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar2 == 0) {
      iStack_78 = 0x566039;
      FUN_00878dfb();
    }
    piStack_84 = *(int **)this;
    iVar2 = *piStack_84;
    iStack_80 = *(int *)(unaff_EBP + -0x40);
    iStack_7c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_78 = *(undefined4 *)(unaff_EBP + -0x38);
    *(int **)(unaff_EBP + 8) = piStack_84;
    puStack_88 = (undefined *)0x566050;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      puStack_88 = &DAT_00963de8;
      puStack_8c = *(undefined1 **)(unaff_EBP + 8);
      uStack_94 = 0x566062;
      iStack_90 = iVar2;
      FUN_00878e09();
    }
    puStack_88 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_8c = (undefined1 *)0x56606f;
    puStack_88 = (undefined *)FUN_00402bc3();
    if ((int)puStack_88 < 0) {
      puStack_8c = (undefined1 *)0x56607a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_88 = (undefined *)0x566086;
    FUN_00412600();
    puStack_88 = (undefined *)(unaff_EBP + -0x14);
    puStack_8c = (undefined1 *)0x566092;
    puVar1 = (undefined4 *)FUN_004489f5();
    puStack_8c = (undefined1 *)*puVar1;
    puStack_88 = (undefined *)0x1;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    iStack_90 = 0x5660a6;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar2 == 0) {
      puStack_88 = (undefined *)0x80004003;
      puStack_8c = (undefined1 *)0x5660b9;
      FUN_00878dfb();
    }
    piVar4 = *(int **)this;
    iVar2 = *piVar4;
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_90 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_8c = *(undefined1 **)(unaff_EBP + -0x38);
    *(int **)(unaff_EBP + 8) = piVar4;
    puStack_88 = *(undefined **)(unaff_EBP + -0x34);
    iVar2 = (**(code **)(iVar2 + 0xfc))(piVar4);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412600();
    if (*(int *)this == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)this;
    iVar2 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)this;
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + 8) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar4,0x84,0x62,*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar2 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + 8) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar4,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)this;
    iVar2 = (**(code **)(*piVar4 + 0x110))
                      (piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x60);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


