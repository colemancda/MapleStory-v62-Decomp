/* FUN_00470ed9 - 0x00470ed9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00470ed9(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045f10c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045f10c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


