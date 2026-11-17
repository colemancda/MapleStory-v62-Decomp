/* FUN_00717e43 - 0x00717e43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00717e43(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xdf0);
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
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,2000,0xb9,0xdc,1,unaff_EBP + -0x24);
  }
  if (*(int *)(extraout_ECX + 0x90) == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xdf0);
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
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d1,0xb9,0xf3,1,unaff_EBP + -0x24);
  }
  if (*(int *)(extraout_ECX + 0x98) == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0xdf1);
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
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d2,0xaf,0x4c,1,unaff_EBP + -0x24);
  }
  if (*(int *)(extraout_ECX + 0xa0) == 0) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x7d4,0xe5,8,1,unaff_EBP + -0x24);
  }
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x10,10);
  if (*piVar3 != 0) {
    InterlockedIncrement((LONG *)(*piVar3 + 8));
  }
  FUN_00402fa6();
  *(int *)(unaff_EBP + -0x48) = *piVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x100;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045e196(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 8))
            (extraout_ECX,0x7d3,0x12,0x4e,0x96,0xd,unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


