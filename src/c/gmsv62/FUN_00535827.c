/* FUN_00535827 - 0x00535827 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00535827(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb7b8;
  extraout_ECX[-1] = &PTR_FUN_008eb76c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb768;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


