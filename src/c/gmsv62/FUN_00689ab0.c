/* FUN_00689ab0 - 0x00689ab0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00689ab0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0068a35c();
  FUN_0068a0ec(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 4) = uVar1;
  FUN_0068a204(*(int *)(unaff_EBP + 0xc) + 8,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0068a181(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


