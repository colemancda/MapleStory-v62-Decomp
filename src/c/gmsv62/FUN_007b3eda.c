/* FUN_007b3eda - 0x007b3eda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b3eda(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00455c59(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0062df7e(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_0045e7c2(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


