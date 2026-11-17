/* FUN_006f0280 - 0x006f0280 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f0280(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414f8b(unaff_EBP + 8);
  puVar1 = (undefined4 *)FUN_006f303f(0xffffffff);
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


