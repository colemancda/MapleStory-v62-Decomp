/* FUN_006d4737 - 0x006d4737 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d4737(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(uint *)(unaff_EBP + -0x10) = (iVar3 != 2) + 5;
  piVar1 = *(int **)(extraout_ECX + 0x8c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    FUN_00450463();
  }
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))
            (extraout_ECX,1000,((*(int *)(extraout_ECX + 100) != 2) - 1 & 0xffffff92) + 0x114,
             *(undefined4 *)(unaff_EBP + -0x10),2,unaff_EBP + -0x28);
  if (*(int **)(extraout_ECX + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x94) + 0xc))();
    FUN_00450463();
  }
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x4f1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
            (extraout_ECX,0x3e9,((*(int *)(extraout_ECX + 100) != 2) - 1 & 0xffffff92) + 0xf8,
             *(undefined4 *)(unaff_EBP + -0x10),2,unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 100) == 2) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x94) + 4) + 0x1c))(0);
  }
  if (*(int **)(extraout_ECX + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0xc))();
    FUN_00450463();
  }
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x4f2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
            (extraout_ECX,0x3ea,((*(int *)(extraout_ECX + 100) != 2) - 1 & 0xffffff92) + 0x106,
             *(undefined4 *)(unaff_EBP + -0x10),2,unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 100) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x9c) + 4) + 0x1c))(0);
  }
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xff000000;
  uVar2 = FUN_00679e4e(unaff_EBP + -0x10,10);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x4c) = **(undefined4 **)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0xffffffff;
  piVar1 = *(int **)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -0x5c) = 2;
  *(undefined4 *)(unaff_EBP + -0x54) = 2;
  *(undefined4 *)(unaff_EBP + -0x50) = 1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0x100;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    FUN_0045e60b();
  }
  if (*(int **)(extraout_ECX + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0xac) + 0xc))();
    FUN_0045e5c9();
  }
  iVar3 = *(int *)(extraout_ECX + 100);
  if (iVar3 == 0) {
    *(undefined4 *)(extraout_ECX + 0x68) = 0xb;
    iVar3 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004abf25();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0048b9e9(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))(extraout_ECX,0x3ed,1,3,0x111,0x94,0x9a,0);
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + -4);
    }
    FUN_004ad003((iVar3 - *(int *)(extraout_ECX + 0x68)) + 1);
    *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x34) = 0xfa;
    iVar3 = FUN_004029b9(0xb8);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004a0726();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0045e196(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xac) + 8))
              (extraout_ECX,0x3ec,9,0x13e,0xcf,0xf,unaff_EBP + -0x60);
    if (*(int **)(extraout_ECX + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0xc))();
      FUN_00450463();
    }
    uVar2 = FUN_00679d86(unaff_EBP + -0x10,0xa69);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00450382(uVar2);
    iVar3 = **(int **)(extraout_ECX + 0xa4);
    uVar2 = 0x13d;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        *(undefined4 *)(extraout_ECX + 0x68) = 0;
      }
      goto LAB_006d4d28;
    }
    *(undefined4 *)(extraout_ECX + 0x68) = 9;
    iVar3 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004abf25();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0048b9e9(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))(extraout_ECX,0x3ed,1,3,0x111,0x37,0x7d,0);
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x78) + -4);
    }
    FUN_004ad003((iVar3 - *(int *)(extraout_ECX + 0x68)) + 1);
    *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x34) = 0xfa;
    iVar3 = FUN_004029b9(0xb8);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004a0726();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0045e196(uVar2);
    (**(code **)(**(int **)(extraout_ECX + 0xac) + 8))
              (extraout_ECX,0x3ec,9,0xc2,0xcf,0xf,unaff_EBP + -0x60);
    if (*(int **)(extraout_ECX + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0xc))();
      FUN_00450463();
    }
    uVar2 = FUN_00679d86(unaff_EBP + -0x14,0xa69);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00450382(uVar2);
    iVar3 = **(int **)(extraout_ECX + 0xa4);
    uVar2 = 0xc1;
  }
  (**(code **)(iVar3 + 0x20))(extraout_ECX,0x3eb,0xf9,uVar2,0,unaff_EBP + -0x28);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa4) + 4) + 0x1c))(0);
LAB_006d4d28:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


