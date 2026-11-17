/* FUN_007203d9 - 0x007203d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007203d9(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0d48;
  extraout_ECX[-1] = &PTR_FUN_008f0cfc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0cf8;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_0072412d();
  piVar1 = (int *)extraout_ECX[0x179];
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x178];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x177];
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x174];
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x173];
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x172];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x171];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(extraout_ECX + 0x16f,4,2,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_006561e7();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x161,8,4,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  DAT_0097be0c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


