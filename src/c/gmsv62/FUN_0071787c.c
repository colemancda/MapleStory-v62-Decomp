/* FUN_0071787c - 0x0071787c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071787c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0a90;
  extraout_ECX[-1] = &PTR_FUN_008f0a44;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0a40;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0071ba26();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0071ba10();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0071b9fa();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  DAT_00979174 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


