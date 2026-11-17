/* FUN_00529c8d - 0x00529c8d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00529c8d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1c,8,0x24,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x66] = 0;
  extraout_ECX[0x67] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074b9b2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1a2] = 0;
  extraout_ECX[0x1a3] = 0;
  extraout_ECX[0x1a8] = 0;
  extraout_ECX[0x1a9] = 0;
  extraout_ECX[0x1aa] = 0;
  *extraout_ECX = &PTR_FUN_008eb568;
  extraout_ECX[1] = &PTR_LAB_008eb51c;
  extraout_ECX[2] = &PTR_FUN_008eb518;
  return extraout_ECX;
}


