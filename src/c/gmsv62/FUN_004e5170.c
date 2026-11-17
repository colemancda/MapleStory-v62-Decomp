/* FUN_004e5170 - 0x004e5170 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5170(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ea754;
  extraout_ECX[-2] = &PTR_FUN_008ea708;
  extraout_ECX[-1] = &PTR_FUN_008ea704;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea700;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1fb] = &PTR_FUN_008ea778;
  FUN_004f1eb6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1e4,0x28,2,FUN_004e52a7);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0087a0b8(extraout_ECX + 0x1c8,0x38,2,FUN_004e522a);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


