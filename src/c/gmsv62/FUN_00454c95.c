/* FUN_00454c95 - 0x00454c95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00454c95(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e92f4;
  extraout_ECX[-1] = &PTR_LAB_008e92a8;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e92a4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x1b,4,10,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e663();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


