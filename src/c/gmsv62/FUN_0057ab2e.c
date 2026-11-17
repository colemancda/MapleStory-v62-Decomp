/* FUN_0057ab2e - 0x0057ab2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0057ab2e(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0057ab7c(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_008264a7(extraout_ECX + 0xd0);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xcc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0057abae();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


