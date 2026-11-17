/* FUN_004546bb - 0x004546bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004546bb(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  _DAT_009784b4 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0044590d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf4] = 0;
  extraout_ECX[0xf6] = 0;
  extraout_ECX[0xf7] = 0;
  extraout_ECX[0xf8] = 0;
  extraout_ECX[0xf9] = 0;
  extraout_ECX[0xfa] = 0;
  extraout_ECX[0xfb] = 0;
  extraout_ECX[0xfe] = 0;
  extraout_ECX[0xff] = 0;
  extraout_ECX[0x100] = 0;
  extraout_ECX[0xfc] = &PTR_FUN_008e9114;
  *extraout_ECX = &PTR_FUN_008e90e0;
  extraout_ECX[1] = &PTR_LAB_008e9094;
  extraout_ECX[2] = &PTR_FUN_008e9090;
  return extraout_ECX;
}


