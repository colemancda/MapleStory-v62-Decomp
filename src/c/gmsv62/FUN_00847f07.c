/* FUN_00847f07 - 0x00847f07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00847f07(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  FUN_0075572d(unaff_EBP + 8,uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00471102(unaff_EBP + 8,7);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


