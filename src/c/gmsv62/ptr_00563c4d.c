/* ptr_00563c4d - 0x00563c4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00563c4d(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar5;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  FUN_0087a1b0();
  FUN_0059f2bb();
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191();
  iStack_1c = unaff_EBP + -0x50;
  piStack_28 = &iStack_20;
  *(int **)(unaff_EBP + -0x10) = &iStack_20;
  iStack_24 = 0x519;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_20 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_24 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_28 = (int *)0x563cc7;
  FUN_00405a1d();
  piStack_28 = (int *)0x563cce;
  FUN_00402660();
  piStack_28 = (int *)0x563cd5;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  (**(code **)(*extraout_ECX + 0xc))();
  if (DAT_0097c1a8 == (int *)0x0) {
    FUN_00878dfb();
  }
  iVar2 = *DAT_0097c1a8;
  *(int **)(unaff_EBP + 8) = DAT_0097c1a8;
  iVar2 = (**(code **)(iVar2 + 0x24))();
  if (iVar2 < 0) {
    iStack_1c = *(int *)(unaff_EBP + 8);
    iStack_24 = 0x563d86;
    iStack_20 = iVar2;
    FUN_00878e09();
  }
  iStack_1c = 0x563d8f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_1c = 0x563d9f;
  FUN_00403191();
  iStack_1c = 0;
  iStack_20 = unaff_EBP + -0x50;
  iStack_24 = unaff_EBP + -0x60;
  *(int ***)(unaff_EBP + 8) = &piStack_28;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&piStack_28,0x51a);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_20 = 0x563de9;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    iStack_1c = 0x563dff;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_1c = 0x563e10;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_1c = 0x563e1d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563e28;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_1c = 0x563e35;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563e40;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_1c = 0x563e4d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563e58;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iStack_1c = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_20 = 0x563e72;
  piVar3 = (int *)FUN_00679d22();
  iStack_20 = *piVar3;
  iStack_1c = 0;
  iStack_24 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_28 = (int *)0x563e85;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_1c = 0x563e9c;
    FUN_00434e38();
  }
  iStack_1c = 0x563ea6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_1c = 0x563eb6;
  iStack_20 = FUN_00449713();
  *(int **)(unaff_EBP + -0x10) = &iStack_1c;
  iStack_24 = 0x563ec2;
  FUN_00448a17();
  iStack_24 = unaff_EBP + 8;
  iStack_20 = 0x1f;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_28 = (int *)0x563ed1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_20 = 0x563ede;
  FUN_0044974c();
  iStack_20 = 0x563ee5;
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_1c = 0x563efd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563f08;
    FUN_00878dfb();
  }
  iStack_1c = 0x563f11;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_1c = 0x563f1e;
  FUN_00403191();
  iStack_1c = unaff_EBP + -0x20;
  iStack_24 = unaff_EBP + 8;
  iStack_20 = 0x1f;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_28 = (int *)0x563f35;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_20 = 0x563f42;
  iStack_20 = FUN_00449749();
  iStack_24 = 0x563f4b;
  piStack_28 = (int *)FUN_00449713();
  *(int **)(unaff_EBP + -0x40) = &iStack_24;
  FUN_00448a17();
  iVar2 = 0x285 - *(int *)(unaff_EBP + -0x10);
  piStack_28 = (int *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004115d9(iVar2);
  FUN_00448e3a(iVar2);
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_1c = 0x563f8a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563f95;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_1c = 0x563fa2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x563fad;
    FUN_00878dfb();
  }
  iStack_1c = 0x563fb6;
  FUN_00403191();
  iStack_1c = *(int *)(unaff_EBP + -0x24);
  iStack_20 = 0x563fc3;
  FUN_0040ee87();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (bVar5) {
    iStack_1c = 0x563fd9;
    FUN_00878dfb();
  }
  iStack_1c = unaff_EBP + -0x20;
  iStack_20 = 0x6e;
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + 8,0,0);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x4e);
  iStack_1c = 0x564005;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_1c = 0x56401a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x564025;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_1c = 0x564032;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1c = 0x56403d;
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == 0) {
    iStack_1c = 0x56404f;
    FUN_00878dfb();
  }
  iStack_1c = 0x56405e;
  piVar3 = (int *)FUN_00429328();
  iStack_1c = *piVar3;
  iStack_20 = 0x56406b;
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar2 == 0) {
    iStack_1c = 0x56407d;
    FUN_00878dfb();
  }
  piStack_28 = *(int **)this;
  iVar2 = *piStack_28;
  iStack_24 = *(int *)(unaff_EBP + -0x20);
  iStack_20 = *(int *)(unaff_EBP + -0x1c);
  iStack_1c = *(int *)(unaff_EBP + -0x18);
  *(int **)(unaff_EBP + 8) = piStack_28;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00403191(&DAT_00980690);
  iVar2 = extraout_ECX[0x4e];
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)extraout_ECX[0x4e];
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar3,0xfffffe70,0xfffffed4,*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (extraout_ECX[0x4e] == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)extraout_ECX[0x4e];
  iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
  }
  iVar2 = 0;
  do {
    uVar1 = FUN_00827f55(unaff_EBP + 8,iVar2 + 2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00414f8b(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = FUN_004029b9(0xc4);
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005797f8(extraout_ECX);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0056a68b(uVar1);
  if (*(int *)(DAT_00978368 + 0x2024) == 1) {
    iVar2 = FUN_005644d8(unaff_EBP + -0x2070);
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x40) = 0x22000009;
      *(undefined4 *)(unaff_EBP + 8) = 0x22000009;
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + 8,&DAT_008f7260);
    }
    extraout_ECX[0x58] = -1;
    extraout_ECX[0x4f] = 1;
    extraout_ECX[0x54] = 1;
    FUN_0056aa6e(6,unaff_EBP + 0xb);
    FUN_0056aae5(6,unaff_EBP + 0xb);
    FUN_0056aa6e(0x3c,unaff_EBP + 0xb);
    FUN_0056aae5(0x3c,unaff_EBP + 0xb);
    FUN_00569976(0);
    iVar2 = FUN_004029b9(0x150);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (iVar2 != 0) {
      FUN_0058db4a(extraout_ECX);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0060142b(4,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_004751b2(unaff_EBP + -0x20);
    FUN_00579c5c(2);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0045ebca();
  }
  else {
    iVar2 = FUN_004029b9(0x5c0);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (iVar2 != 0) {
      FUN_00589f5b(extraout_ECX);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
  }
  if ((DAT_00973cd8 != 0) && (*(int *)(DAT_00973cd8 + 0x2c) != 0)) {
    FUN_0060142b(0x1c,0,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_004751b2(unaff_EBP + -0x20);
    extraout_ECX[0x51] = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0045ebca();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar2 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar2 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_00429328(unaff_EBP + -0x10);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = extraout_ECX[0x4f];
  *(int **)(unaff_EBP + 8) = piVar3;
  uVar1 = FUN_00569760(iVar2);
  iVar2 = (**(code **)(*piVar3 + 0x90))
                    (*(undefined4 *)(unaff_EBP + 8),0x1c,uVar1,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_0056941d();
  FUN_005a7912();
  FUN_0065c6a5();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  piVar3 = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


