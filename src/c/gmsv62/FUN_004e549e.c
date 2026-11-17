/* FUN_004e549e - 0x004e549e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004e549e(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5bd6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1ca] = 0;
  FUN_0087b2f0(extraout_ECX + 0x1cb,0xdc,0x20,&LAB_004e558a,&LAB_004e5594);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008ea854;
  extraout_ECX[1] = &PTR_FUN_008ea808;
  extraout_ECX[2] = &PTR_FUN_008ea804;
  extraout_ECX[3] = &PTR_FUN_008ea800;
  return extraout_ECX;
}


