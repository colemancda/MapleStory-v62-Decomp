/* FUN_00424665 - 0x00424665 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00424665(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0042525a();
  FUN_00424f79(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x40) = uVar1;
  FUN_00425438(*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0042500e(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


