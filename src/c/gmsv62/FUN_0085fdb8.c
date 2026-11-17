/* FUN_0085fdb8 - 0x0085fdb8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0085fdb8(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f3680;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  FUN_00863113();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x24] = &PTR_FUN_008f3684;
  FUN_0086309e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x1f] = &PTR_FUN_008ea328;
  FUN_004cdcea();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00861b43();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00862d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00862cb2();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0085fd48();
  iVar1 = extraout_ECX[2];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00862072(0);
    extraout_ECX[2] = 0;
  }
  DAT_00978138 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


