/* FUN_0069d4d4 - 0x0069d4d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069d4d4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008eefec;
  extraout_ECX[-1] = &PTR_FUN_008eefa0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eef9c;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0xb5,4,2,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0xaf,4,6,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0xa9,4,6,FUN_004115a0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e5c9();
  DAT_0097bce8 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


