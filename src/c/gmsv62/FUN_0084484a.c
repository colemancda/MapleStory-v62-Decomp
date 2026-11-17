/* FUN_0084484a - 0x0084484a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084484a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f3458;
  extraout_ECX[-1] = &PTR_FUN_008f340c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f3408;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x1f,4,2,FUN_0044973c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1d,4,2,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x1b,4,2,FUN_004115cc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


