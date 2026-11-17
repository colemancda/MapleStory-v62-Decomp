/* FUN_0075fde1 - 0x0075fde1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075fde1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 local_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  iStack_3c = 0;
  iStack_40 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &local_44;
  FUN_00679e4e(&local_44,0x7f3);
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_3c = 0x9d1;
  iStack_40 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  local_44 = 0x75fe35;
  iStack_3c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x75fe42;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_3c = *(int *)(unaff_EBP + -0x10) + -0xc;
    iStack_40 = 0x75fe56;
    FUN_00403384();
  }
  iStack_3c = 0x578;
  iStack_40 = 0x75fe68;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_3c = 0;
  }
  else {
    iStack_3c = 0x75fe7a;
    iStack_3c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_40 = 0x75fe8b;
  iVar1 = FUN_00450382();
  iStack_3c = unaff_EBP + -0x28;
  iStack_40 = 1;
  local_44 = 6;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,2000,0xdc);
  iVar1 = FUN_004029b9(0x74);
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048b9e9(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))(extraout_ECX,1000,1,3,0xda,0x21,0x70,0);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x70) + 0x34) = 0xd7;
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  FUN_0040ee87(*puVar3,1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = *piVar4;
  *(int **)(unaff_EBP + -0x10) = piVar4;
  iVar1 = (**(code **)(iVar1 + 0xfc))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar1 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xfffffffe);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  FUN_0076060a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


