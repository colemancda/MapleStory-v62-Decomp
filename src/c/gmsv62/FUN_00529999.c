/* FUN_00529999 - 0x00529999 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00529999(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb3dc;
  extraout_ECX[-1] = &PTR_LAB_008eb390;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb38c;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x19,4,6,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e64d();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


