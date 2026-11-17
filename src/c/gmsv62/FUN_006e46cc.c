/* FUN_006e46cc - 0x006e46cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e46cc(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f014c;
  extraout_ECX[-1] = &PTR_FUN_008f0100;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f00fc;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  FUN_006e47c6();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087a0b8(extraout_ECX + 0x364,4,9,&LAB_006ea992);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087a0b8(extraout_ECX + 0x2aa,8,3,&LAB_006e47b8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x2a0,8,5,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_006eaa7b();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_006eaa65();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450514();
  DAT_0097bd70 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


