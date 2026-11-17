/* FUN_00551dff - 0x00551dff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00551dff(void)

{
  int iVar1;
  undefined4 uVar2;
  int yTop;
  int xLeft;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff68;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&stack0xffffff68,0x3b4);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  FUN_00559769();
  **(undefined4 **)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff6c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e(&stack0xffffff6c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = FUN_00412550();
  iVar1 = FUN_00559555();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff68;
  FUN_00679e4e(&stack0xffffff68,0x3ba);
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0041a4e5();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff68;
  FUN_00679e4e(&stack0xffffff68,0x3bb);
  iVar1 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0041a4e5();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      SetRectEmpty((LPRECT)(*(int *)(unaff_EBP + -0x38) + 0xc));
      goto LAB_0055207b;
    }
  }
  else if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + -0x38);
  iVar4 = FUN_00404abb();
  iVar3 = FUN_00404a94();
  yTop = FUN_00404abb();
  xLeft = FUN_00404a94();
  SetRect((LPRECT)(iVar1 + 0xc),xLeft,yTop,iVar3,iVar4);
LAB_0055207b:
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff68;
  FUN_00448a17(s_emotion_009655f0);
  iVar1 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  iVar1 = 0x20;
  iVar4 = 0;
  *(undefined **)(unaff_EBP + 8) = &DAT_00978410;
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -0x20;
  do {
    *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff6c;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uVar2 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x30);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    if (99 < iVar3) {
      iVar3 = 100;
    }
    iVar4 = iVar4 + iVar3;
    *(int *)(iVar1 + *(int *)(unaff_EBP + -0x38)) = iVar4;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x7c);
  *(int *)(*(int *)(unaff_EBP + -0x38) + 0x1c) = iVar4;
  FUN_0055a4e2();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    FUN_00426165();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


