/* FUN_00712b2b - 0x00712b2b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00712b2b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0a30;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0045f4fc();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = &PTR_FUN_008e9114;
  FUN_0045f4fc();
  DAT_00979520 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


