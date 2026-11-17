/* FUN_00641568 - 0x00641568 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00641568(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed308;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004c26e1(extraout_ECX);
  DAT_00979250 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


