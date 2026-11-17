/* FUN_0065797c - 0x0065797c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065797c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ed49c;
  extraout_ECX[-1] = &PTR_LAB_008ed450;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed44c;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  FUN_00658a88();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x1a1,8,10,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x18d,8,10,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x179,8,10,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5df();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x158,0xc,10,FUN_0046a2d2);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0074d4c3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


