/* ptr_0082850f - 0x0082850f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0082850f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_0047c824();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


