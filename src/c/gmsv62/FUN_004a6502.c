/* FUN_004a6502 - 0x004a6502 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a6502(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008e9c4c;
  extraout_ECX[-1] = &PTR_ptr_00456316_008e9c00;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9bfc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x11] = &PTR_FUN_008e9c6c;
  FUN_004a6b5a();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e60b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


