/* FUN_00529d24 - 0x00529d24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00529d24(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eb568;
  extraout_ECX[-1] = &PTR_LAB_008eb51c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb518;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_00450514();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004505d7();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0052b78d();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1a,8,0x24,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e663();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


