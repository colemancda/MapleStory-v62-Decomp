/* FUN_00454fb4 - 0x00454fb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00454fb4(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_LAB_008e8ffc;
  extraout_ECX[-2] = &PTR_FUN_008e8fb0;
  extraout_ECX[-1] = &PTR_FUN_008e8fac;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8fa8;
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  FUN_00454b99();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00454ead();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00454e3f();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0048fcd9();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00454c95();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00454a78();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00454939();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00454772();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  extraout_ECX[0x142] = &PTR_FUN_008e908c;
  FUN_0045f705();
  piVar1 = (int *)extraout_ECX[0x141];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045f6a5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f42b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045f5d1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045f595();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065bb2f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


