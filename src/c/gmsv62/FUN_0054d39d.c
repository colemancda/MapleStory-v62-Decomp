/* FUN_0054d39d - 0x0054d39d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0054d39d(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eba40;
  puVar1 = (undefined4 *)extraout_ECX[6];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *puVar1 = 1;
  if (extraout_ECX[6] != 0) {
    FUN_00434d73(0);
    extraout_ECX[6] = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


