/* FUN_00468d95 - 0x00468d95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00468d95(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_54 = &DAT_00980690;
    iStack_58 = 0x468dca;
    FUN_00403191();
    piStack_54 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_58 = 0x468dd7;
    FUN_00403191();
    piStack_54 = (int *)0x0;
    iStack_58 = 0;
    puStack_5c = (undefined1 *)(unaff_EBP + -0x40);
    puStack_60 = (undefined1 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x18) = &iStack_64;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00679e4e(&iStack_64,0xae9);
    iVar3 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_5c = (undefined1 *)0x468e1e;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    piStack_54 = (int *)(unaff_EBP + -0x14);
    iStack_58 = 0x468e2d;
    piStack_54 = (int *)FUN_00404b30();
    if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
      iStack_58 = 0x468e3e;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_58 = 0x468e4b;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468e56;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_58 = 0x468e63;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468e6e;
      FUN_00878dfb();
    }
    piStack_54 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_58 = 0x468e7b;
    piStack_54 = (int *)FUN_00402bc3();
    if ((int)piStack_54 < 0) {
      iStack_58 = 0x468e86;
      FUN_00878dfb();
    }
  }
  piStack_54 = (int *)0x468e8e;
  FUN_00469978();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_54 = (int *)0x80004003;
      iStack_58 = 0x468ea0;
      FUN_00878dfb();
    }
    piStack_54 = (int *)0x468ea8;
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + -0x14)) {
      piStack_54 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_54 != (int *)0x0) {
        iStack_58 = 0x46907f;
        (**(code **)(*piStack_54 + 8))();
      }
      piStack_54 = *(int **)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_54 != (int *)0x0) {
        iStack_58 = 0x469090;
        (**(code **)(*piStack_54 + 8))();
      }
      uVar1 = 1;
      goto LAB_00469093;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_54 = (int *)0x468ec0;
    FUN_00469866();
    piStack_54 = (int *)0x468ec8;
    FUN_0087a1b0();
    piStack_54 = (int *)0x0;
    iStack_58 = 0;
    puStack_60 = *(undefined1 **)(unaff_EBP + -0x14);
    iStack_64 = 0x468ed5;
    puStack_5c = &stack0xffffffb0;
    puStack_60 = (undefined1 *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_5c;
    iStack_64 = 0x468ee1;
    FUN_004033a1();
    puStack_60 = (undefined1 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_64 = 0x468ef1;
    FUN_0040263d();
    iStack_64 = 0x468ef8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_5c = (undefined1 *)0x468f03;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      piStack_54 = (int *)(unaff_EBP + -0x18);
      iStack_58 = 0x468f19;
      piStack_54 = (int *)FUN_00404b30();
      if (((int)piStack_54 < 0) && (piStack_54 != (int *)0x80004002)) {
        iStack_58 = 0x468f2a;
        FUN_00878dfb();
      }
    }
    piStack_54 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_58 = 0x468f37;
    iVar3 = FUN_00402bc3();
    iStack_58 = (int)piStack_54;
    if (iVar3 < 0) {
      iStack_58 = 0x468f42;
      piStack_54 = (int *)iVar3;
      FUN_00878dfb();
      iStack_58 = extraout_ECX;
    }
    piStack_54 = (int *)0x0;
    puStack_60 = (undefined1 *)&iStack_58;
    *(int **)(unaff_EBP + -0x1c) = &iStack_58;
    puStack_5c = (undefined1 *)0xa9a;
    iStack_64 = 0x468f56;
    FUN_00679e4e();
    puStack_5c = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_60 = (undefined1 *)0x468f66;
    FUN_0040263d();
    puStack_60 = (undefined1 *)0x468f6d;
    iStack_58 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_5c = (undefined1 *)0x468f77;
    uVar1 = FUN_00412550();
    piStack_54 = (int *)0x468f83;
    iVar3 = FUN_00469862();
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
    piStack_54 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_58 = 0x468f93;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x468f9e;
      piStack_54 = (int *)iVar3;
      FUN_00878dfb();
      piStack_54 = (int *)extraout_ECX_00;
    }
    puStack_5c = (undefined1 *)(unaff_EBP + 0x10);
    *(int **)(unaff_EBP + -0x1c) = &iStack_58;
    puStack_60 = (undefined1 *)0x468fb0;
    iStack_58 = (int)piStack_54;
    piStack_54 = (int *)*(undefined4 *)(unaff_EBP + 0x14);
    FUN_00424dbc();
    iStack_64 = unaff_EBP + -0x28;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_60;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_60 = extraout_ECX_01;
    FUN_0045e0ed();
    *(int **)(unaff_EBP + -0x20) = &iStack_64;
    FUN_00424dbc(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar3 = FUN_00467ed8();
    if (iVar3 != 0) break;
    piStack_54 = (int *)(unaff_EBP + -0x28);
    iStack_58 = *(int *)(unaff_EBP + -0x24) + 0xc;
    puStack_5c = (undefined1 *)0x468ff6;
    FUN_0046988e();
    piStack_54 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_54 != (int *)0x0) {
      iStack_58 = 0x469007;
      (**(code **)(*piStack_54 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      piStack_54 = (int *)0x0;
      iStack_58 = 0x469019;
      FUN_0045e794();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  piStack_54 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x469035;
    (**(code **)(*piStack_54 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    piStack_54 = (int *)0x0;
    iStack_58 = 0x469047;
    FUN_0045e794();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  piStack_54 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x46905a;
    (**(code **)(*piStack_54 + 8))();
  }
  piStack_54 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x46906b;
    (**(code **)(*piStack_54 + 8))();
  }
  uVar1 = 0;
LAB_00469093:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


