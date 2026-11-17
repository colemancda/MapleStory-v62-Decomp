/* FUN_00696c8e - 0x00696c8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00696c8e(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,1,0xc1,0x8d,0,unaff_EBP + -0x24);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))
            (extraout_ECX,2,0xf2,0x8d,0,unaff_EBP + -0x24);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))(extraout_ECX,2,0x115,6,0,unaff_EBP + -0x24);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x4c) = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  puVar3 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xc;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e196(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 8))
            (extraout_ECX,1000,0x26,0x43,0x96,0xd,unaff_EBP + -0x5c);
  *(undefined4 *)(unaff_EBP + -0x2c) = 200;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e196(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 8))
            (extraout_ECX,0x3e9,0xd,0x72,0x10f,0xd,unaff_EBP + -0x5c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x90));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


