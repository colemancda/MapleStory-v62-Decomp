/* FUN_00827ec1 - 0x00827ec1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00827ec1(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2ef0;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1a] = &PTR_FUN_008f2ef4;
  FUN_00829c52();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x13] = &PTR_FUN_008f2ef8;
  FUN_00829c01();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xd] = &PTR_FUN_008f2efc;
  FUN_00829bb0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008f2f00;
  FUN_00829b5f();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008f2f04;
  FUN_00829b0e();
  DAT_00973a98 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


