/* FUN_0046a27d - 0x0046a27d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046a27d(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00445a30();
  iVar1 = extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


