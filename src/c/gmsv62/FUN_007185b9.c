/* FUN_007185b9 - 0x007185b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007185b9(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0b14;
  extraout_ECX[-1] = &PTR_LAB_008f0ac8;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0ac4;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x16f] = &PTR_FUN_008f0b48;
  FUN_0071bc6e();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2c] = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x27] = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x22] = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  piVar1 = (int *)extraout_ECX[0x1f];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097bde4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


