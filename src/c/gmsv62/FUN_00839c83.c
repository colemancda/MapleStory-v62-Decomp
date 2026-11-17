/* FUN_00839c83 - 0x00839c83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00839c83(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0x1d,8,6,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x2a] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008f30dc;
  extraout_ECX[1] = &PTR_LAB_008f3090;
  extraout_ECX[2] = &PTR_FUN_008f308c;
  return extraout_ECX;
}


