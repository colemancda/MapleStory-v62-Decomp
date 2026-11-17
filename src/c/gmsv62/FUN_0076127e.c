/* FUN_0076127e - 0x0076127e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0076127e(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00789e42(10,3,0xff,6,0,0,0);
  DAT_0097951c = -(uint)(extraout_ECX != (undefined4 *)0xfffffa88) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x167] = 0;
  extraout_ECX[0x169] = 0;
  extraout_ECX[0x16b] = 0;
  extraout_ECX[0x16d] = 0;
  extraout_ECX[0x16f] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0087b2f0(extraout_ECX + 0x170,8,3,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x177] = 0;
  extraout_ECX[0x179] = 0;
  extraout_ECX[0x17b] = 0;
  extraout_ECX[0x17d] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0087b2f0(extraout_ECX + 0x17e,4,3,&LAB_007669d8,thunk_FUN_00445a30);
  extraout_ECX[0x181] = 0;
  extraout_ECX[0x183] = 0;
  extraout_ECX[0x185] = 0;
  extraout_ECX[0x186] = 0;
  extraout_ECX[0x188] = 0;
  extraout_ECX[0x18b] = 0;
  extraout_ECX[0x18c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  extraout_ECX[0x18d] = 0;
  extraout_ECX[0x18e] = 0;
  extraout_ECX[399] = 0;
  FUN_0087b2f0(extraout_ECX + 0x193,4,3,FUN_00483ba7,FUN_00414ebb);
  extraout_ECX[0x19f] = 0;
  extraout_ECX[0x1a0] = 0;
  extraout_ECX[0x1a7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0087b2f0(extraout_ECX + 0x1a8,4,3,&LAB_0048c051,FUN_00411629);
  extraout_ECX[0x1ab] = 0;
  extraout_ECX[0x1ac] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  extraout_ECX[0x1ad] = 0;
  extraout_ECX[0x1ae] = 0;
  FUN_0074b9b2();
  uVar1 = extraout_ECX[0x155];
  extraout_ECX[0x2ea] = 0;
  *extraout_ECX = &PTR_FUN_008f11dc;
  extraout_ECX[1] = &PTR_FUN_008f1190;
  extraout_ECX[2] = &PTR_FUN_008f118c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0047c974(uVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,extraout_ECX + 0x15c);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0,0,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


