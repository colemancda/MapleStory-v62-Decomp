/* FUN_00810dfe - 0x00810dfe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00810dfe(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2c10;
  extraout_ECX[-1] = &PTR_FUN_008f2bc4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2bc0;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  FUN_0074d4c3();
  piVar1 = (int *)extraout_ECX[0x2e];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x2d];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x2c];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x2b];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0081266e();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0081266e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0081266e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


