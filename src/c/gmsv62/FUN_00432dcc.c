/* FUN_00432dcc - 0x00432dcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00432dcc(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0xc);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00432e9f(extraout_ECX,*(undefined4 *)(unaff_EBP + 8));
  }
  if (*extraout_ECX != 0) {
    FUN_004030b1();
    *extraout_ECX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = iVar1;
  return extraout_ECX;
}


