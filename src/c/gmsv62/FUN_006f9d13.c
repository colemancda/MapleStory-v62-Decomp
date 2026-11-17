/* FUN_006f9d13 - 0x006f9d13 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006f9d13(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_008140e5();
  *extraout_ECX = &PTR_FUN_008f0520;
  extraout_ECX[1] = &PTR_LAB_008f04d4;
  extraout_ECX[2] = &PTR_FUN_008f04d0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0083afc9();
  FUN_006f9df1(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar2 = FUN_0042fb34(0,1,0,0);
  uVar3 = FUN_0042fb0a(uVar2);
  uVar4 = FUN_00424f08(uVar3);
  uVar5 = FUN_00424ee1(uVar4);
  FUN_0081420c(uVar5,uVar4,uVar3,uVar2,uVar6,uVar7,uVar8,uVar9);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


