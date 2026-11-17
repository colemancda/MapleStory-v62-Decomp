/* FUN_0048fcd9 - 0x0048fcd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048fcd9(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e9378;
  extraout_ECX[-1] = &PTR_LAB_008e932c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9328;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045f558();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00426311();
  piVar1 = (int *)extraout_ECX[0x88];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x84,4,4,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x83];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x19,8,0x1e,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e663();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


