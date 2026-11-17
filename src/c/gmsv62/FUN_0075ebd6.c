/* FUN_0075ebd6 - 0x0075ebd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0075ebd6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00789e42(0x13,3,0xc3,8,0,0,0);
  DAT_0097bea4 = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x163] = 0;
  *extraout_ECX = &PTR_LAB_008f1154;
  extraout_ECX[1] = &PTR_LAB_008f1108;
  extraout_ECX[2] = &PTR_FUN_008f1104;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0047c974(10,unaff_EBP + -0x18,unaff_EBP + -0x14,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0xd9,0x7b,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


