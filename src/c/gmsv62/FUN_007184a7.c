/* FUN_007184a7 - 0x007184a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007184a7(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bde4 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x24] = &PTR_FUN_008e8ab0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x29] = &PTR_FUN_008e8ab0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x2e] = &PTR_FUN_008e8ab0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0074b9b2();
  extraout_ECX[0x173] = 0;
  extraout_ECX[0x174] = 0;
  extraout_ECX[0x175] = 0;
  extraout_ECX[0x171] = &PTR_FUN_008f0b48;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *extraout_ECX = &PTR_FUN_008f0b14;
  extraout_ECX[1] = &PTR_LAB_008f0ac8;
  extraout_ECX[2] = &PTR_FUN_008f0ac4;
  FUN_0081420c(uVar2,uVar1,0x10e,0x10f,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


