/* FUN_00726614 - 0x00726614 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00726614(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x68);
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9a0(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 8))(extraout_ECX,2000,1,5,0x3f,0xaa,0);
  iVar1 = *(int *)(extraout_ECX + 0x7c);
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 0x2b;
  iVar1 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004abf25();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0048b9e9(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))(extraout_ECX,0x7d1,1,3,0x99,99,0x9b,0);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x84) + 0x34) = 0x9c;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  uVar2 = FUN_00679d86(unaff_EBP + -0x18,0xb2a);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x77;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x88;
  do {
    iVar1 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00450382(uVar2);
    (**(code **)(**(int **)(iVar1 + 4) + 0x20))
              (extraout_ECX,*(int *)(unaff_EBP + -0x14) + 0x7da,0x83,
               *(undefined4 *)(unaff_EBP + -0x10),1,unaff_EBP + -0x2c);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
  } while (*(int *)(unaff_EBP + -0x10) < 0x117);
  uVar2 = FUN_00679d86(unaff_EBP + -0x18,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))(extraout_ECX,2,0x9b,6,0,unaff_EBP + -0x2c);
  FUN_004b2699(0);
  FUN_00727698();
  FUN_00727600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


