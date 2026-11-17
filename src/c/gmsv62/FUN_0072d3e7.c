/* FUN_0072d3e7 - 0x0072d3e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072d3e7(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 local_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  iStack_3c = 0;
  iStack_40 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &local_44;
  FUN_00679e4e(&local_44,0x782);
  FUN_008163ca();
  iStack_3c = 0x784;
  iStack_40 = unaff_EBP + -0x10;
  local_44 = 0x72d42c;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_3c = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_40 = 0x72d43c;
  FUN_007599aa();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_3c = 0x72d448;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_3c = 0x9d1;
  iStack_40 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  local_44 = 0x72d46b;
  iStack_3c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_40 = 0x72d478;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x72d484;
  FUN_00402676();
  iStack_3c = 0x578;
  iStack_40 = 0x72d493;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    iStack_3c = 0;
  }
  else {
    iStack_3c = 0x72d4a5;
    iStack_3c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x72d4b6;
  iVar2 = FUN_00450382();
  iStack_3c = unaff_EBP + -0x28;
  iStack_40 = 1;
  local_44 = 0xb6;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,1000,0x9b);
  puVar1 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  FUN_0040ee87(*puVar1,1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x14);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = (**(code **)(*piVar3 + 0xb4))(piVar3,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


