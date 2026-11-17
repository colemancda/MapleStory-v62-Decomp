/* FUN_004d4648 - 0x004d4648 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d4648(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_008ea3dc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008ea3e4;
  FUN_004d4cd7();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008ea3e8;
  FUN_004d4c05();
  DAT_009791f0 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


