/* FUN_007cb63a - 0x007cb63a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007cb63a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1b04;
  extraout_ECX[-1] = &PTR_LAB_008f1ae0;
  *extraout_ECX = &PTR_FUN_008f1adc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[0x1c] = &PTR_LAB_008f1ac8;
  uVar1 = extraout_ECX[0x35c];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00432942(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0078b437();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


