/* FUN_0057492e - 0x0057492e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0057492e(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_00979414 = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x19] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1b] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0xcb9,8,0x3c,&LAB_00576ee2,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0xd31,4,0x3c,&LAB_0048c051,FUN_00411629);
  extraout_ECX[0xd6d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087b2f0(extraout_ECX + 0xd6e,4,0x3c,&LAB_0048c051,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0087b2f0(extraout_ECX + 0xdaa,4,2,&LAB_0045e0d1,FUN_0044973c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0087b2f0(extraout_ECX + 0xdac,4,6,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0087b2f0(extraout_ECX + 0xdb2,4,0x17,&LAB_00450362,FUN_004115cc);
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *extraout_ECX = &PTR_FUN_008ebfa0;
  extraout_ECX[1] = &PTR_LAB_008ebf54;
  extraout_ECX[2] = &PTR_FUN_008ebf50;
  FUN_0081420c(0xffffff06,0xfffffc9a,0x246,0x1b8,10,0,uVar1,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


