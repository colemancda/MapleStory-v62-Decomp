/* FUN_004e5db7 - 0x004e5db7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5db7(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008eac20;
  extraout_ECX[-2] = &PTR_FUN_008eabd4;
  extraout_ECX[-1] = &PTR_FUN_008eabd0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eabcc;
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  FUN_004e5f4c();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x1b8] = &PTR_FUN_008eac44;
  FUN_004f1e7c();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004f1a88();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x6c] = &PTR_FUN_008eac48;
  FUN_004f1d8c();
  piVar1 = (int *)extraout_ECX[0x68];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004f1617();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004f1c02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x4d,4,0x12,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045f536();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045f536();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
  iVar2 = extraout_ECX[0x3e];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_00402b41(iVar2);
  }
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0x38;
  extraout_ECX[0x38] = &PTR_FUN_008eac4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004f1b19();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004f1b19();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0059f1bb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


