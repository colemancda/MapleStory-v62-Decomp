/* FUN_00529e86 - 0x00529e86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00529e86(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_LAB_008eb1f4;
  extraout_ECX[-2] = &PTR_LAB_008eb1a8;
  extraout_ECX[-1] = &PTR_LAB_008eb1a4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb1a0;
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00529c00();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00529d24();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00529b0c();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00529999();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00529861();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00529744();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0052962c();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0053a056();
  piVar1 = (int *)extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0052b7ca();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0052b7ca();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0052b7ca();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0052b7ca();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065bb2f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


