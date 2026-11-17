/* FUN_005c3cd9 - 0x005c3cd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c3cd9(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ecb08;
  extraout_ECX[-1] = &PTR_LAB_008ecae4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ecae0;
  *(undefined4 *)(unaff_EBP + -4) = 0x16;
  FUN_005d0fd7();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  extraout_ECX[0x116] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  piVar1 = (int *)extraout_ECX[0x115];
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x111];
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x110];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x10e];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x109] = &PTR_FUN_008ecb10;
  FUN_005d1cb3();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  extraout_ECX[0x104] = &PTR_FUN_008ecb14;
  FUN_005d1c3b();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  extraout_ECX[0xff] = &PTR_FUN_008ecb18;
  FUN_005d1ab1();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0xfa] = &PTR_FUN_008ebaa8;
  FUN_0055b96d();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_005d18d1();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0xc3] = &PTR_FUN_008ecb1c;
  FUN_005d13b6();
  piVar1 = (int *)extraout_ECX[0x3b];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x3a];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x33] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x2e] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x29] = &PTR_FUN_008ecb20;
  FUN_005d1854();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x24] = &PTR_FUN_008ecb24;
  FUN_005d16ca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x1f] = &PTR_FUN_008ecb28;
  FUN_005d1540();
  if (extraout_ECX[0x1e] != 0) {
    FUN_004030b1();
    extraout_ECX[0x1e] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


