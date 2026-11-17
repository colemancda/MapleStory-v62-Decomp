/* FUN_00570070 - 0x00570070 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00570070(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_0097941c = -(uint)(extraout_ECX + 0x19 != (undefined4 *)0x0) & (uint)extraout_ECX;
  extraout_ECX[0x19] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x20,8,3,&LAB_00576ee2,FUN_0044976a);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x26,4,3,&LAB_0048c051,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087b2f0(extraout_ECX + 0x29,4,3,&LAB_0048c051,FUN_00411629);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x2c,4,3,&LAB_0048c051,FUN_00411629);
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x34] = 0;
  FUN_0087b2f0(extraout_ECX + 0x35,4,2,&LAB_0045e0d1,FUN_0044973c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0087b2f0(extraout_ECX + 0x37,4,6,&LAB_00450362,FUN_004115cc);
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x14c);
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x3d] = uVar1;
  extraout_ECX[0x3e] = 0;
  *extraout_ECX = &PTR_FUN_008ebe88;
  extraout_ECX[1] = &PTR_FUN_008ebe3c;
  extraout_ECX[2] = &PTR_FUN_008ebe38;
  FUN_0081420c(0xfffffede,0xfffffb3e,600,0x50,10,0,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


