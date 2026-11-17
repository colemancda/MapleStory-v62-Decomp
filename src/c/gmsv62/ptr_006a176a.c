/* ptr_006a176a - 0x006a176a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a176a(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_8 [4];
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 **)(unaff_EBP + 8) = auStack_8;
  uVar2 = 0xffffffff;
  uVar1 = FUN_00449713(0xffffffff);
  FUN_0045f0f3(uVar1,uVar2);
  FUN_007db3ad();
  FUN_00817f6e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


