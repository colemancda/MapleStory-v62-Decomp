/* FUN_00866a3a - 0x00866a3a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00866a3a(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f36f0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0086aa40();
  FUN_0086726e();
  iVar1 = extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  iVar1 = extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  DAT_00973abc = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


