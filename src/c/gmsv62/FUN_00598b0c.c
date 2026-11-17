/* FUN_00598b0c - 0x00598b0c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00598b0c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec6a0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_005990dc();
  extraout_ECX[8] = &PTR_LAB_008e84a0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008ec6a8;
  FUN_005992a5();
  DAT_00978354 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


