/* FUN_0043dd27 - 0x0043dd27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0043dd54) */

void FUN_0043dd27(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8cb8;
  iVar2 = extraout_ECX[0x335];
  *(undefined4 *)(unaff_EBP + -4) = 0x12;
  if (iVar2 != 0) {
    piVar1 = (int *)extraout_ECX[0x335];
    *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb34;
    iVar2 = *piVar1;
    *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x18) = DAT_0097bb3c;
    *(int **)(unaff_EBP + -0x10) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0xfc))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
    }
  }
  piVar1 = (int *)extraout_ECX[0x337];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x336];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x335];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x334];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x333];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x332];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x331];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x330];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32f];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32e];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32d];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32c];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32b];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32a];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x12f,0x3f4,2,FUN_0043dca3);
  if (extraout_ECX[0x112] != 0) {
    FUN_004030b1();
    extraout_ECX[0x112] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445c00();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)((int)extraout_ECX + 0x1b1) = &PTR_LAB_008e84a0;
  extraout_ECX[1] = &PTR_LAB_008e84a0;
  return;
}


