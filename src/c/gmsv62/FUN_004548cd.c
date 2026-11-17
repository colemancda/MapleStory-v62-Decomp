/* FUN_004548cd - 0x004548cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004548cd(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_009784b8 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0074b9b2();
  extraout_ECX[0x157] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008e9168;
  extraout_ECX[1] = &PTR_LAB_008e911c;
  extraout_ECX[2] = &PTR_FUN_008e9118;
  return extraout_ECX;
}


