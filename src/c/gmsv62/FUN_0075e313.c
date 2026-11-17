/* FUN_0075e313 - 0x0075e313 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075e313(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f10d0;
  extraout_ECX[-1] = &PTR_LAB_008f1084;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1080;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097bea0 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


