/* FUN_005c027d - 0x005c027d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c027d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eca70;
  extraout_ECX[-1] = &PTR_FUN_008eca24;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eca20;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x4c,8,8,FUN_004b8a94);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x43,4,8,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x33,8,8,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00470ed9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_005c1e2b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e60b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


