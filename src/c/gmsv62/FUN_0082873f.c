/* FUN_0082873f - 0x0082873f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082873f(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2f08;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  extraout_ECX[0x4b] = &PTR_FUN_008f0b48;
  FUN_0071bc6e();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  extraout_ECX[0x45] = &PTR_FUN_008ecb4c;
  FUN_005d1302();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  extraout_ECX[0x40] = &PTR_FUN_008f2f0c;
  FUN_008299b8();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  extraout_ECX[0x3a] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  piVar1 = (int *)extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x38];
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x37];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x36];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x35];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x34];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x33];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x32];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2c] = &PTR_FUN_008f2f10;
  FUN_00829967();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x27] = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x21] = &PTR_FUN_008f2f14;
  FUN_00829916();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1b] = &PTR_FUN_008f2f18;
  FUN_008298c5();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x15] = &PTR_FUN_008f2f1c;
  FUN_00829874();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xf] = &PTR_FUN_008f2f20;
  FUN_00829823();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[9] = &PTR_FUN_008f2f24;
  FUN_008297d2();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[3] = &PTR_FUN_008f2f28;
  FUN_00829781();
  DAT_00973a94 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


