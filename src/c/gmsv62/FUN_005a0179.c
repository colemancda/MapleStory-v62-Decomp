/* FUN_005a0179 - 0x005a0179 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a0179(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  int *piStack_78;
  int *piStack_74;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  piStack_78 = (int *)&stack0xffffff90;
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff90;
  piStack_74 = (int *)0x5d6;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e();
  piStack_74 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_78 = (int *)0x5a01c0;
  FUN_0040263d();
  piStack_78 = (int *)0x5a01c7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403213();
  *(int ***)(unaff_EBP + -0x24) = &piStack_74;
  piStack_78 = (int *)0x5d5;
  FUN_00679e4e(&piStack_74);
  piStack_78 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0040263d();
  FUN_004048a4();
  piStack_74 = (int *)0x5d4;
  piStack_78 = (int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar1 = FUN_00679d86();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_74 = (int *)0x5a0221;
  piStack_74 = (int *)FUN_005a05c5();
  piStack_78 = (int *)0x5a022a;
  piStack_78 = (int *)FUN_00411641();
  FUN_0041354c(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    piStack_74 = (int *)0x5a024b;
    FUN_00403384();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_74 = (int *)0x5a0259;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0264;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_74 = (int *)0x5a0271;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a027c;
    FUN_00878dfb();
  }
  piStack_74 = (int *)0x0;
  piStack_78 = (int *)0x5a0286;
  uVar1 = FUN_00411641();
  *(int ***)(unaff_EBP + -0x24) = &piStack_78;
  FUN_004033a1(uVar1);
  iVar2 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_78 = (int *)0x5a02b4;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    piStack_74 = (int *)0x5a02ca;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_74 = (int *)0x5a02db;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_74 = (int *)0x5a02e8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a02f3;
    FUN_00878dfb();
  }
  piStack_78 = (int *)&stack0xffffff90;
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff90;
  piStack_74 = (int *)0x3ca;
  FUN_00679e4e();
  piStack_74 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_78 = (int *)0x5a0316;
  FUN_0040263d();
  piStack_78 = (int *)0x5a031d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar1 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_74 = (int *)0x5a0338;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0343;
    FUN_00878dfb();
  }
  piStack_78 = (int *)&stack0xffffff90;
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff90;
  piStack_74 = (int *)0x3cb;
  FUN_00679e4e();
  piStack_74 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_78 = (int *)0x5a0366;
  FUN_0040263d();
  piStack_78 = (int *)0x5a036d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar1 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_74 = (int *)0x5a0388;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0393;
    FUN_00878dfb();
  }
  piStack_78 = (int *)&stack0xffffff90;
  *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff90;
  piStack_74 = (int *)0x5d7;
  FUN_00679e4e();
  piStack_74 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_78 = (int *)0x5a03b6;
  FUN_0040263d();
  piStack_78 = (int *)0x5a03bd;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00403213();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_74 = (int *)0x5a03d7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a03e2;
    FUN_00878dfb();
  }
  piStack_74 = (int *)0x5a03ec;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_74 = (int *)(unaff_EBP + -0x3c);
  piStack_78 = (int *)0x5a03fa;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0406;
    FUN_00878dfb();
  }
  piStack_74 = *(int **)(unaff_EBP + -0x14);
  piStack_78 = (int *)0x5a0413;
  FUN_0040ee87();
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (bVar4) {
    piStack_74 = (int *)0x5a0429;
    FUN_00878dfb();
  }
  piStack_74 = (int *)(unaff_EBP + -0x4c);
  piStack_78 = (int *)0x0;
  FUN_0042a39f(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + -0x24),
               *(undefined4 *)(unaff_EBP + -0x1c),0,0);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_74 = (int *)0x5a0456;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0461;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_74 = (int *)0x5a046e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_74 = (int *)0x5a0479;
    FUN_00878dfb();
  }
  piStack_78 = (int *)&stack0xffffff90;
  *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff90;
  piStack_74 = (int *)0x3cc;
  FUN_00679e4e();
  piStack_74 = (int *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_78 = (int *)0x5a049c;
  FUN_004115d9();
  piStack_78 = (int *)0x5a04a3;
  FUN_00404e7f();
  piStack_74 = (int *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_78 = (int *)0x5a04b2;
  FUN_0040263d();
  piStack_78 = (int *)0x5a04b9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00403213();
  piVar3 = (int *)FUN_00424e27();
  piStack_78 = (int *)0x5a04ed;
  piStack_74 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0xb4))();
  if (iVar2 < 0) {
    piStack_78 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar2,piVar3);
  }
  piStack_78 = (int *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_78 = (int *)FUN_00402bc3();
  if ((int)piStack_78 < 0) {
    FUN_00878dfb();
  }
  piStack_78 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piStack_78 != (int *)0x0) {
    (**(code **)(*piStack_78 + 8))();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_78 = (int *)0x80004003;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  piStack_78 = (int *)0xffffffff;
  iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
  }
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,*(IBinding **)(unaff_EBP + -0x10))
  ;
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  piVar3 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


