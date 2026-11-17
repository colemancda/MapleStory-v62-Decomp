/* FUN_0069ba91 - 0x0069ba91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069ba91(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piStack_128;
  undefined *puStack_124;
  int *piStack_120;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384();
  }
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x70) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x78) = 0xff000000;
  FUN_00679e4e();
  FUN_00402f41();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -100) = 0xc;
  FUN_00414edd();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196();
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 8))();
  *(undefined4 *)(unaff_EBP + -100) = 0x22;
  FUN_00414edd();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196();
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 8))();
  *(undefined4 *)(unaff_EBP + -100) = 0x22;
  FUN_00414edd();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196();
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))();
  *(undefined4 *)(extraout_ECX + 0xa4) = 0;
  piStack_120 = (int *)0x69bd59;
  FUN_008164fd();
  piStack_120 = (int *)0x69bd67;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_120 = (int *)0x69bd74;
  FUN_00403191();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (bVar5) {
    piStack_120 = (int *)0x69bd8b;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x2c);
  puStack_124 = (undefined *)0x2;
  piStack_128 = (int *)0xd;
  puVar4 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x10,0x1a,0x31,0xd2);
  pIVar1 = (IBinding *)*puVar4;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa8);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14) = this;
  piStack_120 = (int *)0x69bdbd;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_120 = (int *)0x69bdca;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_120 = (int *)0x69bdd7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69bde2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_120 = (int *)0x69bdef;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69bdfa;
    FUN_00878dfb();
  }
  piStack_120 = (int *)0x0;
  puStack_124 = (undefined *)0x69be06;
  FUN_004031b7();
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar3 == 0) {
    piStack_120 = (int *)0x69be19;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x1c);
  puStack_124 = (undefined *)0x69be28;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_120 = (int *)0x69be35;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69be40;
    FUN_00878dfb();
  }
  piStack_120 = (int *)0x69be4a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  piStack_120 = (int *)(unaff_EBP + -0x2c);
  puStack_124 = (undefined *)0x69be54;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69be60;
    FUN_00878dfb();
  }
  piStack_120 = (int *)0x37;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_124 = (undefined *)0x69be70;
  FUN_004031b7();
  piStack_120 = (int *)(unaff_EBP + -0x4c);
  piStack_128 = (int *)(unaff_EBP + -0x10);
  puStack_124 = (undefined *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_124 = (undefined *)0x69be94;
  puStack_124 = (undefined *)FUN_00449749();
  *(int ***)(unaff_EBP + -0x18) = &piStack_128;
  FUN_00679e4e(&piStack_128,0xbef);
  uVar7 = 1;
  uVar6 = 0x1d;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004115d9(0x1d,1);
  FUN_00448e3a(uVar6,uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_120 = (int *)0x69bed3;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_120 = (int *)0x69bee0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69beeb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_120 = (int *)0x69bef8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_120 = (int *)0x69bf03;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    piStack_120 = (int *)0x69bf12;
    FUN_00878dfb();
  }
  piVar2 = *(int **)this;
  puStack_124 = (undefined *)0x69bf1f;
  piStack_120 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xe0))();
  if (iVar3 < 0) {
    puStack_124 = &DAT_00963df8;
    piStack_128 = piVar2;
    FUN_00878e09(iVar3);
  }
  puStack_124 = (undefined *)(unaff_EBP + -0x18);
  piStack_128 = (int *)0x69bf3a;
  puVar4 = (undefined4 *)FUN_004489f5();
  piStack_128 = (int *)*puVar4;
  puStack_124 = (undefined *)0x1;
  FUN_0040ee87();
  iVar3 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar3 == 0) {
    puStack_124 = (undefined *)0x80004003;
    piStack_128 = (int *)0x69bf5a;
    FUN_00878dfb();
  }
  piVar2 = *(int **)this;
  iVar3 = *piVar2;
  piStack_128 = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x10) = piVar2;
  puStack_124 = *(undefined **)(unaff_EBP + -0x40);
  iVar3 = (**(code **)(iVar3 + 0xfc))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  piVar2 = (int *)*puVar4;
  *(undefined2 *)(unaff_EBP + -0x2c) = 0xd;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  (**(code **)(iVar3 + 4))(piVar2);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = (**(code **)(*piVar2 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar2 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402fa6();
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


