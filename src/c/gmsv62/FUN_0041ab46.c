/* FUN_0041ab46 - 0x0041ab46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041ab46(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8770;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xf] = &PTR_FUN_008e8774;
  FUN_0041ac4d();
  if (extraout_ECX[0xe] != 0) {
    FUN_004030b1();
    extraout_ECX[0xe] = 0;
  }
  iVar1 = extraout_ECX[0xc];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_0040295c(0);
    extraout_ECX[0xc] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[1] = &PTR_FUN_008e8778;
  FUN_0041ac13();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


