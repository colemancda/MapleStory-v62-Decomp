/* FUN_0078b0ed - 0x0078b0ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0078b0ed(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00560122();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0043da81();
  extraout_ECX[0x35c] = 0;
  extraout_ECX[0x35d] = 0;
  extraout_ECX[0x35e] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x35f] = 0;
  extraout_ECX[0x360] = 0;
  *(undefined2 *)(extraout_ECX + 0x361) = 0;
  *(undefined1 *)((int)extraout_ECX + 0xd86) = 0;
  *(undefined2 *)(extraout_ECX + 0x362) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)((int)extraout_ECX + 0xd8a) = 0;
  FUN_0066137b();
  extraout_ECX[0x5bf] = 0xff;
  extraout_ECX[0x5c0] = 0;
  extraout_ECX[0x5c2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0046a1fc();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x5d1] = 0;
  FUN_0079da51(3,unaff_EBP + 0xb);
  extraout_ECX[0x5d2] = 1;
  extraout_ECX[0x5d4] = 0;
  extraout_ECX[0x5d5] = 0x1f;
  extraout_ECX[0x5d6] = 0;
  extraout_ECX[0x5d3] = &PTR_FUN_008f1888;
  extraout_ECX[0x5d7] = 100;
  extraout_ECX[0x5d8] = 0x18;
  extraout_ECX[0x5db] = 0;
  extraout_ECX[0x5dc] = 0;
  extraout_ECX[0x5dd] = 0;
  extraout_ECX[0x5d9] = &PTR_FUN_008f1884;
  extraout_ECX[0x5e3] = 0;
  extraout_ECX[0x5e4] = 0;
  extraout_ECX[0x5e5] = 0;
  extraout_ECX[0x5e6] = 0;
  extraout_ECX[0x5e7] = 0;
  extraout_ECX[0x5e8] = 0;
  extraout_ECX[0x5ea] = 0xffffffff;
  extraout_ECX[0x5eb] = 0xffffffff;
  extraout_ECX[0x5e9] = 0;
  extraout_ECX[0x5ec] = 0;
  extraout_ECX[0x5ed] = 0;
  extraout_ECX[0x5f2] = 0;
  extraout_ECX[0x5f3] = 0;
  extraout_ECX[0x5f4] = 0;
  extraout_ECX[0x5f0] = &PTR_FUN_008f1880;
  extraout_ECX[0x5f5] = 0;
  extraout_ECX[0x5f6] = 0;
  extraout_ECX[0x5fc] = 0;
  extraout_ECX[0x5fd] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0087b2f0(extraout_ECX + 0x601,0x18,0x3f,FUN_0078b397,&LAB_0078b429);
  extraout_ECX[0x77b] = 0;
  extraout_ECX[0x77c] = 0;
  extraout_ECX[0x77d] = 0;
  extraout_ECX[0x77e] = 0;
  extraout_ECX[0x77f] = 0;
  extraout_ECX[0x780] = 0;
  extraout_ECX[0x783] = 0;
  extraout_ECX[0x784] = 0;
  extraout_ECX[0x785] = 0;
  extraout_ECX[0x781] = &PTR_FUN_008f187c;
  extraout_ECX[0x786] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0079d48a();
  extraout_ECX[0x78c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  extraout_ECX[0x792] = 0;
  extraout_ECX[0x793] = 0;
  extraout_ECX[0x794] = 0;
  extraout_ECX[0x795] = 0;
  *extraout_ECX = &PTR_FUN_008f1840;
  extraout_ECX[1] = &PTR_LAB_008f181c;
  extraout_ECX[2] = &PTR_FUN_008f1818;
  extraout_ECX[0x1e] = &PTR_LAB_008f1804;
  FUN_0045e3a0(0);
  uVar1 = FUN_004133b5();
  extraout_ECX[0x5cd] = uVar1;
  uVar1 = FUN_004133b5();
  extraout_ECX[0x5de] = 0;
  extraout_ECX[0x5e0] = 0;
  extraout_ECX[0x5f8] = 0;
  extraout_ECX[0x5fa] = 0;
  extraout_ECX[0x5d0] = uVar1;
  extraout_ECX[0x5df] = 0;
  extraout_ECX[0x5e1] = 0;
  extraout_ECX[0x5f9] = 0;
  extraout_ECX[0x5fb] = 0;
  FUN_0079d760(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x5ee] = 0;
  extraout_ECX[0x5ef] = 0;
  return extraout_ECX;
}


