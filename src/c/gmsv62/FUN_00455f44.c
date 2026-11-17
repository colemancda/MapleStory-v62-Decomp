/* FUN_00455f44 - 0x00455f44 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00455f44(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00457518();
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xa0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
            (extraout_ECX,1000,0x19,*(int *)(extraout_ECX + 0x20) + -0x5b,unaff_EBP + -0x50);
  FUN_00499fb8(*(int *)(extraout_ECX + 0x7c) == 2);
  if ((*(byte *)(extraout_ECX + 0x7c) & 2) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x9c) + 4) + 0x1c))(0);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0xe6;
  iVar1 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e1ff(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))
            (extraout_ECX,0x3e9,0x19,*(int *)(extraout_ECX + 0x20) + -0x4b,unaff_EBP + -0x50);
  FUN_00499fb8(*(int *)(extraout_ECX + 0x7c) == 4);
  if ((*(byte *)(extraout_ECX + 0x7c) & 4) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xa4) + 4) + 0x1c))(0);
  }
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
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))
            (extraout_ECX,0x3ea,0x19,*(int *)(extraout_ECX + 0x20) + -0x3b,unaff_EBP + -0x50);
  FUN_00499fb8(*(int *)(extraout_ECX + 0x7c) == 1);
  if ((*(byte *)(extraout_ECX + 0x7c) & 1) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0xac) + 4) + 0x1c))(0);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
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
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))
            (extraout_ECX,1,0x9d,*(int *)(extraout_ECX + 0x20) + -0x1f,0,unaff_EBP + -0x24);
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00450382(uVar2);
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))
            (extraout_ECX,2,0xcf,*(int *)(extraout_ECX + 0x20) + -0x1f,0,unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00457a09();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


