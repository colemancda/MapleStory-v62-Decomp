/* FUN_0083a2b5 - 0x0083a2b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083a2b5(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f3274;
  extraout_ECX[-1] = &PTR_LAB_008f3228;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f3224;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_006561e7();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x1e,8,4,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


