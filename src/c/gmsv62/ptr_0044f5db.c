/* ptr_0044f5db - 0x0044f5db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0044f5db(int param_1)

{
  int unaff_EBP;
  
  (**(code **)(param_1 + 8))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


