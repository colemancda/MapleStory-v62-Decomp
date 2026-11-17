/* ptr_00455f6c - 0x00455f6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00455f6c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(int *)(unaff_EBP + -4) = unaff_EBX;
  *(int *)(unaff_EBP + -0x4c) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xa0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xe;
  *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != unaff_EBX) {
    FUN_004562b1();
  }
  uVar3 = (undefined1)unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = uVar3;
  FUN_0045e1ff();
  (**(code **)(**(int **)(unaff_ESI + 0x9c) + 0x20))();
  FUN_00499fb8(*(int *)(unaff_ESI + 0x7c) == 2);
  if ((*(byte *)(unaff_ESI + 0x7c) & 2) == 0) {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x9c) + 4) + 0x1c))();
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0xe6;
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar3;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0xa4) + 0x20))();
  FUN_00499fb8(*(int *)(unaff_ESI + 0x7c) == 4);
  if ((*(byte *)(unaff_ESI + 0x7c) & 4) == 0) {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xa4) + 4) + 0x1c))();
  }
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar3;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x20))();
  FUN_00499fb8(*(int *)(unaff_ESI + 0x7c) == 1);
  if ((*(byte *)(unaff_ESI + 0x7c) & 1) == 0) {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xac) + 4) + 0x1c))();
  }
  *(int *)(unaff_EBP + -0x18) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  *(undefined1 *)(unaff_EBP + -4) = uVar3;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00457a09();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


