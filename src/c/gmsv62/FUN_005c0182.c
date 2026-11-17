/* FUN_005c0182 - 0x005c0182 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005c0182(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc8b4();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x20] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00470eb6();
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x35,8,8,&LAB_00576ee2,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x45,4,8,FUN_00483ba7,FUN_00414ebb);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0x4e,8,8,&LAB_005c1cf4,FUN_004b8a94);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008eca70;
  extraout_ECX[1] = &PTR_FUN_008eca24;
  extraout_ECX[2] = &PTR_FUN_008eca20;
  return extraout_ECX;
}


