/* FUN_004afac2 - 0x004afac2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004afac2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004b3795();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x14] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x15,4,4,&LAB_00450362,FUN_004115cc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e9eac;
  extraout_ECX[1] = &PTR_LAB_008e9e60;
  extraout_ECX[2] = &PTR_FUN_008e9e5c;
  return extraout_ECX;
}


