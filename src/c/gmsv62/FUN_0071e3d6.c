/* FUN_0071e3d6 - 0x0071e3d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071e3d6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  
  FUN_00879bb8();
  uStack_a0 = 0;
  uStack_a4 = 0;
  *(undefined4 **)(unaff_EBP + -0x18) = &local_a8;
  FUN_00679e4e(&local_a8,0xff0);
  FUN_008163ca();
  *(undefined4 *)(extraout_ECX + 0x570) = 0xffffffff;
  uStack_a0 = 0x74;
  uStack_a4 = 0x71e421;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = 0x71e432;
    uStack_a0 = FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_a4 = 0x71e443;
  FUN_0048b9e9();
  uStack_a0 = 0;
  uStack_a4 = 0x7d;
  local_a8 = 0x36;
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))(extraout_ECX,0xbc2,1,3,0xb9);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x70) + 0x34) = 100;
  FUN_004ad003(3);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,3000,0x9a,0x109,1,unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 0x570) < 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x68) + 4) + 0x1c))(0);
  }
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x10b5);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0049967b(uVar2,1,1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  FUN_0045621e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xf;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,0xbc3,0xa6,0xf1,unaff_EBP + -100);
  FUN_00499fb8(0);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x78) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x80) = 0xff000000;
  puVar3 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x14,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x88) = *puVar3;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xc;
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 8))
            (extraout_ECX,0xbc4,0x3b,0xd7,0x75,0x10,unaff_EBP + -0x9c);
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
  piVar4 = (int *)*puVar3;
  *(undefined2 *)(unaff_EBP + -0x38) = 0xd;
  *(int **)(unaff_EBP + -0x30) = piVar4;
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  (**(code **)(iVar1 + 4))(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0xfc))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x10);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xffffffff);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


