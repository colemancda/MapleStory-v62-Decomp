/* ptr_00820c40 - 0x00820c40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00820c40(int param_1)

{
  undefined1 unaff_BL;
  int unaff_EBP;
  
  (**(code **)(param_1 + 8))();
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


