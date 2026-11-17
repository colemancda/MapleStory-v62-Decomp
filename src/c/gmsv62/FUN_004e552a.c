/* FUN_004e552a - 0x004e552a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e552a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ea854;
  extraout_ECX[-2] = &PTR_FUN_008ea808;
  extraout_ECX[-1] = &PTR_FUN_008ea804;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea800;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x1c8,0xdc,0x20,&LAB_004e5594);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


