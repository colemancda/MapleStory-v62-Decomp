/* FUN_0049b865 - 0x0049b865 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049b865(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e9a50;
  extraout_ECX[-1] = &PTR_LAB_008e9a04;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9a00;
  piVar1 = (int *)extraout_ECX[0x3a];
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x39];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x34,4,5,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x2f,4,5,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x2a,4,5,FUN_004115cc);
  if (extraout_ECX[0x29] != 0) {
    FUN_004030b1();
    extraout_ECX[0x29] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0049e753();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0xb] = &PTR_FUN_008e9a74;
  FUN_0049ea31();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


