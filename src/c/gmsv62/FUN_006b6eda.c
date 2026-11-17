/* FUN_006b6eda - 0x006b6eda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b6eda(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef928;
  extraout_ECX[-1] = &PTR_FUN_008ef8dc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef8d8;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_004505d7();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x23,8,5,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450514();
  DAT_009796f4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


