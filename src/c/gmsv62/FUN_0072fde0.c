/* FUN_0072fde0 - 0x0072fde0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072fde0(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0f80;
  extraout_ECX[-1] = &PTR_LAB_008f0f34;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0f30;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0x153;
  extraout_ECX[0x153] = &PTR_FUN_008eac4c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004f1b19();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004f1b19();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097be18 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


