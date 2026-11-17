/* FUN_0082902c - 0x0082902c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082902c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2f40;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0041a545();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x22] = &PTR_FUN_008f2f44;
  FUN_00829d45();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x1c] = &PTR_FUN_008f1074;
  FUN_0075bccf();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x16] = &PTR_FUN_008f2f48;
  FUN_00829cf4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x10] = &PTR_FUN_008f2f48;
  FUN_00829cf4();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[10] = &PTR_FUN_008f2f4c;
  FUN_00829ca3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 1,4,9,thunk_FUN_006eaf37);
  DAT_00979168 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


