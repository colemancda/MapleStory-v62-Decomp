/* FUN_005c59aa - 0x005c59aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c59aa(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ecb48;
  iVar1 = extraout_ECX[0x23];
  *(undefined4 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x20];
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x17];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x14];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0x11];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0xe];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[0xb];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[8];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[5];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


