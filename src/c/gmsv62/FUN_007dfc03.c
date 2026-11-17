/* FUN_007dfc03 - 0x007dfc03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007dfc03(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1d48;
  extraout_ECX[-1] = &PTR_FUN_008f1cfc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1cf8;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  _DAT_0097c1b0 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


