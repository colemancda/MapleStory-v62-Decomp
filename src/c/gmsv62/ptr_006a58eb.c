/* ptr_006a58eb - 0x006a58eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a58eb(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uStack_c;
  int iStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0x6a58f0;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    piStack_4 = (int *)0x6a58fb;
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x14) = unaff_EBX;
  while( true ) {
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      piStack_4 = (int *)0x6a590d;
      FUN_00878dfb();
    }
    uVar2 = FUN_0040cf4d();
    if (uVar2 <= *(uint *)(unaff_EBP + -0x14)) break;
    piStack_4 = (int *)0xbac;
    iStack_8 = unaff_EBP + -0x30;
    uStack_c = 0x6a5933;
    uVar3 = FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_4 = (int *)0x6a5942;
    uVar3 = FUN_00483ba7();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
    piStack_4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_8 = 0x6a5954;
    iStack_8 = FUN_00449713();
    uStack_c = *(undefined4 *)(unaff_EBP + -0x28);
    FUN_00434e21();
    piStack_4 = (int *)0x6a5967;
    iStack_8 = FUN_00449713();
    *(int ***)(unaff_EBP + -0x28) = &piStack_4;
    uStack_c = 0x6a5973;
    FUN_00448a17();
    iStack_8 = unaff_EBP + -0x88;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_c = 0x6a5986;
    FUN_0040263d();
    uStack_c = 0x6a598d;
    piStack_4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_8 = 0x6a5997;
    piStack_4 = (int *)FUN_004343c5();
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    iStack_8 = 0x6a59a7;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    piStack_4 = (int *)0x6a59b7;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      piStack_4 = (int *)0x6a59c2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00414ebb();
    piStack_4 = *(int **)(unaff_EBP + -0x18);
    iStack_8 = 0x6a59f2;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  }
  piStack_4 = (int *)(unaff_ESI + 0x94);
  iStack_8 = unaff_ESI + 0x90;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_c;
  FUN_00450368(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004503f5();
  iVar1 = FUN_007e3c88();
  *(int *)(unaff_ESI + 0x9c) = (iVar1 + -0x13d) / 7 + -0xf;
  piVar4 = (int *)FUN_004029b9(0x74);
  *(int **)(unaff_EBP + -0x28) = piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (piVar4 == unaff_EBX) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0048b9e9(uVar3);
  (**(code **)(**(int **)(unaff_ESI + 0x8c) + 0x20))();
  FUN_004ad003((*(int *)(unaff_ESI + 0x9c) < 1) + 1 + *(int *)(unaff_ESI + 0x9c));
  *(undefined4 *)(*(int *)(unaff_ESI + 0x8c) + 0x34) = 0x163;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_ESI + 0x74) = iVar1;
  *(undefined4 *)(unaff_ESI + 0xa4) = *(undefined4 *)(iVar1 + 0x4e4);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar4 != unaff_EBX) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
    FUN_004504e6(unaff_EBX);
    *(int **)(unaff_EBP + -0x34) = unaff_EBX;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


