/* FUN_007cb547 - 0x007cb547 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007cb547(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0078b0ed(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0066137b();
  extraout_ECX[0x9f6] = 0;
  extraout_ECX[0x9f9] = 0;
  extraout_ECX[0x9fa] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008f1b04;
  extraout_ECX[1] = &PTR_LAB_008f1ae0;
  extraout_ECX[2] = &PTR_FUN_008f1adc;
  extraout_ECX[0x1e] = &PTR_LAB_008f1ac8;
  return extraout_ECX;
}


