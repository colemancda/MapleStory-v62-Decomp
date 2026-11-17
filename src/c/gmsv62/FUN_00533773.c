/* FUN_00533773 - 0x00533773 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00533773(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb6a8;
  extraout_ECX[-1] = &PTR_LAB_008eb65c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb658;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e60b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


