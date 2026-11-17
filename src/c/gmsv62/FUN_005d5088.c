/* FUN_005d5088 - 0x005d5088 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d5088(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ecbc8;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00434d5d();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00434d5d();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00434d5d();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x11] = &PTR_FUN_008ecbcc;
  FUN_005d680a();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xc] = &PTR_FUN_008ecbcc;
  FUN_005d680a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008ecbcc;
  FUN_005d680a();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008ea3e8;
  FUN_004d4c05();
  DAT_0097813c = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


