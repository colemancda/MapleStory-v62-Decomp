/* FUN_0054e8cb - 0x0054e8cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0054e8cb(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_a8;
  int *piStack_a4;
  int iStack_a0;
  int iStack_9c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  iStack_9c = 0x54e8ef;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_9c = 0x54e8fd;
  FUN_00403191();
  iStack_9c = 0;
  iStack_a0 = unaff_EBP + -0x54;
  piStack_a4 = (int *)(unaff_EBP + -100);
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_a8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_a8,0xf39);
  iVar1 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a0 = 0x54e949;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    iStack_9c = 0x54e964;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_9c = 0x54e972;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_9c = 0x54e97f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_9c = 0x54e98a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_9c = 0x54e997;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_9c = 0x54e9a2;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_9c = 0x54e9af;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x54e9ba;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  iStack_9c = 0;
  puStack_a8 = (undefined1 *)&iStack_a0;
  *(int **)(unaff_EBP + -0x20) = &iStack_a0;
  piStack_a4 = (int *)0xf3d;
  iStack_a0 = iVar1;
  FUN_00679e4e();
  piStack_a4 = (int *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_a8 = (undefined1 *)0x54e9e2;
  FUN_0040263d();
  puStack_a8 = (undefined1 *)0x54e9e9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_a0 = 0x54e9f4;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_9c = 0x54ea0a;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_9c = 0x54ea18;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_9c = 0x54ea28;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_9c = 0x54ea33;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_9c = 0x54ea43;
    FUN_00878dfb();
  }
  iStack_9c = 0x54ea4f;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_9c = 0x54ea5c;
  FUN_004035f5();
  FUN_004027b3();
  iStack_9c = 0x54ea6e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iStack_9c = 0x54ea80;
      FUN_00878dfb();
    }
    piStack_a4 = *(int **)(unaff_EBP + -0x14);
    iStack_9c = unaff_EBP + -0x40;
    iStack_a0 = 1;
    puStack_a8 = (undefined1 *)0x54ea93;
    iVar1 = (**(code **)(*piStack_a4 + 0xc))();
    if (iVar1 != 0) break;
    iStack_9c = unaff_EBP + -0x1c;
    iStack_a0 = 0x54eaa8;
    iVar1 = unaff_EBP + -0x40;
    FUN_00405a23();
    iStack_9c = iVar1;
    iStack_a0 = unaff_EBP + -0x1c;
    *(int **)(unaff_EBP + -0x44) = &iStack_9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_a4 = (int *)0x54eabe;
    FUN_004059fd();
    iStack_a0 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_a4 = (int *)0x54ead1;
    FUN_0040263d();
    piStack_a4 = (int *)0x54ead8;
    iStack_9c = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_a0 = 0x54eae2;
    uVar3 = FUN_00412550();
    iStack_a0 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_a4 = (int *)0x54eaf4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x54eb01;
      FUN_00878dfb();
    }
    puVar4 = (undefined4 *)FUN_00518b2e();
    *puVar4 = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    iStack_9c = 0x54eb2d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_9c = 0x54eb3c;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_9c = 0x54eb4e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_9c = 0x54eb59;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_9c = 0x54eb6a;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_9c = 0x54eb7b;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_9c = 0x54eb8c;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


