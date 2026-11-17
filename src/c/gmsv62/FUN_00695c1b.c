/* FUN_00695c1b - 0x00695c1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00695c1b(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0048f37f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x94) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xff999999;
  iVar1 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,0,0,0x6b,0x9e,0x9b,0x11,unaff_EBP + -0x98);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar3 = 0;
  while ((*(int *)(extraout_ECX + 0xac) != 0 &&
         (uVar3 < *(uint *)(*(int *)(extraout_ECX + 0xac) + -4)))) {
    FUN_0049e176(*(undefined4 *)(*(int *)(extraout_ECX + 0xac) + uVar3 * 4),uVar3 + 1000);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    uVar3 = *(uint *)(unaff_EBP + -0x10);
  }
  iVar1 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))
            (extraout_ECX,1,0,0x6b,0xb2,0x9b,0x11,unaff_EBP + -0x98);
  if (*(int *)(extraout_ECX + 0xb4) == 0) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xced);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0049e176(uVar2,9);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xce7);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0049e176(uVar2,3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb79);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0049e176(uVar2,4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xce9);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0049e176(uVar2,5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xcea);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0049e176(uVar2,6);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xceb);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0049e176(uVar2,7);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xcec);
    uVar2 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0049e176(uVar2,8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xff000000;
  puVar4 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x44) = *puVar4;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0x18;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 8))
            (extraout_ECX,2000,0x6e,200,0x91,0xf,unaff_EBP + -0x58);
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 8))
            (extraout_ECX,0x7d1,0x6e,0xd7,0x91,0xf,unaff_EBP + -0x58);
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))
            (extraout_ECX,0x7d2,0x6e,0xe6,0x91,0xf,unaff_EBP + -0x58);
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xa0) + 8))
            (extraout_ECX,0x7d3,0x6e,0xf5,0x91,0xf,unaff_EBP + -0x58);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


