/* FUN_0042ea7d - 0x0042ea7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042ea7d(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iStack_88;
  int *piStack_84;
  
  FUN_00879bb8();
  piStack_84 = (int *)0x78;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&iStack_88,0x474);
  iVar3 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004115d9(iVar3);
  FUN_00404e7f(iVar3);
  iVar3 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0040263d(iVar3);
  iStack_88 = FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_84 = (int *)FUN_00402bc3(unaff_EBP + -0x70);
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42eb02;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_84 = (int *)0x42eb0e;
  FUN_004027eb();
  piStack_84 = (int *)0xffffffff;
  *(int **)(unaff_EBP + -0x18) = &iStack_88;
  FUN_00679e4e(&iStack_88,0x3b6);
  iVar3 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(iVar3);
  FUN_00404e7f(iVar3);
  iVar3 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0040263d(iVar3);
  iStack_88 = FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_84 = (int *)FUN_00402bc3(unaff_EBP + -0x70);
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42eb77;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_84 = (int *)0x42eb83;
  FUN_004027eb();
  piStack_84 = (int *)0xffffffff;
  *(int **)(unaff_EBP + -0x14) = &iStack_88;
  FUN_00679e4e(&iStack_88,0x3b7);
  iVar3 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004115d9(iVar3);
  FUN_00404e7f(iVar3);
  iVar3 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0040263d(iVar3);
  iStack_88 = FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_84 = (int *)FUN_00402bc3(unaff_EBP + -0x70);
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ebec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_84 = (int *)0x42ebf8;
  FUN_004027eb();
  piStack_84 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_88;
  FUN_00679e4e(&iStack_88,0x3b8);
  iVar3 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004115d9(iVar3);
  FUN_00404e7f(iVar3);
  iVar3 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0040263d(iVar3);
  iStack_88 = FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar3 = FUN_00412550();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_84 = (int *)FUN_00402bc3(unaff_EBP + -0x70);
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ec60;
    FUN_00878dfb();
  }
  piStack_84 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_84 != (int *)0x0) {
    iStack_88 = 0x42ec71;
    (**(code **)(*piStack_84 + 8))();
  }
  piStack_84 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_88;
  FUN_00679e4e(&iStack_88,0x3b9);
  iVar4 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004115d9(iVar4);
  FUN_00404e7f(iVar4);
  iVar4 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0040263d(iVar4);
  iStack_88 = FUN_004048a4(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar4 = FUN_00412550();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_84 = (int *)FUN_00402bc3(unaff_EBP + -0x70);
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ecd9;
    FUN_00878dfb();
  }
  piStack_84 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_84 != (int *)0x0) {
    iStack_88 = 0x42ecea;
    (**(code **)(*piStack_84 + 8))();
  }
  piStack_84 = (int *)0x3;
  iStack_88 = iVar4;
  FUN_004031b7();
  piStack_84 = (int *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_88 = iVar3;
  FUN_004031b7();
  piStack_84 = (int *)0x3;
  iStack_88 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_004031b7();
  piStack_84 = (int *)0x3;
  iStack_88 = *(int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_004031b7();
  piStack_84 = (int *)0x3;
  iStack_88 = *(int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004031b7();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar1 == (int *)0x0) {
    piStack_84 = (int *)0x80004003;
    iStack_88 = 0x42ed4a;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x70);
  iStack_88 = unaff_EBP + -0x60;
  FUN_004250ac(unaff_EBP + -0x80,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x30,
               unaff_EBP + -0x40,unaff_EBP + -0x50);
  piStack_84 = (int *)(unaff_EBP + -0x80);
  iStack_88 = 0x42ed75;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ed80;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_88 = 0x42ed8d;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ed98;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_88 = 0x42eda5;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42edb0;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_88 = 0x42edbd;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42edc8;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_88 = 0x42edd5;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42ede0;
    FUN_00878dfb();
  }
  piStack_84 = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_88 = 0x42eded;
  piStack_84 = (int *)FUN_00402bc3();
  if ((int)piStack_84 < 0) {
    iStack_88 = 0x42edf8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    iStack_88 = 0x42ee06;
    piStack_84 = piVar1;
    (**(code **)(*piVar1 + 8))();
  }
  piStack_84 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_84 != (int *)0x0) {
    iStack_88 = 0x42ee17;
    (**(code **)(*piStack_84 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


