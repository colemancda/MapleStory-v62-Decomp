/* FUN_006e4532 - 0x006e4532 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006e4532(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(9,0,0,0,1,0,0);
  DAT_0097bd70 = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x161] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  extraout_ECX[0x29d] = 0;
  extraout_ECX[0x29f] = 0;
  extraout_ECX[0x2a1] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087b2f0(extraout_ECX + 0x2a2,8,5,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087b2f0(extraout_ECX + 0x2ac,8,3,&LAB_006e4677,&LAB_006e47b8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087b2f0(extraout_ECX + 0x366,4,9,&LAB_006ea98c,&LAB_006ea992);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_006e4852();
  uVar1 = extraout_ECX[0x155];
  *extraout_ECX = &PTR_FUN_008f014c;
  extraout_ECX[1] = &PTR_FUN_008f0100;
  extraout_ECX[2] = &PTR_FUN_008f00fc;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0047c974(uVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0x1db,0x15d,10,
               1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


