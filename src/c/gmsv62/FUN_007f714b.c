/* FUN_007f714b - 0x007f714b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007f714b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_007f0e57();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x91] = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0x94;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xa0;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xab;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xb8;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xc3;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xd2;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xdd;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_007f729e();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0xe8;
  FUN_0063435b();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_007f729e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x119] = 0;
  extraout_ECX[0x11a] = 0;
  extraout_ECX[0x11c] = 0;
  extraout_ECX[0x11b] = 1;
  *extraout_ECX = &PTR_FUN_008f2398;
  extraout_ECX[3] = &PTR_FUN_008f22e8;
  return extraout_ECX;
}


