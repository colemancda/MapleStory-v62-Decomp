/* FUN_005e91be - 0x005e91be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e91be(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eccc0;
  extraout_ECX[-1] = &PTR_LAB_008ecc9c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ecc98;
  *(undefined4 *)(unaff_EBP + -4) = 0x17;
  FUN_005d0fd7();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0056a7a6();
  iVar1 = extraout_ECX[0x41];
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar1 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x41] = 0;
  }
  FUN_004497b5();
  piVar2 = (int *)extraout_ECX[0x3d];
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x3c];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x3b];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x3a];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x38];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x37];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x36];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x35];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x33];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_005ee7f3();
  piVar2 = (int *)extraout_ECX[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x1e];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar1 = extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00449941(0);
    extraout_ECX[0x1d] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


