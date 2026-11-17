/* FUN_00696abd - 0x00696abd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00696abd(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0045b90e(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar1 = FUN_0045b90e(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar1 = FUN_0045b90e(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


