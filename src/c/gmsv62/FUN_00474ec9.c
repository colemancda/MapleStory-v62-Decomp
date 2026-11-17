/* FUN_00474ec9 - 0x00474ec9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00474ec9(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9744;
  iVar1 = extraout_ECX[6];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    FUN_00402b41(extraout_ECX[4]);
  }
  iVar1 = extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00475b89(0);
    extraout_ECX[6] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


