/* FUN_0062a732 - 0x0062a732 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0062a732(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed1a0;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  extraout_ECX[0x60] = &LAB_008ed1a4;
  FUN_006300ad();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  extraout_ECX[0x5a] = &PTR_FUN_008ecb4c;
  FUN_005d1302();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  extraout_ECX[0x54] = &PTR_FUN_008ed1b4;
  FUN_0062f9c6();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x4e] = &PTR_FUN_008ed1b0;
  FUN_0062fb79();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  extraout_ECX[0x48] = &PTR_FUN_008ed1a8;
  FUN_0062ff1a();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  extraout_ECX[0x42] = &PTR_FUN_008ed1ac;
  FUN_0062fd7f();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x3c] = &PTR_FUN_008ed1ac;
  FUN_0062fd7f();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x36] = &PTR_FUN_008ed1ac;
  FUN_0062fd7f();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004f1f67();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0x2e] = &PTR_FUN_008ed1b0;
  FUN_0062fb79();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x28] = &PTR_FUN_008ed1b0;
  FUN_0062fb79();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x22] = &PTR_FUN_008ed1b4;
  FUN_0062f9c6();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005ee767();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x1a] = &PTR_FUN_008ed1b8;
  FUN_0062f813();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x14] = &PTR_FUN_008ed1b8;
  FUN_0062f813();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xd] = &PTR_FUN_008ed1bc;
  FUN_004b978b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008ed1bc;
  FUN_004b978b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008ed1c0;
  FUN_0062f5f4();
  DAT_0097926c = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


