/* FUN_005297e8 - 0x005297e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005297e8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_009792c4 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074b9b2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x159] = 0;
  *extraout_ECX = &PTR_FUN_008eb358;
  extraout_ECX[1] = &PTR_LAB_008eb30c;
  extraout_ECX[2] = &PTR_FUN_008eb308;
  extraout_ECX[0x15b] = 1;
  return extraout_ECX;
}


