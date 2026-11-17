/* FUN_0063458a - 0x0063458a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063458a(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x44);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00635ad9(uVar1);
  *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + 0xc);
  FUN_00635a2d(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00635891(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


