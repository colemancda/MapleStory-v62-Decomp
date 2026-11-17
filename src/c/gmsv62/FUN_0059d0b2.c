/* FUN_0059d0b2 - 0x0059d0b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0059d0b2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  DAT_0097924c = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = 0;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 1;
  extraout_ECX[3] = 0;
  FUN_0044590d();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044590d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xdb] = 0;
  extraout_ECX[0xdc] = 0;
  extraout_ECX[0xdd] = 0;
  extraout_ECX[0xde] = 0;
  extraout_ECX[0xdf] = 0;
  extraout_ECX[0xe0] = 0;
  extraout_ECX[0xe1] = 0;
  extraout_ECX[0xe4] = 0;
  extraout_ECX[0xe5] = 0;
  extraout_ECX[0xe6] = 0;
  extraout_ECX[0xe8] = 0;
  extraout_ECX[0xe9] = 0;
  extraout_ECX[0xea] = 0;
  *(undefined1 *)(extraout_ECX + 0xeb) = 0;
  return extraout_ECX;
}


