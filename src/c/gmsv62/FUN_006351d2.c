/* FUN_006351d2 - 0x006351d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006351d2(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00635a9b();
  FUN_006357e6(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + 0x44) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + 0xc);
  FUN_00635943(unaff_EBP + -0x10,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_00635891(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


