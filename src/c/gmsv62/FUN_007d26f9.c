/* FUN_007d26f9 - 0x007d26f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d26f9(void)

{
  int unaff_EBP;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  FUN_00879bb8();
  local_18 = 0x7d270d;
  FUN_007d8205();
  local_18 = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &local_18;
  uStack_1c = 0xffffffff;
  puStack_20 = &DAT_00978474;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c;
  puStack_20 = (undefined1 *)0xffffffff;
  FUN_0045f0f3(&DAT_00978474);
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007d244b(&puStack_20,*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005e7131();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


