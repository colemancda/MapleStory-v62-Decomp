/* FUN_005abc11 - 0x005abc11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005abc11(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_008ec7dc;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[2] = 0;
  FUN_00414f8b(uVar1);
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008ec7d8;
  return extraout_ECX;
}


