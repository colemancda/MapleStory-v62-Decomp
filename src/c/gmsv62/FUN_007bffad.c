/* FUN_007bffad - 0x007bffad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007bffad(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1a40;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x1f] = &PTR_FUN_008f1a48;
  FUN_007c2080();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1a] = &PTR_FUN_008f1a4c;
  FUN_007c1ef6();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x15] = &PTR_FUN_008f1a50;
  FUN_007c1d6c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0xe] = &PTR_FUN_008f1a54;
  FUN_007c1be2();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[9] = &PTR_FUN_008f1a58;
  FUN_007c1a58();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[3] = &PTR_FUN_008f1a5c;
  FUN_007c1879();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007c159e();
  DAT_00978140 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


