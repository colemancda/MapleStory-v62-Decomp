/* FUN_00826029 - 0x00826029 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00826029(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2ee8;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0082670e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  DAT_00973cd8 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


