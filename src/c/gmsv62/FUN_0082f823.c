/* FUN_0082f823 - 0x0082f823 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082f823(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2f74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0068472b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[1] = &PTR_FUN_008f2f78;
  FUN_00686ab8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


