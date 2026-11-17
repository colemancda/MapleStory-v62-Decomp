/* FUN_00471222 - 0x00471222 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00471222(void)

{
  int unaff_EBP;
  undefined4 local_c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_c = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &local_c;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_0047114e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c = 0x471259;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


