/* FUN_006f1fe4 - 0x006f1fe4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006f1fe4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097bd74 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0074b9b2();
  extraout_ECX[0x153] = 0;
  extraout_ECX[0x154] = 0;
  extraout_ECX[0x156] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008f0400;
  extraout_ECX[1] = &PTR_LAB_008f03b4;
  extraout_ECX[2] = &PTR_FUN_008f03b0;
  extraout_ECX[0x157] = uVar1;
  FUN_0081420c(uVar3,uVar2,0x7f,0x6b,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


