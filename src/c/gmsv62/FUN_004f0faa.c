/* FUN_004f0faa - 0x004f0faa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f0faa(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0045cdbc(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0042459a();
  FUN_005a8209(*(undefined4 *)(unaff_EBP + -0x10),uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


