/* FUN_00558369 - 0x00558369 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00558369(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(extraout_ECX + 0x3d8) = &PTR_FUN_008e8ab0;
  FUN_00434e79();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0087a0b8(extraout_ECX + 4,0x14,0x31,FUN_004343d9);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


