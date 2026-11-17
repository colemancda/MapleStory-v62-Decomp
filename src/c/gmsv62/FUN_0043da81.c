/* FUN_0043da81 - 0x0043da81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0043da81(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_0044590d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0044590d();
  extraout_ECX[0xd8] = 0;
  extraout_ECX[0x10a] = 0;
  extraout_ECX[0x10b] = 0;
  extraout_ECX[0x10c] = 0;
  extraout_ECX[0x10d] = 0;
  extraout_ECX[0x10e] = 0;
  extraout_ECX[0x112] = 0;
  extraout_ECX[0x12e] = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x113] = 0;
  extraout_ECX[0x114] = 0;
  extraout_ECX[0x119] = 0;
  extraout_ECX[0x11a] = 0;
  extraout_ECX[0x11f] = 0;
  extraout_ECX[0x120] = 0;
  extraout_ECX[0x121] = 0;
  extraout_ECX[0x129] = 0;
  extraout_ECX[0x12a] = 0;
  extraout_ECX[299] = 0;
  extraout_ECX[300] = 0;
  extraout_ECX[0x12d] = 6;
  FUN_0087b2f0(extraout_ECX + 0x12f,0x3f4,2,&LAB_0043dbf7,FUN_0043dca3);
  extraout_ECX[0x329] = 0;
  extraout_ECX[0x32a] = 0;
  extraout_ECX[0x32b] = 0;
  extraout_ECX[0x32c] = 0;
  extraout_ECX[0x32d] = 0;
  extraout_ECX[0x32e] = 0;
  extraout_ECX[0x32f] = 0;
  extraout_ECX[0x330] = 0;
  extraout_ECX[0x331] = 0;
  extraout_ECX[0x332] = 0;
  extraout_ECX[0x333] = 0;
  extraout_ECX[0x334] = 0;
  extraout_ECX[0x335] = 0;
  extraout_ECX[0x336] = 0;
  extraout_ECX[0x337] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  extraout_ECX[0x33c] = 100;
  extraout_ECX[0x33d] = 0;
  *extraout_ECX = &PTR_FUN_008e8cb8;
  uVar1 = FUN_004133b5();
  extraout_ECX[0x118] = uVar1;
  FUN_00445c3c(0x31,unaff_EBP + -0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


