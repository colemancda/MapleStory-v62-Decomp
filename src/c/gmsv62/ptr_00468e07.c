/* ptr_00468e07 - 0x00468e07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4
ptr_00468e07(int param_1,undefined4 *param_2,undefined1 *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *unaff_EBX;
  int unaff_EBP;
  
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_3 = (undefined1 *)0x468e1e;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  param_5 = (int *)(unaff_EBP + -0x14);
  param_4 = 0x468e2d;
  param_5 = (int *)FUN_00404b30();
  if (((int)param_5 < (int)unaff_EBX) && (param_5 != (int *)0x80004002)) {
    param_4 = 0x468e3e;
    FUN_00878dfb();
  }
  param_5 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  param_4 = 0x468e4b;
  param_5 = (int *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = 0x468e56;
    FUN_00878dfb();
  }
  param_5 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  param_4 = 0x468e63;
  param_5 = (int *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = 0x468e6e;
    FUN_00878dfb();
  }
  param_5 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  param_4 = 0x468e7b;
  param_5 = (int *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = 0x468e86;
    FUN_00878dfb();
  }
  param_5 = (int *)0x468e8e;
  FUN_00469978();
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  while( true ) {
    if (*(int **)(unaff_EBP + 8) == unaff_EBX) {
      param_5 = (int *)0x80004003;
      param_4 = 0x468ea0;
      FUN_00878dfb();
    }
    param_5 = (int *)0x468ea8;
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + -0x14)) {
      param_5 = *(int **)(unaff_EBP + 8);
      *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
      if (param_5 != unaff_EBX) {
        param_4 = 0x46907f;
        (**(code **)(*param_5 + 8))();
      }
      param_5 = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (param_5 != unaff_EBX) {
        param_4 = 0x469090;
        (**(code **)(*param_5 + 8))();
      }
      uVar1 = 1;
      goto LAB_00469093;
    }
    *(int **)(unaff_EBP + -0x24) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    param_5 = (int *)0x468ec0;
    FUN_00469866();
    param_5 = (int *)0x468ec8;
    FUN_0087a1b0();
    param_2 = *(undefined4 **)(unaff_EBP + -0x14);
    param_1 = 0x468ed5;
    param_3 = &stack0x00000018;
    param_2 = (undefined4 *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &param_3;
    param_1 = 0x468ee1;
    FUN_004033a1();
    param_2 = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    param_1 = 0x468ef1;
    FUN_0040263d();
    param_1 = 0x468ef8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    param_3 = (undefined1 *)0x468f03;
    piVar3 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x18) = piVar3;
    *(int **)(unaff_EBP + -0x10) = unaff_EBX;
    if (piVar3 != unaff_EBX) {
      param_5 = (int *)(unaff_EBP + -0x18);
      param_4 = 0x468f19;
      param_5 = (int *)FUN_00404b30();
      if (((int)param_5 < (int)unaff_EBX) && (param_5 != (int *)0x80004002)) {
        param_4 = 0x468f2a;
        FUN_00878dfb();
      }
    }
    param_5 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    param_4 = 0x468f37;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      param_4 = 0x468f42;
      param_5 = (int *)iVar4;
      FUN_00878dfb();
      param_5 = (int *)extraout_ECX;
    }
    param_2 = (undefined4 *)&stack0x00000010;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0x00000010;
    param_3 = (undefined1 *)0xa9a;
    param_1 = 0x468f56;
    param_4 = (int)param_5;
    FUN_00679e4e();
    param_3 = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    param_2 = (undefined4 *)0x468f66;
    FUN_0040263d();
    param_2 = (undefined4 *)0x468f6d;
    param_4 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    param_3 = (undefined1 *)0x468f77;
    uVar1 = FUN_00412550();
    param_5 = (int *)0x468f83;
    iVar4 = FUN_00469862();
    *(undefined4 *)(iVar4 + 0xc) = uVar1;
    param_5 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    param_4 = 0x468f93;
    iVar4 = FUN_00402bc3();
    if (iVar4 < (int)unaff_EBX) {
      param_4 = 0x468f9e;
      param_5 = (int *)iVar4;
      FUN_00878dfb();
      param_5 = (int *)extraout_ECX_00;
    }
    param_3 = (undefined1 *)(unaff_EBP + 0x10);
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0x00000010;
    param_2 = (undefined4 *)0x468fb0;
    param_4 = (int)param_5;
    param_5 = (int *)*(undefined4 *)(unaff_EBP + 0x14);
    FUN_00424dbc();
    param_1 = unaff_EBP + -0x28;
    *(undefined4 ***)(unaff_EBP + -0x20) = &param_2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    param_2 = (undefined4 *)extraout_ECX_01;
    FUN_0045e0ed();
    *(int **)(unaff_EBP + -0x20) = &param_1;
    param_1 = extraout_ECX_02;
    FUN_00424dbc();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piVar3 = (int *)FUN_00467ed8();
    if (piVar3 != unaff_EBX) break;
    param_5 = (int *)(unaff_EBP + -0x28);
    param_4 = *(int *)(unaff_EBP + -0x24) + 0xc;
    param_3 = (undefined1 *)0x468ff6;
    FUN_0046988e();
    param_5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (param_5 != unaff_EBX) {
      param_4 = 0x469007;
      (**(code **)(*param_5 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
      param_4 = 0x469019;
      FUN_0045e794();
      *(int **)(unaff_EBP + -0x24) = unaff_EBX;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  param_5 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (param_5 != unaff_EBX) {
    param_4 = 0x469035;
    (**(code **)(*param_5 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
    param_4 = 0x469047;
    FUN_0045e794();
    *(int **)(unaff_EBP + -0x24) = unaff_EBX;
  }
  param_5 = *(int **)(unaff_EBP + 8);
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (param_5 != unaff_EBX) {
    param_4 = 0x46905a;
    (**(code **)(*param_5 + 8))();
  }
  param_5 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (param_5 != unaff_EBX) {
    param_4 = 0x46906b;
    (**(code **)(*param_5 + 8))();
  }
  uVar1 = 0;
LAB_00469093:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


