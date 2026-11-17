/* FUN_006f2b6f - 0x006f2b6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f2b6f(void)

{
  int unaff_EBP;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 local_c;
  
  FUN_00879bb8();
  local_c = 0;
  iStack_10 = unaff_EBP + 0x18;
  *(undefined4 **)(unaff_EBP + -0x10) = &local_c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_14 = 0x6f2b96;
  FUN_00414f8b();
  iStack_10 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 **)(unaff_EBP + 0x14) = &uStack_14;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450368(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006eedb4(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_c = 0x6f2bce;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c = 0x6f2bda;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


