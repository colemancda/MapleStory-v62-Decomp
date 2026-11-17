/* FUN_0072fd15 - 0x0072fd15 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0072fd15(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  DAT_0097be18 = -(uint)(extraout_ECX != (undefined4 *)0xffffff9c) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1a] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  extraout_ECX[0x156] = 0;
  extraout_ECX[0x157] = 0;
  extraout_ECX[0x155] = &PTR_FUN_008eac4c;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &PTR_FUN_008f0f80;
  extraout_ECX[1] = &PTR_LAB_008f0f34;
  extraout_ECX[2] = &PTR_FUN_008f0f30;
  FUN_0081420c(uVar2,uVar1,0xb1,0xcb,10,1,0,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


