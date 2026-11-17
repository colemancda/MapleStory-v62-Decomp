/* FUN_00735613 - 0x00735613 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00735613(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar2 = *(int *)(extraout_ECX + 0xac);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x14,0xb2a);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    uVar1 = FUN_00679d86(unaff_EBP + -0x18,0xb29);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00419192(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00402676();
  }
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,2000,0x99,0x4a,1,unaff_EBP + -0x28);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d1,0x99,0x5c,1,unaff_EBP + -0x28);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d2,0x99,0x74,1,unaff_EBP + -0x28);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d3,0x99,0x86,1,unaff_EBP + -0x28);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d4,0x99,0x98,1,unaff_EBP + -0x28);
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00450382(uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d5,0x99,0xaa,1,unaff_EBP + -0x28);
  uVar1 = FUN_00679d86(unaff_EBP + -0x18,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x20))(extraout_ECX,2,0x9c,6,0,unaff_EBP + -0x28);
  FUN_00735a47();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


