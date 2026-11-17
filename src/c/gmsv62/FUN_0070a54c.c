/* FUN_0070a54c - 0x0070a54c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070a54c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f08b0;
  extraout_ECX[-1] = &PTR_FUN_008f0864;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0860;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x169,4,4,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0070b2a1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0x166] != 0) {
    FUN_0070b2b7(0);
    extraout_ECX[0x166] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


