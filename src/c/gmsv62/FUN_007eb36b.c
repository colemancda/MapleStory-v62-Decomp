/* FUN_007eb36b - 0x007eb36b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eb36b(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0048f37f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xff999999;
  *(undefined4 *)(unaff_EBP + -0x48) = 2;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
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
  (**(code **)(**(int **)(extraout_ECX + 0x63c) + 0x20))
            (extraout_ECX,0x3ea,0,0x13,*(int *)(extraout_ECX + 0x20) + -0x49,0xe6,0x12,
             unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
            (extraout_ECX,1,0x9e,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x20);
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
            (extraout_ECX,2,0xd0,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x20);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x63c));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


