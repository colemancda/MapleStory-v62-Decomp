/* FUN_00598a86 - 0x00598a86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00598a86(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00978354 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *extraout_ECX = &PTR_LAB_008e8a60;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[1] = &PTR_FUN_008ec6a8;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00598b74();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_008ec6a0;
  return extraout_ECX;
}


