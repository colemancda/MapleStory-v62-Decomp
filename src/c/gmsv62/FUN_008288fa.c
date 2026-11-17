/* FUN_008288fa - 0x008288fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008288fa(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00978130 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 100;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 100;
  extraout_ECX[6] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0x1f;
  extraout_ECX[10] = 0;
  extraout_ECX[7] = &PTR_FUN_008f2f38;
  extraout_ECX[0xb] = 100;
  extraout_ECX[0xc] = 0x18;
  extraout_ECX[0xf] = 0x10;
  extraout_ECX[0x10] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x11] = 0;
  FUN_00829a65(0,unaff_EBP + -0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xd] = &PTR_FUN_008f2f34;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x16] = 0;
  extraout_ECX[0x17] = 100;
  extraout_ECX[0x15] = 0x1f;
  extraout_ECX[0x13] = &PTR_FUN_008f2f30;
  extraout_ECX[0x18] = 0x18;
  *extraout_ECX = &PTR_FUN_008f2f2c;
  return extraout_ECX;
}


