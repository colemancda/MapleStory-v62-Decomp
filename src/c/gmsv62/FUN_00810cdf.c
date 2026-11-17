/* FUN_00810cdf - 0x00810cdf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00810cdf(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00810d66();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x171] = 0;
  extraout_ECX[0x173] = 0;
  extraout_ECX[0x174] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008f2b74;
  extraout_ECX[1] = &PTR_FUN_008f2b28;
  extraout_ECX[2] = &PTR_FUN_008f2b24;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x1021);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


