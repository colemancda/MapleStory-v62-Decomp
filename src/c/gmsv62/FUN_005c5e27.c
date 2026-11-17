/* FUN_005c5e27 - 0x005c5e27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005c5e27(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x3b4) + 0x20);
  if (iVar2 == 0) {
    FUN_004031b7(0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_0040eea9();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar1 = *(int **)(unaff_EBP + -0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0xc);
    *(int **)(unaff_EBP + -0x10) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (piVar1 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0040eea9();
    if (iVar2 < 1) {
      uVar3 = 0;
    }
    else {
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      uVar3 = FUN_0040eea9();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


