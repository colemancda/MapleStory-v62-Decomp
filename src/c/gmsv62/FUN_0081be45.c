/* FUN_0081be45 - 0x0081be45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0081be45(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x15a] = 999999999;
  extraout_ECX[0x15b] = 0;
  extraout_ECX[0x15c] = 0xffffffff;
  extraout_ECX[0x15d] = 0xffffffff;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x162] = 0;
  *extraout_ECX = &PTR_FUN_008f2e98;
  extraout_ECX[1] = &PTR_FUN_008f2e4c;
  extraout_ECX[2] = &PTR_FUN_008f2e48;
  return extraout_ECX;
}


