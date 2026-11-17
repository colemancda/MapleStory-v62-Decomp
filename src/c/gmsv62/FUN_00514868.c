/* FUN_00514868 - 0x00514868 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00514868(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5bd6();
  extraout_ECX[0x1cb] = 0;
  extraout_ECX[0x1cc] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1ce] = 0;
  extraout_ECX[0x1cf] = 0;
  extraout_ECX[0x1d0] = 0;
  extraout_ECX[0x1d1] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_LAB_008eaf0c;
  extraout_ECX[1] = &PTR_FUN_008eaec0;
  extraout_ECX[2] = &PTR_FUN_008eaebc;
  extraout_ECX[3] = &PTR_FUN_008eaeb8;
  uVar1 = FUN_007d1e08();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1ca] = uVar1;
  return extraout_ECX;
}


