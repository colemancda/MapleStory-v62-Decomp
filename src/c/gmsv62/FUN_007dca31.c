/* FUN_007dca31 - 0x007dca31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007dca31(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0x96;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffff;
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,1000,99,0x28,0x93,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))
            (extraout_ECX,0x3e9,99,0x46,0x69,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))
            (extraout_ECX,0x3ea,0xef,0x46,unaff_EBP + -0x58);
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))
            (extraout_ECX,0x3eb,99,100,0x69,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 0x20))
            (extraout_ECX,0x3ec,0xef,100,unaff_EBP + -0x58);
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x98) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x94) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x90) = 0xff999999;
  iVar1 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x20))
            (extraout_ECX,0x3ed,0,0x43,0x7f,0xaf,0x12,unaff_EBP + -0x98);
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xb0) + 0x20))
            (extraout_ECX,0x3ee,99,0xa0,0x93,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xb8) + 0x20))
            (extraout_ECX,0x3ef,99,0xbe,0x93,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004afac2();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007e199e(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xc0) + 0x20))
            (extraout_ECX,0x3f0,99,0xdc,0x93,unaff_EBP + -0x18);
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xa0) + 0x20))
            (extraout_ECX,0x3f1,0x3e,0xfa,unaff_EBP + -0x58);
  iVar1 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00495bdd(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 200) + 0x20))
            (extraout_ECX,0x3f2,0,0x43,0x116,0xaf,0x12,unaff_EBP + -0x98);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xd0) + 0x20))
            (extraout_ECX,1,0xc2,0x156,0,unaff_EBP + -0x28);
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xd8) + 0x20))
            (extraout_ECX,2,0xf4,0x156,0,unaff_EBP + -0x28);
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x31c);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0049e176(uVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x31d);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0049e176(uVar2,1);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  FUN_0049e176(&DAT_0096c3b8,2);
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x100d);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0049e176(uVar2,0);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x100e);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0049e176(uVar2,1);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x100f);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0049e176(uVar2,2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x1010);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0049e176(uVar2,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x78));
  FUN_004b0b3d(4);
  FUN_004b0b3d(0x14);
  FUN_004b0b3d(0x14);
  FUN_004b0b3d(0x14);
  FUN_004b0b3d(0x14);
  FUN_004b0b3d(0x14);
  puVar3 = (undefined4 *)(DAT_00978134 + 0x58);
  puVar4 = puVar3;
  puVar5 = (undefined4 *)(extraout_ECX + 0xec);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)(extraout_ECX + 0x11c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xe8) + 0x20))
            (extraout_ECX,0x3f4,0x3e,0x12f,unaff_EBP + -0x58);
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xe0) + 0x20))
            (extraout_ECX,0x3f3,0x3e,0x13a,unaff_EBP + -0x58);
  FUN_007dd2ec();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00457a09();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


