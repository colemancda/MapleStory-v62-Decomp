/* FUN_006c0466 - 0x006c0466 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006c0466(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(0,3,0x9b,6,1,0,0);
  DAT_009791a4 = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x16e] = 0;
  uVar1 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_LAB_008efaf8;
  extraout_ECX[1] = &PTR_FUN_008efaac;
  extraout_ECX[2] = &PTR_FUN_008efaa8;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0047c974(uVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0xaf,0x121,10,1
               ,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x167] = extraout_ECX[0x15c] + 1;
  return extraout_ECX;
}


