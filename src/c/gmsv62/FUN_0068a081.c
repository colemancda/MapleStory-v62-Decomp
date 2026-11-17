/* FUN_0068a081 - 0x0068a081 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068a081(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0068a39a(uVar1);
  FUN_0068a2ee(*(int *)(unaff_EBP + 0xc) + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0068a181(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


