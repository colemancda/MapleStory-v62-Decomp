/* FUN_005296dc - 0x005296dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005296dc(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_009792c0 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  extraout_ECX[0x155] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008eb2d4;
  extraout_ECX[1] = &PTR_LAB_008eb288;
  extraout_ECX[2] = &PTR_FUN_008eb284;
  return extraout_ECX;
}


