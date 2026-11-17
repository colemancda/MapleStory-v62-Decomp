/* ptr_006a575f - 0x006a575f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a575f(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iStack_20;
  
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  uVar5 = SUB41(unaff_EBX,0);
  *(undefined1 *)(unaff_EBP + -4) = uVar5;
  FUN_00402676();
  piVar1 = (int *)FUN_004029b9();
  *(int **)(unaff_EBP + -0x30) = piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != unaff_EBX) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar5;
  FUN_00450382();
  (**(code **)(**(int **)(unaff_ESI + 0x84) + 0x20))();
  piVar1 = (int *)FUN_004029b9();
  *(int **)(unaff_EBP + -0x18) = piVar1;
  if (piVar1 == unaff_EBX) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_008e84a0;
    iStack_20 = 0x6a57f1;
    _memset(piVar1,(int)unaff_EBX,0xc);
    piVar1 = *(int **)(unaff_EBP + -0x18);
    *piVar1 = (int)&PTR_FUN_008e8ea8;
    piVar1[4] = 0x15e;
    piVar1[3] = 7;
  }
  *(int **)(unaff_EBP + -0x34) = piVar1;
  if (piVar1 != unaff_EBX) {
    InterlockedIncrement(piVar1 + 1);
  }
  *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191();
  iStack_20 = unaff_EBP + -0x58;
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffffdc;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e(&stack0xffffffdc,0xf6f);
  iVar2 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x20) = piVar1;
  *(int **)(unaff_EBP + -0x10) = unaff_EBX;
  if (((piVar1 != unaff_EBX) && (iVar2 = FUN_00404b30(), iVar2 < (int)unaff_EBX)) &&
     (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  while( true ) {
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    uVar3 = FUN_0040cf4d();
    if (uVar3 <= *(uint *)(unaff_EBP + -0x14)) break;
    iStack_20 = 0x6a5933;
    uVar4 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uVar4 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00449713();
    iStack_20 = *(int *)(unaff_EBP + -0x28);
    FUN_00434e21();
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffe8;
    iStack_20 = 0x6a5973;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_20 = 0x6a5986;
    FUN_0040263d();
    iStack_20 = 0x6a598d;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004343c5();
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00414ebb();
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  *(int **)(unaff_EBP + -0x28) = &iStack_20;
  FUN_00450368();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004503f5();
  iVar2 = FUN_007e3c88();
  *(int *)(unaff_ESI + 0x9c) = (iVar2 + -0x13d) / 7 + -0xf;
  piVar1 = (int *)FUN_004029b9();
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (piVar1 != unaff_EBX) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0048b9e9();
  (**(code **)(**(int **)(unaff_ESI + 0x8c) + 0x20))();
  FUN_004ad003((*(int *)(unaff_ESI + 0x9c) < 1) + 1 + *(int *)(unaff_ESI + 0x9c));
  *(undefined4 *)(*(int *)(unaff_ESI + 0x8c) + 0x34) = 0x163;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_ESI + 0x74) = iVar2;
  *(undefined4 *)(unaff_ESI + 0xa4) = *(undefined4 *)(iVar2 + 0x4e4);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != unaff_EBX) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = uVar5;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
    FUN_004504e6(unaff_EBX);
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


