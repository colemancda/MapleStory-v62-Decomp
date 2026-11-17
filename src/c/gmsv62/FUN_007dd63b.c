/* FUN_007dd63b - 0x007dd63b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007dd63b(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int unaff_EBP;
  bool bVar6;
  int *piStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x84) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384();
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))();
  iStack_b4 = 0x7dd78b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_b4 = 0x7dd79c;
  FUN_00403191();
  iStack_b4 = 0;
  iStack_b8 = unaff_EBP + -0x6c;
  iStack_bc = unaff_EBP + -0x5c;
  *(int ***)(unaff_EBP + -0x1c) = &piStack_c0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&piStack_c0,0x889);
  iVar2 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x7dd7e3;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    iStack_b4 = 0x7dd7f9;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_b4 = 0x7dd80a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b4 = 0x7dd817;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x7dd822;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_b4 = 0x7dd82f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x7dd83a;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dd847;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dd852;
    FUN_00878dfb();
    iVar2 = extraout_ECX_00;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x88a;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7dd877;
  FUN_0040263d();
  piStack_c0 = (int *)0x7dd87e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_b8 = 0x7dd889;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7dd89b;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7dd8ac;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dd8b9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dd8c4;
    FUN_00878dfb();
    iVar2 = extraout_ECX_01;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x579;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7dd8e9;
  FUN_0040263d();
  piStack_c0 = (int *)0x7dd8f0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b8 = 0x7dd8fb;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7dd90d;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7dd91e;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dd92b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dd936;
    FUN_00878dfb();
    iVar2 = extraout_ECX_02;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x57b;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7dd95b;
  FUN_0040263d();
  piStack_c0 = (int *)0x7dd962;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_b8 = 0x7dd96d;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7dd97f;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7dd990;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dd99d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dd9a8;
    FUN_00878dfb();
    iVar2 = extraout_ECX_03;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x9cc;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7dd9cd;
  FUN_0040263d();
  piStack_c0 = (int *)0x7dd9d4;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_b8 = 0x7dd9df;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7dd9f1;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7dda02;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dda0f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dda1a;
    FUN_00878dfb();
    iVar2 = extraout_ECX_04;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x9cd;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7dda3f;
  FUN_0040263d();
  piStack_c0 = (int *)0x7dda46;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_b8 = 0x7dda51;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7dda63;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7dda74;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7dda81;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b4 = 0x7dda8c;
    FUN_00878dfb();
    iVar2 = extraout_ECX_05;
  }
  iStack_b4 = 0;
  piStack_c0 = &iStack_b8;
  *(int **)(unaff_EBP + -0x1c) = &iStack_b8;
  iStack_bc = 0x9ce;
  iStack_b8 = iVar2;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7ddab1;
  FUN_0040263d();
  piStack_c0 = (int *)0x7ddab8;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_b8 = 0x7ddac3;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_b4 = 0x7ddad5;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_b4 = 0x7ddae6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7ddaf3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x7ddafe;
    FUN_00878dfb();
  }
  iStack_b4 = 0x7ddb0c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_b4 = 0x7ddb19;
  FUN_00403191();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (bVar6) {
    iStack_b4 = 0x7ddb2f;
    FUN_00878dfb();
  }
  iStack_b4 = unaff_EBP + -0x4c;
  iStack_b8 = 1;
  iStack_bc = *(undefined4 *)(extraout_ECX + 0x80);
  piStack_c0 = (int *)0x1b4;
  puVar5 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0);
  iStack_b4 = 0x7ddb64;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa0),
             (IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_b4 = 0x7ddb71;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_b4 = 0x7ddb7e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x7ddb89;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_b4 = 0x7ddb96;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x7ddba1;
    FUN_00878dfb();
  }
  iStack_b4 = 0x7ddbac;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_b4 = *puVar5;
  iStack_b8 = 0x7ddbb9;
  FUN_0040ee87();
  iVar2 = *(int *)(extraout_ECX + 0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar2 == 0) {
    iStack_b4 = 0x7ddbcb;
    FUN_00878dfb();
  }
  piStack_c0 = *(int **)(extraout_ECX + 0xa0);
  iVar2 = *piStack_c0;
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_b8 = *(int *)(unaff_EBP + -0x48);
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x18) = piStack_c0;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  FUN_0040ee87(*puVar5,1);
  iVar2 = *(int *)(extraout_ECX + 0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa0);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)(extraout_ECX + 0xa0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa0);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(extraout_ECX + 0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa0);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar2 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00403191(&DAT_00980690);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  puVar5 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x1c,0,0,0x1b4,*(undefined4 *)(extraout_ECX + 0x80),2,
                        unaff_EBP + -0x4c,unaff_EBP + -0x3c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xa4),
             (IBinding *)*puVar5);
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  FUN_0040ee87(*puVar5,1);
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa4);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  piVar1 = (int *)*puVar5;
  *(undefined2 *)(unaff_EBP + -0x3c) = 0xd;
  *(int **)(unaff_EBP + -0x34) = piVar1;
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  (**(code **)(iVar2 + 4))(piVar1);
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa4);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)(extraout_ECX + 0xa4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa4);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar2 = FUN_00402e32(unaff_EBP + -0x4c,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar2 = FUN_00402e32(unaff_EBP + -0x3c,&DAT_00980690);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xa4);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar1,0,0,*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  uVar4 = *(undefined4 *)(extraout_ECX + 0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x74) = uVar4;
  piVar1 = *(int **)(unaff_EBP + -0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


