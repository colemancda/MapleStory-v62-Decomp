/* FUN_00424aa1 - 0x00424aa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00424aa1(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00425298(uVar1);
  FUN_00425522(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0042500e(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


