/* FUN_004dca34 - 0x004dca34 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004dca34(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  iVar1 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00402b41(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


