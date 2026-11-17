/* FUN_005e3f10 - 0x005e3f10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e3f10(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(extraout_ECX + 0x10) = &PTR_FUN_008ecc50;
  FUN_005e532d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


