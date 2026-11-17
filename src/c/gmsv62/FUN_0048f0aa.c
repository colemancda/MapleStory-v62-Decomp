/* FUN_0048f0aa - 0x0048f0aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048f0aa(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  FUN_0048f37f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x94) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xff999999;
  iVar2 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00495bdd(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))
            (extraout_ECX,2000,3,0x67,0x34,0x8c,0x10,unaff_EBP + -0x98);
  FUN_0049e176(&DAT_00978474,0);
  uVar5 = 0;
  while ((iVar2 = **(int **)(extraout_ECX + 0x94), iVar2 != 0 && (uVar5 < *(uint *)(iVar2 + -4)))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uVar3 = *(undefined4 *)(iVar2 + 4 + uVar5 * 8);
    uVar1 = *(undefined4 *)(iVar2 + uVar5 * 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,s__d____d_00964d0c,uVar1,uVar3);
    uVar5 = uVar5 + 1;
    FUN_0049e176(*(undefined4 *)(unaff_EBP + -0x10),uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,1,0x3a,0x68,0,unaff_EBP + -0x20);
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))
            (extraout_ECX,2,0x9f,0x68,0,unaff_EBP + -0x20);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xff000000;
  piVar4 = (int *)FUN_00679e4e(unaff_EBP + -0x10,10);
  if (*piVar4 != 0) {
    InterlockedIncrement((LONG *)(*piVar4 + 8));
  }
  FUN_00402fa6();
  *(int *)(unaff_EBP + -0x44) = *piVar4;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045e196(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 8))
            (extraout_ECX,1000,0x67,0x1b,0x8c,0x10,unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


