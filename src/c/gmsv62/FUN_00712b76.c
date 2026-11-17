/* FUN_00712b76 - 0x00712b76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00712b76(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0x10);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (5 < uVar1) {
    *(undefined4 *)(unaff_EBP + -0x18) = **(undefined4 **)(extraout_ECX + 0x14);
    FUN_00424ed4();
    piStack_5c = (int *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_60 = 0x712bb5;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      piStack_5c = (int *)0x712bc9;
      FUN_00878dfb();
    }
    piStack_5c = (int *)(unaff_EBP + -0x14);
    iStack_60 = 0x712bd9;
    FUN_00425067();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_5c = (int *)0x712be6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_5c = (int *)0x712bf1;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_5c = (int *)0x712bfc;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_5c = (int *)0x712c07;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      piStack_5c = (int *)0x712c17;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x14);
    piVar3 = (int *)FUN_0040e53d();
    iStack_60 = FUN_0040e48b();
    iStack_64 = 0;
    piStack_5c = piVar3;
    iVar2 = (**(code **)(*piVar5 + 0x8c))(piVar5,0);
    if (iVar2 < 0) {
      iStack_64 = 0x712c4d;
      iStack_60 = iVar2;
      piStack_5c = piVar5;
      FUN_00878e09();
    }
    piStack_5c = (int *)0x712c5d;
    FUN_0048bbbd();
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
    piStack_5c = (int *)0x712c6e;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x18));
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412600();
  }
  piStack_5c = (int *)0x712c94;
  FUN_00403191();
  *(int ***)(unaff_EBP + -0x18) = &piStack_5c;
  iStack_60 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x712cad;
  FUN_00448a17();
  iStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_64 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_60 = 0x712cca;
  FUN_0044974c();
  iStack_60 = 0x712cd1;
  iVar2 = FUN_00448ebb();
  iVar6 = -iVar2 + 0x122;
  FUN_004497b5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_5c = (int *)0x712ced;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_5c = (int *)0x712cf8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(*(int *)(unaff_EBP + -0x1c) + 0x18);
  FUN_00424ed4();
  piStack_5c = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_60 = 0x712d1d;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_5c = (int *)0x712d30;
    FUN_00878dfb();
  }
  piStack_5c = (int *)(unaff_EBP + -0x20);
  iStack_60 = 0x712d40;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_5c = (int *)0x712d4d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_5c = (int *)0x712d58;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x712d61;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_5c = (int *)0x712d6e;
  FUN_00403191();
  piStack_5c = (int *)(unaff_EBP + -0x44);
  iStack_60 = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_64 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_60 = 0x712d93;
  iStack_60 = FUN_00449749();
  *(int **)(unaff_EBP + 0x10) = &iStack_64;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
  uVar8 = 1;
  iVar2 = -iVar2 + 0x123;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004115d9(iVar2,1);
  FUN_00448e3a(iVar2,uVar8);
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_5c = (int *)0x712dd0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_5c = (int *)0x712ddb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_5c = (int *)0x712de8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_5c = (int *)0x712df3;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x712dfc;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_5c = (int *)0x712e09;
  FUN_00403191();
  piStack_5c = (int *)(unaff_EBP + -0x54);
  iStack_60 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_64 = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_60 = 0x712e2e;
  iStack_60 = FUN_00449749();
  *(int **)(unaff_EBP + 0xc) = &iStack_64;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
  uVar8 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004115d9(iVar6,0);
  FUN_00448e3a(iVar6,uVar8);
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_5c = (int *)0x712e67;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_5c = (int *)0x712e72;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_5c = (int *)0x712e7f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_5c = (int *)0x712e8a;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x712e93;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_5c = (int *)0x712ea0;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_5c = (int *)0x712eb3;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x712ebf;
  piVar5 = (int *)FUN_004113e5();
  iVar2 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar2 == 0) {
    piStack_5c = (int *)0x712ed3;
    FUN_00878dfb();
  }
  piVar5 = (int *)*piVar5;
  iStack_64 = *(int *)(unaff_EBP + -0x44);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
  piStack_5c = *(int **)(unaff_EBP + -0x3c);
  iVar2 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar5,0xff,0,*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0042a378();
  FUN_004031b7(iVar2 + 6000,3);
  iVar2 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00424e27(iVar2);
  FUN_004113e5(iVar2);
  iVar2 = unaff_EBP + -0x44;
  iVar4 = unaff_EBP + -0x54;
  uVar7 = 0;
  uVar8 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00424df4(0,0,iVar4,iVar2);
  FUN_00424f2f(uVar8,uVar7,iVar4,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00713013();
  FUN_004125e6();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


