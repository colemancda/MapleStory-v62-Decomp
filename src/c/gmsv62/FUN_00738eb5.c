/* FUN_00738eb5 - 0x00738eb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00738eb5(void)

{
  DWORD DVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_00978360 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074b9b2();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  extraout_ECX[0x28e] = 0;
  extraout_ECX[0x290] = 0;
  extraout_ECX[0x292] = 0;
  extraout_ECX[0x294] = 0;
  extraout_ECX[0x296] = 0;
  extraout_ECX[0x298] = 0;
  extraout_ECX[0x29a] = 0;
  extraout_ECX[0x29c] = 0;
  extraout_ECX[0x29e] = 0;
  extraout_ECX[0x2a0] = 0;
  extraout_ECX[0x2a2] = 0;
  extraout_ECX[0x2a4] = 0;
  extraout_ECX[0x2a6] = 0;
  extraout_ECX[0x2a8] = 0;
  extraout_ECX[0x2aa] = 0;
  extraout_ECX[0x2ac] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0049f842();
  extraout_ECX[0x2cc] = 0xffffffff;
  extraout_ECX[0x2cb] = 6;
  extraout_ECX[0x2cd] = 0;
  extraout_ECX[0x2ce] = 0;
  extraout_ECX[0x2cf] = 0;
  extraout_ECX[0x2d0] = 0;
  extraout_ECX[0x2d1] = 0;
  extraout_ECX[0x2d4] = 0;
  extraout_ECX[0x2d5] = 0;
  extraout_ECX[0x2d6] = 0;
  extraout_ECX[0x2d7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0087b2f0(extraout_ECX + 0x2d8,4,0x12,&LAB_0045e0d1,FUN_0044973c);
  extraout_ECX[0x2ea] = 0;
  extraout_ECX[0x2eb] = 0;
  extraout_ECX[0x2ec] = 0;
  extraout_ECX[0x2ed] = 0;
  extraout_ECX[0x2f0] = 0;
  extraout_ECX[0x2f3] = 0;
  extraout_ECX[0x2f4] = 0;
  extraout_ECX[0x2f5] = 0;
  extraout_ECX[0x2f1] = &PTR_FUN_008e96b8;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00470eb6();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_0051abf2();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_0051abf2();
  extraout_ECX[0x308] = 0;
  extraout_ECX[0x309] = 0;
  extraout_ECX[0x30a] = 0;
  extraout_ECX[0x30b] = 0;
  extraout_ECX[0x30c] = 0;
  extraout_ECX[0x30d] = 0;
  extraout_ECX[0x30e] = 0;
  extraout_ECX[0x30f] = 0;
  extraout_ECX[0x310] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_0087b2f0(extraout_ECX + 0x311,4,4,&LAB_0048c051,FUN_00411629);
  extraout_ECX[800] = 0xffffffff;
  extraout_ECX[0x321] = 0xffffffff;
  extraout_ECX[0x31a] = 0;
  extraout_ECX[0x33a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_0087b2f0(extraout_ECX + 0x33b,4,0x10,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  *extraout_ECX = &PTR_LAB_008f1018;
  extraout_ECX[1] = &PTR_FUN_008f0fcc;
  extraout_ECX[2] = &PTR_FUN_008f0fc8;
  _memset(extraout_ECX + 0x322,0,0x60);
  DVar1 = timeGetTime();
  extraout_ECX[0x353] = DVar1;
  puVar3 = extraout_ECX + 0x34b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
  }
  extraout_ECX[0x28c] = 1;
  FUN_0081420c(0,0x16,800,0x242,0xc00615d0,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


