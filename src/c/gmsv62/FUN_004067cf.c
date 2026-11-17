/* FUN_004067cf - 0x004067cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_004067cf(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*extraout_ECX != 0) {
    FUN_004030b1();
    *extraout_ECX = 0;
  }
  iVar1 = FUN_004029b9(0xc);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00402fb9(*(undefined4 *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = iVar1;
  return extraout_ECX;
}


