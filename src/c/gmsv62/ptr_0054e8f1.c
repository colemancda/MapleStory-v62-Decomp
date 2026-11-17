/* ptr_0054e8f1 - 0x0054e8f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0054e8f1(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *unaff_EDI;
  undefined1 *puStack_14;
  int *piStack_10;
  int iStack_c;
  
  *(int **)(unaff_EBP + -4) = unaff_EDI;
  FUN_00403191();
  iStack_c = unaff_EBP + -0x54;
  piStack_10 = (int *)(unaff_EBP + -100);
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_14,0xf39);
  iVar2 = unaff_EBP + -0x74;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c = 0x54e949;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x2c) = piVar1;
  *(int **)(unaff_EBP + -0x18) = unaff_EDI;
  if (piVar1 != unaff_EDI) {
    iVar2 = FUN_00404b30();
    if ((iVar2 < (int)unaff_EDI) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < (int)unaff_EDI) {
    FUN_00878dfb();
    iVar2 = extraout_ECX;
  }
  puStack_14 = (undefined1 *)&iStack_c;
  *(int **)(unaff_EBP + -0x20) = &iStack_c;
  piStack_10 = (int *)0xf3d;
  iStack_c = iVar2;
  FUN_00679e4e();
  piStack_10 = (int *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_14 = (undefined1 *)0x54e9e2;
  FUN_0040263d();
  puStack_14 = (undefined1 *)0x54e9e9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c = 0x54e9f4;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(int **)(unaff_EBP + -0x10) = unaff_EDI;
  if (piVar1 != unaff_EDI) {
    iVar2 = FUN_00404b30();
    if ((iVar2 < (int)unaff_EDI) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x10) == unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004035f5();
  FUN_004027b3();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  *(int **)(unaff_EBP + -0x24) = unaff_EDI;
  while( true ) {
    if (*(int **)(unaff_EBP + -0x14) == unaff_EDI) {
      FUN_00878dfb();
    }
    piStack_10 = *(int **)(unaff_EBP + -0x14);
    iStack_c = 1;
    puStack_14 = (undefined1 *)0x54ea93;
    iVar2 = (**(code **)(*piStack_10 + 0xc))();
    if (iVar2 != 0) break;
    iStack_c = 0x54eaa8;
    FUN_00405a23();
    iStack_c = unaff_EBP + -0x1c;
    *(undefined1 **)(unaff_EBP + -0x44) = &stack0xfffffff8;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_10 = (int *)0x54eabe;
    FUN_004059fd();
    iStack_c = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_10 = (int *)0x54ead1;
    FUN_0040263d();
    piStack_10 = (int *)0x54ead8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_c = 0x54eae2;
    uVar4 = FUN_00412550();
    iStack_c = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_10 = (int *)0x54eaf4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
    puVar5 = (undefined4 *)FUN_00518b2e();
    *puVar5 = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EDI) {
      FUN_004030b1();
      *(int **)(unaff_EBP + -0x1c) = unaff_EDI;
    }
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EDI) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


