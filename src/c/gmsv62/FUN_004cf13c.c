/* FUN_004cf13c - 0x004cf13c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004cf13c(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0046a1fc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046a1fc();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(extraout_ECX + 0x38) = 0;
  *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x68;
  FUN_0046a1fc();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0046a1fc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


